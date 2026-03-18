/*
 * XREFs of SshpSetCollectionActive @ 0x1403DB4A4
 * Callers:
 *     PdcPoSleepStudyHelperSetPhaseActive @ 0x14085EFD0 (PdcPoSleepStudyHelperSetPhaseActive.c)
 *     SshpPowerSettingCallback @ 0x1409A15B0 (SshpPowerSettingCallback.c)
 * Callees:
 *     KxReleaseSpinLock @ 0x14021D070 (KxReleaseSpinLock.c)
 *     KiAbThreadRemoveBoostsSlow @ 0x14022B568 (KiAbThreadRemoveBoostsSlow.c)
 *     MmGetSessionIdEx @ 0x140287F30 (MmGetSessionIdEx.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x1402AD540 (KeAcquireSpinLockRaiseToDpc.c)
 *     KiAbEntryRemoveFromTree @ 0x14034EE30 (KiAbEntryRemoveFromTree.c)
 *     ExfTryToWakePushLock @ 0x140359F40 (ExfTryToWakePushLock.c)
 *     SshpStopBlockerAccounting @ 0x14036B2A4 (SshpStopBlockerAccounting.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x140418E4C (KiRemoveSystemWorkPriorityKick.c)
 *     KeBugCheckEx @ 0x14041F3D0 (KeBugCheckEx.c)
 *     CmSiRWLockAcquireExclusive @ 0x14071F674 (CmSiRWLockAcquireExclusive.c)
 */

__int64 __fastcall SshpSetCollectionActive(ULONG_PTR BugCheckParameter2, char a2)
{
  unsigned __int64 v4; // r13
  _QWORD *i; // r14
  __int64 v6; // rsi
  KIRQL v7; // al
  int v8; // ecx
  unsigned __int64 v9; // r12
  int v10; // ecx
  struct _KTHREAD *CurrentThread; // rsi
  unsigned int SessionId; // ecx
  __int64 p_Process; // rbx
  unsigned int v14; // edx
  __int64 result; // rax
  int v16; // r8d
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v20; // eax
  bool v21; // zf

  CmSiRWLockAcquireExclusive();
  if ( *(_BYTE *)(BugCheckParameter2 + 8) != a2 )
  {
    v4 = MEMORY[0xFFFFF78000000008];
    for ( i = *(_QWORD **)(BugCheckParameter2 + 16); i != (_QWORD *)(BugCheckParameter2 + 16); i = (_QWORD *)*i )
    {
      v6 = i[13];
      v7 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)v6);
      v8 = *(_DWORD *)(v6 + 8);
      v9 = v7;
      if ( a2 )
      {
        v10 = v8 | 2;
        *(_DWORD *)(v6 + 8) = v10;
        if ( (v10 & 1) == 0 )
          ++*(_DWORD *)(v6 + 120);
        *(_QWORD *)(v6 + 24) = v4;
      }
      else if ( (v8 & 2) != 0 )
      {
        SshpStopBlockerAccounting(v6, v4, 1);
        *(_DWORD *)(v6 + 8) &= ~2u;
      }
      KxReleaseSpinLock((PKSPIN_LOCK)v6);
      if ( KiIrqlFlags )
      {
        if ( (KiIrqlFlags & 1) != 0 )
        {
          CurrentIrql = KeGetCurrentIrql();
          if ( CurrentIrql <= 0xFu && (unsigned __int8)v9 <= 0xFu && CurrentIrql >= 2u )
          {
            CurrentPrcb = KeGetCurrentPrcb();
            SchedulerAssist = CurrentPrcb->SchedulerAssist;
            v20 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v9 + 1));
            v21 = (v20 & SchedulerAssist[5]) == 0;
            SchedulerAssist[5] &= v20;
            if ( v21 )
              KiRemoveSystemWorkPriorityKick(CurrentPrcb);
          }
        }
      }
      __writecr8(v9);
    }
    *(_BYTE *)(BugCheckParameter2 + 8) = a2;
  }
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)BugCheckParameter2, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock(BugCheckParameter2);
  CurrentThread = KeGetCurrentThread();
  if ( BugCheckParameter2 - qword_140C50630 >= 0x8000000000LL )
    SessionId = -1;
  else
    SessionId = MmGetSessionIdEx((__int64)CurrentThread->ApcState.Process);
  _disable();
  p_Process = (__int64)&CurrentThread[1].Process;
  v14 = 0;
  while ( (*(_QWORD *)p_Process & 0x7FFFFFFFFFFFFFFCLL) != (BugCheckParameter2 & 0x7FFFFFFFFFFFFFFCLL)
       || !*(_BYTE *)(p_Process + 18)
       || (*(_DWORD *)p_Process & 1) != 0
       || *(_DWORD *)(p_Process + 8) != SessionId )
  {
    ++v14;
    p_Process += 96LL;
    if ( v14 >= 6 )
      goto LABEL_21;
  }
  *(_BYTE *)(p_Process + 18) = 0;
  if ( !p_Process )
  {
LABEL_21:
    result = *((unsigned int *)&CurrentThread->MiscFlags + 1);
    if ( (result & 0x10000) == 0 )
      KeBugCheckEx(0x162u, (ULONG_PTR)CurrentThread, BugCheckParameter2, SessionId, 0LL);
    _enable();
    return result;
  }
  if ( *(__int64 *)p_Process < 0 )
  {
    *(_BYTE *)p_Process |= 2u;
    _enable();
    KiAbEntryRemoveFromTree(p_Process);
    _disable();
  }
  v16 = *(_DWORD *)(p_Process + 88);
  *(_DWORD *)(p_Process + 88) = 0;
  *(_BYTE *)(p_Process + 17) = 0;
  *(_QWORD *)p_Process = 0LL;
  result = *(unsigned __int8 *)(p_Process + 16);
  CurrentThread->AbEntrySummary |= 1 << result;
  _enable();
  if ( v16 )
    return KiAbThreadRemoveBoostsSlow((ULONG_PTR)CurrentThread, BugCheckParameter2, v16);
  return result;
}

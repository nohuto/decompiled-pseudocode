/*
 * XREFs of MiSplitReducedCommitClonePage @ 0x14061CFB4
 * Callers:
 *     MiProbeLeafPteAccess @ 0x140236D20 (MiProbeLeafPteAccess.c)
 * Callees:
 *     KeAbPostRelease @ 0x140231350 (KeAbPostRelease.c)
 *     MiLockLowestValidPageTable @ 0x14025A520 (MiLockLowestValidPageTable.c)
 *     MiCopyOnWrite @ 0x140270030 (MiCopyOnWrite.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x140271580 (MI_READ_PTE_LOCK_FREE.c)
 *     MiLocateCloneAddress @ 0x140294828 (MiLocateCloneAddress.c)
 *     MmGetSessionIdEx @ 0x1402A19B0 (MmGetSessionIdEx.c)
 *     ExfTryToWakePushLock @ 0x1402BDBF0 (ExfTryToWakePushLock.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x1402FD0A0 (ExfAcquirePushLockExclusiveEx.c)
 *     KiCheckForKernelApcDelivery @ 0x14030FAB0 (KiCheckForKernelApcDelivery.c)
 *     KiAbTryReclaimOrphanedEntries @ 0x14032FCF8 (KiAbTryReclaimOrphanedEntries.c)
 *     MiLockProbePacketWorkingSet @ 0x14034BB94 (MiLockProbePacketWorkingSet.c)
 *     MiUnlockProbePacketWorkingSet @ 0x14034BBDC (MiUnlockProbePacketWorkingSet.c)
 *     MiProcessCommitIntact @ 0x140369958 (MiProcessCommitIntact.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14041057C (KiRemoveSystemWorkPriorityKick.c)
 *     MiCopyOnWriteCheckConditions @ 0x140667370 (MiCopyOnWriteCheckConditions.c)
 *     MiChargeFullProcessCommitment @ 0x1406F7A10 (MiChargeFullProcessCommitment.c)
 *     MiReturnFullProcessCommitment @ 0x140765044 (MiReturnFullProcessCommitment.c)
 */

__int64 __fastcall MiSplitReducedCommitClonePage(_QWORD *a1)
{
  unsigned __int64 v2; // rcx
  __int64 v4; // rcx
  int v5; // r15d
  struct _KTHREAD *CurrentThread; // r14
  unsigned __int64 v7; // r12
  __int64 v8; // rsi
  __int64 v9; // rbx
  struct _KTHREAD *v10; // rbp
  __int64 v11; // rsi
  unsigned int AbEntrySummary; // eax
  unsigned int v13; // ecx
  struct _KPRCB *CurrentPrcb; // rcx
  signed __int32 *SchedulerAssist; // r8
  signed __int32 v16; // eax
  signed __int32 v17; // ett
  int SessionId; // eax
  int v19; // esi
  __int64 v20; // rbp
  bool v21; // zf
  __int64 v22; // r9
  unsigned __int64 valid; // rax
  unsigned __int64 v24; // rcx
  unsigned __int64 v25; // rdx
  __int64 v26; // rax
  __int64 v27; // rdx
  _QWORD *CloneAddress; // rax
  __int64 v29; // rcx
  __int64 v30; // rbp
  unsigned int v31; // [rsp+70h] [rbp+8h]
  unsigned __int64 v32; // [rsp+78h] [rbp+10h] BYREF
  __int64 v33; // [rsp+88h] [rbp+20h] BYREF

  v2 = a1[1];
  v32 = 0LL;
  if ( !(unsigned int)MiProcessCommitIntact(v2) )
    return 3221225477LL;
  MiUnlockProbePacketWorkingSet((__int64)a1);
  v5 = 1;
  CurrentThread = KeGetCurrentThread();
  v7 = ((a1[1] >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v8 = a1[11];
  v9 = 0LL;
  --CurrentThread->SpecialApcDisable;
  v10 = KeGetCurrentThread();
  v11 = v8 + 1232;
  _disable();
  AbEntrySummary = v10->AbEntrySummary;
  if ( v10->AbEntrySummary || (AbEntrySummary = KiAbTryReclaimOrphanedEntries(v4, (__int64)v10)) != 0 )
  {
    _BitScanForward(&v13, AbEntrySummary);
    v31 = v13;
    v10->AbEntrySummary = AbEntrySummary & ~(1 << v13);
    CurrentPrcb = KeGetCurrentPrcb();
    SchedulerAssist = (signed __int32 *)CurrentPrcb->SchedulerAssist;
    if ( SchedulerAssist )
    {
      _m_prefetchw(SchedulerAssist);
      v16 = *SchedulerAssist;
      do
      {
        v17 = v16;
        v16 = _InterlockedCompareExchange(SchedulerAssist, v16 & 0xFFDFFFFF, v16);
      }
      while ( v17 != v16 );
      if ( (v16 & 0x200000) != 0 )
        KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
    }
    _enable();
    v9 = (__int64)(&v10[1].Process + 12 * v31);
    if ( (unsigned __int64)(v11 - qword_140C659E8) < 0x8000000000LL )
      SessionId = MmGetSessionIdEx((__int64)v10->ApcState.Process);
    else
      SessionId = -1;
    *(_DWORD *)(v9 + 8) = SessionId;
    *(_QWORD *)v9 = v11 & 0x7FFFFFFFFFFFFFFCLL;
  }
  if ( _interlockedbittestandset64((volatile signed __int32 *)v11, 0LL) )
    ExfAcquirePushLockExclusiveEx((unsigned __int64 *)v11, v9, v11);
  if ( v9 )
    *(_BYTE *)(v9 + 18) = 1;
  v19 = MiChargeFullProcessCommitment(a1[11], 1LL);
  if ( v19 >= 0 )
  {
    MiLockProbePacketWorkingSet((__int64)a1);
    valid = MiLockLowestValidPageTable(a1[13], v7, &v32, v22);
    v24 = v32;
    a1[5] = valid;
    if ( v24 == v7 )
    {
      v33 = MI_READ_PTE_LOCK_FREE(v24);
      if ( (v33 & 1) != 0 )
      {
        v25 = 48 * (((unsigned __int64)MI_READ_PTE_LOCK_FREE((unsigned __int64)&v33) >> 12) & 0xFFFFFFFFFFLL)
            - 0x220000000000LL;
        v26 = *(_QWORD *)(v25 + 40);
        if ( v26 < 0 )
        {
          v27 = *(_QWORD *)(v25 + 8);
          if ( v27 < 0 || (v26 & 0x10000000000LL) != 0 || !v27 )
          {
            CloneAddress = MiLocateCloneAddress(a1[11], v27 | 0x8000000000000000uLL);
            if ( CloneAddress )
            {
              if ( *(_QWORD *)(*(_QWORD *)(v29 + 1680) + 344LL) > CloneAddress[12] )
              {
                v19 = MiCopyOnWrite(a1[1], v7, 0xFFFFFFFFFFFFFFFFuLL, 0);
                if ( v19 >= 0 )
                  v5 = 0;
              }
            }
          }
        }
      }
    }
    MiUnlockProbePacketWorkingSet((__int64)a1);
    if ( v5 )
      MiReturnFullProcessCommitment(a1[11], 1LL);
    v30 = a1[11];
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(v30 + 1232), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)(v30 + 1232));
    KeAbPostRelease(v30 + 1232);
    v21 = CurrentThread->SpecialApcDisable++ == -1;
    if ( v21 && ($C71981A45BEB2B45F82C232A7085991E *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
      KiCheckForKernelApcDelivery();
    if ( v19 < 0 )
      MiCopyOnWriteCheckConditions(a1[13], (unsigned int)v19);
    v19 = 0;
  }
  else
  {
    v20 = a1[11];
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(v20 + 1232), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)(v20 + 1232));
    KeAbPostRelease(v20 + 1232);
    v21 = CurrentThread->SpecialApcDisable++ == -1;
    if ( v21 && ($C71981A45BEB2B45F82C232A7085991E *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
      KiCheckForKernelApcDelivery();
  }
  MiLockProbePacketWorkingSet((__int64)a1);
  return (unsigned int)v19;
}

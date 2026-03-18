/*
 * XREFs of ExGetWakeTimerList @ 0x14063DABC
 * Callers:
 *     NtPowerInformation @ 0x14074F950 (NtPowerInformation.c)
 * Callees:
 *     KxReleaseSpinLock @ 0x14021D070 (KxReleaseSpinLock.c)
 *     KiAbThreadRemoveBoostsSlow @ 0x14022B568 (KiAbThreadRemoveBoostsSlow.c)
 *     MmGetSessionIdEx @ 0x140287F30 (MmGetSessionIdEx.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14029F120 (ExfAcquirePushLockExclusiveEx.c)
 *     KiAbTryReclaimOrphanedEntries @ 0x14029F6A8 (KiAbTryReclaimOrphanedEntries.c)
 *     KeLeaveCriticalRegionThread @ 0x1402AC800 (KeLeaveCriticalRegionThread.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x1402AD540 (KeAcquireSpinLockRaiseToDpc.c)
 *     KiAbEntryRemoveFromTree @ 0x14034EE30 (KiAbEntryRemoveFromTree.c)
 *     ExfTryToWakePushLock @ 0x140359F40 (ExfTryToWakePushLock.c)
 *     ExAllocatePoolWithQuotaTag @ 0x140367B10 (ExAllocatePoolWithQuotaTag.c)
 *     PoStoreDiagnosticContext @ 0x14036AAF4 (PoStoreDiagnosticContext.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x140418E4C (KiRemoveSystemWorkPriorityKick.c)
 *     KeBugCheckEx @ 0x14041F3D0 (KeBugCheckEx.c)
 *     memset @ 0x140435E00 (memset.c)
 *     KeQueryTimerDueTime @ 0x14056DF08 (KeQueryTimerDueTime.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

__int64 __fastcall ExGetWakeTimerList(_QWORD *a1, _DWORD *a2)
{
  ULONG_PTR BugCheckParameter4; // r13
  SIZE_T v3; // r15
  void *v4; // r12
  struct _KTHREAD *v5; // rsi
  __int64 v6; // rdi
  unsigned int AbEntrySummary; // eax
  unsigned int v8; // r14d
  __int64 v9; // rdx
  int SessionId; // eax
  __int64 *v11; // rdi
  __int64 v12; // rcx
  char *PoolWithQuotaTag; // rax
  int v14; // edi
  char *v15; // r14
  __int64 *v16; // rax
  unsigned __int64 v17; // rsi
  unsigned __int64 v18; // r12
  __int64 v19; // r13
  KIRQL v20; // al
  __int64 v21; // rdx
  __int64 v22; // r8
  _DWORD *v23; // r9
  int v24; // ecx
  unsigned __int8 CurrentIrql; // cl
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v28; // eax
  bool v29; // zf
  __int64 v30; // rcx
  ULONG_PTR v31; // r13
  ULONG_PTR *v32; // r14
  struct _KTHREAD *v33; // rsi
  __int64 p_Process; // rbx
  unsigned int v35; // ecx
  int v36; // r8d
  int v38; // [rsp+30h] [rbp-48h]
  unsigned __int64 v39; // [rsp+38h] [rbp-40h] BYREF
  PVOID v40; // [rsp+40h] [rbp-38h]
  __int64 **v41; // [rsp+48h] [rbp-30h]
  PKSPIN_LOCK SpinLock; // [rsp+50h] [rbp-28h]
  __int64 v43; // [rsp+58h] [rbp-20h]
  struct _KTHREAD *CurrentThread; // [rsp+60h] [rbp-18h]
  KIRQL v47; // [rsp+D0h] [rbp+58h]

  BugCheckParameter4 = 0LL;
  v39 = 0LL;
  v3 = 0LL;
  CurrentThread = KeGetCurrentThread();
  v4 = 0LL;
  --CurrentThread->KernelApcDisable;
  v5 = KeGetCurrentThread();
  v6 = 0LL;
  _disable();
  AbEntrySummary = v5->AbEntrySummary;
  v8 = -1;
  if ( v5->AbEntrySummary
    || (AbEntrySummary = KiAbTryReclaimOrphanedEntries((__int64)&ExpWakeTimerLock, (__int64)v5)) != 0 )
  {
    _BitScanForward((unsigned int *)&v9, AbEntrySummary);
    v5->AbEntrySummary = AbEntrySummary & ~(1 << v9);
    _enable();
    v6 = (__int64)(&v5[1].Process + 12 * v9);
    if ( (unsigned __int64)&ExpWakeTimerLock - qword_140C50630 >= 0x8000000000LL )
      SessionId = -1;
    else
      SessionId = MmGetSessionIdEx((__int64)v5->ApcState.Process);
    *(_DWORD *)(v6 + 8) = SessionId;
    *(_QWORD *)v6 = (unsigned __int64)&ExpWakeTimerLock & 0x7FFFFFFFFFFFFFFCLL;
  }
  if ( _interlockedbittestandset64((volatile signed __int32 *)&ExpWakeTimerLock, 0LL) )
    ExfAcquirePushLockExclusiveEx(&ExpWakeTimerLock, v6, (__int64)&ExpWakeTimerLock);
  if ( v6 )
    *(_BYTE *)(v6 + 18) = 1;
  v11 = (__int64 *)ExpWakeTimerList;
  if ( (__int64 *)ExpWakeTimerList != &ExpWakeTimerList )
  {
    do
    {
      v12 = *(v11 - 1);
      if ( v12 )
      {
        v39 = 0LL;
        PoStoreDiagnosticContext(v12, 0LL, &v39);
        v3 = (v39 + 31 + v3) & 0xFFFFFFFFFFFFFFF8uLL;
        if ( v3 > 0xFFFFFFFF )
        {
          v14 = -1073741789;
          goto LABEL_42;
        }
      }
      v11 = (__int64 *)*v11;
    }
    while ( v11 != &ExpWakeTimerList );
    if ( v3 )
      goto LABEL_17;
  }
  v3 = 64LL;
LABEL_17:
  PoolWithQuotaTag = (char *)ExAllocatePoolWithQuotaTag((POOL_TYPE)9, v3, 0x734C6B57u);
  v40 = PoolWithQuotaTag;
  v4 = PoolWithQuotaTag;
  if ( PoolWithQuotaTag )
  {
    v14 = 0;
    v15 = PoolWithQuotaTag;
    memset(PoolWithQuotaTag, 0, v3);
    v16 = (__int64 *)ExpWakeTimerList;
    v17 = 0LL;
    v39 = 0LL;
    v18 = v3;
    while ( 1 )
    {
      v41 = (__int64 **)v16;
      if ( v16 == &ExpWakeTimerList )
        break;
      if ( v18 < 0x40 )
        goto LABEL_54;
      v19 = (__int64)(v16 - 33);
      SpinLock = (PKSPIN_LOCK)(v16 - 25);
      v20 = KeAcquireSpinLockRaiseToDpc(SpinLock);
      v24 = *(_DWORD *)(v19 + 240);
      v47 = v20;
      v43 = *(_QWORD *)(v19 + 256);
      v38 = v24;
      if ( v43 )
        BugCheckParameter4 = KeQueryTimerDueTime(v19, v21, v22, v23);
      else
        BugCheckParameter4 = 0LL;
      KxReleaseSpinLock(SpinLock);
      if ( KiIrqlFlags )
      {
        if ( (KiIrqlFlags & 1) != 0 )
        {
          CurrentIrql = KeGetCurrentIrql();
          if ( CurrentIrql <= 0xFu && v47 <= 0xFu && CurrentIrql >= 2u )
          {
            CurrentPrcb = KeGetCurrentPrcb();
            SchedulerAssist = CurrentPrcb->SchedulerAssist;
            v28 = ~(unsigned __int16)(-1LL << (v47 + 1));
            v29 = (v28 & SchedulerAssist[5]) == 0;
            SchedulerAssist[5] &= v28;
            if ( v29 )
              KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
            v17 = v39;
          }
        }
      }
      __writecr8(v47);
      if ( BugCheckParameter4 )
      {
        v30 = v43;
        v31 = BugCheckParameter4 - MEMORY[0xFFFFF78000000008];
        *((_DWORD *)v15 + 4) = v38;
        v39 = v18 - 24;
        *((_QWORD *)v15 + 1) = v31;
        BugCheckParameter4 = 0LL;
        v14 = PoStoreDiagnosticContext(v30, (unsigned __int64 *)v15 + 3, &v39);
        if ( v14 < 0 )
          goto LABEL_41;
        v17 = (v39 + 31) & 0xFFFFFFFFFFFFFFF8uLL;
        v39 = v17;
        if ( v18 < v17 )
        {
LABEL_54:
          v14 = -1073741789;
          goto LABEL_41;
        }
        v18 -= v17;
        *(_QWORD *)v15 = v17;
        v15 += v17;
      }
      v16 = *v41;
    }
    v32 = (ULONG_PTR *)&v15[-v17];
    *v32 = BugCheckParameter4;
    if ( !v17 )
      v32[1] = BugCheckParameter4;
LABEL_41:
    v4 = v40;
    v8 = -1;
  }
  else
  {
    v14 = -1073741670;
  }
LABEL_42:
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&ExpWakeTimerLock, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock(&ExpWakeTimerLock);
  v33 = KeGetCurrentThread();
  if ( (unsigned __int64)&ExpWakeTimerLock - qword_140C50630 < 0x8000000000LL )
    v8 = MmGetSessionIdEx((__int64)v33->ApcState.Process);
  _disable();
  p_Process = (__int64)&v33[1].Process;
  v35 = BugCheckParameter4;
  while ( (*(_QWORD *)p_Process & 0x7FFFFFFFFFFFFFFCLL) != ((unsigned __int64)&ExpWakeTimerLock & 0x7FFFFFFFFFFFFFFCLL)
       || *(_BYTE *)(p_Process + 18) == (_BYTE)BugCheckParameter4
       || (*(_DWORD *)p_Process & 1) != 0
       || *(_DWORD *)(p_Process + 8) != v8 )
  {
    ++v35;
    p_Process += 96LL;
    if ( v35 >= 6 )
      goto LABEL_52;
  }
  *(_BYTE *)(p_Process + 18) = BugCheckParameter4;
  if ( !p_Process )
  {
LABEL_52:
    if ( (*((_DWORD *)&v33->0 + 1) & 0x10000) == 0 )
      KeBugCheckEx(0x162u, (ULONG_PTR)v33, (ULONG_PTR)&ExpWakeTimerLock, v8, BugCheckParameter4);
    _enable();
    goto LABEL_61;
  }
  if ( *(__int64 *)p_Process < 0 )
  {
    *(_BYTE *)p_Process |= 2u;
    _enable();
    KiAbEntryRemoveFromTree(p_Process);
    _disable();
  }
  v36 = *(_DWORD *)(p_Process + 88);
  *(_DWORD *)(p_Process + 88) = BugCheckParameter4;
  *(_BYTE *)(p_Process + 17) = BugCheckParameter4;
  *(_QWORD *)p_Process = BugCheckParameter4;
  v33->AbEntrySummary |= 1 << *(_BYTE *)(p_Process + 16);
  _enable();
  if ( v36 )
    KiAbThreadRemoveBoostsSlow((ULONG_PTR)v33, (__int64)&ExpWakeTimerLock, v36);
LABEL_61:
  KeLeaveCriticalRegionThread((__int64)CurrentThread);
  if ( v14 >= 0 )
  {
    *a1 = v4;
    *a2 = v3;
  }
  else if ( v4 )
  {
    ExFreePoolWithTag(v4, 0x734C6B57u);
  }
  return (unsigned int)v14;
}

/*
 * XREFs of MiRemoveVad @ 0x14028A700
 * Callers:
 *     MiDeleteVad @ 0x1406FA630 (MiDeleteVad.c)
 *     MiCoalescePlaceholderAllocations @ 0x140A322E8 (MiCoalescePlaceholderAllocations.c)
 *     MiPreparePlaceholderVadReplacement @ 0x140A480D8 (MiPreparePlaceholderVadReplacement.c)
 * Callees:
 *     KeAbPostRelease @ 0x140231350 (KeAbPostRelease.c)
 *     MiUnlockWorkingSetShared @ 0x14023C5D0 (MiUnlockWorkingSetShared.c)
 *     MiLockWorkingSetShared @ 0x140283F20 (MiLockWorkingSetShared.c)
 *     MiUnlockVadTree @ 0x140287B08 (MiUnlockVadTree.c)
 *     MiInsertVad @ 0x140287F20 (MiInsertVad.c)
 *     MiIsVadLargePrivate @ 0x140288300 (MiIsVadLargePrivate.c)
 *     MiLockVadTree @ 0x14028AB50 (MiLockVadTree.c)
 *     MiClearVadBits @ 0x14028AC40 (MiClearVadBits.c)
 *     MiCaptureDeleteHierarchy @ 0x14028AF30 (MiCaptureDeleteHierarchy.c)
 *     RtlAvlRemoveNode @ 0x14028B1E0 (RtlAvlRemoveNode.c)
 *     MmGetSessionIdEx @ 0x1402A19B0 (MmGetSessionIdEx.c)
 *     ExfTryToWakePushLock @ 0x1402BDBF0 (ExfTryToWakePushLock.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x1402FD0A0 (ExfAcquirePushLockExclusiveEx.c)
 *     KiCheckForKernelApcDelivery @ 0x14030FAB0 (KiCheckForKernelApcDelivery.c)
 *     KiAbTryReclaimOrphanedEntries @ 0x14032FCF8 (KiAbTryReclaimOrphanedEntries.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14041057C (KiRemoveSystemWorkPriorityKick.c)
 *     MiReturnPageTablePageCommitment @ 0x140764B80 (MiReturnPageTablePageCommitment.c)
 */

_BOOL8 __fastcall MiRemoveVad(__int64 a1, int a2, __int64 a3)
{
  __int64 v3; // rsi
  struct _KTHREAD *CurrentThread; // r13
  _KPROCESS *Process; // r8
  unsigned __int64 *v7; // rcx
  unsigned __int64 v8; // rcx
  unsigned __int64 i; // rdi
  unsigned __int64 v10; // r15
  unsigned __int64 *j; // rbx
  unsigned __int64 *v12; // rax
  ULONG_PTR v13; // rbp
  struct _KTHREAD *v14; // r12
  unsigned int AbEntrySummary; // eax
  unsigned int v16; // ecx
  struct _KPRCB *CurrentPrcb; // rcx
  signed __int32 *SchedulerAssist; // r8
  int SessionId; // eax
  unsigned __int8 v20; // al
  __int64 v21; // rsi
  unsigned __int8 v22; // r12
  __int64 v23; // rdx
  __int64 v24; // rcx
  __int64 v25; // r8
  __int64 v26; // r9
  bool v27; // zf
  _BOOL8 result; // rax
  signed __int32 v29; // eax
  signed __int32 v30; // ett
  unsigned int v31; // [rsp+40h] [rbp-68h]
  int v32; // [rsp+44h] [rbp-64h] BYREF
  unsigned int v33; // [rsp+48h] [rbp-60h]
  __int64 v34; // [rsp+50h] [rbp-58h]
  unsigned __int64 v35; // [rsp+58h] [rbp-50h]
  unsigned __int64 *v36; // [rsp+60h] [rbp-48h]
  unsigned __int8 v39; // [rsp+C8h] [rbp+20h]

  v3 = 0LL;
  CurrentThread = KeGetCurrentThread();
  v32 = 0;
  Process = CurrentThread->ApcState.Process;
  v34 = (__int64)Process;
  v7 = &Process[1].ActiveProcessors.StaticBitmap[26];
  v36 = &Process[1].ActiveProcessors.StaticBitmap[26];
  if ( !a2 )
  {
    v35 = 0LL;
    v10 = 0LL;
    i = 0LL;
LABEL_19:
    j = 0LL;
    goto LABEL_20;
  }
  v8 = a1;
  i = *(_QWORD *)a1;
  v10 = ((*(unsigned int *)(a1 + 28) | ((unsigned __int64)*(unsigned __int8 *)(a1 + 33) << 32)) << 12) | 0xFFF;
  v35 = (*(unsigned int *)(a1 + 24) | ((unsigned __int64)*(unsigned __int8 *)(a1 + 32) << 32)) << 12;
  if ( i )
  {
    for ( ; *(_QWORD *)(i + 8); i = *(_QWORD *)(i + 8) )
      ;
  }
  else
  {
    for ( i = *(_QWORD *)(a1 + 16) & 0xFFFFFFFFFFFFFFFCuLL; i; i = *(_QWORD *)(i + 16) & 0xFFFFFFFFFFFFFFFCuLL )
    {
      if ( *(_QWORD *)(i + 8) == v8 )
        break;
      v8 = i;
    }
  }
  j = *(unsigned __int64 **)(a1 + 8);
  v7 = (unsigned __int64 *)a1;
  if ( !i )
    i = 0LL;
  if ( j )
  {
    v12 = (unsigned __int64 *)*j;
    if ( *j )
    {
      do
      {
        j = v12;
        v12 = (unsigned __int64 *)*v12;
      }
      while ( v12 );
    }
  }
  else
  {
    for ( j = (unsigned __int64 *)(*(_QWORD *)(a1 + 16) & 0xFFFFFFFFFFFFFFFCuLL);
          j;
          j = (unsigned __int64 *)(j[2] & 0xFFFFFFFFFFFFFFFCuLL) )
    {
      if ( (unsigned __int64 *)*j == v7 )
        break;
      v7 = j;
    }
  }
  if ( !j )
    goto LABEL_19;
LABEL_20:
  --*(_QWORD *)&Process[1].Spare2[31];
  v13 = (ULONG_PTR)&Process[1].Affinity.StaticBitmap[8];
  --CurrentThread->SpecialApcDisable;
  v14 = KeGetCurrentThread();
  v31 = 2;
  v39 = 17;
  v33 = 0;
  _disable();
  AbEntrySummary = v14->AbEntrySummary;
  if ( v14->AbEntrySummary || (AbEntrySummary = KiAbTryReclaimOrphanedEntries(v7, v14)) != 0 )
  {
    _BitScanForward(&v16, AbEntrySummary);
    v33 = v16;
    v14->AbEntrySummary = AbEntrySummary & ~(1 << v16);
    CurrentPrcb = KeGetCurrentPrcb();
    SchedulerAssist = (signed __int32 *)CurrentPrcb->SchedulerAssist;
    if ( SchedulerAssist )
    {
      _m_prefetchw(SchedulerAssist);
      v29 = *SchedulerAssist;
      do
      {
        v30 = v29;
        v29 = _InterlockedCompareExchange(SchedulerAssist, v29 & 0xFFDFFFFF, v29);
      }
      while ( v30 != v29 );
      if ( (v29 & 0x200000) != 0 )
        KiRemoveSystemWorkPriorityKick(CurrentPrcb);
    }
    _enable();
    v3 = (__int64)(&v14[1].Process + 12 * v33);
    if ( v13 - qword_140C659E8 < 0x8000000000LL )
      SessionId = MmGetSessionIdEx(v14->ApcState.Process);
    else
      SessionId = -1;
    *(_DWORD *)(v3 + 8) = SessionId;
    *(_QWORD *)v3 = v13 & 0x7FFFFFFFFFFFFFFCLL;
  }
  if ( _interlockedbittestandset64((volatile signed __int32 *)v13, 0LL) )
    ExfAcquirePushLockExclusiveEx(v13, v3, v13);
  if ( v3 )
    *(_BYTE *)(v3 + 18) = 1;
  if ( a2 )
  {
    v31 = 3;
    v39 = MiLockWorkingSetShared((__int64)v36);
    MiCaptureDeleteHierarchy(v35, v10, v39, &v32);
  }
  v20 = MiLockVadTree(v31);
  v21 = v34;
  v22 = v20;
  RtlAvlRemoveNode(v34 + 2008, a1);
  if ( *(_QWORD *)(v21 + 2016) == a1 )
    *(_QWORD *)(v21 + 2016) = *(_QWORD *)(v21 + 2008);
  *(_QWORD *)(a1 + 16) = -2LL;
  MiUnlockVadTree(v31, v22);
  if ( a2 )
  {
    MiUnlockWorkingSetShared((__int64)v36, v39);
    if ( !a3 )
      MiClearVadBits(v35, v10, i, j);
    if ( ((v35 ^ v10) & 0xFFFFFFE00000LL) != 0 || v32 )
      MiReturnPageTablePageCommitment(v35, v10, v21, i, (__int64)j, a1, (__int64)&v32);
    if ( a3 )
      MiInsertVad(a3, v21, 2);
  }
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v13, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock(v13);
  KeAbPostRelease(v13);
  v27 = CurrentThread->SpecialApcDisable++ == -1;
  if ( v27 && ($C71981A45BEB2B45F82C232A7085991E *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
    KiCheckForKernelApcDelivery(v24, v23, v25, v26);
  result = MiIsVadLargePrivate(a1);
  if ( result )
    --*(_DWORD *)(v21 + 2140);
  return result;
}

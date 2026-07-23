/*
 * XREFs of MmUpdateMdlTrackerForMdlSwitch @ 0x14061D458
 * Callers:
 *     VmProbeAndLockPages @ 0x1405F8C50 (VmProbeAndLockPages.c)
 *     VmUnlockPages @ 0x1405F8D10 (VmUnlockPages.c)
 * Callees:
 *     KxReleaseQueuedSpinLock @ 0x140260240 (KxReleaseQueuedSpinLock.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x140260D40 (KeAcquireInStackQueuedSpinLock.c)
 *     RtlAvlInsertNodeEx @ 0x140287FA0 (RtlAvlInsertNodeEx.c)
 *     RtlAvlRemoveNode @ 0x14028AE30 (RtlAvlRemoveNode.c)
 *     KeBugCheckEx @ 0x14041E390 (KeBugCheckEx.c)
 *     _guard_dispatch_icall @ 0x140429560 (_guard_dispatch_icall.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14056DF54 (KiRemoveSystemWorkPriorityKick.c)
 *     MiValidateMdlTracker @ 0x14061D088 (MiValidateMdlTracker.c)
 */

void __fastcall MmUpdateMdlTrackerForMdlSwitch(ULONG_PTR BugCheckParameter3, int a2)
{
  PEPROCESS v4; // rbp
  unsigned __int64 v5; // rdi
  unsigned __int64 *v6; // rbx
  _BOOL8 v7; // r8
  ULONG_PTR v8; // r12
  unsigned __int64 *v9; // r15
  __int64 (__fastcall *v10)(unsigned __int64, __int64); // rbp
  unsigned __int64 v11; // rcx
  _QWORD *v12; // r14
  int v13; // eax
  _QWORD *v14; // rax
  unsigned __int64 OldIrql; // rbx
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v19; // eax
  bool v20; // zf
  struct _KLOCK_QUEUE_HANDLE v21; // [rsp+30h] [rbp-38h] BYREF

  memset(&v21, 0, sizeof(v21));
  if ( (MmTrackLockedPages & 1) == 0 )
    return;
  v4 = *(PEPROCESS *)(BugCheckParameter3 + 16);
  if ( !v4 )
    v4 = PsInitialSystemProcess;
  v5 = v4[1].ActiveProcessors.StaticBitmap[11];
  if ( !v5 )
    return;
  KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(v5 + 24), &v21);
  if ( a2 )
  {
    v6 = *(unsigned __int64 **)v5;
    while ( v6 )
    {
      if ( BugCheckParameter3 >= v6[3] )
      {
        if ( BugCheckParameter3 <= v6[3] )
          break;
        v6 = (unsigned __int64 *)v6[1];
      }
      else
      {
        v6 = (unsigned __int64 *)*v6;
      }
    }
    if ( !v6 )
    {
      if ( *(_DWORD *)(v5 + 32) )
        KeBugCheckEx(
          0x76u,
          8uLL,
          BugCheckParameter3,
          v4[1].Affinity.StaticBitmap[14],
          v4[1].ActiveProcessors.StaticBitmap[11]);
      goto LABEL_32;
    }
    MiValidateMdlTracker((ULONG_PTR)v6, 1);
    v6[3] &= ~0x8000000000000000uLL;
    RtlAvlRemoveNode((unsigned __int64 *)v5, v6);
    v8 = *(_QWORD *)(BugCheckParameter3 + 48);
    v9 = (unsigned __int64 *)(v5 + 8);
    v10 = MiLockSwitchedMdlTrackerCompare;
  }
  else
  {
    v6 = *(unsigned __int64 **)(v5 + 8);
    if ( !v6 )
      goto LABEL_48;
    v11 = *(_QWORD *)(BugCheckParameter3 + 48);
    do
    {
      if ( v11 >= v6[8] )
      {
        if ( v11 <= v6[8] )
          break;
        v6 = (unsigned __int64 *)v6[1];
      }
      else
      {
        v6 = (unsigned __int64 *)*v6;
      }
    }
    while ( v6 );
    if ( !v6 )
    {
LABEL_48:
      if ( *(_DWORD *)(v5 + 32) )
        KeBugCheckEx(
          0x76u,
          9uLL,
          BugCheckParameter3,
          v4[1].Affinity.StaticBitmap[14],
          v4[1].ActiveProcessors.StaticBitmap[11]);
      goto LABEL_32;
    }
    v6[3] = BugCheckParameter3;
    MiValidateMdlTracker((ULONG_PTR)v6, 1);
    RtlAvlRemoveNode((unsigned __int64 *)(v5 + 8), v6);
    v9 = (unsigned __int64 *)v5;
    v10 = MiLockTrackerCompare;
    v8 = BugCheckParameter3;
  }
  v12 = (_QWORD *)*v9;
  LOBYTE(v7) = 0;
  if ( !*v9 )
    goto LABEL_31;
  while ( 1 )
  {
    v13 = ((__int64 (__fastcall *)(ULONG_PTR, _QWORD *, _BOOL8))v10)(v8, v12, v7);
    if ( v13 <= 0 )
      break;
    v14 = (_QWORD *)v12[1];
    if ( !v14 )
    {
      LOBYTE(v7) = 1;
      goto LABEL_31;
    }
LABEL_43:
    v12 = v14;
  }
  if ( v13 >= 0 )
    KeBugCheckEx(0xD9u, 2uLL, (ULONG_PTR)v12, BugCheckParameter3, *(_QWORD *)(v5 + 16));
  v14 = (_QWORD *)*v12;
  if ( *v12 )
    goto LABEL_43;
  LOBYTE(v7) = 0;
LABEL_31:
  RtlAvlInsertNodeEx(v9, (unsigned __int64)v12, v7, (unsigned __int64)v6);
LABEL_32:
  KxReleaseQueuedSpinLock((volatile signed __int64 **)&v21);
  OldIrql = v21.OldIrql;
  if ( (_DWORD)KiIrqlFlags )
  {
    CurrentIrql = KeGetCurrentIrql();
    if ( ((unsigned __int8)KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu && v21.OldIrql <= 0xFu && CurrentIrql >= 2u )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      SchedulerAssist = CurrentPrcb->SchedulerAssist;
      v19 = ~(unsigned __int16)(-1LL << (v21.OldIrql + 1));
      v20 = (v19 & SchedulerAssist[5]) == 0;
      SchedulerAssist[5] &= v19;
      if ( v20 )
        KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
    }
  }
  __writecr8(OldIrql);
}

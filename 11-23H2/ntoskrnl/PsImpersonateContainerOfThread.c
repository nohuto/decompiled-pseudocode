/*
 * XREFs of PsImpersonateContainerOfThread @ 0x14025A170
 * Callers:
 *     IopProcessWorkItem @ 0x14031E940 (IopProcessWorkItem.c)
 *     NtSetInformationThread @ 0x1407337A0 (NtSetInformationThread.c)
 *     NtAlpcImpersonateClientContainerOfPort @ 0x140978CA0 (NtAlpcImpersonateClientContainerOfPort.c)
 * Callees:
 *     KeYieldProcessorEx @ 0x140242F10 (KeYieldProcessorEx.c)
 *     EtwTraceThreadWorkOnBehalfUpdate @ 0x140258570 (EtwTraceThreadWorkOnBehalfUpdate.c)
 *     KeApplyWobBamQos @ 0x14025A000 (KeApplyWobBamQos.c)
 *     PspRevertContainerImpersonation @ 0x14025A0CC (PspRevertContainerImpersonation.c)
 *     ObpIncrPointerCount @ 0x14025A4D4 (ObpIncrPointerCount.c)
 *     ExpAcquireSpinLockExclusive @ 0x14025B690 (ExpAcquireSpinLockExclusive.c)
 *     KiSetPriorityThread @ 0x1402B0860 (KiSetPriorityThread.c)
 *     KiProcessDeferredReadyList @ 0x1402B1100 (KiProcessDeferredReadyList.c)
 *     KeSetThreadChargeOnlySchedulingGroup @ 0x140349CFC (KeSetThreadChargeOnlySchedulingGroup.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14041057C (KiRemoveSystemWorkPriorityKick.c)
 *     KeBugCheckEx @ 0x14041EDE0 (KeBugCheckEx.c)
 *     ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented @ 0x14046B838 (ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented.c)
 *     ObpPushStackInfo @ 0x1405830C8 (ObpPushStackInfo.c)
 *     ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented @ 0x14060B60C (ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented.c)
 */

void __fastcall PsImpersonateContainerOfThread(__int64 a1)
{
  struct _KTHREAD *CurrentThread; // rdi
  unsigned __int8 CurrentIrql; // bp
  __int64 v4; // r15
  __int64 v5; // r9
  int v6; // esi
  unsigned __int8 v7; // r14
  unsigned __int8 v8; // al
  __int64 v9; // rcx
  _DWORD *v10; // r8
  __int64 v11; // rdx
  _DWORD *SchedulerAssist; // r9
  __int64 v13; // rdx
  unsigned __int8 v14; // cl
  struct _KPRCB *CurrentPrcb; // r9
  _DWORD *v16; // r8
  int v17; // eax
  bool v18; // zf
  void *retaddr; // [rsp+68h] [rbp+0h]
  int v20; // [rsp+70h] [rbp+8h] BYREF
  __int64 v21; // [rsp+78h] [rbp+10h] BYREF

  if ( ObpTraceFlags )
    ObpPushStackInfo(a1 - 48);
  ObpIncrPointerCount(a1 - 48);
  CurrentThread = KeGetCurrentThread();
  PspRevertContainerImpersonation((ULONG_PTR)CurrentThread);
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  LODWORD(v4) = 4;
  if ( (_DWORD)KiIrqlFlags && ((unsigned __int8)KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
  {
    SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
    if ( CurrentIrql == 2 )
      LODWORD(v13) = 4;
    else
      v13 = (-1LL << (CurrentIrql + 1)) & 4;
    SchedulerAssist[5] |= v13;
  }
  if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
    ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented(&PspThreadWorkOnBehalfLock, CurrentIrql);
  else
    ExpAcquireSpinLockExclusive(&PspThreadWorkOnBehalfLock, CurrentIrql);
  CurrentThread[1].WaitBlock[1].Object = (PVOID)a1;
  v6 = *(char *)(a1 + 195);
  if ( v6 > 31 )
    LOBYTE(v6) = 31;
  v21 = 0LL;
  v7 = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( (_DWORD)KiIrqlFlags && ((unsigned __int8)KiIrqlFlags & 1) != 0 && v7 <= 0xFu )
  {
    v10 = KeGetCurrentPrcb()->SchedulerAssist;
    if ( v7 != 2 )
      v4 = (-1LL << (v7 + 1)) & 4;
    v10[5] |= v4;
  }
  v20 = 0;
  while ( _interlockedbittestandset64((volatile signed __int32 *)&CurrentThread->ThreadLock, 0LL) )
  {
    do
      KeYieldProcessorEx(&v20);
    while ( CurrentThread->ThreadLock );
  }
  CurrentThread->SystemPriority = v6;
  v8 = CurrentThread->PriorityFloorCounts[(char)v6];
  if ( v8 == 0xFF )
    KeBugCheckEx(0x157u, (ULONG_PTR)CurrentThread, (char)v6, 1uLL, 0LL);
  CurrentThread->PriorityFloorCounts[(char)v6] = v8 + 1;
  CurrentThread->PriorityFloorSummary |= 1 << v6;
  if ( CurrentThread->Priority < (char)v6 )
    KiSetPriorityThread(CurrentThread, &v21, (unsigned int)(char)v6, v5);
  CurrentThread->ThreadLock = 0LL;
  KiProcessDeferredReadyList(KeGetCurrentPrcb(), &v21, v7);
  KeApplyWobBamQos(KeGetCurrentPrcb(), (__int64)CurrentThread, a1);
  if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
    ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented(&PspThreadWorkOnBehalfLock, retaddr);
  else
    PspThreadWorkOnBehalfLock = 0;
  if ( (_DWORD)KiIrqlFlags )
  {
    v14 = KeGetCurrentIrql();
    if ( ((unsigned __int8)KiIrqlFlags & 1) != 0 && v14 <= 0xFu && CurrentIrql <= 0xFu && v14 >= 2u )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      v16 = CurrentPrcb->SchedulerAssist;
      v17 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
      v18 = (v17 & v16[5]) == 0;
      v16[5] &= v17;
      if ( v18 )
        KiRemoveSystemWorkPriorityKick(CurrentPrcb);
    }
  }
  __writecr8(CurrentIrql);
  v9 = *(_QWORD *)(*(_QWORD *)(a1 + 544) + 1296LL);
  if ( v9 )
  {
    v11 = *(_QWORD *)(v9 + 1232);
    if ( v11 )
      KeSetThreadChargeOnlySchedulingGroup(CurrentThread, v11);
  }
  EtwTraceThreadWorkOnBehalfUpdate(0LL, a1);
}

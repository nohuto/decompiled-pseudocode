/*
 * XREFs of IoPerfInit @ 0x140559598
 * Callers:
 *     EtwpEnableKernelTrace @ 0x1407D5360 (EtwpEnableKernelTrace.c)
 *     IoRegisterIoTracking @ 0x140949170 (IoRegisterIoTracking.c)
 * Callees:
 *     KxReleaseQueuedSpinLock @ 0x1402605F0 (KxReleaseQueuedSpinLock.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x1402610F0 (KeAcquireInStackQueuedSpinLock.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14041057C (KiRemoveSystemWorkPriorityKick.c)
 *     IopUpdateFunctionPointers @ 0x140556AAC (IopUpdateFunctionPointers.c)
 */

__int64 __fastcall IoPerfInit(int a1)
{
  bool v2; // dl
  unsigned __int64 OldIrql; // rbx
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v7; // eax
  bool v8; // zf
  struct _KLOCK_QUEUE_HANDLE v10; // [rsp+20h] [rbp-28h] BYREF

  memset(&v10, 0, sizeof(v10));
  KeAcquireInStackQueuedSpinLock(&IopFunctionPointerLock, &v10);
  v2 = IopPerfStatus == 0;
  IopPerfStatus |= a1;
  if ( (a1 & 1) != 0 )
    ++dword_140D1840C;
  if ( (a1 & 2) != 0 )
    ++dword_140D18410;
  if ( v2 )
    IopUpdateFunctionPointers(2, 1, 1);
  KxReleaseQueuedSpinLock((volatile signed __int64 **)&v10);
  OldIrql = v10.OldIrql;
  if ( (_DWORD)KiIrqlFlags )
  {
    CurrentIrql = KeGetCurrentIrql();
    if ( ((unsigned __int8)KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu && v10.OldIrql <= 0xFu && CurrentIrql >= 2u )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      SchedulerAssist = CurrentPrcb->SchedulerAssist;
      v7 = ~(unsigned __int16)(-1LL << (v10.OldIrql + 1));
      v8 = (v7 & SchedulerAssist[5]) == 0;
      SchedulerAssist[5] &= v7;
      if ( v8 )
        KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
    }
  }
  __writecr8(OldIrql);
  return 0LL;
}

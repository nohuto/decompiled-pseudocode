/*
 * XREFs of ?FatalError@FxIoQueue@@QEAAXJ@Z @ 0x1C0063DB4
 * Callers:
 *     imp_WdfIoQueueDrain @ 0x1C0061980 (imp_WdfIoQueueDrain.c)
 *     imp_WdfIoQueueDrainSynchronously @ 0x1C00619F0 (imp_WdfIoQueueDrainSynchronously.c)
 *     imp_WdfIoQueuePurge @ 0x1C0061A50 (imp_WdfIoQueuePurge.c)
 *     imp_WdfIoQueuePurgeSynchronously @ 0x1C0061AC0 (imp_WdfIoQueuePurgeSynchronously.c)
 *     imp_WdfIoQueueStop @ 0x1C0061D60 (imp_WdfIoQueueStop.c)
 *     imp_WdfIoQueueStopAndPurge @ 0x1C0061DD0 (imp_WdfIoQueueStopAndPurge.c)
 *     imp_WdfIoQueueStopAndPurgeSynchronously @ 0x1C0061E40 (imp_WdfIoQueueStopAndPurgeSynchronously.c)
 *     imp_WdfIoQueueStopSynchronously @ 0x1C0061EA0 (imp_WdfIoQueueStopSynchronously.c)
 * Callees:
 *     ?GetObjectHandleUnchecked@FxObject@@IEAAPEAXXZ @ 0x1C00072C0 (-GetObjectHandleUnchecked@FxObject@@IEAAPEAXXZ.c)
 *     ?FxVerifierBugCheckWorker@@YAXPEAU_FX_DRIVER_GLOBALS@@W4_WDF_BUGCHECK_CODES@@_K2@Z @ 0x1C0045B6C (-FxVerifierBugCheckWorker@@YAXPEAU_FX_DRIVER_GLOBALS@@W4_WDF_BUGCHECK_CODES@@_K2@Z.c)
 */

void __fastcall __noreturn FxIoQueue::FatalError(FxIoQueue *this, int Status)
{
  WDFQUEUE__ *ObjectHandleUnchecked; // rax
  __int64 v3; // r10
  _FX_DRIVER_GLOBALS *v4; // rcx
  int v5; // edx
  _WDF_QUEUE_FATAL_ERROR_DATA data; // [rsp+20h] [rbp-28h] BYREF

  *(&data.Status + 1) = 0;
  ObjectHandleUnchecked = (WDFQUEUE__ *)FxObject::GetObjectHandleUnchecked(this);
  data.Request = 0LL;
  v4 = *(_FX_DRIVER_GLOBALS **)(v3 + 16);
  data.Status = v5;
  data.Queue = ObjectHandleUnchecked;
  FxVerifierBugCheckWorker(v4, WDF_QUEUE_FATAL_ERROR, (ULONG_PTR)&data, 0LL);
}

/*
 * XREFs of ?_RequestCompletionRoutine@FxIoTarget@@KAJPEAU_DEVICE_OBJECT@@PEAU_IRP@@PEAX@Z @ 0x1C0007250
 * Callers:
 *     <none>
 * Callees:
 *     ?RequestCompletionRoutine@FxIoTarget@@IEAAXPEAVFxRequestBase@@@Z @ 0x1C0006AA0 (-RequestCompletionRoutine@FxIoTarget@@IEAAXPEAVFxRequestBase@@@Z.c)
 *     ?PropagatePendingReturned@FxIrp@@QEAAXXZ @ 0x1C0007298 (-PropagatePendingReturned@FxIrp@@QEAAXXZ.c)
 */

__int64 __fastcall FxIoTarget::_RequestCompletionRoutine(
        _DEVICE_OBJECT *DeviceObject,
        _IRP *Irp,
        FxRequestBase *Context)
{
  FxIoTarget *m_Target; // r9
  FxIrp v5; // [rsp+38h] [rbp+10h] BYREF

  m_Target = Context->m_Target;
  v5.m_Irp = Irp;
  if ( Context->m_CompletionRoutine.m_Completion != FxIoTarget::_SyncCompletionRoutine )
    FxIrp::PropagatePendingReturned(&v5);
  FxIoTarget::RequestCompletionRoutine(m_Target, Context, (unsigned __int8)Context);
  return 3221225494LL;
}

/*
 * XREFs of ?PowerWakingNP@FxPkgPnp@@KA?AW4_WDF_DEVICE_POWER_STATE@@PEAV1@@Z @ 0x1C00705D0
 * Callers:
 *     <none>
 * Callees:
 *     ?GetObjectHandleUnchecked@FxObject@@IEAAPEAXXZ @ 0x1C00072C0 (-GetObjectHandleUnchecked@FxObject@@IEAAPEAXXZ.c)
 *     ?InvokeStateful@FxPrePostCallback@@QEAAJPEAW4FxCxCallbackProgress@@W4FxCxCallbackCleanupAction@@@Z @ 0x1C000FE0E (-InvokeStateful@FxPrePostCallback@@QEAAJPEAW4FxCxCallbackProgress@@W4FxCxCallbackCleanupAction@@.c)
 */

__int64 __fastcall FxPkgPnp::PowerWakingNP(FxPkgPnp *This)
{
  FxDeviceBase *m_DeviceBase; // rcx
  unsigned __int64 ObjectHandleUnchecked; // rax
  int v3; // edx
  __int64 v4; // r9
  FxCxCallbackProgress progress; // [rsp+30h] [rbp+8h] BYREF

  m_DeviceBase = This->m_DeviceBase;
  progress = FxCxCallbackProgressInitialized;
  ObjectHandleUnchecked = FxObject::GetObjectHandleUnchecked(m_DeviceBase);
  *(_DWORD *)(v4 + 40) = v3;
  *(_QWORD *)(v4 + 32) = ObjectHandleUnchecked;
  if ( (int)FxPrePostCallback::InvokeStateful((FxPrePostCallback *)v4, &progress, FxCxCleanupAfterPreOrClientFailure) >= 0 )
    return 33628LL;
  else
    return (unsigned __int8)progress < FxCxCallbackProgressClientSucceeded ? 33624 : 33631;
}

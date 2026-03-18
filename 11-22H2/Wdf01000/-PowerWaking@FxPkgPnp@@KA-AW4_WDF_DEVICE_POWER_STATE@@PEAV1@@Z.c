/*
 * XREFs of ?PowerWaking@FxPkgPnp@@KA?AW4_WDF_DEVICE_POWER_STATE@@PEAV1@@Z @ 0x1C00701E0
 * Callers:
 *     <none>
 * Callees:
 *     ?GetObjectHandleUnchecked@FxObject@@IEAAPEAXXZ @ 0x1C00072C0 (-GetObjectHandleUnchecked@FxObject@@IEAAPEAXXZ.c)
 *     ?InvokeStateful@FxPrePostCallback@@QEAAJPEAW4FxCxCallbackProgress@@W4FxCxCallbackCleanupAction@@@Z @ 0x1C000FE0E (-InvokeStateful@FxPrePostCallback@@QEAAJPEAW4FxCxCallbackProgress@@W4FxCxCallbackCleanupAction@@.c)
 *     ?SleepStudyResetBlockersForD0@FxPkgPnp@@QEAAXXZ @ 0x1C0070890 (-SleepStudyResetBlockersForD0@FxPkgPnp@@QEAAXXZ.c)
 */

__int64 __fastcall FxPkgPnp::PowerWaking(FxPkgPnp *This)
{
  unsigned __int64 ObjectHandleUnchecked; // rax
  int v3; // edx
  __int64 v4; // r9
  FxCxCallbackProgress progress; // [rsp+30h] [rbp+8h] BYREF

  progress = FxCxCallbackProgressInitialized;
  ObjectHandleUnchecked = FxObject::GetObjectHandleUnchecked(This->m_DeviceBase);
  *(_DWORD *)(v4 + 40) = v3;
  *(_QWORD *)(v4 + 32) = ObjectHandleUnchecked;
  if ( (int)FxPrePostCallback::InvokeStateful((FxPrePostCallback *)v4, &progress, FxCxCleanupAfterPreOrClientFailure) < 0 )
    return (unsigned __int8)progress < FxCxCallbackProgressClientSucceeded ? 852 : 862;
  if ( This->m_SleepStudyTrackReferences == 1 )
    FxPkgPnp::SleepStudyResetBlockersForD0(This);
  return 858LL;
}

/*
 * XREFs of ?PowerPolTimerExpiredWakeCapableWakeArrived@FxPkgPnp@@KA?AW4_WDF_DEVICE_POWER_POLICY_STATE@@PEAV1@@Z @ 0x1C007C740
 * Callers:
 *     <none>
 * Callees:
 *     ?IsPdo@FxDevice@@QEAAEXZ @ 0x1C0003260 (-IsPdo@FxDevice@@QEAAEXZ.c)
 *     ?GetObjectHandleUnchecked@FxObject@@IEAAPEAXXZ @ 0x1C00072C0 (-GetObjectHandleUnchecked@FxObject@@IEAAPEAXXZ.c)
 *     WPP_IFR_SF_qd @ 0x1C0007FCC (WPP_IFR_SF_qd.c)
 *     _guard_dispatch_icall_nop @ 0x1C000AB80 (_guard_dispatch_icall_nop.c)
 *     ?InvokeStateful@FxPrePostCallback@@QEAAJPEAW4FxCxCallbackProgress@@W4FxCxCallbackCleanupAction@@@Z @ 0x1C000FE0E (-InvokeStateful@FxPrePostCallback@@QEAAJPEAW4FxCxCallbackProgress@@W4FxCxCallbackCleanupAction@@.c)
 *     ?PowerProcessEvent@FxPkgPnp@@QEAAXW4FxPowerEvent@@E@Z @ 0x1C006F604 (-PowerProcessEvent@FxPkgPnp@@QEAAXW4FxPowerEvent@@E@Z.c)
 */

__int64 __fastcall FxPkgPnp::PowerPolTimerExpiredWakeCapableWakeArrived(FxPkgPnp *This)
{
  FxDeviceBase *m_DeviceBase; // rcx
  unsigned __int64 ObjectHandleUnchecked; // rax
  __int64 v4; // r9
  int v5; // eax
  FxDevice *m_Device; // rcx
  const void *_a1; // rax
  int _a2; // edx
  const void *v10; // rax
  int v11; // edx
  unsigned __int16 v12; // r9
  FxCxCallbackProgress progress; // [rsp+50h] [rbp+8h] BYREF

  m_DeviceBase = This->m_DeviceBase;
  progress = FxCxCallbackProgressInitialized;
  ObjectHandleUnchecked = FxObject::GetObjectHandleUnchecked(m_DeviceBase);
  *(_QWORD *)(v4 + 392) = ObjectHandleUnchecked;
  v5 = FxPrePostCallback::InvokeStateful((FxPrePostCallback *)(v4 + 360), &progress, FxCxCleanupAfterPreOrClientFailure);
  m_Device = This->m_Device;
  if ( v5 < 0 )
  {
    if ( progress == FxCxCallbackProgressClientSucceeded )
    {
      _a1 = (const void *)FxObject::GetObjectHandleUnchecked(m_Device);
      WPP_IFR_SF_qd(This->m_Globals, 2u, 0xCu, 0x22u, WPP_PowerPolicyStateMachine_cpp_Traceguids, _a1, _a2);
      return 1467LL;
    }
    v10 = (const void *)FxObject::GetObjectHandleUnchecked(m_Device);
    v12 = 35;
    goto LABEL_5;
  }
  if ( FxDevice::IsPdo(m_Device) && This->PowerEnableWakeAtBusOverload(This) < 0 )
  {
    v10 = (const void *)FxObject::GetObjectHandleUnchecked(This->m_DeviceBase);
    v12 = 36;
LABEL_5:
    WPP_IFR_SF_qd(This->m_Globals, 2u, 0xCu, v12, WPP_PowerPolicyStateMachine_cpp_Traceguids, v10, v11);
    return 1335LL;
  }
  FxPkgPnp::PowerProcessEvent(This, 0x1000u, 0);
  return 1472LL;
}

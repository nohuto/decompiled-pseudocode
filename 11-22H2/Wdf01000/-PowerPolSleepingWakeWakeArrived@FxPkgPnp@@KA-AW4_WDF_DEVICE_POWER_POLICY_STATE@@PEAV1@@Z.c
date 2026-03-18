/*
 * XREFs of ?PowerPolSleepingWakeWakeArrived@FxPkgPnp@@KA?AW4_WDF_DEVICE_POWER_POLICY_STATE@@PEAV1@@Z @ 0x1C007B290
 * Callers:
 *     <none>
 * Callees:
 *     ?IsPdo@FxDevice@@QEAAEXZ @ 0x1C0003260 (-IsPdo@FxDevice@@QEAAEXZ.c)
 *     ?GetObjectHandleUnchecked@FxObject@@IEAAPEAXXZ @ 0x1C00072C0 (-GetObjectHandleUnchecked@FxObject@@IEAAPEAXXZ.c)
 *     WPP_IFR_SF_qd @ 0x1C0007FCC (WPP_IFR_SF_qd.c)
 *     _guard_dispatch_icall_nop @ 0x1C000AB80 (_guard_dispatch_icall_nop.c)
 *     ?InvokeStateful@FxPrePostCallback@@QEAAJPEAW4FxCxCallbackProgress@@W4FxCxCallbackCleanupAction@@@Z @ 0x1C000FE0E (-InvokeStateful@FxPrePostCallback@@QEAAJPEAW4FxCxCallbackProgress@@W4FxCxCallbackCleanupAction@@.c)
 *     ?PowerProcessEvent@FxPkgPnp@@QEAAXW4FxPowerEvent@@E@Z @ 0x1C006F604 (-PowerProcessEvent@FxPkgPnp@@QEAAXW4FxPowerEvent@@E@Z.c)
 *     ?PowerPolicyGetCurrentWakeReason@FxPkgPnp@@QEAAKXZ @ 0x1C00743AC (-PowerPolicyGetCurrentWakeReason@FxPkgPnp@@QEAAKXZ.c)
 */

__int64 __fastcall FxPkgPnp::PowerPolSleepingWakeWakeArrived(FxPkgPnp *This)
{
  unsigned __int64 ObjectHandleUnchecked; // rax
  __int64 v3; // r10
  char v4; // r9
  int v5; // eax
  FxDevice *m_Device; // rcx
  const void *_a1; // rax
  int _a2; // edx
  const void *v10; // rax
  int v11; // edx
  unsigned __int16 v12; // r9
  FxCxCallbackProgress progress; // [rsp+50h] [rbp+8h] BYREF

  progress = FxCxCallbackProgressInitialized;
  FxPkgPnp::PowerPolicyGetCurrentWakeReason(This);
  ObjectHandleUnchecked = FxObject::GetObjectHandleUnchecked(This->m_DeviceBase);
  *(_QWORD *)(v3 + 440) = ObjectHandleUnchecked;
  *(_BYTE *)(v3 + 448) = v4 & 1;
  *(_BYTE *)(v3 + 449) = (v4 & 2) != 0;
  v5 = FxPrePostCallback::InvokeStateful((FxPrePostCallback *)(v3 + 400), &progress, FxCxCleanupAfterPreFailure);
  m_Device = This->m_Device;
  if ( v5 < 0 )
  {
    if ( progress == FxCxCallbackProgressInitialized )
    {
      _a1 = (const void *)FxObject::GetObjectHandleUnchecked(m_Device);
      WPP_IFR_SF_qd(This->m_Globals, 2u, 0xCu, 0x17u, WPP_PowerPolicyStateMachine_cpp_Traceguids, _a1, _a2);
      return 1468LL;
    }
    v10 = (const void *)FxObject::GetObjectHandleUnchecked(m_Device);
    v12 = 24;
    goto LABEL_5;
  }
  if ( FxDevice::IsPdo(m_Device) && This->PowerEnableWakeAtBusOverload(This) < 0 )
  {
    v10 = (const void *)FxObject::GetObjectHandleUnchecked(This->m_DeviceBase);
    v12 = 25;
LABEL_5:
    WPP_IFR_SF_qd(This->m_Globals, 2u, 0xCu, v12, WPP_PowerPolicyStateMachine_cpp_Traceguids, v10, v11);
    return 1298LL;
  }
  FxPkgPnp::PowerProcessEvent(This, 0x1000u, 0);
  return 1472LL;
}

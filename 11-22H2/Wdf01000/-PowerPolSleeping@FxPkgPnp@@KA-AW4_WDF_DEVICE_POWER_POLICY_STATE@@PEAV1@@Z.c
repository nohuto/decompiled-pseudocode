/*
 * XREFs of ?PowerPolSleeping@FxPkgPnp@@KA?AW4_WDF_DEVICE_POWER_POLICY_STATE@@PEAV1@@Z @ 0x1C007AE90
 * Callers:
 *     <none>
 * Callees:
 *     ?GetObjectHandleUnchecked@FxObject@@IEAAPEAXXZ @ 0x1C00072C0 (-GetObjectHandleUnchecked@FxObject@@IEAAPEAXXZ.c)
 *     WPP_IFR_SF_q @ 0x1C0018194 (WPP_IFR_SF_q.c)
 *     ?PowerPolicyIsWakeEnabled@FxPkgPnp@@QEAAEXZ @ 0x1C007451C (-PowerPolicyIsWakeEnabled@FxPkgPnp@@QEAAEXZ.c)
 *     ?FxVerifierBreakOnDeviceStateError@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1C007A550 (-FxVerifierBreakOnDeviceStateError@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 *     ?NotifyDevicePowerDown@FxPoxInterface@@QEAAJXZ @ 0x1C0083E10 (-NotifyDevicePowerDown@FxPoxInterface@@QEAAJXZ.c)
 *     ?SimulateDevicePowerNotRequired@FxPoxInterface@@QEAAXXZ @ 0x1C0083EE0 (-SimulateDevicePowerNotRequired@FxPoxInterface@@QEAAXXZ.c)
 */

__int64 __fastcall FxPkgPnp::PowerPolSleeping(FxPkgPnp *This)
{
  const void *_a1; // rax
  __int64 result; // rax

  if ( !This->m_SpecialFileCount[1] && This->m_PowerPolicyMachine.m_Owner->m_ChildrenPoweredOnCount )
  {
    _a1 = (const void *)FxObject::GetObjectHandleUnchecked(This->m_DeviceBase);
    WPP_IFR_SF_q(This->m_Globals, 2u, 0xCu, 0x1Fu, WPP_PowerPolicyStateMachine_cpp_Traceguids, _a1);
    FxVerifierBreakOnDeviceStateError(This->m_DeviceBase->m_Globals);
  }
  FxPoxInterface::SimulateDevicePowerNotRequired(&This->m_PowerPolicyMachine.m_Owner->m_PoxInterface);
  FxPoxInterface::NotifyDevicePowerDown(&This->m_PowerPolicyMachine.m_Owner->m_PoxInterface);
  if ( !FxPkgPnp::PowerPolicyIsWakeEnabled(This) )
    return 1319LL;
  result = 1322LL;
  if ( ((This->m_PendingSystemPowerIrp->Tail.Overlay.CurrentStackLocation->Parameters.Read.Length >> 8) & 0xF) > This->m_SystemWake )
    return 1319LL;
  return result;
}

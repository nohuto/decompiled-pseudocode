/*
 * XREFs of ?GetNotPowerPolicyOwnerTableEntry@FxPkgPnp@@KAPEBUNOT_POWER_POLICY_OWNER_STATE_TABLE@@W4_WDF_DEVICE_POWER_POLICY_STATE@@@Z @ 0x1C007A5AC
 * Callers:
 *     ?PowerPolicyProcessEventInner@FxPkgPnp@@IEAAXPEAUFxPostProcessInfo@@@Z @ 0x1C007D880 (-PowerPolicyProcessEventInner@FxPkgPnp@@IEAAXPEAUFxPostProcessInfo@@@Z.c)
 *     ?NotPowerPolicyOwnerEnterNewState@FxPkgPnp@@IEAAXW4_WDF_DEVICE_POWER_POLICY_STATE@@@Z @ 0x1C00837E0 (-NotPowerPolicyOwnerEnterNewState@FxPkgPnp@@IEAAXW4_WDF_DEVICE_POWER_POLICY_STATE@@@Z.c)
 * Callees:
 *     <none>
 */

const NOT_POWER_POLICY_OWNER_STATE_TABLE *__fastcall FxPkgPnp::GetNotPowerPolicyOwnerTableEntry(
        _WDF_DEVICE_POWER_POLICY_STATE State)
{
  int v1; // r8d
  const NOT_POWER_POLICY_OWNER_STATE_TABLE *result; // rax
  _WDF_DEVICE_POWER_POLICY_STATE CurrentTargetState; // edx

  v1 = 0;
  result = FxPkgPnp::m_WdfNotPowerPolicyOwnerStates;
  CurrentTargetState = WdfDevStatePwrPolObjectCreated;
  while ( CurrentTargetState != State )
  {
    result = &FxPkgPnp::m_WdfNotPowerPolicyOwnerStates[++v1];
    CurrentTargetState = result->CurrentTargetState;
    if ( result->CurrentTargetState == WdfDevStatePwrPolNull )
      return 0LL;
  }
  return result;
}

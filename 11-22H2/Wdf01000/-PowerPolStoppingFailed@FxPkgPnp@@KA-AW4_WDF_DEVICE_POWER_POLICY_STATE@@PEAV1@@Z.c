/*
 * XREFs of ?PowerPolStoppingFailed@FxPkgPnp@@KA?AW4_WDF_DEVICE_POWER_POLICY_STATE@@PEAV1@@Z @ 0x1C00099D0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall FxPkgPnp::PowerPolStoppingFailed(FxPkgPnp *This)
{
  This->m_PowerPolicyMachine.m_Owner->m_PowerFailed = 1;
  return 1373LL;
}

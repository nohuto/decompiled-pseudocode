/*
 * XREFs of ?PowerPolRemoved@FxPkgPnp@@KA?AW4_WDF_DEVICE_POWER_POLICY_STATE@@PEAV1@@Z @ 0x1C007AC80
 * Callers:
 *     <none>
 * Callees:
 *     ?PnpProcessEvent@FxPkgPnp@@QEAAXW4FxPnpEvent@@E@Z @ 0x1C006BE64 (-PnpProcessEvent@FxPkgPnp@@QEAAXW4FxPnpEvent@@E@Z.c)
 */

__int64 __fastcall FxPkgPnp::PowerPolRemoved(FxPkgPnp *This)
{
  KIRQL v2; // bl
  unsigned __int8 v3; // r8

  v2 = KfRaiseIrql(2u);
  FxPkgPnp::PnpProcessEvent(This, PnpEventPwrPolRemoved, v3);
  KeLowerIrql(v2);
  return 1472LL;
}

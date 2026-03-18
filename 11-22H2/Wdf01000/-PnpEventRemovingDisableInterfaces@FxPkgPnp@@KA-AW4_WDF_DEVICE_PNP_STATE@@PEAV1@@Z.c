/*
 * XREFs of ?PnpEventRemovingDisableInterfaces@FxPkgPnp@@KA?AW4_WDF_DEVICE_PNP_STATE@@PEAV1@@Z @ 0x1C006B300
 * Callers:
 *     <none>
 * Callees:
 *     ?PnpCleanupForRemove@FxPkgPnp@@AEAAXE@Z @ 0x1C006A1BC (-PnpCleanupForRemove@FxPkgPnp@@AEAAXE@Z.c)
 *     ?PnpReleaseHardware@FxPkgPnp@@IEAAJXZ @ 0x1C006C2A4 (-PnpReleaseHardware@FxPkgPnp@@IEAAJXZ.c)
 *     ?PowerPolicyProcessEvent@FxPkgPnp@@QEAAXW4FxPowerPolicyEvent@@E@Z @ 0x1C007D66C (-PowerPolicyProcessEvent@FxPkgPnp@@QEAAXW4FxPowerPolicyEvent@@E@Z.c)
 */

__int64 __fastcall FxPkgPnp::PnpEventRemovingDisableInterfaces(FxPkgPnp *This)
{
  unsigned __int8 v2; // r8

  FxPkgPnp::PnpReleaseHardware(This);
  FxPkgPnp::PnpCleanupForRemove(This, 1u);
  FxPkgPnp::PowerPolicyProcessEvent(This, PwrPolRemove, v2);
  return 314LL;
}

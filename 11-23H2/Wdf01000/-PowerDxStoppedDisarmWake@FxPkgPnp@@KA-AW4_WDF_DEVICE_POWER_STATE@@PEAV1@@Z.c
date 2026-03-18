/*
 * XREFs of ?PowerDxStoppedDisarmWake@FxPkgPnp@@KA?AW4_WDF_DEVICE_POWER_STATE@@PEAV1@@Z @ 0x1C006E730
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C000AB80 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall FxPkgPnp::PowerDxStoppedDisarmWake(FxPkgPnp *This)
{
  This->PowerDisableWakeAtBusOverload(This);
  return 854LL;
}

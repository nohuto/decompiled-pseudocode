/*
 * XREFs of ?QueryForPowerThread@FxPkgPdo@@EEAAJXZ @ 0x1C00838F0
 * Callers:
 *     <none>
 * Callees:
 *     ?CreatePowerThread@FxPkgPnp@@IEAAJXZ @ 0x1C002996C (-CreatePowerThread@FxPkgPnp@@IEAAJXZ.c)
 */

int __fastcall FxPkgPdo::QueryForPowerThread(FxPkgPdo *this)
{
  return FxPkgPnp::CreatePowerThread(this);
}

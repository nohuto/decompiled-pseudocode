/*
 * XREFs of ?PnpEventStartingFromStopped@FxPkgPnp@@KA?AW4_WDF_DEVICE_PNP_STATE@@PEAV1@@Z @ 0x1C006B4C0
 * Callers:
 *     <none>
 * Callees:
 *     ?PnpPrepareHardware@FxPkgPnp@@IEAAJPEAEPEAW4FxCxCallbackProgress@@@Z @ 0x1C006BCB4 (-PnpPrepareHardware@FxPkgPnp@@IEAAJPEAEPEAW4FxCxCallbackProgress@@@Z.c)
 */

__int64 __fastcall FxPkgPnp::PnpEventStartingFromStopped(FxPkgPnp *This)
{
  unsigned __int8 matched; // [rsp+38h] [rbp+10h] BYREF
  FxCxCallbackProgress progress; // [rsp+40h] [rbp+18h] BYREF

  matched = 0;
  progress = FxCxCallbackProgressInitialized;
  if ( FxPkgPnp::PnpPrepareHardware(This, &matched, &progress) >= 0 )
    return 280LL;
  if ( matched )
    return (unsigned int)(progress == FxCxCallbackProgressInitialized) + 298;
  return 299LL;
}

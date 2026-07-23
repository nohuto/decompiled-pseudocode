/*
 * XREFs of PdcPoPerfOverride @ 0x140997BA8
 * Callers:
 *     PopPowerAggregatorEnterScreenOff @ 0x140877F14 (PopPowerAggregatorEnterScreenOff.c)
 *     PopPowerAggregatorModernStandbyExitStateHandler @ 0x140993CE0 (PopPowerAggregatorModernStandbyExitStateHandler.c)
 * Callees:
 *     PpmEndHighPerfRequest @ 0x14036EC90 (PpmEndHighPerfRequest.c)
 *     PpmBeginHighPerfRequest @ 0x14036F114 (PpmBeginHighPerfRequest.c)
 *     PpmDisableHighPerfRequestDeferredExpiration @ 0x140598280 (PpmDisableHighPerfRequestDeferredExpiration.c)
 */

__int64 PdcPoPerfOverride()
{
  PpmBeginHighPerfRequest();
  PpmDisableHighPerfRequestDeferredExpiration(0);
  return PpmEndHighPerfRequest(1);
}

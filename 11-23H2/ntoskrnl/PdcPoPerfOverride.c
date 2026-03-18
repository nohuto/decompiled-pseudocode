/*
 * XREFs of PdcPoPerfOverride @ 0x1409979A8
 * Callers:
 *     PopPowerAggregatorEnterScreenOff @ 0x140877CD4 (PopPowerAggregatorEnterScreenOff.c)
 *     PopPowerAggregatorModernStandbyExitStateHandler @ 0x140993AE0 (PopPowerAggregatorModernStandbyExitStateHandler.c)
 * Callees:
 *     PpmEndHighPerfRequest @ 0x14036EAF0 (PpmEndHighPerfRequest.c)
 *     PpmBeginHighPerfRequest @ 0x14036EF74 (PpmBeginHighPerfRequest.c)
 *     PpmDisableHighPerfRequestDeferredExpiration @ 0x140597D90 (PpmDisableHighPerfRequestDeferredExpiration.c)
 */

__int64 PdcPoPerfOverride()
{
  PpmBeginHighPerfRequest();
  PpmDisableHighPerfRequestDeferredExpiration(0);
  return PpmEndHighPerfRequest(1);
}

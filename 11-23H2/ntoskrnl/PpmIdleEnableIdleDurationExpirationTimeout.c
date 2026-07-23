/*
 * XREFs of PpmIdleEnableIdleDurationExpirationTimeout @ 0x140463176
 * Callers:
 *     PopInitializeHeteroProcessors @ 0x14082D190 (PopInitializeHeteroProcessors.c)
 * Callees:
 *     <none>
 */

void PpmIdleEnableIdleDurationExpirationTimeout()
{
  PpmIdleDurationExpirationTimeout = (unsigned int)(10000 * PpmIdleDurationExpirationTimeoutMs);
}

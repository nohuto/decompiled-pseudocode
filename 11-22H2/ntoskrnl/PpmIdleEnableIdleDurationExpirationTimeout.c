/*
 * XREFs of PpmIdleEnableIdleDurationExpirationTimeout @ 0x140462716
 * Callers:
 *     PopInitializeHeteroProcessors @ 0x14082E9E0 (PopInitializeHeteroProcessors.c)
 * Callees:
 *     <none>
 */

void PpmIdleEnableIdleDurationExpirationTimeout()
{
  PpmIdleDurationExpirationTimeout = (unsigned int)(10000 * PpmIdleDurationExpirationTimeoutMs);
}

/*
 * XREFs of PpmIdleEnableIdleDurationExpirationTimeout @ 0x140462D76
 * Callers:
 *     PopInitializeHeteroProcessors @ 0x14082CE90 (PopInitializeHeteroProcessors.c)
 * Callees:
 *     <none>
 */

void PpmIdleEnableIdleDurationExpirationTimeout()
{
  PpmIdleDurationExpirationTimeout = (unsigned int)(10000 * PpmIdleDurationExpirationTimeoutMs);
}

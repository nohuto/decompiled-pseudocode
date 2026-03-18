/*
 * XREFs of PpmBeginHighPerfRequest @ 0x1403690D0
 * Callers:
 *     PoUserShutdownInitiated @ 0x1407EC000 (PoUserShutdownInitiated.c)
 *     PopIssueActionRequest @ 0x1407FF888 (PopIssueActionRequest.c)
 *     PoInitializeBroadcast @ 0x140802640 (PoInitializeBroadcast.c)
 *     PdcPoPerfOverride @ 0x14080877C (PdcPoPerfOverride.c)
 *     PopSetupHighPerfPowerRequest @ 0x140864980 (PopSetupHighPerfPowerRequest.c)
 * Callees:
 *     PopPowerRequestReferenceAcquire @ 0x14036A2C8 (PopPowerRequestReferenceAcquire.c)
 */

__int64 PpmBeginHighPerfRequest()
{
  if ( PpmHighPerfPowerRequest )
    return PopPowerRequestReferenceAcquire(PpmHighPerfPowerRequest);
  else
    return 3221225473LL;
}

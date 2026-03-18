/*
 * XREFs of PopNetCheckOpportunisticDs @ 0x140998544
 * Callers:
 *     PopCaptureSleepStudyStatistics @ 0x14039A210 (PopCaptureSleepStudyStatistics.c)
 *     PopPowerAggregatorEngageAggressiveStandbyActions @ 0x14099596C (PopPowerAggregatorEngageAggressiveStandbyActions.c)
 * Callees:
 *     PopIsRemoteDesktopEnabled @ 0x1409897C4 (PopIsRemoteDesktopEnabled.c)
 */

bool PopNetCheckOpportunisticDs()
{
  char v0; // bl

  v0 = 0;
  if ( !PopNetBIRequestActive && dword_140C23318 == 2 )
    return PopIsRemoteDesktopEnabled() == 0;
  return v0;
}

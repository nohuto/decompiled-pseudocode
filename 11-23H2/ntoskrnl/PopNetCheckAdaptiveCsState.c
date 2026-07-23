/*
 * XREFs of PopNetCheckAdaptiveCsState @ 0x140996834
 * Callers:
 *     PopCaptureSleepStudyStatistics @ 0x1403C80E0 (PopCaptureSleepStudyStatistics.c)
 *     PopPowerAggregatorEngageAggressiveStandbyActions @ 0x1409938A8 (PopPowerAggregatorEngageAggressiveStandbyActions.c)
 * Callees:
 *     PopIsRemoteDesktopEnabled @ 0x140980D64 (PopIsRemoteDesktopEnabled.c)
 */

__int64 PopNetCheckAdaptiveCsState()
{
  unsigned int v0; // ebx

  v0 = 0;
  if ( !PopNetBIRequestActive && dword_140C3D9B8 == 2 )
    return PopIsRemoteDesktopEnabled() == 0;
  return v0;
}

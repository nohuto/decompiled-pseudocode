/*
 * XREFs of PopPowerAggregatorHandleSystemTransitionEndIntent @ 0x1409939E0
 * Callers:
 *     PopPowerAggregatorHandleIntentUnsafe @ 0x1407A93D4 (PopPowerAggregatorHandleIntentUnsafe.c)
 * Callees:
 *     Feature_PowerEventProcessorSystemIdle__private_ReportDeviceUsage @ 0x140411374 (Feature_PowerEventProcessorSystemIdle__private_ReportDeviceUsage.c)
 *     PopGetMostRecentWakeInfo @ 0x14058E5E0 (PopGetMostRecentWakeInfo.c)
 *     PopWakeInfoDereference @ 0x14058E858 (PopWakeInfoDereference.c)
 *     TtmIsEnabled @ 0x1407A6090 (TtmIsEnabled.c)
 *     PopIsMostRecentWakeAttended @ 0x140AA107C (PopIsMostRecentWakeAttended.c)
 */

__int64 __fastcall PopPowerAggregatorHandleSystemTransitionEndIntent(__int64 a1, __int64 a2, __int64 a3, _DWORD *a4)
{
  unsigned int v6; // edi
  __int64 MostRecentWakeInfo; // rax
  char v8; // bl

  if ( *(_DWORD *)(a1 + 16) == 3 )
  {
    Feature_PowerEventProcessorSystemIdle__private_ReportDeviceUsage();
    v6 = 0;
    if ( TtmIsEnabled() )
    {
      *(_DWORD *)a2 = 0;
    }
    else
    {
      MostRecentWakeInfo = PopGetMostRecentWakeInfo();
      if ( MostRecentWakeInfo
        && (v8 = *(_BYTE *)(MostRecentWakeInfo + 81), PopWakeInfoDereference(MostRecentWakeInfo), v8)
        && !(unsigned __int8)PopIsMostRecentWakeAttended()
        && !dword_140C3D86C
        && *a4 == 5 )
      {
        *(_DWORD *)a2 = 1;
      }
      else
      {
        *(_DWORD *)a2 = 4;
        *(_DWORD *)(a2 + 28) = *a4;
      }
      *(_BYTE *)(a2 + 24) = 1;
    }
  }
  else
  {
    return (unsigned int)-1073700861;
  }
  return v6;
}

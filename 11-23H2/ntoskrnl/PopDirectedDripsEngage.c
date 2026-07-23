/*
 * XREFs of PopDirectedDripsEngage @ 0x140587424
 * Callers:
 *     PopDirectedDripsNotify @ 0x140875724 (PopDirectedDripsNotify.c)
 * Callees:
 *     PopFxClearDirectedDripsCandidateDeviceList @ 0x1405899CC (PopFxClearDirectedDripsCandidateDeviceList.c)
 *     PopDirectedDripsQueryEnabledMitigations @ 0x140859B4C (PopDirectedDripsQueryEnabledMitigations.c)
 *     PopDirectedDripsNotifyAppsAndServices @ 0x140983BF4 (PopDirectedDripsNotifyAppsAndServices.c)
 */

__int64 __fastcall PopDirectedDripsEngage(__int64 a1, char a2, __int64 a3)
{
  __int64 result; // rax

  if ( a2 )
  {
    _InterlockedOr((volatile signed __int32 *)&PopDirectedDripsState, 0xA00u);
    LOBYTE(a3) = 1;
    return PopDirectedDripsNotifyAppsAndServices(&PopDirectedDripsState, &dword_140C3F118, a3);
  }
  else
  {
    PopFxClearDirectedDripsCandidateDeviceList();
    dword_140C3F2F8 = 0;
    _InterlockedAnd((volatile signed __int32 *)&PopDirectedDripsState, 0xFFFFC1C7);
    result = (unsigned int)dword_140C3F110;
    if ( (dword_140C3F110 & 4) != 0 )
      return PopDirectedDripsQueryEnabledMitigations(&PopDirectedDripsState);
  }
  return result;
}

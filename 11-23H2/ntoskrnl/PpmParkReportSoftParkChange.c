/*
 * XREFs of PpmParkReportSoftParkChange @ 0x14059D20C
 * Callers:
 *     PpmPerfAction @ 0x1402BF9C0 (PpmPerfAction.c)
 * Callees:
 *     KeCheckProcessorAffinityEx @ 0x140257360 (KeCheckProcessorAffinityEx.c)
 *     KeInterlockedClearProcessorAffinityEx @ 0x1403418E0 (KeInterlockedClearProcessorAffinityEx.c)
 *     KeInterlockedSetProcessorAffinityEx @ 0x140348BA0 (KeInterlockedSetProcessorAffinityEx.c)
 *     KeTransitionProcessorParkState @ 0x14057D86C (KeTransitionProcessorParkState.c)
 *     PpmEventCoreParkingSoftParkedStateChange @ 0x140599D2C (PpmEventCoreParkingSoftParkedStateChange.c)
 */

char __fastcall PpmParkReportSoftParkChange(__int64 a1)
{
  int v2; // ebx
  char v3; // si
  int v4; // edx

  v2 = KeCheckProcessorAffinityEx((unsigned __int16 *)&PpmParkNewSoftParkingMask, *(_DWORD *)(a1 + 36));
  v3 = v2 != 0;
  KeTransitionProcessorParkState(a1, (v2 != 0) + 1);
  v4 = *(_DWORD *)(a1 + 36);
  if ( v2 )
    KeInterlockedSetProcessorAffinityEx((__int64)PpmParkSoftParkingMask, v4);
  else
    KeInterlockedClearProcessorAffinityEx((__int64)PpmParkSoftParkingMask, v4);
  *(_BYTE *)(a1 + 33659) = v3;
  return PpmEventCoreParkingSoftParkedStateChange(a1, v3);
}

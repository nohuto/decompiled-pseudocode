/*
 * XREFs of PpmParkReportUnparkedCore @ 0x140463BCC
 * Callers:
 *     PpmPerfAction @ 0x1402BFC50 (PpmPerfAction.c)
 * Callees:
 *     KeInterlockedClearProcessorAffinityEx @ 0x140341B70 (KeInterlockedClearProcessorAffinityEx.c)
 *     KeTransitionProcessorParkState @ 0x14057DD5C (KeTransitionProcessorParkState.c)
 *     PpmEventCoreParkingStateChange @ 0x14059A33C (PpmEventCoreParkingStateChange.c)
 */

_BYTE *__fastcall PpmParkReportUnparkedCore(__int64 a1)
{
  int v2; // edx
  _BYTE *result; // rax

  KeTransitionProcessorParkState(a1, 0LL);
  v2 = *(_DWORD *)(a1 + 36);
  *(_BYTE *)(a1 + 34060) = 0;
  KeInterlockedClearProcessorAffinityEx((__int64)PpmPerfCoreParkingMask, v2);
  if ( *(_BYTE *)(a1 + 33659) )
  {
    KeInterlockedClearProcessorAffinityEx((__int64)PpmParkSoftParkingMask, *(_DWORD *)(a1 + 36));
    *(_BYTE *)(a1 + 33659) = 0;
  }
  PpmEventCoreParkingStateChange(a1);
  result = *(_BYTE **)(a1 + 33600);
  if ( result )
  {
    if ( *result == 1 )
      *(_BYTE *)(a1 + 33669) = 1;
  }
  return result;
}

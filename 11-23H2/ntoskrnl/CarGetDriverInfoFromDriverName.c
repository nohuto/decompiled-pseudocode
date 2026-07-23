/*
 * XREFs of CarGetDriverInfoFromDriverName @ 0x1405D35B0
 * Callers:
 *     CarInitializeTelemetryData @ 0x1405D4300 (CarInitializeTelemetryData.c)
 * Callees:
 *     CarFindDriverInfoByDriverName @ 0x1405D3560 (CarFindDriverInfoByDriverName.c)
 *     CarEtwCopyDriverName @ 0x1405D5B4C (CarEtwCopyDriverName.c)
 */

void __fastcall CarGetDriverInfoFromDriverName(__int64 a1, __int64 a2)
{
  wchar_t *v3; // r10
  __int64 DriverInfoByDriverName; // rax

  if ( a1 && a2 )
  {
    CarEtwCopyDriverName(a2 + 4, a1, 32LL);
    DriverInfoByDriverName = CarFindDriverInfoByDriverName(v3);
    if ( DriverInfoByDriverName )
    {
      *(_QWORD *)(a2 + 72) = *(_QWORD *)(DriverInfoByDriverName + 72);
      *(_DWORD *)(a2 + 80) = *(_DWORD *)(DriverInfoByDriverName + 80);
      *(_DWORD *)(a2 + 68) = *(_DWORD *)(DriverInfoByDriverName + 88);
    }
  }
}

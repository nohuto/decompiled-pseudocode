/*
 * XREFs of VfUtilGetDriverName @ 0x140AC26E0
 * Callers:
 *     CarInitializeTelemetryData @ 0x1405D3D90 (CarInitializeTelemetryData.c)
 * Callees:
 *     VfTargetDriversGetVerifierData @ 0x140ACB558 (VfTargetDriversGetVerifierData.c)
 */

__int64 __fastcall VfUtilGetDriverName(__int64 a1)
{
  __int64 result; // rax

  result = VfTargetDriversGetVerifierData(a1);
  if ( result )
    return *(_QWORD *)(*(_QWORD *)result + 32LL);
  return result;
}

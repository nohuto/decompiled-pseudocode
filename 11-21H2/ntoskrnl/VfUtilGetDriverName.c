/*
 * XREFs of VfUtilGetDriverName @ 0x140A81D40
 * Callers:
 *     CarInitializeTelemetryData @ 0x140603A00 (CarInitializeTelemetryData.c)
 * Callees:
 *     VfTargetDriversGetVerifierData @ 0x140A8ABF8 (VfTargetDriversGetVerifierData.c)
 */

__int64 __fastcall VfUtilGetDriverName(__int64 a1)
{
  __int64 result; // rax

  result = VfTargetDriversGetVerifierData(a1);
  if ( result )
    return *(_QWORD *)(*(_QWORD *)result + 32LL);
  return result;
}

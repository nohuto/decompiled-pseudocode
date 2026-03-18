/*
 * XREFs of RIMTransformPointerDevicePointToPhysical @ 0x1C00E64A4
 * Callers:
 *     RIMApplyTransforms @ 0x1C0197E64 (RIMApplyTransforms.c)
 *     RIMSetContactBoundary @ 0x1C0198678 (RIMSetContactBoundary.c)
 *     RIMTransformCoordinatesFromDigitizer @ 0x1C0198DA0 (RIMTransformCoordinatesFromDigitizer.c)
 *     RIMTransformDimensionFromDigitizer @ 0x1C0198E70 (RIMTransformDimensionFromDigitizer.c)
 *     rimComputeHimetricGeometry @ 0x1C01AE5F0 (rimComputeHimetricGeometry.c)
 * Callees:
 *     RIMConvertPointCoordinates @ 0x1C019800C (RIMConvertPointCoordinates.c)
 */

__int64 __fastcall RIMTransformPointerDevicePointToPhysical(__int64 a1, int a2, _DWORD *a3)
{
  __int64 result; // rax

  result = RIMConvertPointCoordinates(a2);
  if ( !(_DWORD)result )
  {
    *a3 = 0;
    a3[1] = 0;
  }
  return result;
}

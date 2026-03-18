/*
 * XREFs of RIMTransformPointerDevicePointToPhysical @ 0x1C00E1258
 * Callers:
 *     RIMApplyTransforms @ 0x1C018F430 (RIMApplyTransforms.c)
 *     RIMSetContactBoundary @ 0x1C018FD80 (RIMSetContactBoundary.c)
 *     RIMTransformCoordinatesFromDigitizer @ 0x1C0190540 (RIMTransformCoordinatesFromDigitizer.c)
 *     RIMTransformDimensionFromDigitizer @ 0x1C0190630 (RIMTransformDimensionFromDigitizer.c)
 *     rimComputeHimetricGeometry @ 0x1C01A7CB4 (rimComputeHimetricGeometry.c)
 * Callees:
 *     RIMConvertPointCoordinates @ 0x1C018F5D8 (RIMConvertPointCoordinates.c)
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

/*
 * XREFs of RIMConvertPointCoordinates @ 0x1C019800C
 * Callers:
 *     RIMTransformPointerDevicePointToPhysical @ 0x1C00E64A4 (RIMTransformPointerDevicePointToPhysical.c)
 *     ?TransformPTPLogicalUnitsToPhysical@@YAXPEAUtagHID_POINTER_DEVICE_INFO@@UtagPOINT@@PEAU2@@Z @ 0x1C0197654 (-TransformPTPLogicalUnitsToPhysical@@YAXPEAUtagHID_POINTER_DEVICE_INFO@@UtagPOINT@@PEAU2@@Z.c)
 *     RIMTransformDimensionFromDigitizer @ 0x1C0198E70 (RIMTransformDimensionFromDigitizer.c)
 *     RIMTransformPhysicalPointToScreen @ 0x1C0198FAC (RIMTransformPhysicalPointToScreen.c)
 * Callees:
 *     rimConvertCoordinatesWithRounding @ 0x1C0199020 (rimConvertCoordinatesWithRounding.c)
 */

__int64 __fastcall RIMConvertPointCoordinates(__int64 a1, int *a2, int *a3, _QWORD *a4)
{
  unsigned int v7; // ecx
  int v9; // [rsp+44h] [rbp+Ch]
  __int64 plResult; // [rsp+48h] [rbp+10h] BYREF

  v9 = HIDWORD(a1);
  plResult = 0LL;
  v7 = rimConvertCoordinatesWithRounding(*a2, a2[2], *a3, a3[2], a1, (LONG *)&plResult);
  if ( v7 )
  {
    v7 = rimConvertCoordinatesWithRounding(a2[1], a2[3], a3[1], a3[3], v9, (LONG *)&plResult + 1);
    if ( v7 )
      *a4 = plResult;
  }
  return v7;
}

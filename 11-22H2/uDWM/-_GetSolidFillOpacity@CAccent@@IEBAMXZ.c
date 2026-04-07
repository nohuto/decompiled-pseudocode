/*
 * XREFs of ?_GetSolidFillOpacity@CAccent@@IEBAMXZ @ 0x180042084
 * Callers:
 *     ?UpdateLayout@CAccent@@UEAAJ_N@Z @ 0x1800404D0 (-UpdateLayout@CAccent@@UEAAJ_N@Z.c)
 *     ?UpdateAccentPolicy@CAccent@@QEAAJPEBUtagRECT@@PEBUACCENT_POLICY@@PEAVCBaseGeometryProxy@@@Z @ 0x180041CAC (-UpdateAccentPolicy@CAccent@@QEAAJPEBUtagRECT@@PEBUACCENT_POLICY@@PEAVCBaseGeometryProxy@@@Z.c)
 * Callees:
 *     ?_AnyTransparentBackground@CAccent@@IEBA_NXZ @ 0x18001C2D4 (-_AnyTransparentBackground@CAccent@@IEBA_NXZ.c)
 */

float __fastcall CAccent::_GetSolidFillOpacity(CAccent *this)
{
  float result; // xmm0_4
  __int64 v2; // r8

  result = FLOAT_1_0;
  if ( CAccent::_AnyTransparentBackground(this) )
    return (float)*(unsigned __int8 *)(v2 + 363) / 255.0;
  return result;
}

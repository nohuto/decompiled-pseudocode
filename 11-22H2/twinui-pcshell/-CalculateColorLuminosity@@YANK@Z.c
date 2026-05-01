/*
 * XREFs of ?CalculateColorLuminosity@@YANK@Z @ 0x180741CC8
 * Callers:
 *     ?CreateIconBitmap@ImmersiveIcons@@YAJUtagSIZE@@00K_NAEBUIconData2@1@1PEAPEAUHBITMAP__@@@Z @ 0x1807421B4 (-CreateIconBitmap@ImmersiveIcons@@YAJUtagSIZE@@00K_NAEBUIconData2@1@1PEAPEAUHBITMAP__@@@Z.c)
 * Callees:
 *     ?LinearizeRGBColorValue@@YANN@Z @ 0x1807447A4 (-LinearizeRGBColorValue@@YANN@Z.c)
 */

double __fastcall CalculateColorLuminosity(int a1)
{
  double v2; // xmm6_8
  double v3; // xmm6_8

  v2 = LinearizeRGBColorValue((double)BYTE1(a1)) * 0.7151999999999999;
  v3 = v2 + LinearizeRGBColorValue((double)(unsigned __int8)a1) * 0.2126;
  return LinearizeRGBColorValue((double)BYTE2(a1)) * 0.0722 + v3;
}

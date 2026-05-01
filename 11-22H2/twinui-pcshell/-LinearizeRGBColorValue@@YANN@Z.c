/*
 * XREFs of ?LinearizeRGBColorValue@@YANN@Z @ 0x1807447A4
 * Callers:
 *     ?CalculateColorLuminosity@@YANK@Z @ 0x180741CC8 (-CalculateColorLuminosity@@YANK@Z.c)
 * Callees:
 *     pow @ 0x1801C74A0 (pow.c)
 */

double __fastcall LinearizeRGBColorValue(double a1)
{
  double v1; // xmm2_8

  v1 = a1 / 255.0;
  if ( a1 / 255.0 > 0.03928 )
    return pow((v1 + 0.055) / 1.055, 2.4);
  else
    return v1 / 12.92;
}

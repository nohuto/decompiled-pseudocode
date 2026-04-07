/*
 * XREFs of ?SetColor@CGlassColorizationResources@@QEAAXK@Z @ 0x1800BD3AC
 * Callers:
 *     ?UpdateColorizationColor@CTopLevelWindow@@AEAAJXZ @ 0x18002CD50 (-UpdateColorizationColor@CTopLevelWindow@@AEAAJXZ.c)
 * Callees:
 *     <none>
 */

void __fastcall CGlassColorizationResources::SetColor(CGlassColorizationResources *this, int a2)
{
  float v2; // xmm0_4

  *((float *)this + 4) = GammaLUT_sRGB_to_scRGB[(unsigned __int8)a2] / 255.0;
  *((float *)this + 5) = GammaLUT_sRGB_to_scRGB[(unsigned __int64)(unsigned __int16)a2 >> 8] / 255.0;
  v2 = GammaLUT_sRGB_to_scRGB[BYTE2(a2)] / 255.0;
  *((_DWORD *)this + 7) = 1065353216;
  *((_DWORD *)this + 8) = 1065353216;
  *((float *)this + 6) = v2;
}

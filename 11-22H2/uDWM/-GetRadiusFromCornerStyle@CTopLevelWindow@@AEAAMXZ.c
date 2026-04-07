/*
 * XREFs of ?GetRadiusFromCornerStyle@CTopLevelWindow@@AEAAMXZ @ 0x1800E6008
 * Callers:
 *     ?UpdateAnimatedResources@CTopLevelWindow3D@@AEAAJXZ @ 0x180029050 (-UpdateAnimatedResources@CTopLevelWindow3D@@AEAAJXZ.c)
 * Callees:
 *     ?GetEffectiveCornerStyle@CTopLevelWindow@@AEAA?AW4CORNER_STYLE@@XZ @ 0x180023214 (-GetEffectiveCornerStyle@CTopLevelWindow@@AEAA-AW4CORNER_STYLE@@XZ.c)
 */

float __fastcall CTopLevelWindow::GetRadiusFromCornerStyle(CTopLevelWindow *this)
{
  float v1; // xmm6_4
  int v2; // eax
  int v3; // eax

  v1 = 0.0;
  v2 = CTopLevelWindow::GetEffectiveCornerStyle((__int64)this) - 2;
  if ( !v2 )
    return FLOAT_8_0;
  v3 = v2 - 1;
  if ( !v3 )
    return FLOAT_4_0;
  if ( v3 == 1 )
    return FLOAT_8_0;
  return v1;
}

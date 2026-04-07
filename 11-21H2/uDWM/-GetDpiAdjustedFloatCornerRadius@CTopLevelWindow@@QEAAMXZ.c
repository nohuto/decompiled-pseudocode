/*
 * XREFs of ?GetDpiAdjustedFloatCornerRadius@CTopLevelWindow@@QEAAMXZ @ 0x180006770
 * Callers:
 *     ?UpdateAnimatedResources@CTopLevelWindow3D@@AEAAJXZ @ 0x18002BF30 (-UpdateAnimatedResources@CTopLevelWindow3D@@AEAAJXZ.c)
 * Callees:
 *     ?GetRadiusFromCornerStyle@CTopLevelWindow@@AEAAMXZ @ 0x1800067AC (-GetRadiusFromCornerStyle@CTopLevelWindow@@AEAAMXZ.c)
 */

float __fastcall CTopLevelWindow::GetDpiAdjustedFloatCornerRadius(CTopLevelWindow *this)
{
  return (float)(CTopLevelWindow::GetRadiusFromCornerStyle(this) * (float)*(int *)(*((_QWORD *)this + 94) + 348LL))
       / 96.0;
}

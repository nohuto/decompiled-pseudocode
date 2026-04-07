/*
 * XREFs of ?ShouldFreezeAnimationCVI@CTopLevelWindow3D@@AEBA_NXZ @ 0x18000FF00
 * Callers:
 *     ?OnSizeChanged@CTopLevelWindow3D@@UEAAXPEBVCSecondaryWindowRepresentation@@@Z @ 0x18000FE80 (-OnSizeChanged@CTopLevelWindow3D@@UEAAXPEBVCSecondaryWindowRepresentation@@@Z.c)
 *     ?EnsureRenderData@CTopLevelWindow3D@@AEAAJXZ @ 0x180029E9C (-EnsureRenderData@CTopLevelWindow3D@@AEAAJXZ.c)
 * Callees:
 *     <none>
 */

bool __fastcall CTopLevelWindow3D::ShouldFreezeAnimationCVI(CTopLevelWindow3D *this)
{
  int v1; // eax

  v1 = *((_DWORD *)this + 96);
  return v1 == 6 || v1 == 3;
}

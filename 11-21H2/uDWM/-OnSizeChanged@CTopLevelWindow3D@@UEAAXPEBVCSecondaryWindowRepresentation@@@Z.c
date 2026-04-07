/*
 * XREFs of ?OnSizeChanged@CTopLevelWindow3D@@UEAAXPEBVCSecondaryWindowRepresentation@@@Z @ 0x18000FE80
 * Callers:
 *     <none>
 * Callees:
 *     ?IsMaximizeSnapAnimationRejuvenationEnabled@CDesktopManager@@SAHXZ @ 0x18000D5F8 (-IsMaximizeSnapAnimationRejuvenationEnabled@CDesktopManager@@SAHXZ.c)
 *     ?ShouldFreezeAnimationCVI@CTopLevelWindow3D@@AEBA_NXZ @ 0x18000FF00 (-ShouldFreezeAnimationCVI@CTopLevelWindow3D@@AEBA_NXZ.c)
 *     ?StartAnimation@CTopLevelWindow3D@@QEAAJW4WindowAnimationType@1@@Z @ 0x180024CFC (-StartAnimation@CTopLevelWindow3D@@QEAAJW4WindowAnimationType@1@@Z.c)
 *     ?StopAnimation@CTopLevelWindow3D@@QEAAJXZ @ 0x180027828 (-StopAnimation@CTopLevelWindow3D@@QEAAJXZ.c)
 */

void __fastcall CTopLevelWindow3D::OnSizeChanged(
        CTopLevelWindow3D *this,
        const struct CSecondaryWindowRepresentation *a2,
        __int64 a3)
{
  char *v3; // rbx
  int v4; // eax
  __int64 v5; // rax
  CRenderDataVisual *v6; // rcx
  unsigned int v7; // eax
  int v8; // ecx

  v3 = (char *)this - 288;
  v4 = *((_DWORD *)this + 25);
  if ( !v4 || *((_DWORD *)v3 + 96) == v4 )
  {
    v5 = *((_QWORD *)v3 + 46);
    if ( v5
      && !*(_BYTE *)(v5 + 72)
      && !CTopLevelWindow3D::ShouldFreezeAnimationCVI((CTopLevelWindow3D *)((char *)this - 288)) )
    {
      CRenderDataVisual::ClearInstructions(v6);
    }
  }
  else if ( !(unsigned int)CDesktopManager::IsMaximizeSnapAnimationRejuvenationEnabled((__int64)this, (__int64)a2, a3)
         || (v7 = *((_DWORD *)v3 + 97), v7 > 0xD)
         || (v8 = 12308, !_bittest(&v8, v7)) )
  {
    if ( !EqualRect((const RECT *)(*((_QWORD *)v3 + 42) + 48LL), (const RECT *)(v3 + 316)) )
    {
      if ( *((_QWORD *)v3 + 46) )
        CTopLevelWindow3D::StopAnimation((CTopLevelWindow3D *)v3);
      CTopLevelWindow3D::StartAnimation(v3, *((unsigned int *)v3 + 97));
    }
  }
}

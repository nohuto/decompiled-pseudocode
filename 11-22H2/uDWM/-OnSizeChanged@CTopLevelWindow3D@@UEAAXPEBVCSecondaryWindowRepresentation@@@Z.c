/*
 * XREFs of ?OnSizeChanged@CTopLevelWindow3D@@UEAAXPEBVCSecondaryWindowRepresentation@@@Z @ 0x180054720
 * Callers:
 *     <none>
 * Callees:
 *     ?IsMaximizeSnapAnimationRejuvenationEnabled@CDesktopManager@@SAHXZ @ 0x18001DA8C (-IsMaximizeSnapAnimationRejuvenationEnabled@CDesktopManager@@SAHXZ.c)
 *     ?StartAnimation@CTopLevelWindow3D@@QEAAJW4WindowAnimationType@1@@Z @ 0x18001F964 (-StartAnimation@CTopLevelWindow3D@@QEAAJW4WindowAnimationType@1@@Z.c)
 *     ?StopAnimation@CTopLevelWindow3D@@QEAAJXZ @ 0x180034730 (-StopAnimation@CTopLevelWindow3D@@QEAAJXZ.c)
 *     ?ShouldFreezeAnimationCVI@CTopLevelWindow3D@@AEBA_NXZ @ 0x1800547A0 (-ShouldFreezeAnimationCVI@CTopLevelWindow3D@@AEBA_NXZ.c)
 */

void __fastcall CTopLevelWindow3D::OnSizeChanged(
        CTopLevelWindow3D *this,
        const struct CSecondaryWindowRepresentation *a2)
{
  char *v2; // rbx
  int v3; // eax
  __int64 v4; // rax
  CRenderDataVisual *v5; // rcx
  unsigned int v6; // eax
  int v7; // ecx
  __int64 v8; // rdx
  __int64 v9; // r8

  v2 = (char *)this - 288;
  v3 = *((_DWORD *)this + 25);
  if ( !v3 || *((_DWORD *)v2 + 96) == v3 )
  {
    v4 = *((_QWORD *)v2 + 46);
    if ( v4
      && !*(_BYTE *)(v4 + 72)
      && !CTopLevelWindow3D::ShouldFreezeAnimationCVI((CTopLevelWindow3D *)((char *)this - 288)) )
    {
      CRenderDataVisual::ClearInstructions(v5);
    }
  }
  else if ( !(unsigned int)CDesktopManager::IsMaximizeSnapAnimationRejuvenationEnabled((__int64)this, (__int64)a2)
         || (v6 = *((_DWORD *)v2 + 97), v6 > 0x12)
         || (v7 = 274452, !_bittest(&v7, v6)) )
  {
    if ( !EqualRect((const RECT *)(*((_QWORD *)v2 + 42) + 48LL), (const RECT *)v2 + 20) )
    {
      if ( *((_QWORD *)v2 + 46) )
        CTopLevelWindow3D::StopAnimation((CTopLevelWindow3D *)v2, v8, v9);
      CTopLevelWindow3D::StartAnimation((__int64)v2, *((_DWORD *)v2 + 97));
    }
  }
}

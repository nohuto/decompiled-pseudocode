/*
 * XREFs of ?CreateTargetForCoreWindow@Compositor@Composition@UI@Windows@@QEAAJPEAPEAUICompositionTarget@234@@Z @ 0x18010F498
 * Callers:
 *     ?CreateTargetForCurrentView@Api@Compositor@Composition@UI@Windows@@UEAAJPEAPEAUICompositionTarget@345@@Z @ 0x18010F8B0 (-CreateTargetForCurrentView@Api@Compositor@Composition@UI@Windows@@UEAAJPEAPEAUICompositionTarge.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000B7B0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@NestableRuntimeClass@WRL2@Microsoft@@QEAAKXZ @ 0x18007BB44 (-InternalRelease@NestableRuntimeClass@WRL2@Microsoft@@QEAAKXZ.c)
 *     ?CreateTargetForCoreWindow@Compositor@Composition@UI@Windows@@QEAAJPEAPEAVCompositionIslandTarget@234@@Z @ 0x18010F540 (-CreateTargetForCoreWindow@Compositor@Composition@UI@Windows@@QEAAJPEAPEAVCompositionIslandTarge.c)
 *     ?CreateTargetForCoreWindow@Compositor@Composition@UI@Windows@@QEAAJPEAPEAVCompositionTarget@234@@Z @ 0x18010F780 (-CreateTargetForCoreWindow@Compositor@Composition@UI@Windows@@QEAAJPEAPEAVCompositionTarget@234@.c)
 */

__int64 __fastcall Windows::UI::Composition::Compositor::CreateTargetForCoreWindow(
        Windows::UI::Composition::Compositor *this,
        struct Windows::UI::Composition::ICompositionTarget **a2)
{
  int v3; // edi
  __int64 v4; // rdx
  Microsoft::WRL2::NestableRuntimeClass *v6; // rax
  unsigned __int64 v7; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  Microsoft::WRL2::NestableRuntimeClass *v9; // [rsp+38h] [rbp+10h] BYREF

  *a2 = 0LL;
  v9 = 0LL;
  if ( Windows::UI::Composition::Compositor::s_transformMode )
  {
    v3 = Windows::UI::Composition::Compositor::CreateTargetForCoreWindow(this, &v9);
    if ( v3 < 0 )
    {
      v4 = 513LL;
      goto LABEL_4;
    }
    v6 = v9;
    v7 = (unsigned __int64)v9 + 128;
LABEL_11:
    *a2 = (struct Windows::UI::Composition::ICompositionTarget *)(v7 & ((unsigned __int128)-(__int128)(unsigned __int64)v6 >> 64));
    return 0LL;
  }
  v3 = Windows::UI::Composition::Compositor::CreateTargetForCoreWindow(this, &v9);
  if ( v3 >= 0 )
  {
    v6 = v9;
    v7 = (unsigned __int64)v9 + 152;
    goto LABEL_11;
  }
  v4 = 504LL;
LABEL_4:
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v4,
    (int)"onecoreuap\\windows\\dwm\\dcomp\\winrtnested\\global\\wrtcompositorg.cpp",
    (const char *)(unsigned int)v3);
  if ( v9 )
    Microsoft::WRL2::NestableRuntimeClass::InternalRelease(v9);
  return (unsigned int)v3;
}

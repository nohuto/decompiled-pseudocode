/*
 * XREFs of ?SetSystemBackdrop@SystemBackdropHelper@Composition@UI@Windows@@QEAAJPEAVCompositionBrush@234@@Z @ 0x18001597C
 * Callers:
 *     ?SetSystemBackdrop@?$GlobalDesktopWindowTargetImpl@VInteropCompositionTarget@Composition@UI@Windows@@@Desktop@Composition@UI@Windows@@MEAAJPEAUICompositionBrush@345@@Z @ 0x1800157E0 (-SetSystemBackdrop@-$GlobalDesktopWindowTargetImpl@VInteropCompositionTarget@Composition@UI@Wind.c)
 *     ?SetSystemBackdrop@GlobalCompositionTarget@Composition@UI@Windows@@MEAAJPEAVCompositionBrush@234@@Z @ 0x180158E00 (-SetSystemBackdrop@GlobalCompositionTarget@Composition@UI@Windows@@MEAAJPEAVCompositionBrush@234.c)
 *     ?SetSystemBackdrop@?$GlobalDesktopWindowTargetImpl@VDesktopWindowTarget@Desktop@Composition@UI@Windows@@@Desktop@Composition@UI@Windows@@MEAAJPEAUICompositionBrush@345@@Z @ 0x18016F750 (-SetSystemBackdrop@-$GlobalDesktopWindowTargetImpl@VDesktopWindowTarget@Desktop@Composition@UI@W.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000B7B0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?RemoveAllChildren@Visual@Composition@UI@Windows@@QEAAJXZ @ 0x18000F4C8 (-RemoveAllChildren@Visual@Composition@UI@Windows@@QEAAJXZ.c)
 *     ?EnsureSystemBackdropVisual@SystemBackdropHelper@Composition@UI@Windows@@AEAAJXZ @ 0x1800159D0 (-EnsureSystemBackdropVisual@SystemBackdropHelper@Composition@UI@Windows@@AEAAJXZ.c)
 *     ?SetBrush@SpriteVisual@Composition@UI@Windows@@QEAAXPEAVCompositionBrush@234@@Z @ 0x180015AF4 (-SetBrush@SpriteVisual@Composition@UI@Windows@@QEAAXPEAVCompositionBrush@234@@Z.c)
 *     ?InternalRelease@NestableRuntimeClass@WRL2@Microsoft@@QEAAKXZ @ 0x18007BB44 (-InternalRelease@NestableRuntimeClass@WRL2@Microsoft@@QEAAKXZ.c)
 */

__int64 __fastcall Windows::UI::Composition::SystemBackdropHelper::SetSystemBackdrop(
        Windows::UI::Composition::SpriteVisual **this,
        struct Windows::UI::Composition::CompositionBrush *a2)
{
  int v4; // edi
  __int64 v6; // rdx
  Windows::UI::Composition::Visual *v7; // rcx
  int v8; // eax
  Microsoft::WRL2::NestableRuntimeClass *v9; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  if ( a2 )
  {
    v4 = Windows::UI::Composition::SystemBackdropHelper::EnsureSystemBackdropVisual((Windows::UI::Composition::SystemBackdropHelper *)this);
    if ( v4 >= 0 )
    {
      Windows::UI::Composition::SpriteVisual::SetBrush(this[3], a2);
      return 0LL;
    }
    v6 = 44LL;
  }
  else
  {
    v7 = this[2];
    if ( !v7 )
      return 0LL;
    v8 = Windows::UI::Composition::Visual::RemoveAllChildren(v7);
    v4 = v8;
    if ( v8 >= 0 )
    {
      v9 = this[3];
      if ( v9 )
      {
        this[3] = 0LL;
        Microsoft::WRL2::NestableRuntimeClass::InternalRelease(v9);
      }
      return 0LL;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x90,
      (int)"onecoreuap\\windows\\dwm\\dcomp\\winrtnested\\global\\systembackdrophelper.cpp",
      (const char *)(unsigned int)v8);
    v6 = 49LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v6,
    (int)"onecoreuap\\windows\\dwm\\dcomp\\winrtnested\\global\\systembackdrophelper.cpp",
    (const char *)(unsigned int)v4);
  return (unsigned int)v4;
}

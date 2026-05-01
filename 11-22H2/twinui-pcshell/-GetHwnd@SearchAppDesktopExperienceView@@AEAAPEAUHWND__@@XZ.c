/*
 * XREFs of ?GetHwnd@SearchAppDesktopExperienceView@@AEAAPEAUHWND__@@XZ @ 0x180478F5C
 * Callers:
 *     ?CreateSearchAltTabProxyWindow@SearchAppDesktopExperienceView@@AEAAXXZ @ 0x1804782B4 (-CreateSearchAltTabProxyWindow@SearchAppDesktopExperienceView@@AEAAXXZ.c)
 *     ?ShowBorder@SearchAppDesktopExperienceView@@AEAAJPEAUtagRECT@@@Z @ 0x18047CA20 (-ShowBorder@SearchAppDesktopExperienceView@@AEAAJPEAUtagRECT@@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ @ 0x180041820 (-InternalRelease@-$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?WindowFromViewWrapper@ExperienceManagerUtils@@YAPEAUHWND__@@PEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@@Z @ 0x1800B879C (-WindowFromViewWrapper@ExperienceManagerUtils@@YAPEAUHWND__@@PEAUIViewWrapper@ViewManagerInterop.c)
 *     ?GetViewWrapper@SearchAppDesktopExperienceView@@AEAA?AV?$ComPtr@UIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@@WRL@Microsoft@@XZ @ 0x1804797D8 (-GetViewWrapper@SearchAppDesktopExperienceView@@AEAA-AV-$ComPtr@UIViewWrapper@ViewManagerInterop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall SearchAppDesktopExperienceView::GetHwnd(SearchAppDesktopExperienceView *this)
{
  struct Windows::Internal::Shell::ViewManagerInterop::IViewWrapper *v1; // rdx
  __int64 v2; // rbx
  ExperienceManagerUtils *v4; // [rsp+38h] [rbp+10h] BYREF

  SearchAppDesktopExperienceView::GetViewWrapper(this, &v4);
  v2 = 0LL;
  if ( v4 )
    v2 = ExperienceManagerUtils::WindowFromViewWrapper(v4, v1);
  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)&v4);
  return v2;
}

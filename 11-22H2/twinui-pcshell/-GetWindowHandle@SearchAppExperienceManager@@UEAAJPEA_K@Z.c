/*
 * XREFs of ?GetWindowHandle@SearchAppExperienceManager@@UEAAJPEA_K@Z @ 0x18045DD50
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ @ 0x180041820 (-InternalRelease@-$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?WindowFromViewWrapper@ExperienceManagerUtils@@YAPEAUHWND__@@PEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@@Z @ 0x1800B879C (-WindowFromViewWrapper@ExperienceManagerUtils@@YAPEAUHWND__@@PEAUIViewWrapper@ViewManagerInterop.c)
 *     ?_GetViewWrapper@SearchAppExperienceManager@@AEAA?AV?$ComPtr@UIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@@WRL@Microsoft@@XZ @ 0x18045F4DC (-_GetViewWrapper@SearchAppExperienceManager@@AEAA-AV-$ComPtr@UIViewWrapper@ViewManagerInterop@Sh.c)
 */

__int64 __fastcall SearchAppExperienceManager::GetWindowHandle(SearchAppExperienceManager *this, unsigned __int64 *a2)
{
  struct Windows::Internal::Shell::ViewManagerInterop::IViewWrapper *v3; // rdx
  __int64 v4; // rbx
  ExperienceManagerUtils *v6; // [rsp+38h] [rbp+10h] BYREF

  SearchAppExperienceManager::_GetViewWrapper(this, &v6);
  v4 = 0LL;
  if ( v6 )
    v4 = ExperienceManagerUtils::WindowFromViewWrapper(v6, v3);
  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)&v6);
  *a2 = v4;
  return v4 == 0 ? 0x8007139F : 0;
}

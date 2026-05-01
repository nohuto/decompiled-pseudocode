/*
 * XREFs of ?GetWindowHandle@CortanaSharedExperienceManager@@UEAAJPEA_K@Z @ 0x180359A40
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180033E60 (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?WindowFromViewWrapper@ExperienceManagerUtils@@YAPEAUHWND__@@PEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@@Z @ 0x1800C912C (-WindowFromViewWrapper@ExperienceManagerUtils@@YAPEAUHWND__@@PEAUIViewWrapper@ViewManagerInterop.c)
 *     ?_GetViewWrapper@CortanaSharedExperienceManager@@AEAA?AV?$ComPtr@UIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@@WRL@Microsoft@@XZ @ 0x18035D920 (-_GetViewWrapper@CortanaSharedExperienceManager@@AEAA-AV-$ComPtr@UIViewWrapper@ViewManagerIntero.c)
 */

__int64 __fastcall CortanaSharedExperienceManager::GetWindowHandle(
        CortanaSharedExperienceManager *this,
        unsigned __int64 *a2)
{
  struct Windows::Internal::Shell::ViewManagerInterop::IViewWrapper *v3; // rdx
  __int64 v4; // rbx
  ExperienceManagerUtils *v6; // [rsp+38h] [rbp+10h] BYREF

  CortanaSharedExperienceManager::_GetViewWrapper(this, &v6);
  v4 = 0LL;
  if ( v6 )
    v4 = ExperienceManagerUtils::WindowFromViewWrapper(v6, v3);
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&v6);
  *a2 = v4;
  return v4 == 0 ? 0x8007139F : 0;
}

/*
 * XREFs of ?GetWindowHandle@CStartExperienceManager@@UEAAJPEA_K@Z @ 0x18005F360
 * Callers:
 *     ?GetStartBox@CStartExperienceManager@@UEAAJPEAURect@Foundation@Windows@@@Z @ 0x180444E50 (-GetStartBox@CStartExperienceManager@@UEAAJPEAURect@Foundation@Windows@@@Z.c)
 * Callees:
 *     ?WindowFromViewWrapper@ExperienceManagerUtils@@YAPEAUHWND__@@PEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@@Z @ 0x1800B879C (-WindowFromViewWrapper@ExperienceManagerUtils@@YAPEAUHWND__@@PEAUIViewWrapper@ViewManagerInterop.c)
 */

__int64 __fastcall CStartExperienceManager::GetWindowHandle(
        CStartExperienceManager *this,
        struct Windows::Internal::Shell::ViewManagerInterop::IViewWrapper *a2)
{
  ExperienceManagerUtils *v2; // rcx

  v2 = (ExperienceManagerUtils *)*((_QWORD *)this + 38);
  if ( !v2 )
    return 2147947423LL;
  *(_QWORD *)a2 = ExperienceManagerUtils::WindowFromViewWrapper(v2, a2);
  return 0LL;
}

/*
 * XREFs of ?IsValidHwnd@CUndockedSearchAppExperienceManagerConfig@@UEAA_NPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@@Z @ 0x18006B130
 * Callers:
 *     <none>
 * Callees:
 *     ?WindowFromViewWrapper@ExperienceManagerUtils@@YAPEAUHWND__@@PEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@@Z @ 0x1800B879C (-WindowFromViewWrapper@ExperienceManagerUtils@@YAPEAUHWND__@@PEAUIViewWrapper@ViewManagerInterop.c)
 */

bool __fastcall CUndockedSearchAppExperienceManagerConfig::IsValidHwnd(
        CUndockedSearchAppExperienceManagerConfig *this,
        struct Windows::Internal::Shell::ViewManagerInterop::IViewWrapper *a2)
{
  HWND v2; // rax

  return a2 && (v2 = ExperienceManagerUtils::WindowFromViewWrapper(a2, a2)) != 0LL && IsWindow(v2);
}

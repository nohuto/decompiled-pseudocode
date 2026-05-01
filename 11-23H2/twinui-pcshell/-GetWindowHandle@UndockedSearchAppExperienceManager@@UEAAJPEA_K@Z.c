/*
 * XREFs of ?GetWindowHandle@UndockedSearchAppExperienceManager@@UEAAJPEA_K@Z @ 0x1800B8700
 * Callers:
 *     <none>
 * Callees:
 *     ?WindowFromViewWrapper@ExperienceManagerUtils@@YAPEAUHWND__@@PEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@@Z @ 0x1800B879C (-WindowFromViewWrapper@ExperienceManagerUtils@@YAPEAUHWND__@@PEAUIViewWrapper@ViewManagerInterop.c)
 */

__int64 __fastcall UndockedSearchAppExperienceManager::GetWindowHandle(
        UndockedSearchAppExperienceManager *this,
        struct Windows::Internal::Shell::ViewManagerInterop::IViewWrapper *a2)
{
  ExperienceManagerUtils *v3; // rcx
  HWND v4; // rax

  *(_QWORD *)a2 = 0LL;
  v3 = (ExperienceManagerUtils *)*((_QWORD *)this + 8);
  if ( !v3 )
    return 2147943568LL;
  v4 = ExperienceManagerUtils::WindowFromViewWrapper(v3, a2);
  *(_QWORD *)a2 = v4;
  return v4 == 0LL ? 0x8007139F : 0;
}

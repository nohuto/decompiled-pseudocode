/*
 * XREFs of ?IsViewVisible@CUndockedSearchAppExperienceManagerConfig@@UEAA_NPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@@Z @ 0x1800C90D0
 * Callers:
 *     <none>
 * Callees:
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800B7A84 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?WindowFromViewWrapper@ExperienceManagerUtils@@YAPEAUHWND__@@PEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@@Z @ 0x1800C912C (-WindowFromViewWrapper@ExperienceManagerUtils@@YAPEAUHWND__@@PEAUIViewWrapper@ViewManagerInterop.c)
 */

bool __fastcall CUndockedSearchAppExperienceManagerConfig::IsViewVisible(
        CUndockedSearchAppExperienceManagerConfig *this,
        struct Windows::Internal::Shell::ViewManagerInterop::IViewWrapper *a2)
{
  HWND v2; // rax
  HRESULT WindowAttribute; // eax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  int pvAttribute; // [rsp+38h] [rbp+10h] BYREF

  if ( !a2 )
    return 0;
  v2 = ExperienceManagerUtils::WindowFromViewWrapper(a2, a2);
  if ( !v2 )
    return 0;
  pvAttribute = 1;
  WindowAttribute = DwmGetWindowAttribute(v2, 0xEu, &pvAttribute, 4u);
  if ( WindowAttribute < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x1CB,
      (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\undockedsearchappexperiencemanager.cpp",
      (const char *)(unsigned int)WindowAttribute);
  return pvAttribute == 0;
}

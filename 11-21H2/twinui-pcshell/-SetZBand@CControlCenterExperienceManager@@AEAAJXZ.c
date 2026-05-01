/*
 * XREFs of ?SetZBand@CControlCenterExperienceManager@@AEAAJXZ @ 0x18003D194
 * Callers:
 *     ?OnViewCreated@CControlCenterExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@@Z @ 0x18003D100 (-OnViewCreated@CControlCenterExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800917F4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?WindowFromViewWrapper@ExperienceManagerUtils@@YAPEAUHWND__@@PEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@@Z @ 0x1800C912C (-WindowFromViewWrapper@ExperienceManagerUtils@@YAPEAUHWND__@@PEAUIViewWrapper@ViewManagerInterop.c)
 *     ?Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x180166104 (-Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 *     ?SetWindowBand@CSingleViewShellExperience@@QEAAJW4ZBID@@@Z @ 0x18017E4E4 (-SetWindowBand@CSingleViewShellExperience@@QEAAJW4ZBID@@@Z.c)
 */

__int64 __fastcall CControlCenterExperienceManager::SetZBand(CControlCenterExperienceManager *this)
{
  int v2; // eax
  struct Windows::Internal::Shell::ViewManagerInterop::IViewWrapper *v3; // rdx
  unsigned int v4; // edi
  HWND v5; // rax
  const char *v6; // r9
  int v8; // [rsp+20h] [rbp-28h]
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]

  if ( !*((_QWORD *)this + 18) )
    return 0LL;
  v2 = CSingleViewShellExperience::SetWindowBand((char *)this + 120, 4LL);
  v4 = v2;
  if ( v2 >= 0 )
  {
    v5 = ExperienceManagerUtils::WindowFromViewWrapper(*((ExperienceManagerUtils **)this + 18), v3);
    if ( v5 && SetWindowPos(v5, HWND_MESSAGE|0x2LL, 0, 0, 0, 0, 0x13u) )
      return wil::details::in1diag3::Return_GetLastError(
               retaddr,
               (void *)0x596,
               (unsigned int)"pcshell\\twinui\\experiencemanagers\\lib\\controlcenterexperiencemanager.cpp",
               v6);
    return 0LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x590,
    (unsigned int)"pcshell\\twinui\\experiencemanagers\\lib\\controlcenterexperiencemanager.cpp",
    (const char *)(unsigned int)v2,
    v8);
  return v4;
}

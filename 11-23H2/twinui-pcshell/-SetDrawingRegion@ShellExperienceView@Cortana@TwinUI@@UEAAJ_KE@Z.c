/*
 * XREFs of ?SetDrawingRegion@ShellExperienceView@Cortana@TwinUI@@UEAAJ_KE@Z @ 0x18046FCC0
 * Callers:
 *     <none>
 * Callees:
 *     ?WindowFromViewWrapper@ExperienceManagerUtils@@YAPEAUHWND__@@PEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@@Z @ 0x1800B879C (-WindowFromViewWrapper@ExperienceManagerUtils@@YAPEAUHWND__@@PEAUIViewWrapper@ViewManagerInterop.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131A24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x1801C6750 (__security_check_cookie.c)
 *     ?_Log_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x1803A43A8 (-_Log_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?SetWindowRegionAsync@ShellExperienceView@Cortana@TwinUI@@AEAAJPEAUHWND__@@PEAUHRGN__@@H@Z @ 0x18046FE50 (-SetWindowRegionAsync@ShellExperienceView@Cortana@TwinUI@@AEAAJPEAUHWND__@@PEAUHRGN__@@H@Z.c)
 */

__int64 __fastcall TwinUI::Cortana::ShellExperienceView::SetDrawingRegion(
        TwinUI::Cortana::ShellExperienceView *this,
        struct Windows::Internal::Shell::ViewManagerInterop::IViewWrapper *a2,
        unsigned __int8 a3)
{
  int v3; // r14d
  ExperienceManagerUtils *v6; // rcx
  HWND v7; // rax
  HWND v8; // rbx
  int v9; // eax
  unsigned int v10; // edi
  const char *v12; // r9
  __int64 v13; // rdx
  int RgnBox; // eax
  __int64 v15; // rdi
  int v16; // eax
  unsigned int v17; // esi
  struct tagRECT rc; // [rsp+20h] [rbp-48h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+0h]

  v3 = a3;
  v6 = (ExperienceManagerUtils *)*((_QWORD *)this + 9);
  if ( !v6 )
    return 0LL;
  v7 = (HWND)ExperienceManagerUtils::WindowFromViewWrapper(v6, a2);
  v8 = v7;
  if ( !v7 )
    return 0LL;
  if ( !a2 )
  {
    v9 = TwinUI::Cortana::ShellExperienceView::SetWindowRegionAsync(this, v7, 0LL, v3);
    v10 = v9;
    if ( v9 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x8B,
        (int)"pcshell\\twinui\\experiencemanagers\\lib\\cortanashellexperienceview.cpp",
        (const char *)(unsigned int)v9);
      return v10;
    }
    if ( SetPropW(v8, L"UIA_WindowVisibilityOverridden", 0LL) )
      return 0LL;
    v13 = 142LL;
    goto LABEL_16;
  }
  rc = 0LL;
  RgnBox = GetRgnBox((HRGN)a2, &rc);
  v15 = 2LL;
  if ( RgnBox != 1 && (RgnBox != 2 || !IsRectEmpty(&rc)) )
    v15 = 0LL;
  v16 = TwinUI::Cortana::ShellExperienceView::SetWindowRegionAsync(this, v8, (HRGN)a2, v3);
  v17 = v16;
  if ( v16 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x96,
      (int)"pcshell\\twinui\\experiencemanagers\\lib\\cortanashellexperienceview.cpp",
      (const char *)(unsigned int)v16);
    return v17;
  }
  if ( !SetPropW(v8, L"UIA_WindowVisibilityOverridden", (HANDLE)v15) )
  {
    v13 = 153LL;
LABEL_16:
    wil::details::in1diag3::_Log_GetLastError(
      retaddr,
      (void *)v13,
      (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\cortanashellexperienceview.cpp",
      v12);
  }
  return 0LL;
}

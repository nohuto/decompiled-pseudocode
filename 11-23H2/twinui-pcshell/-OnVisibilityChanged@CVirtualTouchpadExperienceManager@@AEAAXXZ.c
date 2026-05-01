/*
 * XREFs of ?OnVisibilityChanged@CVirtualTouchpadExperienceManager@@AEAAXXZ @ 0x180453F40
 * Callers:
 *     ?OnViewDestroyed@CVirtualTouchpadExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@@Z @ 0x180453CC0 (-OnViewDestroyed@CVirtualTouchpadExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@@Z.c)
 *     ?OnViewShown@CVirtualTouchpadExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@@Z @ 0x180453E10 (-OnViewShown@CVirtualTouchpadExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@@Z.c)
 * Callees:
 *     ?ReportVisibility@?$consume_WindowsUdk_UI_Shell_IShellViewCoordinator@UIShellViewCoordinator@Shell@UI@WindowsUdk@winrt@@@impl@winrt@@QEBA@AEBW4ViewVisibility@Shell@UI@WindowsUdk@3@@Z @ 0x1800D6384 (-ReportVisibility@-$consume_WindowsUdk_UI_Shell_IShellViewCoordinator@UIShellViewCoordinator@She.c)
 */

void __fastcall CVirtualTouchpadExperienceManager::OnVisibilityChanged(CVirtualTouchpadExperienceManager *this)
{
  int v1; // edx
  _QWORD *v2; // rcx
  const char *v3; // r9
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  BOOL v5; // [rsp+30h] [rbp+8h] BYREF

  v1 = *((_DWORD *)this + 26);
  v2 = (_QWORD *)((char *)this + 816);
  v5 = v1 != 2;
  try
  {
    winrt::impl::consume_WindowsUdk_UI_Shell_IShellViewCoordinator<winrt::WindowsUdk::UI::Shell::IShellViewCoordinator>::ReportVisibility(
      v2,
      (unsigned int *)&v5);
  }
  catch ( ... )
  {
    wil::details::in1diag3::Log_CaughtException(
      retaddr,
      (void *)0x413,
      (int)"pcshell\\twinui\\experiencemanagers\\lib\\touchpadcontrollerexperiencemanager.cpp",
      v3);
  }
}

/*
 * XREFs of ?GetParentIfCoreWindow@GamingOverlayExperienceManager@@AEAAPEAUHWND__@@PEAU2@@Z @ 0x18033197C
 * Callers:
 *     ?GetTargetWindowRect@GamingOverlayExperienceManager@@UEAAJ_KPEAH111@Z @ 0x180332300 (-GetTargetWindowRect@GamingOverlayExperienceManager@@UEAAJ_KPEAH111@Z.c)
 *     ?RestoreTargetAfterTakingFocus@GamingOverlayExperienceManager@@UEAAJXZ @ 0x180338A80 (-RestoreTargetAfterTakingFocus@GamingOverlayExperienceManager@@UEAAJXZ.c)
 *     ?StartListeningForTargetWindowMoved@GamingOverlayExperienceManager@@UEAAJ_K@Z @ 0x180339D10 (-StartListeningForTargetWindowMoved@GamingOverlayExperienceManager@@UEAAJ_K@Z.c)
 *     ?StopListeningForTargetWindowMoved@GamingOverlayExperienceManager@@UEAAJ_K@Z @ 0x18033A750 (-StopListeningForTargetWindowMoved@GamingOverlayExperienceManager@@UEAAJ_K@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x1801881F0 (__security_check_cookie.c)
 *     memset_0 @ 0x180188F60 (memset_0.c)
 *     ?_Log_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x18019033C (-_Log_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 */

HWND __fastcall GamingOverlayExperienceManager::GetParentIfCoreWindow(GamingOverlayExperienceManager *this, HWND a2)
{
  const char *v3; // r9
  HWND Parent; // rax
  const char *v5; // r9
  WCHAR ClassName[128]; // [rsp+20h] [rbp-118h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+138h] [rbp+0h]

  memset_0(ClassName, 0, sizeof(ClassName));
  if ( !GetClassNameW(a2, ClassName, 128) )
    wil::details::in1diag3::_Log_GetLastError(
      retaddr,
      (void *)0x39D,
      (int)"pcshell\\twinui\\gamingoverlayexperiencemanager\\lib\\gamingoverlayexperiencemanager.cpp",
      v3);
  if ( !(unsigned int)_o__wcsicmp(L"Windows.UI.Core.CoreWindow", ClassName) )
  {
    Parent = GetParent(a2);
    if ( Parent )
      return Parent;
    else
      wil::details::in1diag3::_Log_GetLastError(
        retaddr,
        (void *)0x3A2,
        (int)"pcshell\\twinui\\gamingoverlayexperiencemanager\\lib\\gamingoverlayexperiencemanager.cpp",
        v5);
  }
  return a2;
}

/*
 * XREFs of ?GetParentIfCoreWindow@GamingOverlayExperienceManager@@AEAAPEAUHWND__@@PEAU2@@Z @ 0x1803FEF3C
 * Callers:
 *     ?GetTargetWindowRect@GamingOverlayExperienceManager@@UEAAJ_KPEAH111@Z @ 0x1803FF970 (-GetTargetWindowRect@GamingOverlayExperienceManager@@UEAAJ_KPEAH111@Z.c)
 *     ?RestoreTargetAfterTakingFocus@GamingOverlayExperienceManager@@UEAAJXZ @ 0x180406720 (-RestoreTargetAfterTakingFocus@GamingOverlayExperienceManager@@UEAAJXZ.c)
 *     ?StartListeningForTargetWindowMoved@GamingOverlayExperienceManager@@UEAAJ_K@Z @ 0x180407C10 (-StartListeningForTargetWindowMoved@GamingOverlayExperienceManager@@UEAAJ_K@Z.c)
 *     ?StopListeningForTargetWindowMoved@GamingOverlayExperienceManager@@UEAAJ_K@Z @ 0x180408680 (-StopListeningForTargetWindowMoved@GamingOverlayExperienceManager@@UEAAJ_K@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x1801C6750 (__security_check_cookie.c)
 *     memset_0 @ 0x1801C750C (memset_0.c)
 *     ?_Log_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x1803A43A8 (-_Log_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
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
      (void *)0x3B2,
      (__int64)"pcshell\\twinui\\gamingoverlayexperiencemanager\\lib\\gamingoverlayexperiencemanager.cpp",
      v3);
  if ( !(unsigned int)_o__wcsicmp(L"Windows.UI.Core.CoreWindow", ClassName) )
  {
    Parent = GetParent(a2);
    if ( Parent )
      return Parent;
    else
      wil::details::in1diag3::_Log_GetLastError(
        retaddr,
        (void *)0x3B7,
        (__int64)"pcshell\\twinui\\gamingoverlayexperiencemanager\\lib\\gamingoverlayexperiencemanager.cpp",
        v5);
  }
  return a2;
}

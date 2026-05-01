/*
 * XREFs of ?IsActiveSessionCountLimited@@YA_NXZ @ 0x1801334E0
 * Callers:
 *     ?ActivateInputAppOnFirstFocus@TabTipAdapter@KeyboardHosting@@AEAAJXZ @ 0x180133248 (-ActivateInputAppOnFirstFocus@TabTipAdapter@KeyboardHosting@@AEAAJXZ.c)
 *     _anonymous_namespace_::GetScreenClippingAUMID @ 0x180133B1C (_anonymous_namespace_--GetScreenClippingAUMID.c)
 *     ?ShouldDeferWidgetsInitialization@DashboardManager@implementation@Shell@Internal@Windows@winrt@@CA_NXZ @ 0x180155034 (-ShouldDeferWidgetsInitialization@DashboardManager@implementation@Shell@Internal@Windows@winrt@@.c)
 *     ?SetTrackSelectionPosition@TabTipAdapter@KeyboardHosting@@AEAAJ_N@Z @ 0x180185C88 (-SetTrackSelectionPosition@TabTipAdapter@KeyboardHosting@@AEAAJ_N@Z.c)
 *     ?IsAllowedSku@@YA_NXZ @ 0x1801AB410 (-IsAllowedSku@@YA_NXZ.c)
 *     CControlCenterExperienceManager::PrelaunchExperienceAsync$_ResumeCoro$1 @ 0x1801DF350 (CControlCenterExperienceManager--PrelaunchExperienceAsync$_ResumeCoro$1.c)
 *     ?IsStartMenuPrelaunchEnabled@XamlLauncher@@AEBA_NXZ @ 0x1801FF46C (-IsStartMenuPrelaunchEnabled@XamlLauncher@@AEBA_NXZ.c)
 *     _lambda_bf9996be8d7861ef8c6962c84bfc52ba_::operator() @ 0x1802181C8 (_lambda_bf9996be8d7861ef8c6962c84bfc52ba_--operator().c)
 * Callees:
 *     __security_check_cookie @ 0x1801C6750 (__security_check_cookie.c)
 *     memset_0 @ 0x1801C750C (memset_0.c)
 */

bool IsActiveSessionCountLimited(void)
{
  ULONGLONG v0; // rax
  DWORDLONG v1; // rbx
  bool v2; // di
  _OSVERSIONINFOEXW VersionInformation; // [rsp+20h] [rbp-138h] BYREF

  memset_0(&VersionInformation, 0, sizeof(VersionInformation));
  v0 = VerSetConditionMask(0LL, 0x40u, 6u);
  VersionInformation.dwOSVersionInfoSize = 284;
  v1 = v0;
  VersionInformation.wSuiteMask = 16;
  v2 = VerifyVersionInfoW(&VersionInformation, 0x40u, v0);
  VersionInformation.wSuiteMask = 256;
  return !(v2 & !VerifyVersionInfoW(&VersionInformation, 0x40u, v1));
}

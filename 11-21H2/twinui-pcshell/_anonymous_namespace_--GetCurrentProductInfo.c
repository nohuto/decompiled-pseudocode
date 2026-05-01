/*
 * XREFs of _anonymous_namespace_::GetCurrentProductInfo @ 0x1801C7E5C
 * Callers:
 *     winrt::Windows::Internal::Shell::implementation::DashboardManager::VerifyAndActivateAppAsync$_ResumeCoro$1 @ 0x1801CCCE0 (winrt--Windows--Internal--Shell--implementation--DashboardManager--VerifyAndActivateAppAsync$_Re.c)
 * Callees:
 *     __security_check_cookie @ 0x1801881F0 (__security_check_cookie.c)
 *     ?_Log_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x18019033C (-_Log_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 */

__int64 anonymous_namespace_::GetCurrentProductInfo()
{
  const char *v0; // r9
  __int64 v1; // rdx
  DWORD pdwReturnedProductType[4]; // [rsp+30h] [rbp-148h] BYREF
  struct _OSVERSIONINFOW VersionInformation; // [rsp+40h] [rbp-138h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+178h] [rbp+0h]

  VersionInformation.dwOSVersionInfoSize = 284;
  if ( !GetVersionExW(&VersionInformation) )
  {
    v1 = 208LL;
LABEL_3:
    wil::details::in1diag3::_Log_GetLastError(
      retaddr,
      (void *)v1,
      (int)"pcshell\\twinui\\dashboardmanager\\lib\\dashboardmanager.cpp",
      v0);
    return 0LL;
  }
  if ( !GetProductInfo(
          VersionInformation.dwMajorVersion,
          VersionInformation.dwMinorVersion,
          0,
          0,
          pdwReturnedProductType) )
  {
    v1 = 214LL;
    goto LABEL_3;
  }
  return pdwReturnedProductType[0];
}

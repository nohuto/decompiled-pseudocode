/*
 * XREFs of _anonymous_namespace_::RepairWebExperiencePackage @ 0x180241B24
 * Callers:
 *     winrt::Windows::Internal::Shell::implementation::DashboardManager::VerifyAndActivateAppAsync$_ResumeCoro$1 @ 0x180246660 (winrt--Windows--Internal--Shell--implementation--DashboardManager--VerifyAndActivateAppAsync$_Re.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x1801C706C (--2@YAPEAX_K@Z.c)
 *     _anonymous_namespace_::RepairWebExperiencePackage$_InitCoro$2 @ 0x180241554 (_anonymous_namespace_--RepairWebExperiencePackage$_InitCoro$2.c)
 */

winrt::Windows::Foundation::IUnknown *__fastcall anonymous_namespace_::RepairWebExperiencePackage(
        winrt::Windows::Foundation::IUnknown *a1)
{
  void *v2; // rax
  int v4; // [rsp+170h] [rbp+8h] BYREF

  v2 = operator new(0x131uLL);
  v4 = 0;
  anonymous_namespace_::RepairWebExperiencePackage__InitCoro_2(&v4, (__int64)v2 + 112, a1);
  return a1;
}

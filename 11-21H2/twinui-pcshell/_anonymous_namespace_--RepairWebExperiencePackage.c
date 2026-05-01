/*
 * XREFs of _anonymous_namespace_::RepairWebExperiencePackage @ 0x1801CA74C
 * Callers:
 *     winrt::Windows::Internal::Shell::implementation::DashboardManager::VerifyAndActivateAppAsync$_ResumeCoro$1 @ 0x1801CCCE0 (winrt--Windows--Internal--Shell--implementation--DashboardManager--VerifyAndActivateAppAsync$_Re.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x180188B1C (--2@YAPEAX_K@Z.c)
 *     _anonymous_namespace_::RepairWebExperiencePackage$_InitCoro$2 @ 0x1801CA104 (_anonymous_namespace_--RepairWebExperiencePackage$_InitCoro$2.c)
 */

__int64 __fastcall anonymous_namespace_::RepairWebExperiencePackage(__int64 a1)
{
  void *v2; // rax
  int v4; // [rsp+200h] [rbp+8h] BYREF

  v2 = operator new(0x1C1uLL);
  v4 = 0;
  anonymous_namespace_::RepairWebExperiencePackage__InitCoro_2(&v4, (__int64)v2 + 112, a1);
  return a1;
}

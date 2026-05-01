/*
 * XREFs of _anonymous_namespace_::EnsureWebExperiencePackageInstalled @ 0x1801C797C
 * Callers:
 *     _anonymous_namespace_::RepairWebExperiencePackage$_ResumeCoro$1 @ 0x1801CA220 (_anonymous_namespace_--RepairWebExperiencePackage$_ResumeCoro$1.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x180188B1C (--2@YAPEAX_K@Z.c)
 *     _anonymous_namespace_::EnsureWebExperiencePackageInstalled$_InitCoro$2 @ 0x1801C67B0 (_anonymous_namespace_--EnsureWebExperiencePackageInstalled$_InitCoro$2.c)
 */

__int64 __fastcall anonymous_namespace_::EnsureWebExperiencePackageInstalled(__int64 a1)
{
  void *v2; // rax
  int v4; // [rsp+890h] [rbp+8h] BYREF

  v2 = operator new(0x851uLL);
  v4 = 0;
  anonymous_namespace_::EnsureWebExperiencePackageInstalled__InitCoro_2(&v4, (__int64)v2 + 112, a1);
  return a1;
}

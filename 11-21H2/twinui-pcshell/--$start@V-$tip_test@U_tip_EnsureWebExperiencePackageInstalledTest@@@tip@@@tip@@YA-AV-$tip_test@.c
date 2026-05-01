/*
 * XREFs of ??$start@V?$tip_test@U_tip_EnsureWebExperiencePackageInstalledTest@@@tip@@@tip@@YA?AV?$tip_test@U_tip_EnsureWebExperiencePackageInstalledTest@@@0@XZ @ 0x1801C3630
 * Callers:
 *     _anonymous_namespace_::EnsureWebExperiencePackageInstalled$_ResumeCoro$1 @ 0x1801C68D0 (_anonymous_namespace_--EnsureWebExperiencePackageInstalled$_ResumeCoro$1.c)
 * Callees:
 *     ?start@?$tip_test@U_tip_EnsureWebExperiencePackageInstalledTest@@@tip@@QEAA?AU_GUID@@XZ @ 0x1801CFF10 (-start@-$tip_test@U_tip_EnsureWebExperiencePackageInstalledTest@@@tip@@QEAA-AU_GUID@@XZ.c)
 */

_QWORD *__fastcall tip::start<tip::tip_test<_tip_EnsureWebExperiencePackageInstalledTest>>(_QWORD *a1)
{
  _BYTE v3[24]; // [rsp+20h] [rbp-18h] BYREF

  *a1 = 0LL;
  a1[1] = 0LL;
  tip::tip_test<_tip_EnsureWebExperiencePackageInstalledTest>::start(a1, v3);
  return a1;
}

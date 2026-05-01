/*
 * XREFs of _anonymous_namespace_::IsWebExperiencePackageInstalled @ 0x1806972FC
 * Callers:
 *     _anonymous_namespace_::EnsureWebExperiencePackageInstalled$_ResumeCoro$1 @ 0x180239600 (_anonymous_namespace_--EnsureWebExperiencePackageInstalled$_ResumeCoro$1.c)
 * Callees:
 *     ?unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ @ 0x1800D5AF0 (-unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ.c)
 *     ??8Foundation@Windows@winrt@@YA_NAEBUIUnknown@012@0@Z @ 0x1800D5B1C (--8Foundation@Windows@winrt@@YA_NAEBUIUnknown@012@0@Z.c)
 *     _anonymous_namespace_::GetWebExperiencePackage @ 0x180696D00 (_anonymous_namespace_--GetWebExperiencePackage.c)
 */

bool anonymous_namespace_::IsWebExperiencePackageInstalled()
{
  bool v0; // bl
  void (__fastcall ***v2)(_QWORD, __int64 *, __int64 *); // [rsp+30h] [rbp+8h] BYREF
  __int64 v3; // [rsp+38h] [rbp+10h] BYREF

  anonymous_namespace_::GetWebExperiencePackage((void (__fastcall ***)(_QWORD, __int64 *, __int64 *))&v2);
  v3 = 0LL;
  v0 = winrt::Windows::Foundation::operator==(&v2, &v3) == 0;
  if ( v2 )
    winrt::Windows::Foundation::IUnknown::unconditional_release_ref((winrt::Windows::Foundation::IUnknown *)&v2);
  return v0;
}

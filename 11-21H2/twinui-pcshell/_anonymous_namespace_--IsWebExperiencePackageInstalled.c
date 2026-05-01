/*
 * XREFs of _anonymous_namespace_::IsWebExperiencePackageInstalled @ 0x1801C9048
 * Callers:
 *     _anonymous_namespace_::EnsureWebExperiencePackageInstalled$_ResumeCoro$1 @ 0x1801C68D0 (_anonymous_namespace_--EnsureWebExperiencePackageInstalled$_ResumeCoro$1.c)
 * Callees:
 *     ??1IElementCompositionPreviewStatics2@Hosting@Xaml@UI@Windows@winrt@@QEAA@XZ @ 0x180020128 (--1IElementCompositionPreviewStatics2@Hosting@Xaml@UI@Windows@winrt@@QEAA@XZ.c)
 *     ??8Foundation@Windows@winrt@@YA_NAEBUIUnknown@012@0@Z @ 0x1800F9DD8 (--8Foundation@Windows@winrt@@YA_NAEBUIUnknown@012@0@Z.c)
 *     _anonymous_namespace_::GetWebExperiencePackage @ 0x1801C8AC8 (_anonymous_namespace_--GetWebExperiencePackage.c)
 */

bool anonymous_namespace_::IsWebExperiencePackageInstalled()
{
  bool v0; // bl
  void (__fastcall ***v2)(_QWORD, __int64 *, __int64 *); // [rsp+30h] [rbp+8h] BYREF
  __int64 v3; // [rsp+38h] [rbp+10h] BYREF

  anonymous_namespace_::GetWebExperiencePackage((void (__fastcall ***)(_QWORD, __int64 *, __int64 *))&v2);
  v3 = 0LL;
  v0 = winrt::Windows::Foundation::operator==(&v2, &v3) == 0;
  winrt::Windows::UI::Xaml::Hosting::IElementCompositionPreviewStatics2::~IElementCompositionPreviewStatics2((winrt::Windows::UI::Xaml::Hosting::IElementCompositionPreviewStatics2 *)&v2);
  return v0;
}

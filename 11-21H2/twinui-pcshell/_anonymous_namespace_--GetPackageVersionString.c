/*
 * XREFs of _anonymous_namespace_::GetPackageVersionString @ 0x1801C8070
 * Callers:
 *     _anonymous_namespace_::EnsureWebExperiencePackageInstalled$_ResumeCoro$1 @ 0x1801C68D0 (_anonymous_namespace_--EnsureWebExperiencePackageInstalled$_ResumeCoro$1.c)
 * Callees:
 *     ??1IElementCompositionPreviewStatics2@Hosting@Xaml@UI@Windows@winrt@@QEAA@XZ @ 0x180020128 (--1IElementCompositionPreviewStatics2@Hosting@Xaml@UI@Windows@winrt@@QEAA@XZ.c)
 *     ??1?$unique_storage@U?$resource_policy@PEA_WP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEA_WPEA_W$0A@$$T@details@wil@@@details@wil@@IEAA@XZ @ 0x180064078 (--1-$unique_storage@U-$resource_policy@PEA_WP6AXPEAX@Z$1-CoTaskMemFree@@YAX0@ZU-$integral_consta.c)
 *     ??0?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAA@QEBG@Z @ 0x180089570 (--0-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAA@QEBG@Z.c)
 *     ?check_hresult@winrt@@YAXUhresult@1@@Z @ 0x1800F9C28 (-check_hresult@winrt@@YAXUhresult@1@@Z.c)
 *     ??8Foundation@Windows@winrt@@YA_NAEBUIUnknown@012@0@Z @ 0x1800F9DD8 (--8Foundation@Windows@winrt@@YA_NAEBUIUnknown@012@0@Z.c)
 *     ??$str_printf@V?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@@wil@@@wil@@YA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@@0@PEBGZZ @ 0x1801C369C (--$str_printf@V-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAGP6AXPEAX@Z$1-CoTaskMemFre.c)
 *     ?Id@?$consume_Windows_ApplicationModel_IPackage@UIPackage@ApplicationModel@Windows@winrt@@@impl@winrt@@QEBA?AUPackageId@ApplicationModel@Windows@3@XZ @ 0x1801C8CA0 (-Id@-$consume_Windows_ApplicationModel_IPackage@UIPackage@ApplicationModel@Windows@winrt@@@impl@.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=3
_QWORD *__fastcall anonymous_namespace_::GetPackageVersionString(
        _QWORD *a1,
        winrt::Windows::UI::Xaml::Hosting::IElementCompositionPreviewStatics2 *a2)
{
  _QWORD *v4; // rax
  unsigned int v5; // eax
  _QWORD *v6; // rax
  int v8; // [rsp+20h] [rbp-10h]
  int v9; // [rsp+28h] [rbp-8h]
  __int64 v10; // [rsp+60h] [rbp+30h] BYREF
  void *v11; // [rsp+68h] [rbp+38h] BYREF

  v10 = 0LL;
  if ( winrt::Windows::Foundation::operator==((void (__fastcall ****)(_QWORD, __int64 *, __int64 *))a2, &v10) )
  {
    std::wstring::wstring(a1, &LocaleName);
  }
  else
  {
    v4 = (_QWORD *)winrt::impl::consume_Windows_ApplicationModel_IPackage<winrt::Windows::ApplicationModel::IPackage>::Id(
                     a2,
                     &v11);
    v10 = 0LL;
    v5 = (*(__int64 (__fastcall **)(_QWORD, __int64 *))(*(_QWORD *)*v4 + 56LL))(*v4, &v10);
    winrt::check_hresult(v5);
    winrt::Windows::UI::Xaml::Hosting::IElementCompositionPreviewStatics2::~IElementCompositionPreviewStatics2((winrt::Windows::UI::Xaml::Hosting::IElementCompositionPreviewStatics2 *)&v11);
    v9 = HIWORD(v10);
    v8 = WORD2(v10);
    v6 = wil::str_printf<wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>>(
           &v11,
           (__int64)L"%u.%u.%u.%u",
           (unsigned __int16)v10,
           WORD1(v10),
           v8,
           v9);
    std::wstring::wstring(a1, (_WORD *)*v6);
    wil::details::unique_storage<wil::details::resource_policy<wchar_t *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,wchar_t *,wchar_t *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<wchar_t *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,wchar_t *,wchar_t *,0,std::nullptr_t>>(&v11);
  }
  winrt::Windows::UI::Xaml::Hosting::IElementCompositionPreviewStatics2::~IElementCompositionPreviewStatics2(a2);
  return a1;
}

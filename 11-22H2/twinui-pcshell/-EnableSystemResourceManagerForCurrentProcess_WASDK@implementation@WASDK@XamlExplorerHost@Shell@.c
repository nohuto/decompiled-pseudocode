/*
 * XREFs of ?EnableSystemResourceManagerForCurrentProcess_WASDK@implementation@WASDK@XamlExplorerHost@Shell@Internal@Windows@winrt@@YAXXZ @ 0x18002DC14
 * Callers:
 *     ??0XamlApplication_WASDK@implementation@WASDK@XamlExplorerHost@Shell@Internal@Windows@winrt@@QEAA@XZ @ 0x18002F0C4 (--0XamlApplication_WASDK@implementation@WASDK@XamlExplorerHost@Shell@Internal@Windows@winrt@@QEA.c)
 * Callees:
 *     ?unconditional_release_ref@?$com_ptr@UISnapComponent@@@winrt@@AEAAXXZ @ 0x180085068 (-unconditional_release_ref@-$com_ptr@UISnapComponent@@@winrt@@AEAAXXZ.c)
 *     ??$ExpandEnvironmentStringsW@V?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@@wil@@$0BAA@@wil@@YA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@@0@PEBG@Z @ 0x180086E1C (--$ExpandEnvironmentStringsW@V-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAGP6AXPEAX@Z.c)
 *     ??$as@UISystemResourceManagerExtensions2@Internal@Core@Resources@ApplicationModel@Windows@@Utype@?$abi@UIUnknown@Foundation@Windows@winrt@@X@impl@winrt@@$0A@@impl@winrt@@YA?AU?$com_ptr@UISystemResourceManagerExtensions2@Internal@Core@Resources@ApplicationModel@Windows@@@1@PEAUtype@?$abi@UIUnknown@Foundation@Windows@winrt@@X@01@@Z @ 0x180086EC0 (--$as@UISystemResourceManagerExtensions2@Internal@Core@Resources@ApplicationModel@Windows@@Utype.c)
 *     ??$call@AEAV_lambda_c88db0dbc366a6ea415c26622dd26c45_@@@?$factory_cache_entry@UResourceManager@Core@Resources@ApplicationModel@Windows@winrt@@UIResourceManagerStaticInternal@Internal@2345@@impl@winrt@@QEAA?A_PAEAV_lambda_c88db0dbc366a6ea415c26622dd26c45_@@@Z @ 0x180087054 (--$call@AEAV_lambda_c88db0dbc366a6ea415c26622dd26c45_@@@-$factory_cache_entry@UResourceManager@C.c)
 *     ?unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ @ 0x1800D5AF0 (-unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18013240C (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x1801C6750 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=5
void __fastcall winrt::Windows::Internal::Shell::XamlExplorerHost::WASDK::implementation::EnableSystemResourceManagerForCurrentProcess_WASDK(
        winrt::Windows::Internal::Shell::XamlExplorerHost::WASDK::implementation *this)
{
  __int64 v1; // rbx
  __int64 (__fastcall *v2)(__int64, __int64 *); // rdi
  int v3; // eax
  __int64 v4; // rdi
  int v5; // eax
  __int64 v6; // [rsp+20h] [rbp-30h] BYREF
  __int64 v7; // [rsp+28h] [rbp-28h] BYREF
  __int64 v8; // [rsp+30h] [rbp-20h] BYREF
  LPVOID pv; // [rsp+38h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+8h]

  v8 = 0LL;
  _InterlockedIncrement64(&qword_18098E878);
  if ( winrt::impl::factory_cache_entry_v<winrt::Windows::ApplicationModel::Resources::Core::ResourceManager,Windows::ApplicationModel::Resources::Core::Internal::IResourceManagerStaticInternal> )
  {
    v6 = winrt::impl::factory_cache_entry_v<winrt::Windows::ApplicationModel::Resources::Core::ResourceManager,Windows::ApplicationModel::Resources::Core::Internal::IResourceManagerStaticInternal>;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)winrt::impl::factory_cache_entry_v<winrt::Windows::ApplicationModel::Resources::Core::ResourceManager,Windows::ApplicationModel::Resources::Core::Internal::IResourceManagerStaticInternal>
                                    + 8LL))(winrt::impl::factory_cache_entry_v<winrt::Windows::ApplicationModel::Resources::Core::ResourceManager,Windows::ApplicationModel::Resources::Core::Internal::IResourceManagerStaticInternal>);
    _InterlockedDecrement64(&qword_18098E878);
  }
  else
  {
    _InterlockedDecrement64(&qword_18098E878);
    winrt::impl::factory_cache_entry<winrt::Windows::ApplicationModel::Resources::Core::ResourceManager,Windows::ApplicationModel::Resources::Core::Internal::IResourceManagerStaticInternal>::call<_lambda_c88db0dbc366a6ea415c26622dd26c45_ &>(
      0LL,
      &v6);
  }
  v1 = v6;
  v2 = *(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v6 + 56LL);
  if ( v8 )
    winrt::Windows::Foundation::IUnknown::unconditional_release_ref((winrt::Windows::Foundation::IUnknown *)&v8);
  v3 = v2(v1, &v8);
  if ( v3 < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x35,
      (unsigned int)"pcshell\\twinui\\xamlexplorerhost\\lib\\XamlApplication_WASDK.cpp",
      (const char *)(unsigned int)v3,
      v6);
  winrt::impl::as<Windows::ApplicationModel::Resources::Core::Internal::ISystemResourceManagerExtensions2,winrt::impl::abi<winrt::Windows::Foundation::IUnknown,void>::type,0>(
    &v7,
    v8);
  pv = 0LL;
  wil::ExpandEnvironmentStringsW<wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>,256>(
    &pv,
    L"%SystemRoot%\\SystemResources\\ShellComponents\\ShellComponents.pri");
  v4 = v7;
  v5 = (*(__int64 (__fastcall **)(__int64, LPVOID))(*(_QWORD *)v7 + 48LL))(v7, pv);
  if ( v5 < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x3B,
      (unsigned int)"pcshell\\twinui\\xamlexplorerhost\\lib\\XamlApplication_WASDK.cpp",
      (const char *)(unsigned int)v5,
      v6);
  if ( pv )
    CoTaskMemFree(pv);
  if ( v4 )
    winrt::com_ptr<ISnapComponent>::unconditional_release_ref(&v7);
  if ( v1 )
    winrt::com_ptr<ISnapComponent>::unconditional_release_ref(&v6);
  if ( v8 )
    winrt::Windows::Foundation::IUnknown::unconditional_release_ref((winrt::Windows::Foundation::IUnknown *)&v8);
}

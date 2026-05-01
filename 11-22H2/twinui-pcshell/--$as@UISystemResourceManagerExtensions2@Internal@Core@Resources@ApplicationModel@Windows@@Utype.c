/*
 * XREFs of ??$as@UISystemResourceManagerExtensions2@Internal@Core@Resources@ApplicationModel@Windows@@Utype@?$abi@UIUnknown@Foundation@Windows@winrt@@X@impl@winrt@@$0A@@impl@winrt@@YA?AU?$com_ptr@UISystemResourceManagerExtensions2@Internal@Core@Resources@ApplicationModel@Windows@@@1@PEAUtype@?$abi@UIUnknown@Foundation@Windows@winrt@@X@01@@Z @ 0x180086EC0
 * Callers:
 *     ?EnableSystemResourceManagerForCurrentProcess_WASDK@implementation@WASDK@XamlExplorerHost@Shell@Internal@Windows@winrt@@YAXXZ @ 0x18002DC14 (-EnableSystemResourceManagerForCurrentProcess_WASDK@implementation@WASDK@XamlExplorerHost@Shell@.c)
 *     ?EnableSystemResourceManagerForCurrentProcess@implementation@XamlExplorerHost@Shell@Internal@Windows@winrt@@YAXXZ @ 0x180085D5C (-EnableSystemResourceManagerForCurrentProcess@implementation@XamlExplorerHost@Shell@Internal@Win.c)
 * Callees:
 *     __security_check_cookie @ 0x1801C6750 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?throw_hresult@winrt@@YAXUhresult@1@@Z @ 0x180392378 (-throw_hresult@winrt@@YAXUhresult@1@@Z.c)
 */

_QWORD *__fastcall winrt::impl::as<Windows::ApplicationModel::Resources::Core::Internal::ISystemResourceManagerExtensions2,winrt::impl::abi<winrt::Windows::Foundation::IUnknown,void>::type,0>(
        _QWORD *a1,
        __int64 (__fastcall ***a2)(_QWORD, void *, _QWORD **))
{
  int v3; // eax
  _QWORD *v5; // [rsp+28h] [rbp-20h] BYREF

  v5 = a1;
  if ( a2 )
  {
    v5 = 0LL;
    v3 = (**a2)(
           a2,
           &winrt::impl::guid_v<Windows::ApplicationModel::Resources::Core::Internal::ISystemResourceManagerExtensions2>,
           &v5);
    if ( v3 < 0 )
      winrt::throw_hresult((unsigned int)v3);
    *a1 = v5;
  }
  else
  {
    *a1 = 0LL;
  }
  return a1;
}

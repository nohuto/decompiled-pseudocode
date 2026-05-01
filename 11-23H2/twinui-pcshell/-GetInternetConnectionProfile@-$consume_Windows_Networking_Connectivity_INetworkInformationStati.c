/*
 * XREFs of ?GetInternetConnectionProfile@?$consume_Windows_Networking_Connectivity_INetworkInformationStatics@UINetworkInformationStatics@Connectivity@Networking@Windows@winrt@@@impl@winrt@@QEBA@XZ @ 0x180696200
 * Callers:
 *     ?_lambda_invoker_cdecl_@_lambda_3dbfe9da8b0db60d975c7a909fdd7f97_@@CA@AEBUINetworkInformationStatics@Connectivity@Networking@Windows@winrt@@@Z @ 0x1806935F0 (-_lambda_invoker_cdecl_@_lambda_3dbfe9da8b0db60d975c7a909fdd7f97_@@CA@AEBUINetworkInformationSta.c)
 *     ?GetInternetConnectionProfile@NetworkInformation@Connectivity@Networking@Windows@winrt@@SA@XZ @ 0x180696254 (-GetInternetConnectionProfile@NetworkInformation@Connectivity@Networking@Windows@winrt@@SA@XZ.c)
 *     ?IsNetworkConnected@NetworkConnectionUtils@implementation@Shell@Internal@Windows@winrt@@QEAA_NXZ @ 0x1807344F8 (-IsNetworkConnected@NetworkConnectionUtils@implementation@Shell@Internal@Windows@winrt@@QEAA_NXZ.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?throw_hresult@winrt@@YAXUhresult@1@@Z @ 0x180392378 (-throw_hresult@winrt@@YAXUhresult@1@@Z.c)
 */

_QWORD *__fastcall winrt::impl::consume_Windows_Networking_Connectivity_INetworkInformationStatics<winrt::Windows::Networking::Connectivity::INetworkInformationStatics>::GetInternetConnectionProfile(
        __int64 *a1,
        _QWORD *a2)
{
  __int64 v2; // rcx
  signed int v4; // eax
  __int64 v6; // [rsp+40h] [rbp+8h] BYREF

  v2 = *a1;
  v6 = 0LL;
  v4 = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v2 + 56LL))(v2, &v6);
  if ( v4 < 0 )
    winrt::throw_hresult(v4);
  *a2 = v6;
  return a2;
}

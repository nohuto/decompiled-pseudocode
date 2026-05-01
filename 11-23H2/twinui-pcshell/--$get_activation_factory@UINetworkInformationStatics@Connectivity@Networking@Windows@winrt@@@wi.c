/*
 * XREFs of ??$get_activation_factory@UINetworkInformationStatics@Connectivity@Networking@Windows@winrt@@@winrt@@YA?AUINetworkInformationStatics@Connectivity@Networking@Windows@0@AEBUhstring@param@0@@Z @ 0x18069465C
 * Callers:
 *     ??$call@P6A?AUConnectionProfile@Connectivity@Networking@Windows@winrt@@AEBUINetworkInformationStatics@2345@@Z@?$factory_cache_entry@UNetworkInformation@Connectivity@Networking@Windows@winrt@@UINetworkInformationStatics@2345@@impl@winrt@@QEAA?A_P$$QEAP6A?AUConnectionProfile@Connectivity@Networking@Windows@2@AEBUINetworkInformationStatics@4562@@Z@Z @ 0x180694304 (--$call@P6A-AUConnectionProfile@Connectivity@Networking@Windows@winrt@@AEBUINetworkInformationSt.c)
 *     ??$call@AEAV_lambda_d11a1cc1197c110a4224db306cbbec58_@@@?$factory_cache_entry@UNetworkInformation@Connectivity@Networking@Windows@winrt@@UINetworkInformationStatics@2345@@impl@winrt@@QEAA?A_PAEAV_lambda_d11a1cc1197c110a4224db306cbbec58_@@@Z @ 0x180733FBC (--$call@AEAV_lambda_d11a1cc1197c110a4224db306cbbec58_@@@-$factory_cache_entry@UNetworkInformatio.c)
 * Callees:
 *     ??$get_runtime_activation_factory_impl@$0A@@impl@winrt@@YA?AUhresult@1@AEBUhstring@param@1@AEBUguid@1@PEAPEAX@Z @ 0x1800B4384 (--$get_runtime_activation_factory_impl@$0A@@impl@winrt@@YA-AUhresult@1@AEBUhstring@param@1@AEBUg.c)
 *     ?throw_hresult@winrt@@YAXUhresult@1@@Z @ 0x180392378 (-throw_hresult@winrt@@YAXUhresult@1@@Z.c)
 */

_QWORD *__fastcall winrt::get_activation_factory<winrt::Windows::Networking::Connectivity::INetworkInformationStatics>(
        _QWORD *a1,
        _QWORD *a2)
{
  signed int v4; // [rsp+50h] [rbp+18h] BYREF
  __int64 v5; // [rsp+58h] [rbp+20h] BYREF

  v5 = 0LL;
  winrt::impl::get_runtime_activation_factory_impl<0>(
    &v4,
    a2,
    (__int64)&winrt::impl::guid_v<winrt::Windows::Networking::Connectivity::INetworkInformationStatics>,
    (__int64)&v5);
  if ( v4 < 0 )
    winrt::throw_hresult(v4);
  *a1 = v5;
  return a1;
}

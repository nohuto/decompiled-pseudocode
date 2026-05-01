/*
 * XREFs of ??$get_activation_factory@UIDeviceInformationStatics@Enumeration@Devices@Windows@winrt@@@winrt@@YA?AUIDeviceInformationStatics@Enumeration@Devices@Windows@0@AEBUhstring@param@0@@Z @ 0x1806F7F78
 * Callers:
 *     ??$call@AEAV_lambda_2bdf1dccac8f31331c29d81ee6552535_@@@?$factory_cache_entry@UDeviceInformation@Enumeration@Devices@Windows@winrt@@UIDeviceInformationStatics@2345@@impl@winrt@@QEAA?A_PAEAV_lambda_2bdf1dccac8f31331c29d81ee6552535_@@@Z @ 0x1806F7B5C (--$call@AEAV_lambda_2bdf1dccac8f31331c29d81ee6552535_@@@-$factory_cache_entry@UDeviceInformation.c)
 *     ??$call@AEAV_lambda_949de2b926fa2a3cc50f06471a2a2214_@@@?$factory_cache_entry@UDeviceInformation@Enumeration@Devices@Windows@winrt@@UIDeviceInformationStatics@2345@@impl@winrt@@QEAA?A_PAEAV_lambda_949de2b926fa2a3cc50f06471a2a2214_@@@Z @ 0x1806F7C94 (--$call@AEAV_lambda_949de2b926fa2a3cc50f06471a2a2214_@@@-$factory_cache_entry@UDeviceInformation.c)
 * Callees:
 *     ??$get_runtime_activation_factory_impl@$0A@@impl@winrt@@YA?AUhresult@1@AEBUhstring@param@1@AEBUguid@1@PEAPEAX@Z @ 0x1800B4384 (--$get_runtime_activation_factory_impl@$0A@@impl@winrt@@YA-AUhresult@1@AEBUhstring@param@1@AEBUg.c)
 *     ?throw_hresult@winrt@@YAXUhresult@1@@Z @ 0x180392378 (-throw_hresult@winrt@@YAXUhresult@1@@Z.c)
 */

_QWORD *__fastcall winrt::get_activation_factory<winrt::Windows::Devices::Enumeration::IDeviceInformationStatics>(
        _QWORD *a1,
        _QWORD *a2)
{
  signed int v4; // [rsp+50h] [rbp+18h] BYREF
  __int64 v5; // [rsp+58h] [rbp+20h] BYREF

  v5 = 0LL;
  winrt::impl::get_runtime_activation_factory_impl<0>(
    &v4,
    a2,
    (__int64)&winrt::impl::guid_v<winrt::Windows::Devices::Enumeration::IDeviceInformationStatics>,
    (__int64)&v5);
  if ( v4 < 0 )
    winrt::throw_hresult(v4);
  *a1 = v5;
  return a1;
}

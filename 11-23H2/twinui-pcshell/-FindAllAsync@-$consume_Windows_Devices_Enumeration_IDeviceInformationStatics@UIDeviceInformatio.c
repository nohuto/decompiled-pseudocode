/*
 * XREFs of ?FindAllAsync@?$consume_Windows_Devices_Enumeration_IDeviceInformationStatics@UIDeviceInformationStatics@Enumeration@Devices@Windows@winrt@@@impl@winrt@@QEBA@AEBUhstring@param@3@@Z @ 0x1806FA334
 * Callers:
 *     ??$call@AEAV_lambda_2bdf1dccac8f31331c29d81ee6552535_@@@?$factory_cache_entry@UDeviceInformation@Enumeration@Devices@Windows@winrt@@UIDeviceInformationStatics@2345@@impl@winrt@@QEAA?A_PAEAV_lambda_2bdf1dccac8f31331c29d81ee6552535_@@@Z @ 0x1806F7B5C (--$call@AEAV_lambda_2bdf1dccac8f31331c29d81ee6552535_@@@-$factory_cache_entry@UDeviceInformation.c)
 *     ??R_lambda_2bdf1dccac8f31331c29d81ee6552535_@@QEBA@AEBUIDeviceInformationStatics@Enumeration@Devices@Windows@winrt@@@Z @ 0x1806F9B88 (--R_lambda_2bdf1dccac8f31331c29d81ee6552535_@@QEBA@AEBUIDeviceInformationStatics@Enumeration@Dev.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?throw_hresult@winrt@@YAXUhresult@1@@Z @ 0x180392378 (-throw_hresult@winrt@@YAXUhresult@1@@Z.c)
 */

_QWORD *__fastcall winrt::impl::consume_Windows_Devices_Enumeration_IDeviceInformationStatics<winrt::Windows::Devices::Enumeration::IDeviceInformationStatics>::FindAllAsync(
        __int64 *a1,
        _QWORD *a2,
        _QWORD *a3)
{
  __int64 v3; // rcx
  signed int v5; // eax
  __int64 v7; // [rsp+40h] [rbp+8h] BYREF

  v3 = *a1;
  v7 = 0LL;
  v5 = (*(__int64 (__fastcall **)(__int64, _QWORD, __int64 *))(*(_QWORD *)v3 + 80LL))(v3, *a3, &v7);
  if ( v5 < 0 )
    winrt::throw_hresult(v5);
  *a2 = v7;
  return a2;
}

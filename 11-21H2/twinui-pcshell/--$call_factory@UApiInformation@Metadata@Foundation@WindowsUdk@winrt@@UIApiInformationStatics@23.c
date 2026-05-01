/*
 * XREFs of ??$call_factory@UApiInformation@Metadata@Foundation@WindowsUdk@winrt@@UIApiInformationStatics@2345@V_lambda_9553f26b39c360ab0f553b854f05e574_@@@impl@winrt@@YA_N$$QEAV_lambda_9553f26b39c360ab0f553b854f05e574_@@@Z @ 0x180031430
 * Callers:
 *     _lambda_8a91dc501c467fec4cc3e90f0a415469_::operator() @ 0x18003135C (_lambda_8a91dc501c467fec4cc3e90f0a415469_--operator().c)
 *     ?IsApiContractPresent@ApiInformation@Metadata@Foundation@WindowsUdk@winrt@@SA@AEBUhstring@param@5@G@Z @ 0x180353EC4 (-IsApiContractPresent@ApiInformation@Metadata@Foundation@WindowsUdk@winrt@@SA@AEBUhstring@param@.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 *     ?throw_hresult@winrt@@YAXUhresult@1@@Z @ 0x18033DA10 (-throw_hresult@winrt@@YAXUhresult@1@@Z.c)
 */

// Hidden C++ exception states: #wind=1
char __fastcall winrt::impl::call_factory<winrt::WindowsUdk::Foundation::Metadata::ApiInformation,winrt::WindowsUdk::Foundation::Metadata::IApiInformationStatics,_lambda_9553f26b39c360ab0f553b854f05e574_>(
        __int64 a1)
{
  __int64 v1; // r8
  _QWORD *v2; // rdx
  int v3; // eax
  char v5; // [rsp+48h] [rbp+10h] BYREF
  __int64 *v6; // [rsp+50h] [rbp+18h]

  v6 = &qword_1807B3FB8;
  _InterlockedIncrement64(&qword_1807B3FB8);
  if ( winrt::impl::factory_cache_entry_v<winrt::WindowsUdk::Foundation::Metadata::ApiInformation,winrt::WindowsUdk::Foundation::Metadata::IApiInformationStatics> )
  {
    v1 = **(unsigned __int16 **)(a1 + 8);
    v2 = *(_QWORD **)a1;
    v5 = 0;
    v3 = (*(__int64 (__fastcall **)(__int64, _QWORD, __int64, char *))(*(_QWORD *)winrt::impl::factory_cache_entry_v<winrt::WindowsUdk::Foundation::Metadata::ApiInformation,winrt::WindowsUdk::Foundation::Metadata::IApiInformationStatics>
                                                                     + 48LL))(
           winrt::impl::factory_cache_entry_v<winrt::WindowsUdk::Foundation::Metadata::ApiInformation,winrt::WindowsUdk::Foundation::Metadata::IApiInformationStatics>,
           *v2,
           v1,
           &v5);
    if ( v3 < 0 )
      winrt::throw_hresult((unsigned int)v3);
    _InterlockedDecrement64(&qword_1807B3FB8);
    return v5;
  }
  else
  {
    _InterlockedDecrement64(&qword_1807B3FB8);
    return winrt::impl::factory_cache_entry<winrt::WindowsUdk::Foundation::Metadata::ApiInformation,winrt::WindowsUdk::Foundation::Metadata::IApiInformationStatics>::call<_lambda_9553f26b39c360ab0f553b854f05e574_ &>(
             a1,
             a1);
  }
}

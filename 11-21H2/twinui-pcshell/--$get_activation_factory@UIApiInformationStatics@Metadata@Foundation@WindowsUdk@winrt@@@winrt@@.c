/*
 * XREFs of ??$get_activation_factory@UIApiInformationStatics@Metadata@Foundation@WindowsUdk@winrt@@@winrt@@YA?AUIApiInformationStatics@Metadata@Foundation@WindowsUdk@0@AEBUhstring@param@0@@Z @ 0x18003169C
 * Callers:
 *     ??$call@AEAV_lambda_9553f26b39c360ab0f553b854f05e574_@@@?$factory_cache_entry@UApiInformation@Metadata@Foundation@WindowsUdk@winrt@@UIApiInformationStatics@2345@@impl@winrt@@QEAA_NAEAV_lambda_9553f26b39c360ab0f553b854f05e574_@@@Z @ 0x180031550 (--$call@AEAV_lambda_9553f26b39c360ab0f553b854f05e574_@@@-$factory_cache_entry@UApiInformation@Me.c)
 * Callees:
 *     ??$get_runtime_activation_factory@UIApiInformationStatics@Metadata@Foundation@WindowsUdk@winrt@@@impl@winrt@@YA?AUhresult@1@AEBUhstring@param@1@PEAPEAX@Z @ 0x1800316E0 (--$get_runtime_activation_factory@UIApiInformationStatics@Metadata@Foundation@WindowsUdk@winrt@@.c)
 *     ?throw_hresult@winrt@@YAXUhresult@1@@Z @ 0x18033DA10 (-throw_hresult@winrt@@YAXUhresult@1@@Z.c)
 */

_QWORD *__fastcall winrt::get_activation_factory<winrt::WindowsUdk::Foundation::Metadata::IApiInformationStatics>(
        _QWORD *a1,
        __int64 a2)
{
  __int64 v3; // rcx
  char v5; // [rsp+40h] [rbp+18h] BYREF
  __int64 v6; // [rsp+48h] [rbp+20h] BYREF

  v6 = 0LL;
  v3 = *(unsigned int *)winrt::impl::get_runtime_activation_factory<winrt::WindowsUdk::Foundation::Metadata::IApiInformationStatics>(
                          &v5,
                          a2,
                          &v6);
  if ( (int)v3 < 0 )
    winrt::throw_hresult(v3);
  *a1 = v6;
  return a1;
}

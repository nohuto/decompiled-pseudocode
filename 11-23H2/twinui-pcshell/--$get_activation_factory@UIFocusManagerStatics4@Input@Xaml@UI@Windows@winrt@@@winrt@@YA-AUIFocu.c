/*
 * XREFs of ??$get_activation_factory@UIFocusManagerStatics4@Input@Xaml@UI@Windows@winrt@@@winrt@@YA?AUIFocusManagerStatics4@Input@Xaml@UI@Windows@0@AEBUhstring@param@0@@Z @ 0x180786294
 * Callers:
 *     ??$call@AEAV_lambda_49e62eb3f931e46ad527edc5ebe4a7b3_@@@?$factory_cache_entry@UFocusManager@Input@Xaml@UI@Windows@winrt@@UIFocusManagerStatics4@23456@@impl@winrt@@QEAA?A_PAEAV_lambda_49e62eb3f931e46ad527edc5ebe4a7b3_@@@Z @ 0x180786024 (--$call@AEAV_lambda_49e62eb3f931e46ad527edc5ebe4a7b3_@@@-$factory_cache_entry@UFocusManager@Inpu.c)
 *     ??$call@AEAV_lambda_ff98fc05277ac080bf005904487943da_@@@?$factory_cache_entry@UFocusManager@Input@Xaml@UI@Windows@winrt@@UIFocusManagerStatics4@23456@@impl@winrt@@QEAA?A_PAEAV_lambda_ff98fc05277ac080bf005904487943da_@@@Z @ 0x18078615C (--$call@AEAV_lambda_ff98fc05277ac080bf005904487943da_@@@-$factory_cache_entry@UFocusManager@Inpu.c)
 * Callees:
 *     ??$get_runtime_activation_factory_impl@$0A@@impl@winrt@@YA?AUhresult@1@AEBUhstring@param@1@AEBUguid@1@PEAPEAX@Z @ 0x1800B4384 (--$get_runtime_activation_factory_impl@$0A@@impl@winrt@@YA-AUhresult@1@AEBUhstring@param@1@AEBUg.c)
 *     ?throw_hresult@winrt@@YAXUhresult@1@@Z @ 0x180392378 (-throw_hresult@winrt@@YAXUhresult@1@@Z.c)
 */

_QWORD *__fastcall winrt::get_activation_factory<winrt::Windows::UI::Xaml::Input::IFocusManagerStatics4>(
        _QWORD *a1,
        _QWORD *a2)
{
  signed int v4; // [rsp+50h] [rbp+18h] BYREF
  __int64 v5; // [rsp+58h] [rbp+20h] BYREF

  v5 = 0LL;
  winrt::impl::get_runtime_activation_factory_impl<0>(
    &v4,
    a2,
    (__int64)&winrt::impl::guid_v<winrt::Windows::UI::Xaml::Input::IFocusManagerStatics4>,
    (__int64)&v5);
  if ( v4 < 0 )
    winrt::throw_hresult(v4);
  *a1 = v5;
  return a1;
}

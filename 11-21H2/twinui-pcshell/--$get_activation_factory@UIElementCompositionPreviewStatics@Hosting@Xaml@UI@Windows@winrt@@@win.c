/*
 * XREFs of ??$get_activation_factory@UIElementCompositionPreviewStatics@Hosting@Xaml@UI@Windows@winrt@@@winrt@@YA?AUIElementCompositionPreviewStatics@Hosting@Xaml@UI@Windows@0@AEBUhstring@param@0@@Z @ 0x180606624
 * Callers:
 *     ??$call@AEAV_lambda_03a02509df9e18a447667afbdd5db963_@@@?$factory_cache_entry@UElementCompositionPreview@Hosting@Xaml@UI@Windows@winrt@@UIElementCompositionPreviewStatics@23456@@impl@winrt@@QEAA?AUVisual@Composition@UI@Windows@2@AEAV_lambda_03a02509df9e18a447667afbdd5db963_@@@Z @ 0x180605DD0 (--$call@AEAV_lambda_03a02509df9e18a447667afbdd5db963_@@@-$factory_cache_entry@UElementCompositio.c)
 * Callees:
 *     ?throw_hresult@winrt@@YAXUhresult@1@@Z @ 0x18033DA10 (-throw_hresult@winrt@@YAXUhresult@1@@Z.c)
 *     ??$get_runtime_activation_factory@UIElementCompositionPreviewStatics@Hosting@Xaml@UI@Windows@winrt@@@impl@winrt@@YA?AUhresult@1@AEBUhstring@param@1@PEAPEAX@Z @ 0x180606CC0 (--$get_runtime_activation_factory@UIElementCompositionPreviewStatics@Hosting@Xaml@UI@Windows@win.c)
 */

_QWORD *__fastcall winrt::get_activation_factory<winrt::Windows::UI::Xaml::Hosting::IElementCompositionPreviewStatics>(
        _QWORD *a1,
        __int64 a2)
{
  signed int v3; // ecx
  char v5; // [rsp+40h] [rbp+18h] BYREF
  __int64 v6; // [rsp+48h] [rbp+20h] BYREF

  v6 = 0LL;
  v3 = *(_DWORD *)winrt::impl::get_runtime_activation_factory<winrt::Windows::UI::Xaml::Hosting::IElementCompositionPreviewStatics>(
                    &v5,
                    a2,
                    &v6);
  if ( v3 < 0 )
    winrt::throw_hresult(v3);
  *a1 = v6;
  return a1;
}

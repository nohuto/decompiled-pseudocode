/*
 * XREFs of ??$get_activation_factory@UIFlyoutBaseStatics@Primitives@Controls@Xaml@UI@Windows@winrt@@@winrt@@YA?AUIFlyoutBaseStatics@Primitives@Controls@Xaml@UI@Windows@0@AEBUhstring@param@0@@Z @ 0x1805B7964
 * Callers:
 *     ??$call@AEAV_lambda_31ba74b9cb16bf6a9b7d565f4d03ce46_@@@?$factory_cache_entry@UFlyoutBase@Primitives@Controls@Xaml@UI@Windows@winrt@@UIFlyoutBaseStatics@234567@@impl@winrt@@QEAA?AUFlyoutBase@Primitives@Controls@Xaml@UI@Windows@2@AEAV_lambda_31ba74b9cb16bf6a9b7d565f4d03ce46_@@@Z @ 0x1805B764C (--$call@AEAV_lambda_31ba74b9cb16bf6a9b7d565f4d03ce46_@@@-$factory_cache_entry@UFlyoutBase@Primit.c)
 * Callees:
 *     ?throw_hresult@winrt@@YAXUhresult@1@@Z @ 0x18033DA10 (-throw_hresult@winrt@@YAXUhresult@1@@Z.c)
 *     ??$get_runtime_activation_factory@UIFlyoutBaseStatics@Primitives@Controls@Xaml@UI@Windows@winrt@@@impl@winrt@@YA?AUhresult@1@AEBUhstring@param@1@PEAPEAX@Z @ 0x1805B79EC (--$get_runtime_activation_factory@UIFlyoutBaseStatics@Primitives@Controls@Xaml@UI@Windows@winrt@.c)
 */

_QWORD *__fastcall winrt::get_activation_factory<winrt::Windows::UI::Xaml::Controls::Primitives::IFlyoutBaseStatics>(
        _QWORD *a1,
        __int64 a2)
{
  signed int v3; // ecx
  char v5; // [rsp+40h] [rbp+18h] BYREF
  __int64 v6; // [rsp+48h] [rbp+20h] BYREF

  v6 = 0LL;
  v3 = *(_DWORD *)winrt::impl::get_runtime_activation_factory<winrt::Windows::UI::Xaml::Controls::Primitives::IFlyoutBaseStatics>(
                    &v5,
                    a2,
                    &v6);
  if ( v3 < 0 )
    winrt::throw_hresult(v3);
  *a1 = v6;
  return a1;
}

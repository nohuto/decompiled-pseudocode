/*
 * XREFs of ??$get_activation_factory@UICompositionTargetStatics3@Media@Xaml@UI@Windows@winrt@@@winrt@@YA?AUICompositionTargetStatics3@Media@Xaml@UI@Windows@0@AEBUhstring@param@0@@Z @ 0x18060D944
 * Callers:
 *     ??$call@AEAV_lambda_2b28915c4d6d16a60eaba9d305044a7a_@@@?$factory_cache_entry@UCompositionTarget@Media@Xaml@UI@Windows@winrt@@UICompositionTargetStatics3@23456@@impl@winrt@@QEAA?AUICompositionTargetStatics3@Media@Xaml@UI@Windows@2@AEAV_lambda_2b28915c4d6d16a60eaba9d305044a7a_@@@Z @ 0x18060D820 (--$call@AEAV_lambda_2b28915c4d6d16a60eaba9d305044a7a_@@@-$factory_cache_entry@UCompositionTarget.c)
 * Callees:
 *     ?throw_hresult@winrt@@YAXUhresult@1@@Z @ 0x18033DA10 (-throw_hresult@winrt@@YAXUhresult@1@@Z.c)
 *     ??$get_runtime_activation_factory@UICompositionTargetStatics3@Media@Xaml@UI@Windows@winrt@@@impl@winrt@@YA?AUhresult@1@AEBUhstring@param@1@PEAPEAX@Z @ 0x18060D988 (--$get_runtime_activation_factory@UICompositionTargetStatics3@Media@Xaml@UI@Windows@winrt@@@impl.c)
 */

_QWORD *__fastcall winrt::get_activation_factory<winrt::Windows::UI::Xaml::Media::ICompositionTargetStatics3>(
        _QWORD *a1,
        __int64 a2)
{
  signed int v3; // ecx
  char v5; // [rsp+40h] [rbp+18h] BYREF
  __int64 v6; // [rsp+48h] [rbp+20h] BYREF

  v6 = 0LL;
  v3 = *(_DWORD *)winrt::impl::get_runtime_activation_factory<winrt::Windows::UI::Xaml::Media::ICompositionTargetStatics3>(
                    &v5,
                    a2,
                    &v6);
  if ( v3 < 0 )
    winrt::throw_hresult(v3);
  *a1 = v6;
  return a1;
}

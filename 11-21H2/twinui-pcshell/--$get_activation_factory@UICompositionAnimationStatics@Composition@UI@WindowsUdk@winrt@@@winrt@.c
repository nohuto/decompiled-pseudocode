/*
 * XREFs of ??$get_activation_factory@UICompositionAnimationStatics@Composition@UI@WindowsUdk@winrt@@@winrt@@YA?AUICompositionAnimationStatics@Composition@UI@WindowsUdk@0@AEBUhstring@param@0@@Z @ 0x18060659C
 * Callers:
 *     ??$call@AEAV_lambda_c893b0be85f95fa79319d83703904477_@@@?$factory_cache_entry@UCompositionAnimation@Composition@UI@WindowsUdk@winrt@@UICompositionAnimationStatics@2345@@impl@winrt@@QEAA_NAEAV_lambda_c893b0be85f95fa79319d83703904477_@@@Z @ 0x1806060BC (--$call@AEAV_lambda_c893b0be85f95fa79319d83703904477_@@@-$factory_cache_entry@UCompositionAnimat.c)
 * Callees:
 *     ?throw_hresult@winrt@@YAXUhresult@1@@Z @ 0x18033DA10 (-throw_hresult@winrt@@YAXUhresult@1@@Z.c)
 *     ??$get_runtime_activation_factory@UICompositionAnimationStatics@Composition@UI@WindowsUdk@winrt@@@impl@winrt@@YA?AUhresult@1@AEBUhstring@param@1@PEAPEAX@Z @ 0x180606668 (--$get_runtime_activation_factory@UICompositionAnimationStatics@Composition@UI@WindowsUdk@winrt@.c)
 */

_QWORD *__fastcall winrt::get_activation_factory<winrt::WindowsUdk::UI::Composition::ICompositionAnimationStatics>(
        _QWORD *a1,
        __int64 a2)
{
  signed int v3; // ecx
  char v5; // [rsp+40h] [rbp+18h] BYREF
  __int64 v6; // [rsp+48h] [rbp+20h] BYREF

  v6 = 0LL;
  v3 = *(_DWORD *)winrt::impl::get_runtime_activation_factory<winrt::WindowsUdk::UI::Composition::ICompositionAnimationStatics>(
                    &v5,
                    a2,
                    &v6);
  if ( v3 < 0 )
    winrt::throw_hresult(v3);
  *a1 = v6;
  return a1;
}

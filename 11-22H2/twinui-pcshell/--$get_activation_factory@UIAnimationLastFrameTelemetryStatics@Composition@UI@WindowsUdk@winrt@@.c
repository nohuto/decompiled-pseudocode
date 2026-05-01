/*
 * XREFs of ??$get_activation_factory@UIAnimationLastFrameTelemetryStatics@Composition@UI@WindowsUdk@winrt@@@winrt@@YA?AUIAnimationLastFrameTelemetryStatics@Composition@UI@WindowsUdk@0@AEBUhstring@param@0@@Z @ 0x18050B3AC
 * Callers:
 *     ??$call@AEAV_lambda_12f5bf833773a01a30ff4e031defbf2b_@@@?$factory_cache_entry@UAnimationLastFrameTelemetry@Composition@UI@WindowsUdk@winrt@@UIAnimationLastFrameTelemetryStatics@2345@@impl@winrt@@QEAA?A_PAEAV_lambda_12f5bf833773a01a30ff4e031defbf2b_@@@Z @ 0x18050AD10 (--$call@AEAV_lambda_12f5bf833773a01a30ff4e031defbf2b_@@@-$factory_cache_entry@UAnimationLastFram.c)
 * Callees:
 *     ??$get_runtime_activation_factory_impl@$0A@@impl@winrt@@YA?AUhresult@1@AEBUhstring@param@1@AEBUguid@1@PEAPEAX@Z @ 0x1800B4384 (--$get_runtime_activation_factory_impl@$0A@@impl@winrt@@YA-AUhresult@1@AEBUhstring@param@1@AEBUg.c)
 *     ?throw_hresult@winrt@@YAXUhresult@1@@Z @ 0x180392378 (-throw_hresult@winrt@@YAXUhresult@1@@Z.c)
 */

_QWORD *__fastcall winrt::get_activation_factory<winrt::WindowsUdk::UI::Composition::IAnimationLastFrameTelemetryStatics>(
        _QWORD *a1,
        _QWORD *a2)
{
  signed int v4; // [rsp+50h] [rbp+18h] BYREF
  __int64 v5; // [rsp+58h] [rbp+20h] BYREF

  v5 = 0LL;
  winrt::impl::get_runtime_activation_factory_impl<0>(
    &v4,
    a2,
    (__int64)&winrt::impl::guid_v<winrt::WindowsUdk::UI::Composition::IAnimationLastFrameTelemetryStatics>,
    (__int64)&v5);
  if ( v4 < 0 )
    winrt::throw_hresult(v4);
  *a1 = v5;
  return a1;
}

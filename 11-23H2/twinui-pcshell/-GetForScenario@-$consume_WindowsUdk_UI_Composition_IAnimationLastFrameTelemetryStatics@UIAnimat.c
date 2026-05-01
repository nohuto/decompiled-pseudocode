/*
 * XREFs of ?GetForScenario@?$consume_WindowsUdk_UI_Composition_IAnimationLastFrameTelemetryStatics@UIAnimationLastFrameTelemetryStatics@Composition@UI@WindowsUdk@winrt@@@impl@winrt@@QEBA@AEBUguid@3@@Z @ 0x18051017C
 * Callers:
 *     ??$call@AEAV_lambda_12f5bf833773a01a30ff4e031defbf2b_@@@?$factory_cache_entry@UAnimationLastFrameTelemetry@Composition@UI@WindowsUdk@winrt@@UIAnimationLastFrameTelemetryStatics@2345@@impl@winrt@@QEAA?A_PAEAV_lambda_12f5bf833773a01a30ff4e031defbf2b_@@@Z @ 0x18050AD10 (--$call@AEAV_lambda_12f5bf833773a01a30ff4e031defbf2b_@@@-$factory_cache_entry@UAnimationLastFram.c)
 *     _anonymous_namespace_::StartAnimationTelemetryForInputViewKeyMoment @ 0x180517698 (_anonymous_namespace_--StartAnimationTelemetryForInputViewKeyMoment.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?throw_hresult@winrt@@YAXUhresult@1@@Z @ 0x180392378 (-throw_hresult@winrt@@YAXUhresult@1@@Z.c)
 */

_QWORD *__fastcall winrt::impl::consume_WindowsUdk_UI_Composition_IAnimationLastFrameTelemetryStatics<winrt::WindowsUdk::UI::Composition::IAnimationLastFrameTelemetryStatics>::GetForScenario(
        __int64 **a1,
        _QWORD *a2,
        __int128 *a3)
{
  __int64 *v3; // rcx
  __int128 v5; // xmm0
  __int64 v6; // rax
  signed int v7; // eax
  __int128 v9; // [rsp+30h] [rbp-18h] BYREF
  __int64 v10; // [rsp+50h] [rbp+8h] BYREF

  v3 = *a1;
  v5 = *a3;
  v10 = 0LL;
  v6 = *v3;
  v9 = v5;
  v7 = (*(__int64 (__fastcall **)(__int64 *, __int128 *, __int64 *))(v6 + 48))(v3, &v9, &v10);
  if ( v7 < 0 )
    winrt::throw_hresult(v7);
  *a2 = v10;
  return a2;
}

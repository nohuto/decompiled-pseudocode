/*
 * XREFs of _anonymous_namespace_::StartAnimationTelemetryForInputViewKeyMoment @ 0x180517698
 * Callers:
 *     ?AnimateInputView@TouchKeyboardExperienceManager@@AEAAJPEAUKBViewInfo@@PEAUHWND__@@_N@Z @ 0x18050D884 (-AnimateInputView@TouchKeyboardExperienceManager@@AEAAJPEAUKBViewInfo@@PEAUHWND__@@_N@Z.c)
 * Callees:
 *     ?unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ @ 0x1800D5AF0 (-unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ.c)
 *     ??4IUnknown@Foundation@Windows@winrt@@QEAAAEAU0123@$$QEAU0123@@Z @ 0x180172F30 (--4IUnknown@Foundation@Windows@winrt@@QEAAAEAU0123@$$QEAU0123@@Z.c)
 *     __security_check_cookie @ 0x1801C6750 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?throw_hresult@winrt@@YAXUhresult@1@@Z @ 0x180392378 (-throw_hresult@winrt@@YAXUhresult@1@@Z.c)
 *     ??$call@AEAV_lambda_12f5bf833773a01a30ff4e031defbf2b_@@@?$factory_cache_entry@UAnimationLastFrameTelemetry@Composition@UI@WindowsUdk@winrt@@UIAnimationLastFrameTelemetryStatics@2345@@impl@winrt@@QEAA?A_PAEAV_lambda_12f5bf833773a01a30ff4e031defbf2b_@@@Z @ 0x18050AD10 (--$call@AEAV_lambda_12f5bf833773a01a30ff4e031defbf2b_@@@-$factory_cache_entry@UAnimationLastFram.c)
 *     ?GetForScenario@?$consume_WindowsUdk_UI_Composition_IAnimationLastFrameTelemetryStatics@UIAnimationLastFrameTelemetryStatics@Composition@UI@WindowsUdk@winrt@@@impl@winrt@@QEBA@AEBUguid@3@@Z @ 0x18051017C (-GetForScenario@-$consume_WindowsUdk_UI_Composition_IAnimationLastFrameTelemetryStatics@UIAnimat.c)
 */

// Hidden C++ exception states: #wind=3
_QWORD *__fastcall anonymous_namespace_::StartAnimationTelemetryForInputViewKeyMoment(_QWORD *a1, int a2)
{
  signed int v3; // eax
  __int64 v5; // [rsp+28h] [rbp-58h] BYREF
  __int128 *v6; // [rsp+30h] [rbp-50h] BYREF
  _QWORD v7[4]; // [rsp+38h] [rbp-48h] BYREF
  __int128 v8; // [rsp+58h] [rbp-28h] BYREF
  __int128 v9; // [rsp+68h] [rbp-18h] BYREF

  v7[1] = a1;
  *a1 = 0LL;
  if ( a2 )
  {
    if ( a2 != 4 )
      goto LABEL_11;
    *(_QWORD *)&v8 = 0x4BB8BF7A7C9AEFEDLL;
    *((_QWORD *)&v8 + 1) = 0x22F4A41830CE68ELL;
    v6 = &v8;
    v7[2] = &qword_180991878;
    _InterlockedIncrement64(&qword_180991878);
    if ( winrt::impl::factory_cache_entry_v<winrt::WindowsUdk::UI::Composition::AnimationLastFrameTelemetry,winrt::WindowsUdk::UI::Composition::IAnimationLastFrameTelemetryStatics> )
    {
      winrt::impl::consume_WindowsUdk_UI_Composition_IAnimationLastFrameTelemetryStatics<winrt::WindowsUdk::UI::Composition::IAnimationLastFrameTelemetryStatics>::GetForScenario(
        (__int64 **)&winrt::impl::factory_cache_entry_v<winrt::WindowsUdk::UI::Composition::AnimationLastFrameTelemetry,winrt::WindowsUdk::UI::Composition::IAnimationLastFrameTelemetryStatics>,
        &v5,
        &v8);
      _InterlockedDecrement64(&qword_180991878);
    }
    else
    {
      _InterlockedDecrement64(&qword_180991878);
      winrt::impl::factory_cache_entry<winrt::WindowsUdk::UI::Composition::AnimationLastFrameTelemetry,winrt::WindowsUdk::UI::Composition::IAnimationLastFrameTelemetryStatics>::call<_lambda_12f5bf833773a01a30ff4e031defbf2b_ &>(
        (void (__fastcall ***)(_QWORD, __int64 *, __int64 *))a1,
        (__int64)&v5,
        &v6);
    }
  }
  else
  {
    *(_QWORD *)&v9 = 0x440E31E26F72162CLL;
    *((_QWORD *)&v9 + 1) = 0x104929669644E890LL;
    v7[0] = &v9;
    v7[3] = &qword_180991878;
    _InterlockedIncrement64(&qword_180991878);
    if ( winrt::impl::factory_cache_entry_v<winrt::WindowsUdk::UI::Composition::AnimationLastFrameTelemetry,winrt::WindowsUdk::UI::Composition::IAnimationLastFrameTelemetryStatics> )
    {
      winrt::impl::consume_WindowsUdk_UI_Composition_IAnimationLastFrameTelemetryStatics<winrt::WindowsUdk::UI::Composition::IAnimationLastFrameTelemetryStatics>::GetForScenario(
        (__int64 **)&winrt::impl::factory_cache_entry_v<winrt::WindowsUdk::UI::Composition::AnimationLastFrameTelemetry,winrt::WindowsUdk::UI::Composition::IAnimationLastFrameTelemetryStatics>,
        &v5,
        &v9);
      _InterlockedDecrement64(&qword_180991878);
    }
    else
    {
      _InterlockedDecrement64(&qword_180991878);
      winrt::impl::factory_cache_entry<winrt::WindowsUdk::UI::Composition::AnimationLastFrameTelemetry,winrt::WindowsUdk::UI::Composition::IAnimationLastFrameTelemetryStatics>::call<_lambda_12f5bf833773a01a30ff4e031defbf2b_ &>(
        (void (__fastcall ***)(_QWORD, __int64 *, __int64 *))a1,
        (__int64)&v5,
        v7);
    }
  }
  winrt::Windows::Foundation::IUnknown::operator=(
    (winrt::Windows::Foundation::IUnknown *)a1,
    (winrt::Windows::Foundation::IUnknown *)&v5);
  if ( v5 )
    winrt::Windows::Foundation::IUnknown::unconditional_release_ref((winrt::Windows::Foundation::IUnknown *)&v5);
LABEL_11:
  if ( *a1 )
  {
    v3 = (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)*a1 + 48LL))(*a1);
    if ( v3 < 0 )
      winrt::throw_hresult(v3);
  }
  return a1;
}

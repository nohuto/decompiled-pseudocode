/*
 * XREFs of ??$call_factory@UCompositionAnimation@Composition@UI@WindowsUdk@winrt@@UICompositionAnimationStatics@2345@V_lambda_c893b0be85f95fa79319d83703904477_@@@impl@winrt@@YA?A_P$$QEAV_lambda_c893b0be85f95fa79319d83703904477_@@@Z @ 0x180770830
 * Callers:
 *     ?CreateAnimation@VirtualDesktopSwitcherHost@@AEAA?AV?$tuple@UScalarKeyFrameAnimation@Composition@UI@Windows@winrt@@UCompositor@2345@@std@@AEBM0AEBV?$duration@_JU?$ratio@$00$0JIJGIA@@std@@@chrono@3@AEBU_GUID@@AEBUfloat2@Numerics@Foundation@Windows@winrt@@3@Z @ 0x180772ED4 (-CreateAnimation@VirtualDesktopSwitcherHost@@AEAA-AV-$tuple@UScalarKeyFrameAnimation@Composition.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?throw_hresult@winrt@@YAXUhresult@1@@Z @ 0x180392378 (-throw_hresult@winrt@@YAXUhresult@1@@Z.c)
 */

// Hidden C++ exception states: #wind=1
char __fastcall winrt::impl::call_factory<winrt::WindowsUdk::UI::Composition::CompositionAnimation,winrt::WindowsUdk::UI::Composition::ICompositionAnimationStatics,_lambda_c893b0be85f95fa79319d83703904477_>(
        _QWORD *a1)
{
  __int128 *v1; // r8
  _QWORD *v2; // rdx
  __int64 v3; // rax
  signed int v4; // eax
  __int128 v6; // [rsp+30h] [rbp-18h] BYREF
  char v7; // [rsp+58h] [rbp+10h] BYREF
  __int64 *v8; // [rsp+60h] [rbp+18h]

  v8 = &qword_180991918;
  _InterlockedIncrement64(&qword_180991918);
  if ( winrt::impl::factory_cache_entry_v<winrt::WindowsUdk::UI::Composition::CompositionAnimation,winrt::WindowsUdk::UI::Composition::ICompositionAnimationStatics> )
  {
    v1 = (__int128 *)a1[1];
    v2 = (_QWORD *)*a1;
    v7 = 0;
    v3 = *(_QWORD *)winrt::impl::factory_cache_entry_v<winrt::WindowsUdk::UI::Composition::CompositionAnimation,winrt::WindowsUdk::UI::Composition::ICompositionAnimationStatics>;
    v6 = *v1;
    v4 = (*(__int64 (__fastcall **)(__int64, _QWORD, __int128 *, char *))(v3 + 48))(
           winrt::impl::factory_cache_entry_v<winrt::WindowsUdk::UI::Composition::CompositionAnimation,winrt::WindowsUdk::UI::Composition::ICompositionAnimationStatics>,
           *v2,
           &v6,
           &v7);
    if ( v4 < 0 )
      winrt::throw_hresult(v4);
    _InterlockedDecrement64(&qword_180991918);
    return v7;
  }
  else
  {
    _InterlockedDecrement64(&qword_180991918);
    return winrt::impl::factory_cache_entry<winrt::WindowsUdk::UI::Composition::CompositionAnimation,winrt::WindowsUdk::UI::Composition::ICompositionAnimationStatics>::call<_lambda_c893b0be85f95fa79319d83703904477_ &>(
             (__int64)a1,
             a1);
  }
}

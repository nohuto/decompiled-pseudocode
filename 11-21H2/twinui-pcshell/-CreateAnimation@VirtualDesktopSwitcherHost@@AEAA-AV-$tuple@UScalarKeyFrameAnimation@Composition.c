/*
 * XREFs of ?CreateAnimation@VirtualDesktopSwitcherHost@@AEAA?AV?$tuple@UScalarKeyFrameAnimation@Composition@UI@Windows@winrt@@UCompositor@2345@@std@@AEBM0AEBV?$duration@_JU?$ratio@$00$0JIJGIA@@std@@@chrono@3@AEBU_GUID@@AEBUfloat2@Numerics@Foundation@Windows@winrt@@3@Z @ 0x180608BE4
 * Callers:
 *     ?StartDismissAnimation@VirtualDesktopSwitcherHost@@AEAAXXZ @ 0x18060BAB0 (-StartDismissAnimation@VirtualDesktopSwitcherHost@@AEAAXXZ.c)
 *     ?StartInvokeAnimation@VirtualDesktopSwitcherHost@@AEAAXXZ @ 0x18060BE40 (-StartInvokeAnimation@VirtualDesktopSwitcherHost@@AEAAXXZ.c)
 * Callees:
 *     ??$from_cx@UUIElement@Xaml@UI@Windows@winrt@@@@YA?AUUIElement@Xaml@UI@Windows@winrt@@PE$AAVObject@Platform@@@Z @ 0x18001450C (--$from_cx@UUIElement@Xaml@UI@Windows@winrt@@@@YA-AUUIElement@Xaml@UI@Windows@winrt@@PE$AAVObjec.c)
 *     ?add_ref@IUnknown@Foundation@Windows@winrt@@AEBAXXZ @ 0x1800F4BD8 (-add_ref@IUnknown@Foundation@Windows@winrt@@AEBAXXZ.c)
 *     ?unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ @ 0x1800F70B0 (-unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ.c)
 *     __security_check_cookie @ 0x1801881F0 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 *     ?throw_hresult@winrt@@YAXUhresult@1@@Z @ 0x18033DA10 (-throw_hresult@winrt@@YAXUhresult@1@@Z.c)
 *     ??$call@AEAV_lambda_03a02509df9e18a447667afbdd5db963_@@@?$factory_cache_entry@UElementCompositionPreview@Hosting@Xaml@UI@Windows@winrt@@UIElementCompositionPreviewStatics@23456@@impl@winrt@@QEAA?AUVisual@Composition@UI@Windows@2@AEAV_lambda_03a02509df9e18a447667afbdd5db963_@@@Z @ 0x180605DD0 (--$call@AEAV_lambda_03a02509df9e18a447667afbdd5db963_@@@-$factory_cache_entry@UElementCompositio.c)
 *     ??$call@AEAV_lambda_811875b78a717298a9deed537a9b1783_@@@?$factory_cache_entry@UElementCompositionPreview@Hosting@Xaml@UI@Windows@winrt@@UIElementCompositionPreviewStatics2@23456@@impl@winrt@@QEAAXAEAV_lambda_811875b78a717298a9deed537a9b1783_@@@Z @ 0x180605F2C (--$call@AEAV_lambda_811875b78a717298a9deed537a9b1783_@@@-$factory_cache_entry@UElementCompositio.c)
 *     ??$call_factory@UCompositionAnimation@Composition@UI@WindowsUdk@winrt@@UICompositionAnimationStatics@2345@V_lambda_c893b0be85f95fa79319d83703904477_@@@impl@winrt@@YA_N$$QEAV_lambda_c893b0be85f95fa79319d83703904477_@@@Z @ 0x18060628C (--$call_factory@UCompositionAnimation@Composition@UI@WindowsUdk@winrt@@UICompositionAnimationSta.c)
 *     ?Compositor@?$consume_Windows_UI_Composition_ICompositionObject@UVisual@Composition@UI@Windows@winrt@@@impl@winrt@@QEBA?AU0Composition@UI@Windows@3@XZ @ 0x180608A54 (-Compositor@-$consume_Windows_UI_Composition_ICompositionObject@UVisual@Composition@UI@Windows@w.c)
 *     ?CreateCubicBezierEasingFunction@?$consume_Windows_UI_Composition_ICompositor@UICompositor@Composition@UI@Windows@winrt@@@impl@winrt@@QEBA?AUCubicBezierEasingFunction@Composition@UI@Windows@3@AEBUfloat2@Numerics@Foundation@73@0@Z @ 0x180609004 (-CreateCubicBezierEasingFunction@-$consume_Windows_UI_Composition_ICompositor@UICompositor@Compo.c)
 *     ?CreateScalarKeyFrameAnimation@?$consume_Windows_UI_Composition_ICompositor@UICompositor@Composition@UI@Windows@winrt@@@impl@winrt@@QEBA?AUScalarKeyFrameAnimation@Composition@UI@Windows@3@XZ @ 0x18060906C (-CreateScalarKeyFrameAnimation@-$consume_Windows_UI_Composition_ICompositor@UICompositor@Composi.c)
 *     ?Duration@?$consume_Windows_UI_Composition_IKeyFrameAnimation@UScalarKeyFrameAnimation@Composition@UI@Windows@winrt@@@impl@winrt@@QEBAXAEBV?$duration@_JU?$ratio@$00$0JIJGIA@@std@@@chrono@std@@@Z @ 0x180609C98 (-Duration@-$consume_Windows_UI_Composition_IKeyFrameAnimation@UScalarKeyFrameAnimation@Compositi.c)
 *     ?GetElementVisual@?$consume_Windows_UI_Xaml_Hosting_IElementCompositionPreviewStatics@UIElementCompositionPreviewStatics@Hosting@Xaml@UI@Windows@winrt@@@impl@winrt@@QEBA?AUVisual@Composition@UI@Windows@3@AEBUUIElement@Xaml@673@@Z @ 0x180609E48 (-GetElementVisual@-$consume_Windows_UI_Xaml_Hosting_IElementCompositionPreviewStatics@UIElementC.c)
 *     ?Target@?$consume_Windows_UI_Composition_ICompositionAnimation2@UScalarKeyFrameAnimation@Composition@UI@Windows@winrt@@@impl@winrt@@QEBAXAEBUhstring@param@3@@Z @ 0x18060C25C (-Target@-$consume_Windows_UI_Composition_ICompositionAnimation2@UScalarKeyFrameAnimation@Composi.c)
 */

// Hidden C++ exception states: #wind=11
_QWORD *__fastcall VirtualDesktopSwitcherHost::CreateAnimation(
        __int64 a1,
        _QWORD *a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        int *a6,
        __int64 a7,
        __int64 a8)
{
  _QWORD *v10; // rax
  __int64 v11; // rdi
  signed int v12; // eax
  __int64 v13; // rdx
  __int64 v14; // r8
  __int64 v15; // rbx
  signed int v16; // eax
  _QWORD *v17; // rdx
  __int64 v18; // r8
  signed int v19; // eax
  __int64 v20; // rdi
  __int64 v21; // rbx
  char v23; // [rsp+30h] [rbp-D0h] BYREF
  __int64 v24; // [rsp+38h] [rbp-C8h] BYREF
  __int64 v25; // [rsp+40h] [rbp-C0h] BYREF
  __int64 v26; // [rsp+48h] [rbp-B8h] BYREF
  __int64 v27; // [rsp+50h] [rbp-B0h] BYREF
  void (__fastcall ***v28)(_QWORD, void *, __int64 *); // [rsp+58h] [rbp-A8h] BYREF
  __int64 v29; // [rsp+60h] [rbp-A0h] BYREF
  __int64 v30; // [rsp+68h] [rbp-98h] BYREF
  __int64 v31; // [rsp+70h] [rbp-90h] BYREF
  __int64 v32; // [rsp+78h] [rbp-88h] BYREF
  __int64 v33; // [rsp+80h] [rbp-80h] BYREF
  _QWORD *v34; // [rsp+88h] [rbp-78h] BYREF
  _QWORD *v35[2]; // [rsp+90h] [rbp-70h] BYREF
  _QWORD v36[4]; // [rsp+A0h] [rbp-60h] BYREF
  __int64 v37[4]; // [rsp+C0h] [rbp-40h] BYREF
  int v38; // [rsp+E0h] [rbp-20h] BYREF
  __int16 v39; // [rsp+E4h] [rbp-1Ch]
  __int16 v40; // [rsp+E6h] [rbp-1Ah]
  char v41; // [rsp+E8h] [rbp-18h]
  char v42; // [rsp+E9h] [rbp-17h]
  char v43; // [rsp+EAh] [rbp-16h]
  char v44; // [rsp+EBh] [rbp-15h]
  char v45; // [rsp+ECh] [rbp-14h]
  char v46; // [rsp+EDh] [rbp-13h]
  char v47; // [rsp+EEh] [rbp-12h]
  char v48; // [rsp+EFh] [rbp-11h]

  v34 = a2;
  v10 = from_cx<winrt::Windows::UI::Xaml::UIElement>(
          &v29,
          *(__int64 (__fastcall ****)(_QWORD, void *, _QWORD *))(a1 + 176));
  v34 = v10;
  v36[2] = &qword_1807B6668;
  _InterlockedIncrement64(&qword_1807B6668);
  if ( winrt::impl::factory_cache_entry_v<winrt::Windows::UI::Xaml::Hosting::ElementCompositionPreview,winrt::Windows::UI::Xaml::Hosting::IElementCompositionPreviewStatics> )
  {
    winrt::impl::consume_Windows_UI_Xaml_Hosting_IElementCompositionPreviewStatics<winrt::Windows::UI::Xaml::Hosting::IElementCompositionPreviewStatics>::GetElementVisual(
      &winrt::impl::factory_cache_entry_v<winrt::Windows::UI::Xaml::Hosting::ElementCompositionPreview,winrt::Windows::UI::Xaml::Hosting::IElementCompositionPreviewStatics>,
      &v26,
      v10);
    _InterlockedDecrement64(&qword_1807B6668);
  }
  else
  {
    _InterlockedDecrement64(&qword_1807B6668);
    winrt::impl::factory_cache_entry<winrt::Windows::UI::Xaml::Hosting::ElementCompositionPreview,winrt::Windows::UI::Xaml::Hosting::IElementCompositionPreviewStatics>::call<_lambda_03a02509df9e18a447667afbdd5db963_ &>(
      (void (__fastcall ***)(_QWORD, __int64 *, __int64 *))&qword_1807B6668,
      (__int64)&v26,
      &v34);
  }
  if ( v29 )
    winrt::Windows::Foundation::IUnknown::unconditional_release_ref((winrt::Windows::Foundation::IUnknown *)&v29);
  winrt::impl::consume_Windows_UI_Composition_ICompositionObject<winrt::Windows::UI::Composition::Visual>::Compositor(
    &v26,
    &v25);
  winrt::impl::consume_Windows_UI_Composition_ICompositor<winrt::Windows::UI::Composition::ICompositor>::CreateCubicBezierEasingFunction(
    &v25,
    &v28,
    a7,
    a8);
  winrt::impl::consume_Windows_UI_Composition_ICompositor<winrt::Windows::UI::Composition::ICompositor>::CreateScalarKeyFrameAnimation(
    &v25,
    &v24);
  v11 = v24;
  v12 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v24 + 48LL))(v24);
  if ( v12 < 0 )
    winrt::throw_hresult(v12);
  if ( v28 )
  {
    v30 = 0LL;
    (**v28)(v28, &winrt::impl::guid_v<winrt::Windows::UI::Composition::ICompositionEasingFunction>, &v30);
    v15 = v30;
  }
  else
  {
    v15 = 0LL;
  }
  v31 = v15;
  v16 = (*(__int64 (__fastcall **)(__int64, __int64, __int64, __int64))(*(_QWORD *)v11 + 56LL))(v11, v13, v14, v15);
  if ( v16 < 0 )
    winrt::throw_hresult(v16);
  if ( v15 )
    winrt::Windows::Foundation::IUnknown::unconditional_release_ref((winrt::Windows::Foundation::IUnknown *)&v31);
  winrt::impl::consume_Windows_UI_Composition_IKeyFrameAnimation<winrt::Windows::UI::Composition::ScalarKeyFrameAnimation>::Duration(
    &v24,
    a5);
  v37[0] = qword_1807B4B80;
  winrt::impl::consume_Windows_UI_Composition_ICompositionAnimation2<winrt::Windows::UI::Composition::ScalarKeyFrameAnimation>::Target(
    &v24,
    v37);
  v17 = from_cx<winrt::Windows::UI::Xaml::UIElement>(
          &v32,
          *(__int64 (__fastcall ****)(_QWORD, void *, _QWORD *))(a1 + 176));
  v23 = 1;
  v35[0] = v17;
  v35[1] = &v23;
  v36[3] = &qword_1807B6648;
  _InterlockedIncrement64(&qword_1807B6648);
  if ( winrt::impl::factory_cache_entry_v<winrt::Windows::UI::Xaml::Hosting::ElementCompositionPreview,winrt::Windows::UI::Xaml::Hosting::IElementCompositionPreviewStatics2> )
  {
    LOBYTE(v18) = v23;
    v19 = (*(__int64 (__fastcall **)(__int64, _QWORD, __int64))(*(_QWORD *)winrt::impl::factory_cache_entry_v<winrt::Windows::UI::Xaml::Hosting::ElementCompositionPreview,winrt::Windows::UI::Xaml::Hosting::IElementCompositionPreviewStatics2>
                                                              + 64LL))(
            winrt::impl::factory_cache_entry_v<winrt::Windows::UI::Xaml::Hosting::ElementCompositionPreview,winrt::Windows::UI::Xaml::Hosting::IElementCompositionPreviewStatics2>,
            *v17,
            v18);
    if ( v19 < 0 )
      winrt::throw_hresult(v19);
    _InterlockedDecrement64(&qword_1807B6648);
  }
  else
  {
    _InterlockedDecrement64(&qword_1807B6648);
    winrt::impl::factory_cache_entry<winrt::Windows::UI::Xaml::Hosting::ElementCompositionPreview,winrt::Windows::UI::Xaml::Hosting::IElementCompositionPreviewStatics2>::call<_lambda_811875b78a717298a9deed537a9b1783_ &>(
      0LL,
      v35);
  }
  if ( v32 )
    winrt::Windows::Foundation::IUnknown::unconditional_release_ref((winrt::Windows::Foundation::IUnknown *)&v32);
  v38 = *a6;
  v39 = *((_WORD *)a6 + 2);
  v40 = *((_WORD *)a6 + 3);
  v41 = *((_BYTE *)a6 + 8);
  v42 = *((_BYTE *)a6 + 9);
  v43 = *((_BYTE *)a6 + 10);
  v44 = *((_BYTE *)a6 + 11);
  v45 = *((_BYTE *)a6 + 12);
  v46 = *((_BYTE *)a6 + 13);
  v47 = *((_BYTE *)a6 + 14);
  v48 = *((_BYTE *)a6 + 15);
  v33 = 0LL;
  v20 = v24;
  (**(void (__fastcall ***)(__int64, void *, __int64 *))v24)(
    v24,
    &winrt::impl::guid_v<winrt::Windows::UI::Composition::ICompositionAnimationBase>,
    &v33);
  v27 = v33;
  v36[0] = &v27;
  v36[1] = &v38;
  winrt::impl::call_factory<winrt::WindowsUdk::UI::Composition::CompositionAnimation,winrt::WindowsUdk::UI::Composition::ICompositionAnimationStatics,_lambda_c893b0be85f95fa79319d83703904477_>(v36);
  if ( v27 )
    winrt::Windows::Foundation::IUnknown::unconditional_release_ref((winrt::Windows::Foundation::IUnknown *)&v27);
  v21 = v25;
  *a2 = v25;
  winrt::Windows::Foundation::IUnknown::add_ref((winrt::Windows::Foundation::IUnknown *)a2);
  a2[1] = v20;
  winrt::Windows::Foundation::IUnknown::add_ref((winrt::Windows::Foundation::IUnknown *)(a2 + 1));
  winrt::Windows::Foundation::IUnknown::unconditional_release_ref((winrt::Windows::Foundation::IUnknown *)&v24);
  if ( v28 )
    winrt::Windows::Foundation::IUnknown::unconditional_release_ref((winrt::Windows::Foundation::IUnknown *)&v28);
  if ( v21 )
    winrt::Windows::Foundation::IUnknown::unconditional_release_ref((winrt::Windows::Foundation::IUnknown *)&v25);
  if ( v26 )
    winrt::Windows::Foundation::IUnknown::unconditional_release_ref((winrt::Windows::Foundation::IUnknown *)&v26);
  return a2;
}

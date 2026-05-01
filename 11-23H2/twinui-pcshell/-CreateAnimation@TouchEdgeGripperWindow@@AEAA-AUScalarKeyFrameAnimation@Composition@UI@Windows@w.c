/*
 * XREFs of ?CreateAnimation@TouchEdgeGripperWindow@@AEAA?AUScalarKeyFrameAnimation@Composition@UI@Windows@winrt@@MMUhstring@6@H@Z @ 0x180659398
 * Callers:
 *     ?CreateXamlContent@TouchEdgeGripperWindow@@AEAAXW4TouchEdgeGestureType@@@Z @ 0x18065988C (-CreateXamlContent@TouchEdgeGripperWindow@@AEAAXW4TouchEdgeGestureType@@@Z.c)
 * Callees:
 *     ?close@?$handle_type@Uhstring_traits@impl@winrt@@@winrt@@QEAAXXZ @ 0x1800B6D14 (-close@-$handle_type@Uhstring_traits@impl@winrt@@@winrt@@QEAAXXZ.c)
 *     ?unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ @ 0x1800D5AF0 (-unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?CreateCubicBezierEasingFunction@?$consume_Windows_UI_Composition_ICompositor@UICompositor@Composition@UI@Windows@winrt@@@impl@winrt@@QEBA@AEBUfloat2@Numerics@Foundation@Windows@3@0@Z @ 0x180556AAC (-CreateCubicBezierEasingFunction@-$consume_Windows_UI_Composition_ICompositor@UICompositor@Compo.c)
 *     ?CreateScalarKeyFrameAnimation@?$consume_Windows_UI_Composition_ICompositor@UICompositor@Composition@UI@Windows@winrt@@@impl@winrt@@QEBA@XZ @ 0x180556E40 (-CreateScalarKeyFrameAnimation@-$consume_Windows_UI_Composition_ICompositor@UICompositor@Composi.c)
 *     ?Duration@?$consume_Windows_UI_Composition_IKeyFrameAnimation@UScalarKeyFrameAnimation@Composition@UI@Windows@winrt@@@impl@winrt@@QEBA@AEBV?$duration@_JU?$ratio@$00$0JIJGIA@@std@@@chrono@std@@@Z @ 0x180558AA0 (-Duration@-$consume_Windows_UI_Composition_IKeyFrameAnimation@UScalarKeyFrameAnimation@Compositi.c)
 *     ?InsertKeyFrame@?$consume_Windows_UI_Composition_IScalarKeyFrameAnimation@UIScalarKeyFrameAnimation@Composition@UI@Windows@winrt@@@impl@winrt@@QEBA@MMAEBUCompositionEasingFunction@Composition@UI@Windows@3@@Z @ 0x180559510 (-InsertKeyFrame@-$consume_Windows_UI_Composition_IScalarKeyFrameAnimation@UIScalarKeyFrameAnimat.c)
 *     ??$call@AEAV_lambda_03a02509df9e18a447667afbdd5db963_@@@?$factory_cache_entry@UElementCompositionPreview@Hosting@Xaml@UI@Windows@winrt@@UIElementCompositionPreviewStatics@23456@@impl@winrt@@QEAA?A_PAEAV_lambda_03a02509df9e18a447667afbdd5db963_@@@Z @ 0x180657B5C (--$call@AEAV_lambda_03a02509df9e18a447667afbdd5db963_@@@-$factory_cache_entry@UElementCompositio.c)
 *     ?Compositor@?$consume_Windows_UI_Composition_ICompositionObject@UVisual@Composition@UI@Windows@winrt@@@impl@winrt@@QEBA@XZ @ 0x180659298 (-Compositor@-$consume_Windows_UI_Composition_ICompositionObject@UVisual@Composition@UI@Windows@w.c)
 *     ?GetElementVisual@?$consume_Windows_UI_Xaml_Hosting_IElementCompositionPreviewStatics@UIElementCompositionPreviewStatics@Hosting@Xaml@UI@Windows@winrt@@@impl@winrt@@QEBA@AEBUUIElement@Xaml@UI@Windows@3@@Z @ 0x18065B320 (-GetElementVisual@-$consume_Windows_UI_Xaml_Hosting_IElementCompositionPreviewStatics@UIElementC.c)
 *     ?InsertKeyFrame@?$consume_Windows_UI_Composition_IScalarKeyFrameAnimation@UIScalarKeyFrameAnimation@Composition@UI@Windows@winrt@@@impl@winrt@@QEBA@MM@Z @ 0x18065B5D4 (-InsertKeyFrame@-$consume_Windows_UI_Composition_IScalarKeyFrameAnimation@UIScalarK_ea_18065B5D4.c)
 *     ?Target@?$consume_Windows_UI_Composition_ICompositionAnimation2@UScalarKeyFrameAnimation@Composition@UI@Windows@winrt@@@impl@winrt@@QEBA@AEBUhstring@param@3@@Z @ 0x18065C78C (-Target@-$consume_Windows_UI_Composition_ICompositionAnimation2@UScalarKeyFrameAnimation@Composi.c)
 */

// Hidden C++ exception states: #wind=10
__int64 *__fastcall TouchEdgeGripperWindow::CreateAnimation(
        __int64 a1,
        __int64 *a2,
        __int64 a3,
        __int64 a4,
        volatile signed __int32 **a5,
        int a6)
{
  void (__fastcall ***v7)(_QWORD, __int64 *, __int64 *); // rcx
  int v8; // ebx
  int v9; // ebx
  __int64 v10; // rdx
  __int64 v11; // r8
  void (__fastcall ***v12)(_QWORD, void *, __int64 *); // rbx
  __int64 v13; // rsi
  volatile signed __int32 **v14; // rsi
  __int64 v16; // [rsp+28h] [rbp-59h] BYREF
  int v17; // [rsp+30h] [rbp-51h]
  __int64 v18; // [rsp+38h] [rbp-49h] BYREF
  __int64 v19; // [rsp+40h] [rbp-41h] BYREF
  __int64 v20; // [rsp+48h] [rbp-39h] BYREF
  __int64 v21; // [rsp+50h] [rbp-31h] BYREF
  void (__fastcall ***v22)(_QWORD, void *, __int64 *); // [rsp+58h] [rbp-29h] BYREF
  _QWORD v23[2]; // [rsp+60h] [rbp-21h] BYREF
  volatile signed __int32 *v24; // [rsp+70h] [rbp-11h] BYREF
  __int64 v25; // [rsp+D8h] [rbp+57h] BYREF
  __int64 *v26; // [rsp+E0h] [rbp+5Fh]

  v26 = a2;
  v17 = 0;
  v7 = *(void (__fastcall ****)(_QWORD, __int64 *, __int64 *))(a1 + 120);
  if ( v7 )
  {
    v18 = 0LL;
    (**v7)(v7, (__int64 *)&winrt::impl::guid_v<winrt::Windows::UI::Xaml::IUIElement>, &v18);
    v25 = v18;
  }
  else
  {
    v25 = 0LL;
  }
  v23[0] = &v25;
  v23[1] = &qword_180991708;
  _InterlockedIncrement64(&qword_180991708);
  if ( winrt::impl::factory_cache_entry_v<winrt::Windows::UI::Xaml::Hosting::ElementCompositionPreview,winrt::Windows::UI::Xaml::Hosting::IElementCompositionPreviewStatics> )
  {
    winrt::impl::consume_Windows_UI_Xaml_Hosting_IElementCompositionPreviewStatics<winrt::Windows::UI::Xaml::Hosting::IElementCompositionPreviewStatics>::GetElementVisual(
      &winrt::impl::factory_cache_entry_v<winrt::Windows::UI::Xaml::Hosting::ElementCompositionPreview,winrt::Windows::UI::Xaml::Hosting::IElementCompositionPreviewStatics>,
      &v16,
      &v25);
    v17 = 12;
    _InterlockedDecrement64(&qword_180991708);
    v8 = 12;
  }
  else
  {
    _InterlockedDecrement64(&qword_180991708);
    winrt::impl::factory_cache_entry<winrt::Windows::UI::Xaml::Hosting::ElementCompositionPreview,winrt::Windows::UI::Xaml::Hosting::IElementCompositionPreviewStatics>::call<_lambda_03a02509df9e18a447667afbdd5db963_ &>(
      v7,
      (__int64)&v16,
      v23);
    v8 = 4;
  }
  v9 = v8 | 2;
  v17 = v9;
  winrt::impl::consume_Windows_UI_Composition_ICompositionObject<winrt::Windows::UI::Composition::Visual>::Compositor(
    &v16,
    &v18);
  if ( v16 )
    winrt::Windows::Foundation::IUnknown::unconditional_release_ref((winrt::Windows::Foundation::IUnknown *)&v16);
  if ( v25 )
    winrt::Windows::Foundation::IUnknown::unconditional_release_ref((winrt::Windows::Foundation::IUnknown *)&v25);
  winrt::impl::consume_Windows_UI_Composition_ICompositor<winrt::Windows::UI::Composition::ICompositor>::CreateScalarKeyFrameAnimation(
    &v18,
    a2);
  v17 = v9 | 1;
  v16 = 10000LL * a6;
  winrt::impl::consume_Windows_UI_Composition_IKeyFrameAnimation<winrt::Windows::UI::Composition::ScalarKeyFrameAnimation>::Duration(
    a2,
    &v16);
  winrt::impl::consume_Windows_UI_Composition_IScalarKeyFrameAnimation<winrt::Windows::UI::Composition::IScalarKeyFrameAnimation>::InsertKeyFrame(a2);
  v19 = 0x3F8000003F800000LL;
  v20 = 1065353216LL;
  winrt::impl::consume_Windows_UI_Composition_ICompositor<winrt::Windows::UI::Composition::ICompositor>::CreateCubicBezierEasingFunction(
    &v18,
    &v22,
    &v20,
    &v19);
  v12 = v22;
  if ( v22 )
  {
    v21 = 0LL;
    (**v22)(v22, &winrt::impl::guid_v<winrt::Windows::UI::Composition::ICompositionEasingFunction>, &v21);
    v13 = v21;
    v16 = v21;
  }
  else
  {
    v16 = 0LL;
    v13 = 0LL;
  }
  winrt::impl::consume_Windows_UI_Composition_IScalarKeyFrameAnimation<winrt::Windows::UI::Composition::IScalarKeyFrameAnimation>::InsertKeyFrame(
    a2,
    v10,
    v11,
    &v16);
  if ( v13 )
    winrt::Windows::Foundation::IUnknown::unconditional_release_ref((winrt::Windows::Foundation::IUnknown *)&v16);
  v14 = a5;
  v24 = *a5;
  winrt::impl::consume_Windows_UI_Composition_ICompositionAnimation2<winrt::Windows::UI::Composition::ScalarKeyFrameAnimation>::Target(
    a2,
    &v24);
  if ( v12 )
    winrt::Windows::Foundation::IUnknown::unconditional_release_ref((winrt::Windows::Foundation::IUnknown *)&v22);
  if ( v18 )
    winrt::Windows::Foundation::IUnknown::unconditional_release_ref((winrt::Windows::Foundation::IUnknown *)&v18);
  winrt::handle_type<winrt::impl::hstring_traits>::close(v14);
  return a2;
}

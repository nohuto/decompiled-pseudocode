/*
 * XREFs of ?CreateTriggerForFlickScaleAnimtion@CAppThumbnailWindow@@AEAA?AUCompositionAnimationTriggerValuePartner@Internal@Composition@UI@Windows@winrt@@AEBUhstring@7@0@Z @ 0x180557F08
 * Callers:
 *     ?SetupFlickScaleFactorAnimations@CAppThumbnailWindow@@AEAAX_N@Z @ 0x18055AEA0 (-SetupFlickScaleFactorAnimations@CAppThumbnailWindow@@AEAAX_N@Z.c)
 * Callees:
 *     ??Hwinrt@@YA?AUhstring@0@PEBGAEBU10@@Z @ 0x180060E5C (--Hwinrt@@YA-AUhstring@0@PEBGAEBU10@@Z.c)
 *     ?create_string_reference@hstring@param@winrt@@AEAAXQEBG_K@Z @ 0x1800B4460 (-create_string_reference@hstring@param@winrt@@AEAAXQEBG_K@Z.c)
 *     ?close@?$handle_type@Uhstring_traits@impl@winrt@@@winrt@@QEAAXXZ @ 0x1800B6D14 (-close@-$handle_type@Uhstring_traits@impl@winrt@@@winrt@@QEAAXXZ.c)
 *     ?unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ @ 0x1800D5AF0 (-unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ??$as@UICompositorInternal@Internal@Composition@UI@Windows@winrt@@Utype@?$abi@UIUnknown@Foundation@Windows@winrt@@X@impl@6@$0A@@impl@winrt@@YA?AUICompositorInternal@Internal@Composition@UI@Windows@1@PEAUtype@?$abi@UIUnknown@Foundation@Windows@winrt@@X@01@@Z @ 0x180554D98 (--$as@UICompositorInternal@Internal@Composition@UI@Windows@winrt@@Utype@-$abi@UIUnknown@Foundati.c)
 *     ?CreateAnimationTriggerValuePartner@?$consume_Windows_UI_Composition_Internal_ICompositorInternal@UICompositorInternal@Internal@Composition@UI@Windows@winrt@@@impl@winrt@@QEBA@AEBUhstring@param@3@AEBUIAnimationObject@Composition@UI@Windows@3@AEBUICompositionAnimationBase@7893@@Z @ 0x180555904 (-CreateAnimationTriggerValuePartner@-$consume_Windows_UI_Composition_Internal_ICompositorInterna.c)
 *     ?CreateSpringScalarAnimation@?$consume_Windows_UI_Composition_ICompositor4@UCompositor@Composition@UI@Windows@winrt@@@impl@winrt@@QEBA@XZ @ 0x1805571B8 (-CreateSpringScalarAnimation@-$consume_Windows_UI_Composition_ICompositor4@UCompositor@Compositi.c)
 *     ?DampingRatio@?$consume_Windows_UI_Composition_ISpringScalarNaturalMotionAnimation@UISpringScalarNaturalMotionAnimation@Composition@UI@Windows@winrt@@@impl@winrt@@QEBA@M@Z @ 0x18055879C (-DampingRatio@-$consume_Windows_UI_Composition_ISpringScalarNaturalMotionAnimation@UISpringScala.c)
 *     ?InitialValueExpressions@?$consume_Windows_UI_Composition_ICompositionAnimation3@USpringScalarNaturalMotionAnimation@Composition@UI@Windows@winrt@@@impl@winrt@@QEBA@XZ @ 0x180558D60 (-InitialValueExpressions@-$consume_Windows_UI_Composition_ICompositionAnimation3@USpringScalarNa.c)
 *     ?Insert@?$consume_Windows_Foundation_Collections_IMap@U?$IMap@Uhstring@winrt@@U12@@Collections@Foundation@Windows@winrt@@Uhstring@5@U65@@impl@winrt@@QEBA@AEBUhstring@param@3@0@Z @ 0x18055935C (-Insert@-$consume_Windows_Foundation_Collections_IMap@U-$IMap@Uhstring@winrt@@U12@@Collections@F.c)
 *     ?Period@?$consume_Windows_UI_Composition_ISpringScalarNaturalMotionAnimation@UISpringScalarNaturalMotionAnimation@Composition@UI@Windows@winrt@@@impl@winrt@@QEBA@AEBV?$duration@_JU?$ratio@$00$0JIJGIA@@std@@@chrono@std@@@Z @ 0x180559A34 (-Period@-$consume_Windows_UI_Composition_ISpringScalarNaturalMotionAnimation@UISpringScalarNatur.c)
 *     ?SetExpressionReferenceParameter@?$consume_Windows_UI_Composition_ICompositionAnimation4@UExpressionAnimation@Composition@UI@Windows@winrt@@@impl@winrt@@QEBA@AEBUhstring@param@3@AEBUIAnimationObject@Composition@UI@Windows@3@@Z @ 0x18055A85C (-SetExpressionReferenceParameter@-$consume_Windows_UI_Composition_ICompositionAnimation4@UExpres.c)
 *     ?SetReferenceParameter@?$consume_Windows_UI_Composition_ICompositionAnimation@USpringScalarNaturalMotionAnimation@Composition@UI@Windows@winrt@@@impl@winrt@@QEBA@AEBUhstring@param@3@AEBUCompositionObject@Composition@UI@Windows@3@@Z @ 0x18055AAD8 (-SetReferenceParameter@-$consume_Windows_UI_Composition_ICompositionAnimation@USpringScalarNatur.c)
 *     ?SetScalarParameter@?$consume_Windows_UI_Composition_ICompositionAnimation@UExpressionAnimation@Composition@UI@Windows@winrt@@@impl@winrt@@QEBA@AEBUhstring@param@3@M@Z @ 0x18055AB8C (-SetScalarParameter@-$consume_Windows_UI_Composition_ICompositionAnimation@UExpressionAnimation@.c)
 */

// Hidden C++ exception states: #wind=7
_QWORD *__fastcall CAppThumbnailWindow::CreateTriggerForFlickScaleAnimtion(
        __int64 a1,
        _QWORD *a2,
        _QWORD *a3,
        _QWORD *a4)
{
  __int64 (__fastcall ****v8)(_QWORD, void *, __int64 *); // r15
  __int64 v9; // rbx
  __int64 v10; // rbx
  __int64 v11; // rbx
  void (__fastcall ****v12)(_QWORD, void *, volatile signed __int32 **); // rdi
  __int64 v13; // rbx
  void (__fastcall ***v14)(_QWORD, void *, volatile signed __int32 **); // rcx
  volatile signed __int32 *v15; // rbx
  void (__fastcall ***v16)(_QWORD, void *, volatile signed __int32 **); // rbx
  __int64 v17; // rsi
  void (__fastcall ***v18)(_QWORD, void *, volatile signed __int32 **); // rcx
  volatile signed __int32 *v19; // rdi
  volatile signed __int32 *v21; // [rsp+38h] [rbp-31h] BYREF
  _BYTE v22[32]; // [rsp+40h] [rbp-29h] BYREF
  _QWORD v23[12]; // [rsp+60h] [rbp-9h] BYREF
  __int64 v24; // [rsp+D0h] [rbp+67h] BYREF
  void (__fastcall ***v25)(_QWORD, void *, volatile signed __int32 **); // [rsp+D8h] [rbp+6Fh] BYREF
  volatile signed __int32 *v26; // [rsp+E0h] [rbp+77h] BYREF
  __int64 v27; // [rsp+E8h] [rbp+7Fh] BYREF

  v25 = (void (__fastcall ***)(_QWORD, void *, volatile signed __int32 **))a2;
  v8 = (__int64 (__fastcall ****)(_QWORD, void *, __int64 *))(a1 + 384);
  winrt::impl::consume_Windows_UI_Composition_ICompositor4<winrt::Windows::UI::Composition::Compositor>::CreateSpringScalarAnimation(
    (__int64 *)(a1 + 384),
    &v25);
  winrt::param::hstring::create_string_reference((winrt::param::hstring *)v22, L"operation", 9);
  winrt::impl::consume_Windows_UI_Composition_ICompositionAnimation4<winrt::Windows::UI::Composition::ExpressionAnimation>::SetExpressionReferenceParameter(
    &v25,
    v22,
    a1 + 464);
  v24 = 250000LL;
  winrt::impl::consume_Windows_UI_Composition_ISpringScalarNaturalMotionAnimation<winrt::Windows::UI::Composition::ISpringScalarNaturalMotionAnimation>::Period(
    &v25,
    &v24);
  winrt::impl::consume_Windows_UI_Composition_ISpringScalarNaturalMotionAnimation<winrt::Windows::UI::Composition::ISpringScalarNaturalMotionAnimation>::DampingRatio(&v25);
  v9 = winrt::impl::consume_Windows_UI_Composition_ICompositionAnimation3<winrt::Windows::UI::Composition::SpringScalarNaturalMotionAnimation>::InitialValueExpressions(
         &v25,
         &v24);
  winrt::param::hstring::create_string_reference((winrt::param::hstring *)v22, L"operation.Velocity.X * growthRate", 33);
  winrt::param::hstring::create_string_reference((winrt::param::hstring *)v23, L"InitialVelocity", 15);
  winrt::impl::consume_Windows_Foundation_Collections_IMap<winrt::Windows::Foundation::Collections::IMap<winrt::hstring,winrt::hstring>,winrt::hstring,winrt::hstring>::Insert(
    v9,
    v23,
    v22);
  if ( v24 )
    winrt::Windows::Foundation::IUnknown::unconditional_release_ref((winrt::Windows::Foundation::IUnknown *)&v24);
  winrt::param::hstring::create_string_reference((winrt::param::hstring *)v23, L"growthRate", 10);
  winrt::impl::consume_Windows_UI_Composition_ICompositionAnimation<winrt::Windows::UI::Composition::ExpressionAnimation>::SetScalarParameter(
    &v25,
    v23);
  v10 = winrt::impl::consume_Windows_UI_Composition_ICompositionAnimation3<winrt::Windows::UI::Composition::SpringScalarNaturalMotionAnimation>::InitialValueExpressions(
          &v25,
          &v24);
  winrt::param::hstring::create_string_reference((winrt::param::hstring *)v23, L"finalScaleFactor", 16);
  winrt::param::hstring::create_string_reference((winrt::param::hstring *)v22, L"FinalValue", 10);
  winrt::impl::consume_Windows_Foundation_Collections_IMap<winrt::Windows::Foundation::Collections::IMap<winrt::hstring,winrt::hstring>,winrt::hstring,winrt::hstring>::Insert(
    v10,
    v22,
    v23);
  if ( v24 )
    winrt::Windows::Foundation::IUnknown::unconditional_release_ref((winrt::Windows::Foundation::IUnknown *)&v24);
  winrt::param::hstring::create_string_reference((winrt::param::hstring *)v23, L"finalScaleFactor", 16);
  winrt::impl::consume_Windows_UI_Composition_ICompositionAnimation<winrt::Windows::UI::Composition::ExpressionAnimation>::SetScalarParameter(
    &v25,
    v23);
  if ( *a3 )
  {
    v13 = winrt::impl::consume_Windows_UI_Composition_ICompositionAnimation3<winrt::Windows::UI::Composition::SpringScalarNaturalMotionAnimation>::InitialValueExpressions(
            &v25,
            &v24);
    v23[0] = *(_QWORD *)winrt::operator+((__int64)&v26, (__int64)L"m_compPropertySet.", (__int64)a3);
    winrt::param::hstring::create_string_reference((winrt::param::hstring *)v22, L"InitialValue", 12);
    winrt::impl::consume_Windows_Foundation_Collections_IMap<winrt::Windows::Foundation::Collections::IMap<winrt::hstring,winrt::hstring>,winrt::hstring,winrt::hstring>::Insert(
      v13,
      v22,
      v23);
    winrt::handle_type<winrt::impl::hstring_traits>::close(&v26);
    if ( v24 )
      winrt::Windows::Foundation::IUnknown::unconditional_release_ref((winrt::Windows::Foundation::IUnknown *)&v24);
    v12 = (void (__fastcall ****)(_QWORD, void *, volatile signed __int32 **))(a1 + 392);
    v14 = *v12;
    if ( *v12 )
    {
      v26 = 0LL;
      (**v14)(v14, &winrt::impl::guid_v<winrt::Windows::UI::Composition::ICompositionObject>, &v26);
      v15 = v26;
      v24 = (__int64)v26;
    }
    else
    {
      v24 = 0LL;
      v15 = 0LL;
    }
    winrt::param::hstring::create_string_reference((winrt::param::hstring *)v23, L"m_compPropertySet", 17);
    winrt::impl::consume_Windows_UI_Composition_ICompositionAnimation<winrt::Windows::UI::Composition::SpringScalarNaturalMotionAnimation>::SetReferenceParameter(
      &v25,
      v23,
      &v24);
    if ( v15 )
      winrt::Windows::Foundation::IUnknown::unconditional_release_ref((winrt::Windows::Foundation::IUnknown *)&v24);
  }
  else
  {
    v11 = winrt::impl::consume_Windows_UI_Composition_ICompositionAnimation3<winrt::Windows::UI::Composition::SpringScalarNaturalMotionAnimation>::InitialValueExpressions(
            &v25,
            &v24);
    winrt::param::hstring::create_string_reference((winrt::param::hstring *)v23, L"1.0f", 4);
    winrt::param::hstring::create_string_reference((winrt::param::hstring *)v22, L"InitialValue", 12);
    winrt::impl::consume_Windows_Foundation_Collections_IMap<winrt::Windows::Foundation::Collections::IMap<winrt::hstring,winrt::hstring>,winrt::hstring,winrt::hstring>::Insert(
      v11,
      v22,
      v23);
    if ( v24 )
      winrt::Windows::Foundation::IUnknown::unconditional_release_ref((winrt::Windows::Foundation::IUnknown *)&v24);
    v12 = (void (__fastcall ****)(_QWORD, void *, volatile signed __int32 **))(a1 + 392);
  }
  winrt::impl::as<winrt::Windows::UI::Composition::Internal::ICompositorInternal,winrt::impl::abi<winrt::Windows::Foundation::IUnknown,void>::type,0>(
    &v27,
    *v8);
  v16 = v25;
  if ( v25 )
  {
    v24 = 0LL;
    (**v25)(
      v25,
      &winrt::impl::guid_v<winrt::Windows::UI::Composition::ICompositionAnimationBase>,
      (volatile signed __int32 **)&v24);
    v17 = v24;
    v26 = (volatile signed __int32 *)v24;
  }
  else
  {
    v26 = 0LL;
    v17 = 0LL;
  }
  v18 = *v12;
  if ( *v12 )
  {
    v21 = 0LL;
    (**v18)(v18, &winrt::impl::guid_v<winrt::Windows::UI::Composition::IAnimationObject>, &v21);
    v19 = v21;
    v24 = (__int64)v21;
  }
  else
  {
    v24 = 0LL;
    v19 = 0LL;
  }
  v23[0] = *a4;
  winrt::impl::consume_Windows_UI_Composition_Internal_ICompositorInternal<winrt::Windows::UI::Composition::Internal::ICompositorInternal>::CreateAnimationTriggerValuePartner(
    &v27,
    a2,
    v23,
    &v24,
    &v26);
  if ( v19 )
    winrt::Windows::Foundation::IUnknown::unconditional_release_ref((winrt::Windows::Foundation::IUnknown *)&v24);
  if ( v17 )
    winrt::Windows::Foundation::IUnknown::unconditional_release_ref((winrt::Windows::Foundation::IUnknown *)&v26);
  if ( v27 )
    winrt::Windows::Foundation::IUnknown::unconditional_release_ref((winrt::Windows::Foundation::IUnknown *)&v27);
  if ( v16 )
    winrt::Windows::Foundation::IUnknown::unconditional_release_ref((winrt::Windows::Foundation::IUnknown *)&v25);
  return a2;
}

/*
 * XREFs of ?CreateTriggerToCacheScalar@CAppThumbnailWindow@@AEAA?AUCompositionAnimationTriggerValuePartner@Internal@Composition@UI@Windows@winrt@@AEBUhstring@7@0@Z @ 0x180558548
 * Callers:
 *     ?SetupTriggersForDragDirectionChange@CAppThumbnailWindow@@AEAAXXZ @ 0x18055B380 (-SetupTriggersForDragDirectionChange@CAppThumbnailWindow@@AEAAXXZ.c)
 * Callees:
 *     ??Hwinrt@@YA?AUhstring@0@PEBGAEBU10@@Z @ 0x180060E5C (--Hwinrt@@YA-AUhstring@0@PEBGAEBU10@@Z.c)
 *     ?create_string_reference@hstring@param@winrt@@AEAAXQEBG_K@Z @ 0x1800B4460 (-create_string_reference@hstring@param@winrt@@AEAAXQEBG_K@Z.c)
 *     ?close@?$handle_type@Uhstring_traits@impl@winrt@@@winrt@@QEAAXXZ @ 0x1800B6D14 (-close@-$handle_type@Uhstring_traits@impl@winrt@@@winrt@@QEAAXXZ.c)
 *     ?unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ @ 0x1800D5AF0 (-unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ??$as@UICompositorInternal@Internal@Composition@UI@Windows@winrt@@Utype@?$abi@UIUnknown@Foundation@Windows@winrt@@X@impl@6@$0A@@impl@winrt@@YA?AUICompositorInternal@Internal@Composition@UI@Windows@1@PEAUtype@?$abi@UIUnknown@Foundation@Windows@winrt@@X@01@@Z @ 0x180554D98 (--$as@UICompositorInternal@Internal@Composition@UI@Windows@winrt@@Utype@-$abi@UIUnknown@Foundati.c)
 *     ?CreateAnimationTriggerValuePartner@?$consume_Windows_UI_Composition_Internal_ICompositorInternal@UICompositorInternal@Internal@Composition@UI@Windows@winrt@@@impl@winrt@@QEBA@AEBUhstring@param@3@AEBUIAnimationObject@Composition@UI@Windows@3@AEBUICompositionAnimationBase@7893@@Z @ 0x180555904 (-CreateAnimationTriggerValuePartner@-$consume_Windows_UI_Composition_Internal_ICompositorInterna.c)
 *     ?CreateScalarKeyFrameAnimation@?$consume_Windows_UI_Composition_ICompositor@UICompositor@Composition@UI@Windows@winrt@@@impl@winrt@@QEBA@XZ @ 0x180556E40 (-CreateScalarKeyFrameAnimation@-$consume_Windows_UI_Composition_ICompositor@UICompositor@Composi.c)
 *     ?Duration@?$consume_Windows_UI_Composition_IKeyFrameAnimation@UScalarKeyFrameAnimation@Composition@UI@Windows@winrt@@@impl@winrt@@QEBA@AEBV?$duration@_JU?$ratio@$00$0JIJGIA@@std@@@chrono@std@@@Z @ 0x180558AA0 (-Duration@-$consume_Windows_UI_Composition_IKeyFrameAnimation@UScalarKeyFrameAnimation@Compositi.c)
 *     ?InsertExpressionKeyFrame@?$consume_Windows_UI_Composition_IKeyFrameAnimation@UScalarKeyFrameAnimation@Composition@UI@Windows@winrt@@@impl@winrt@@QEBA@MAEBUhstring@param@3@@Z @ 0x18055945C (-InsertExpressionKeyFrame@-$consume_Windows_UI_Composition_IKeyFrameAnimation@UScalarKeyFrameAni.c)
 *     ?SetReferenceParameter@?$consume_Windows_UI_Composition_ICompositionAnimation@USpringScalarNaturalMotionAnimation@Composition@UI@Windows@winrt@@@impl@winrt@@QEBA@AEBUhstring@param@3@AEBUCompositionObject@Composition@UI@Windows@3@@Z @ 0x18055AAD8 (-SetReferenceParameter@-$consume_Windows_UI_Composition_ICompositionAnimation@USpringScalarNatur.c)
 */

// Hidden C++ exception states: #wind=6
_QWORD *__fastcall CAppThumbnailWindow::CreateTriggerToCacheScalar(__int64 a1, _QWORD *a2, __int64 a3, _QWORD *a4)
{
  __int64 (__fastcall ****v8)(_QWORD, void *, __int64 *); // rdi
  __int64 v9; // rdx
  void (__fastcall ***v10)(_QWORD, void *, volatile signed __int32 **); // rcx
  volatile signed __int32 *v11; // rbx
  void (__fastcall ***v12)(_QWORD, void *, __int64 *); // rbx
  volatile signed __int32 *v13; // rdi
  void (__fastcall ***v14)(_QWORD, void *, volatile signed __int32 **); // rcx
  volatile signed __int32 *v15; // rsi
  __int64 v17; // [rsp+38h] [rbp-38h] BYREF
  volatile signed __int32 *v18; // [rsp+40h] [rbp-30h] BYREF
  _QWORD v19[5]; // [rsp+48h] [rbp-28h] BYREF
  __int64 v20; // [rsp+A0h] [rbp+30h] BYREF
  void (__fastcall ***v21)(_QWORD, void *, __int64 *); // [rsp+A8h] [rbp+38h] BYREF
  volatile signed __int32 *v22; // [rsp+B8h] [rbp+48h] BYREF

  v21 = (void (__fastcall ***)(_QWORD, void *, __int64 *))a2;
  v8 = (__int64 (__fastcall ****)(_QWORD, void *, __int64 *))(a1 + 384);
  winrt::impl::consume_Windows_UI_Composition_ICompositor<winrt::Windows::UI::Composition::ICompositor>::CreateScalarKeyFrameAnimation(
    (__int64 *)(a1 + 384),
    &v21);
  v19[0] = *(_QWORD *)winrt::operator+((__int64)&v20, (__int64)L"m_compPropertySet.", a3);
  winrt::impl::consume_Windows_UI_Composition_IKeyFrameAnimation<winrt::Windows::UI::Composition::ScalarKeyFrameAnimation>::InsertExpressionKeyFrame(
    &v21,
    v9,
    v19);
  winrt::handle_type<winrt::impl::hstring_traits>::close((volatile signed __int32 **)&v20);
  v10 = *(void (__fastcall ****)(_QWORD, void *, volatile signed __int32 **))(a1 + 392);
  if ( v10 )
  {
    v22 = 0LL;
    (**v10)(v10, &winrt::impl::guid_v<winrt::Windows::UI::Composition::ICompositionObject>, &v22);
    v11 = v22;
    v20 = (__int64)v22;
  }
  else
  {
    v20 = 0LL;
    v11 = 0LL;
  }
  winrt::param::hstring::create_string_reference((winrt::param::hstring *)v19, L"m_compPropertySet", 17);
  winrt::impl::consume_Windows_UI_Composition_ICompositionAnimation<winrt::Windows::UI::Composition::SpringScalarNaturalMotionAnimation>::SetReferenceParameter(
    &v21,
    v19,
    &v20);
  if ( v11 )
    winrt::Windows::Foundation::IUnknown::unconditional_release_ref((winrt::Windows::Foundation::IUnknown *)&v20);
  v20 = 10000LL;
  winrt::impl::consume_Windows_UI_Composition_IKeyFrameAnimation<winrt::Windows::UI::Composition::ScalarKeyFrameAnimation>::Duration(
    &v21,
    &v20);
  winrt::impl::as<winrt::Windows::UI::Composition::Internal::ICompositorInternal,winrt::impl::abi<winrt::Windows::Foundation::IUnknown,void>::type,0>(
    &v17,
    *v8);
  v12 = v21;
  if ( v21 )
  {
    v20 = 0LL;
    (**v21)(v21, &winrt::impl::guid_v<winrt::Windows::UI::Composition::ICompositionAnimationBase>, &v20);
    v13 = (volatile signed __int32 *)v20;
    v22 = (volatile signed __int32 *)v20;
  }
  else
  {
    v22 = 0LL;
    v13 = 0LL;
  }
  v14 = *(void (__fastcall ****)(_QWORD, void *, volatile signed __int32 **))(a1 + 392);
  if ( v14 )
  {
    v18 = 0LL;
    (**v14)(v14, &winrt::impl::guid_v<winrt::Windows::UI::Composition::IAnimationObject>, &v18);
    v15 = v18;
    v20 = (__int64)v18;
  }
  else
  {
    v20 = 0LL;
    v15 = 0LL;
  }
  v19[0] = *a4;
  winrt::impl::consume_Windows_UI_Composition_Internal_ICompositorInternal<winrt::Windows::UI::Composition::Internal::ICompositorInternal>::CreateAnimationTriggerValuePartner(
    &v17,
    a2,
    v19,
    &v20,
    &v22);
  if ( v15 )
    winrt::Windows::Foundation::IUnknown::unconditional_release_ref((winrt::Windows::Foundation::IUnknown *)&v20);
  if ( v13 )
    winrt::Windows::Foundation::IUnknown::unconditional_release_ref((winrt::Windows::Foundation::IUnknown *)&v22);
  if ( v17 )
    winrt::Windows::Foundation::IUnknown::unconditional_release_ref((winrt::Windows::Foundation::IUnknown *)&v17);
  if ( v12 )
    winrt::Windows::Foundation::IUnknown::unconditional_release_ref((winrt::Windows::Foundation::IUnknown *)&v21);
  return a2;
}

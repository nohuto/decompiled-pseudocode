/*
 * XREFs of ?CreateTriggerToCachePositionX@CAppThumbnailWindow@@AEAA?AUCompositionAnimationTriggerValuePartner@Internal@Composition@UI@Windows@winrt@@AEBUhstring@7@@Z @ 0x180558378
 * Callers:
 *     ?SetupTriggersForDragDirectionChange@CAppThumbnailWindow@@AEAAXXZ @ 0x18055B380 (-SetupTriggersForDragDirectionChange@CAppThumbnailWindow@@AEAAXXZ.c)
 * Callees:
 *     ?create_string_reference@hstring@param@winrt@@AEAAXQEBG_K@Z @ 0x1800B4460 (-create_string_reference@hstring@param@winrt@@AEAAXQEBG_K@Z.c)
 *     ?unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ @ 0x1800D5AF0 (-unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ??$as@UICompositorInternal@Internal@Composition@UI@Windows@winrt@@Utype@?$abi@UIUnknown@Foundation@Windows@winrt@@X@impl@6@$0A@@impl@winrt@@YA?AUICompositorInternal@Internal@Composition@UI@Windows@1@PEAUtype@?$abi@UIUnknown@Foundation@Windows@winrt@@X@01@@Z @ 0x180554D98 (--$as@UICompositorInternal@Internal@Composition@UI@Windows@winrt@@Utype@-$abi@UIUnknown@Foundati.c)
 *     ?CreateAnimationTriggerValuePartner@?$consume_Windows_UI_Composition_Internal_ICompositorInternal@UICompositorInternal@Internal@Composition@UI@Windows@winrt@@@impl@winrt@@QEBA@AEBUhstring@param@3@AEBUIAnimationObject@Composition@UI@Windows@3@AEBUICompositionAnimationBase@7893@@Z @ 0x180555904 (-CreateAnimationTriggerValuePartner@-$consume_Windows_UI_Composition_Internal_ICompositorInterna.c)
 *     ?CreateScalarKeyFrameAnimation@?$consume_Windows_UI_Composition_ICompositor@UICompositor@Composition@UI@Windows@winrt@@@impl@winrt@@QEBA@XZ @ 0x180556E40 (-CreateScalarKeyFrameAnimation@-$consume_Windows_UI_Composition_ICompositor@UICompositor@Composi.c)
 *     ?Duration@?$consume_Windows_UI_Composition_IKeyFrameAnimation@UScalarKeyFrameAnimation@Composition@UI@Windows@winrt@@@impl@winrt@@QEBA@AEBV?$duration@_JU?$ratio@$00$0JIJGIA@@std@@@chrono@std@@@Z @ 0x180558AA0 (-Duration@-$consume_Windows_UI_Composition_IKeyFrameAnimation@UScalarKeyFrameAnimation@Compositi.c)
 *     ?InsertExpressionKeyFrame@?$consume_Windows_UI_Composition_IKeyFrameAnimation@UScalarKeyFrameAnimation@Composition@UI@Windows@winrt@@@impl@winrt@@QEBA@MAEBUhstring@param@3@@Z @ 0x18055945C (-InsertExpressionKeyFrame@-$consume_Windows_UI_Composition_IKeyFrameAnimation@UScalarKeyFrameAni.c)
 *     ?SetExpressionReferenceParameter@?$consume_Windows_UI_Composition_ICompositionAnimation4@UExpressionAnimation@Composition@UI@Windows@winrt@@@impl@winrt@@QEBA@AEBUhstring@param@3@AEBUIAnimationObject@Composition@UI@Windows@3@@Z @ 0x18055A85C (-SetExpressionReferenceParameter@-$consume_Windows_UI_Composition_ICompositionAnimation4@UExpres.c)
 */

// Hidden C++ exception states: #wind=4
_QWORD *__fastcall CAppThumbnailWindow::CreateTriggerToCachePositionX(__int64 a1, _QWORD *a2, _QWORD *a3)
{
  __int64 (__fastcall ****v6)(_QWORD, void *, __int64 *); // rbx
  __int64 v7; // rdx
  void (__fastcall ***v8)(_QWORD, void *, __int64 *); // rbx
  __int64 v9; // rdi
  void (__fastcall ***v10)(_QWORD, void *, __int64 *); // rcx
  __int64 v11; // rsi
  __int64 v13; // [rsp+38h] [rbp-30h] BYREF
  _QWORD v14[5]; // [rsp+40h] [rbp-28h] BYREF
  __int64 v15; // [rsp+A0h] [rbp+38h] BYREF
  void (__fastcall ***v16)(_QWORD, void *, __int64 *); // [rsp+A8h] [rbp+40h] BYREF
  __int64 v17; // [rsp+B0h] [rbp+48h] BYREF
  __int64 v18; // [rsp+B8h] [rbp+50h] BYREF

  v16 = (void (__fastcall ***)(_QWORD, void *, __int64 *))a2;
  v6 = (__int64 (__fastcall ****)(_QWORD, void *, __int64 *))(a1 + 384);
  winrt::impl::consume_Windows_UI_Composition_ICompositor<winrt::Windows::UI::Composition::ICompositor>::CreateScalarKeyFrameAnimation(
    (__int64 *)(a1 + 384),
    &v16);
  winrt::param::hstring::create_string_reference((winrt::param::hstring *)v14, L"operation.Position.X", 20);
  winrt::impl::consume_Windows_UI_Composition_IKeyFrameAnimation<winrt::Windows::UI::Composition::ScalarKeyFrameAnimation>::InsertExpressionKeyFrame(
    &v16,
    v7,
    v14);
  winrt::param::hstring::create_string_reference((winrt::param::hstring *)v14, L"operation", 9);
  winrt::impl::consume_Windows_UI_Composition_ICompositionAnimation4<winrt::Windows::UI::Composition::ExpressionAnimation>::SetExpressionReferenceParameter(
    &v16,
    v14,
    a1 + 464);
  v15 = 10000LL;
  winrt::impl::consume_Windows_UI_Composition_IKeyFrameAnimation<winrt::Windows::UI::Composition::ScalarKeyFrameAnimation>::Duration(
    &v16,
    &v15);
  winrt::impl::as<winrt::Windows::UI::Composition::Internal::ICompositorInternal,winrt::impl::abi<winrt::Windows::Foundation::IUnknown,void>::type,0>(
    &v18,
    *v6);
  v8 = v16;
  if ( v16 )
  {
    v15 = 0LL;
    (**v16)(v16, &winrt::impl::guid_v<winrt::Windows::UI::Composition::ICompositionAnimationBase>, &v15);
    v9 = v15;
    v17 = v15;
  }
  else
  {
    v17 = 0LL;
    v9 = 0LL;
  }
  v10 = *(void (__fastcall ****)(_QWORD, void *, __int64 *))(a1 + 392);
  if ( v10 )
  {
    v13 = 0LL;
    (**v10)(v10, &winrt::impl::guid_v<winrt::Windows::UI::Composition::IAnimationObject>, &v13);
    v11 = v13;
    v15 = v13;
  }
  else
  {
    v15 = 0LL;
    v11 = 0LL;
  }
  v14[0] = *a3;
  winrt::impl::consume_Windows_UI_Composition_Internal_ICompositorInternal<winrt::Windows::UI::Composition::Internal::ICompositorInternal>::CreateAnimationTriggerValuePartner(
    &v18,
    a2,
    v14,
    &v15,
    &v17);
  if ( v11 )
    winrt::Windows::Foundation::IUnknown::unconditional_release_ref((winrt::Windows::Foundation::IUnknown *)&v15);
  if ( v9 )
    winrt::Windows::Foundation::IUnknown::unconditional_release_ref((winrt::Windows::Foundation::IUnknown *)&v17);
  if ( v18 )
    winrt::Windows::Foundation::IUnknown::unconditional_release_ref((winrt::Windows::Foundation::IUnknown *)&v18);
  if ( v8 )
    winrt::Windows::Foundation::IUnknown::unconditional_release_ref((winrt::Windows::Foundation::IUnknown *)&v16);
  return a2;
}

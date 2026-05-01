/*
 * XREFs of ?SetupTriggersForDragDirectionChange@CAppThumbnailWindow@@AEAAXXZ @ 0x18055B380
 * Callers:
 *     CAppThumbnailWindow::StartSwitchGestureOperationAsync$_ResumeCoro$1 @ 0x1802106D0 (CAppThumbnailWindow--StartSwitchGestureOperationAsync$_ResumeCoro$1.c)
 * Callees:
 *     ?close@?$handle_type@Uhstring_traits@impl@winrt@@@winrt@@QEAAXXZ @ 0x1800B6D14 (-close@-$handle_type@Uhstring_traits@impl@winrt@@@winrt@@QEAAXXZ.c)
 *     ??0hstring@winrt@@QEAA@PEBG@Z @ 0x1800D20DC (--0hstring@winrt@@QEAA@PEBG@Z.c)
 *     ?unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ @ 0x1800D5AF0 (-unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ.c)
 *     ??4IUnknown@Foundation@Windows@winrt@@QEAAAEAU0123@$$QEAU0123@@Z @ 0x180172F30 (--4IUnknown@Foundation@Windows@winrt@@QEAAAEAU0123@$$QEAU0123@@Z.c)
 *     ??1?$iterable@UCompositionAnimationTriggerValuePartner@Internal@Composition@UI@Windows@winrt@@@param@winrt@@QEAA@XZ @ 0x18041DB88 (--1-$iterable@UCompositionAnimationTriggerValuePartner@Internal@Composition@UI@Windows@winrt@@@p.c)
 *     ??$?0U?$IVector@UCompositionAnimationTriggerValuePartner@Internal@Composition@UI@Windows@winrt@@@Collections@Foundation@Windows@winrt@@$0A@@?$iterable@UCompositionAnimationTriggerValuePartner@Internal@Composition@UI@Windows@winrt@@@param@winrt@@QEAA@AEBU?$IVector@UCompositionAnimationTriggerValuePartner@Internal@Composition@UI@Windows@winrt@@@Collections@Foundation@Windows@2@@Z @ 0x180554270 (--$-0U-$IVector@UCompositionAnimationTriggerValuePartner@Internal@Composition@UI@Windows@winrt@@.c)
 *     ??$?0VCAppThumbnailWindow@@P80@EAAXAEBUCompositionAnimationTriggerPartner@Internal@Composition@UI@Windows@winrt@@AEBUCompositionAnimationTriggerPartnerFiredEventArgs@23456@@Z@?$TypedEventHandler@UCompositionAnimationTriggerPartner@Internal@Composition@UI@Windows@winrt@@UCompositionAnimationTriggerPartnerFiredEventArgs@23456@@Foundation@Windows@winrt@@QEAA@PEAVCAppThumbnailWindow@@P84@EAAXAEBUCompositionAnimationTriggerPartner@Internal@Composition@UI@23@AEBUCompositionAnimationTriggerPartnerFiredEventArgs@67823@@Z@Z @ 0x180554560 (--$-0VCAppThumbnailWindow@@P80@EAAXAEBUCompositionAnimationTriggerPartner@Internal@Composition@U.c)
 *     ??$as@UICompositorInternal@Internal@Composition@UI@Windows@winrt@@Utype@?$abi@UIUnknown@Foundation@Windows@winrt@@X@impl@6@$0A@@impl@winrt@@YA?AUICompositorInternal@Internal@Composition@UI@Windows@1@PEAUtype@?$abi@UIUnknown@Foundation@Windows@winrt@@X@01@@Z @ 0x180554D98 (--$as@UICompositorInternal@Internal@Composition@UI@Windows@winrt@@Utype@-$abi@UIUnknown@Foundati.c)
 *     ?Append@?$consume_Windows_Foundation_Collections_IVector@U?$IVector@UCompositionAnimationTriggerValuePartner@Internal@Composition@UI@Windows@winrt@@@Collections@Foundation@Windows@winrt@@UCompositionAnimationTriggerValuePartner@Internal@Composition@UI@45@@impl@winrt@@QEBA@AEBUCompositionAnimationTriggerValuePartner@Internal@Composition@UI@Windows@3@@Z @ 0x180555424 (-Append@-$consume_Windows_Foundation_Collections_IVector@U-$IVector@UCompositionAnimationTrigger.c)
 *     ?CreateAnimationTriggerPartner@?$consume_Windows_UI_Composition_Internal_ICompositorInternal@UICompositorInternal@Internal@Composition@UI@Windows@winrt@@@impl@winrt@@QEBA@AEBUExpressionAnimation@Composition@UI@Windows@3@AEBU?$iterable@UCompositionAnimationTriggerValuePartner@Internal@Composition@UI@Windows@winrt@@@param@3@@Z @ 0x180555898 (-CreateAnimationTriggerPartner@-$consume_Windows_UI_Composition_Internal_ICompositorInternal@UIC.c)
 *     ?CreateTriggerConditionForDirectionChange@CAppThumbnailWindow@@AEAA?AUExpressionAnimation@Composition@UI@Windows@winrt@@XZ @ 0x180557C8C (-CreateTriggerConditionForDirectionChange@CAppThumbnailWindow@@AEAA-AUExpressionAnimation@Compos.c)
 *     ?CreateTriggerToCachePositionX@CAppThumbnailWindow@@AEAA?AUCompositionAnimationTriggerValuePartner@Internal@Composition@UI@Windows@winrt@@AEBUhstring@7@@Z @ 0x180558378 (-CreateTriggerToCachePositionX@CAppThumbnailWindow@@AEAA-AUCompositionAnimationTriggerValuePartn.c)
 *     ?CreateTriggerToCacheScalar@CAppThumbnailWindow@@AEAA?AUCompositionAnimationTriggerValuePartner@Internal@Composition@UI@Windows@winrt@@AEBUhstring@7@0@Z @ 0x180558548 (-CreateTriggerToCacheScalar@CAppThumbnailWindow@@AEAA-AUCompositionAnimationTriggerValuePartner@.c)
 *     ?TriggerFired@?$consume_Windows_UI_Composition_Internal_ICompositionAnimationTriggerPartner@UICompositionAnimationTriggerPartner@Internal@Composition@UI@Windows@winrt@@@impl@winrt@@QEBA@AEBU?$TypedEventHandler@UCompositionAnimationTriggerPartner@Internal@Composition@UI@Windows@winrt@@UCompositionAnimationTriggerPartnerFiredEventArgs@23456@@Foundation@Windows@3@@Z @ 0x18055CA8C (-TriggerFired@-$consume_Windows_UI_Composition_Internal_ICompositionAnimationTriggerPartner@UICo.c)
 */

// Hidden C++ exception states: #wind=9
void __fastcall CAppThumbnailWindow::SetupTriggersForDragDirectionChange(CAppThumbnailWindow *this)
{
  _QWORD *v2; // rsi
  _QWORD *v3; // rax
  _QWORD *v4; // rax
  _QWORD *v5; // rax
  _QWORD *v6; // rax
  winrt::Windows::Foundation::IUnknown *v7; // rax
  _QWORD v8[5]; // [rsp+20h] [rbp-28h] BYREF
  __int64 v9; // [rsp+70h] [rbp+28h] BYREF
  volatile signed __int32 *v10; // [rsp+78h] [rbp+30h] BYREF
  __int64 v11; // [rsp+80h] [rbp+38h] BYREF
  volatile signed __int32 *v12; // [rsp+88h] [rbp+40h] BYREF

  v2 = (_QWORD *)((char *)this + 504);
  winrt::hstring::hstring((winrt::hstring *)&v10, L"touchPosAtDirectionChange");
  v3 = CAppThumbnailWindow::CreateTriggerToCachePositionX((__int64)this, &v9, &v10);
  winrt::impl::consume_Windows_Foundation_Collections_IVector<winrt::Windows::Foundation::Collections::IVector<winrt::Windows::UI::Composition::Internal::CompositionAnimationTriggerValuePartner>,winrt::Windows::UI::Composition::Internal::CompositionAnimationTriggerValuePartner>::Append(
    v2,
    v3);
  if ( v9 )
    winrt::Windows::Foundation::IUnknown::unconditional_release_ref((winrt::Windows::Foundation::IUnknown *)&v9);
  winrt::handle_type<winrt::impl::hstring_traits>::close(&v10);
  winrt::hstring::hstring((winrt::hstring *)&v10, L"touchPosAtDirectionChangeThreshold");
  v4 = CAppThumbnailWindow::CreateTriggerToCachePositionX((__int64)this, &v9, &v10);
  winrt::impl::consume_Windows_Foundation_Collections_IVector<winrt::Windows::Foundation::Collections::IVector<winrt::Windows::UI::Composition::Internal::CompositionAnimationTriggerValuePartner>,winrt::Windows::UI::Composition::Internal::CompositionAnimationTriggerValuePartner>::Append(
    (_QWORD *)this + 66,
    v4);
  if ( v9 )
    winrt::Windows::Foundation::IUnknown::unconditional_release_ref((winrt::Windows::Foundation::IUnknown *)&v9);
  winrt::handle_type<winrt::impl::hstring_traits>::close(&v10);
  winrt::hstring::hstring((winrt::hstring *)&v12, L"scaleFactorAtDirectionChangeThresholdSecondApp");
  winrt::hstring::hstring((winrt::hstring *)&v10, L"scaleFactorSecondApp");
  v5 = CAppThumbnailWindow::CreateTriggerToCacheScalar((__int64)this, &v9, (__int64)&v10, &v12);
  winrt::impl::consume_Windows_Foundation_Collections_IVector<winrt::Windows::Foundation::Collections::IVector<winrt::Windows::UI::Composition::Internal::CompositionAnimationTriggerValuePartner>,winrt::Windows::UI::Composition::Internal::CompositionAnimationTriggerValuePartner>::Append(
    (_QWORD *)this + 66,
    v5);
  if ( v9 )
    winrt::Windows::Foundation::IUnknown::unconditional_release_ref((winrt::Windows::Foundation::IUnknown *)&v9);
  winrt::handle_type<winrt::impl::hstring_traits>::close(&v10);
  winrt::handle_type<winrt::impl::hstring_traits>::close(&v12);
  winrt::hstring::hstring((winrt::hstring *)&v12, L"scaleFactorAtDirectionChangeThresholdFirstApp");
  winrt::hstring::hstring((winrt::hstring *)&v10, L"scaleFactorFirstApp");
  v6 = CAppThumbnailWindow::CreateTriggerToCacheScalar((__int64)this, &v9, (__int64)&v10, &v12);
  winrt::impl::consume_Windows_Foundation_Collections_IVector<winrt::Windows::Foundation::Collections::IVector<winrt::Windows::UI::Composition::Internal::CompositionAnimationTriggerValuePartner>,winrt::Windows::UI::Composition::Internal::CompositionAnimationTriggerValuePartner>::Append(
    (_QWORD *)this + 66,
    v6);
  if ( v9 )
    winrt::Windows::Foundation::IUnknown::unconditional_release_ref((winrt::Windows::Foundation::IUnknown *)&v9);
  winrt::handle_type<winrt::impl::hstring_traits>::close(&v10);
  winrt::handle_type<winrt::impl::hstring_traits>::close(&v12);
  CAppThumbnailWindow::CreateTriggerConditionForDirectionChange((__int64)this, &v11);
  winrt::impl::as<winrt::Windows::UI::Composition::Internal::ICompositorInternal,winrt::impl::abi<winrt::Windows::Foundation::IUnknown,void>::type,0>(
    &v10,
    *((__int64 (__fastcall ****)(_QWORD, void *, __int64 *))this + 48));
  winrt::param::iterable<winrt::Windows::UI::Composition::Internal::CompositionAnimationTriggerValuePartner>::iterable<winrt::Windows::UI::Composition::Internal::CompositionAnimationTriggerValuePartner>(
    (__int64)v8,
    (void (__fastcall ****)(_QWORD, _QWORD *, __int64 *))v2);
  v7 = (winrt::Windows::Foundation::IUnknown *)winrt::impl::consume_Windows_UI_Composition_Internal_ICompositorInternal<winrt::Windows::UI::Composition::Internal::ICompositorInternal>::CreateAnimationTriggerPartner(
                                                 (__int64 *)&v10,
                                                 &v9,
                                                 &v11,
                                                 v8);
  winrt::Windows::Foundation::IUnknown::operator=((CAppThumbnailWindow *)((char *)this + 496), v7);
  if ( v9 )
    winrt::Windows::Foundation::IUnknown::unconditional_release_ref((winrt::Windows::Foundation::IUnknown *)&v9);
  winrt::param::iterable<winrt::Windows::UI::Composition::Internal::CompositionAnimationTriggerValuePartner>::~iterable<winrt::Windows::UI::Composition::Internal::CompositionAnimationTriggerValuePartner>((__int64)v8);
  winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::UI::Composition::Internal::CompositionAnimationTriggerPartner,winrt::Windows::UI::Composition::Internal::CompositionAnimationTriggerPartnerFiredEventArgs>::TypedEventHandler<winrt::Windows::UI::Composition::Internal::CompositionAnimationTriggerPartner,winrt::Windows::UI::Composition::Internal::CompositionAnimationTriggerPartnerFiredEventArgs>(
    &v9,
    (__int64)this,
    (__int64)CAppThumbnailWindow::DirectionChangeTriggerFiredHandler);
  *((_QWORD *)this + 61) = *(_QWORD *)winrt::impl::consume_Windows_UI_Composition_Internal_ICompositionAnimationTriggerPartner<winrt::Windows::UI::Composition::Internal::ICompositionAnimationTriggerPartner>::TriggerFired(
                                        (char *)this + 496,
                                        &v12,
                                        &v9);
  if ( v9 )
    winrt::Windows::Foundation::IUnknown::unconditional_release_ref((winrt::Windows::Foundation::IUnknown *)&v9);
  if ( v10 )
    winrt::Windows::Foundation::IUnknown::unconditional_release_ref((winrt::Windows::Foundation::IUnknown *)&v10);
  if ( v11 )
    winrt::Windows::Foundation::IUnknown::unconditional_release_ref((winrt::Windows::Foundation::IUnknown *)&v11);
}

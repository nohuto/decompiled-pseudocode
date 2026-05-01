/*
 * XREFs of ?DirectionChangeThresholdTriggerFiredHandler@CAppThumbnailWindow@@AEAAXAEBUCompositionAnimationTriggerPartner@Internal@Composition@UI@Windows@winrt@@AEBUCompositionAnimationTriggerPartnerFiredEventArgs@34567@@Z @ 0x1805587E0
 * Callers:
 *     <none>
 * Callees:
 *     ?create_string_reference@hstring@param@winrt@@AEAAXQEBG_K@Z @ 0x1800B4460 (-create_string_reference@hstring@param@winrt@@AEAAXQEBG_K@Z.c)
 *     ?unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ @ 0x1800D5AF0 (-unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ.c)
 *     ??4IUnknown@Foundation@Windows@winrt@@QEAAAEAU0123@$$QEAU0123@@Z @ 0x180172F30 (--4IUnknown@Foundation@Windows@winrt@@QEAAAEAU0123@$$QEAU0123@@Z.c)
 *     ??1?$iterable@UCompositionAnimationTriggerValuePartner@Internal@Composition@UI@Windows@winrt@@@param@winrt@@QEAA@XZ @ 0x18041DB88 (--1-$iterable@UCompositionAnimationTriggerValuePartner@Internal@Composition@UI@Windows@winrt@@@p.c)
 *     ??$?0U?$IVector@UCompositionAnimationTriggerValuePartner@Internal@Composition@UI@Windows@winrt@@@Collections@Foundation@Windows@winrt@@$0A@@?$iterable@UCompositionAnimationTriggerValuePartner@Internal@Composition@UI@Windows@winrt@@@param@winrt@@QEAA@AEBU?$IVector@UCompositionAnimationTriggerValuePartner@Internal@Composition@UI@Windows@winrt@@@Collections@Foundation@Windows@2@@Z @ 0x180554270 (--$-0U-$IVector@UCompositionAnimationTriggerValuePartner@Internal@Composition@UI@Windows@winrt@@.c)
 *     ??$?0VCAppThumbnailWindow@@P80@EAAXAEBUCompositionAnimationTriggerPartner@Internal@Composition@UI@Windows@winrt@@AEBUCompositionAnimationTriggerPartnerFiredEventArgs@23456@@Z@?$TypedEventHandler@UCompositionAnimationTriggerPartner@Internal@Composition@UI@Windows@winrt@@UCompositionAnimationTriggerPartnerFiredEventArgs@23456@@Foundation@Windows@winrt@@QEAA@PEAVCAppThumbnailWindow@@P84@EAAXAEBUCompositionAnimationTriggerPartner@Internal@Composition@UI@23@AEBUCompositionAnimationTriggerPartnerFiredEventArgs@67823@@Z@Z @ 0x180554560 (--$-0VCAppThumbnailWindow@@P80@EAAXAEBUCompositionAnimationTriggerPartner@Internal@Composition@U.c)
 *     ??$as@UICompositorInternal@Internal@Composition@UI@Windows@winrt@@Utype@?$abi@UIUnknown@Foundation@Windows@winrt@@X@impl@6@$0A@@impl@winrt@@YA?AUICompositorInternal@Internal@Composition@UI@Windows@1@PEAUtype@?$abi@UIUnknown@Foundation@Windows@winrt@@X@01@@Z @ 0x180554D98 (--$as@UICompositorInternal@Internal@Composition@UI@Windows@winrt@@Utype@-$abi@UIUnknown@Foundati.c)
 *     ?CreateAnimationTriggerPartner@?$consume_Windows_UI_Composition_Internal_ICompositorInternal@UICompositorInternal@Internal@Composition@UI@Windows@winrt@@@impl@winrt@@QEBA@AEBUExpressionAnimation@Composition@UI@Windows@3@AEBU?$iterable@UCompositionAnimationTriggerValuePartner@Internal@Composition@UI@Windows@winrt@@@param@3@@Z @ 0x180555898 (-CreateAnimationTriggerPartner@-$consume_Windows_UI_Composition_Internal_ICompositorInternal@UIC.c)
 *     ?CreateTriggerConditionForDirectionChange@CAppThumbnailWindow@@AEAA?AUExpressionAnimation@Composition@UI@Windows@winrt@@XZ @ 0x180557C8C (-CreateTriggerConditionForDirectionChange@CAppThumbnailWindow@@AEAA-AUExpressionAnimation@Compos.c)
 *     ?InsertBoolean@?$consume_Windows_UI_Composition_ICompositionPropertySet2@UCompositionPropertySet@Composition@UI@Windows@winrt@@@impl@winrt@@QEBA@AEBUhstring@param@3@_N@Z @ 0x1805593A8 (-InsertBoolean@-$consume_Windows_UI_Composition_ICompositionPropertySet2@UCompositionPropertySet.c)
 *     ?TriggerFired@?$consume_Windows_UI_Composition_Internal_ICompositionAnimationTriggerPartner@UICompositionAnimationTriggerPartner@Internal@Composition@UI@Windows@winrt@@@impl@winrt@@QEBA@AEBU?$TypedEventHandler@UCompositionAnimationTriggerPartner@Internal@Composition@UI@Windows@winrt@@UCompositionAnimationTriggerPartnerFiredEventArgs@23456@@Foundation@Windows@3@@Z @ 0x18055CA8C (-TriggerFired@-$consume_Windows_UI_Composition_Internal_ICompositionAnimationTriggerPartner@UICo.c)
 *     ?TriggerFired@?$consume_Windows_UI_Composition_Internal_ICompositionAnimationTriggerPartner@UICompositionAnimationTriggerPartner@Internal@Composition@UI@Windows@winrt@@@impl@winrt@@QEBA@AEBUevent_token@3@@Z @ 0x18055CAD8 (-TriggerFired@-$consume_Windows_UI_Composition_Internal_ICompositionAnimationTrigge_ea_18055CAD8.c)
 */

// Hidden C++ exception states: #wind=4
void __fastcall CAppThumbnailWindow::DirectionChangeThresholdTriggerFiredHandler(
        CAppThumbnailWindow *this,
        const struct winrt::Windows::UI::Composition::Internal::CompositionAnimationTriggerPartner *a2,
        const struct winrt::Windows::UI::Composition::Internal::CompositionAnimationTriggerPartnerFiredEventArgs *a3)
{
  winrt::Windows::Foundation::IUnknown *v4; // r14
  bool v5; // bl
  __int64 v6; // r8
  _QWORD *v7; // rax
  winrt::Windows::Foundation::IUnknown *v8; // rax
  __int64 v9; // [rsp+20h] [rbp-30h] BYREF
  _QWORD v10[5]; // [rsp+28h] [rbp-28h] BYREF
  __int64 v11; // [rsp+70h] [rbp+20h] BYREF
  __int64 v12; // [rsp+88h] [rbp+38h] BYREF

  v4 = (CAppThumbnailWindow *)((char *)this + 496);
  winrt::impl::consume_Windows_UI_Composition_Internal_ICompositionAnimationTriggerPartner<winrt::Windows::UI::Composition::Internal::ICompositionAnimationTriggerPartner>::TriggerFired(
    (char *)this + 496,
    (char *)this + 512);
  v5 = *((_BYTE *)this + 170) == 0;
  *((_BYTE *)this + 170) = v5;
  winrt::param::hstring::create_string_reference((winrt::param::hstring *)v10, L"isDraggingRight", 15);
  LOBYTE(v6) = v5;
  winrt::impl::consume_Windows_UI_Composition_ICompositionPropertySet2<winrt::Windows::UI::Composition::CompositionPropertySet>::InsertBoolean(
    (char *)this + 392,
    v10,
    v6);
  winrt::impl::as<winrt::Windows::UI::Composition::Internal::ICompositorInternal,winrt::impl::abi<winrt::Windows::Foundation::IUnknown,void>::type,0>(
    &v12,
    *((__int64 (__fastcall ****)(_QWORD, void *, __int64 *))this + 48));
  winrt::param::iterable<winrt::Windows::UI::Composition::Internal::CompositionAnimationTriggerValuePartner>::iterable<winrt::Windows::UI::Composition::Internal::CompositionAnimationTriggerValuePartner>(
    (__int64)v10,
    (void (__fastcall ****)(_QWORD, _QWORD *, __int64 *))this + 63);
  v7 = CAppThumbnailWindow::CreateTriggerConditionForDirectionChange((__int64)this, &v9);
  v8 = (winrt::Windows::Foundation::IUnknown *)winrt::impl::consume_Windows_UI_Composition_Internal_ICompositorInternal<winrt::Windows::UI::Composition::Internal::ICompositorInternal>::CreateAnimationTriggerPartner(
                                                 &v12,
                                                 &v11,
                                                 v7,
                                                 v10);
  winrt::Windows::Foundation::IUnknown::operator=(v4, v8);
  if ( v11 )
    winrt::Windows::Foundation::IUnknown::unconditional_release_ref((winrt::Windows::Foundation::IUnknown *)&v11);
  if ( v9 )
    winrt::Windows::Foundation::IUnknown::unconditional_release_ref((winrt::Windows::Foundation::IUnknown *)&v9);
  winrt::param::iterable<winrt::Windows::UI::Composition::Internal::CompositionAnimationTriggerValuePartner>::~iterable<winrt::Windows::UI::Composition::Internal::CompositionAnimationTriggerValuePartner>((__int64)v10);
  winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::UI::Composition::Internal::CompositionAnimationTriggerPartner,winrt::Windows::UI::Composition::Internal::CompositionAnimationTriggerPartnerFiredEventArgs>::TypedEventHandler<winrt::Windows::UI::Composition::Internal::CompositionAnimationTriggerPartner,winrt::Windows::UI::Composition::Internal::CompositionAnimationTriggerPartnerFiredEventArgs>(
    &v11,
    (__int64)this,
    (__int64)CAppThumbnailWindow::DirectionChangeTriggerFiredHandler);
  *((_QWORD *)this + 61) = *(_QWORD *)winrt::impl::consume_Windows_UI_Composition_Internal_ICompositionAnimationTriggerPartner<winrt::Windows::UI::Composition::Internal::ICompositionAnimationTriggerPartner>::TriggerFired(
                                        v4,
                                        &v9,
                                        &v11);
  if ( v11 )
    winrt::Windows::Foundation::IUnknown::unconditional_release_ref((winrt::Windows::Foundation::IUnknown *)&v11);
  if ( v12 )
    winrt::Windows::Foundation::IUnknown::unconditional_release_ref((winrt::Windows::Foundation::IUnknown *)&v12);
}

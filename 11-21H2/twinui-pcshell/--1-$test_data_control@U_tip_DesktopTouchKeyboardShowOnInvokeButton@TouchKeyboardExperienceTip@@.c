/*
 * XREFs of ??1?$test_data_control@U_tip_DesktopTouchKeyboardShowOnInvokeButton@TouchKeyboardExperienceTip@@@tip@@QEAA@XZ @ 0x18046F0FC
 * Callers:
 *     _KeyboardHosting::TabTipAdapter::NotifyOcclusionToCoreInputViewManager_::_1_::dtor$9 @ 0x180472B0C (_KeyboardHosting--TabTipAdapter--NotifyOcclusionToCoreInputViewManager_--_1_--dtor$9.c)
 *     _KeyboardHosting::TabTipAdapter::NotifyOcclusionToCoreInputViewManager_::_1_::dtor$13 @ 0x180472B24 (_KeyboardHosting--TabTipAdapter--NotifyOcclusionToCoreInputViewManager_--_1_--dtor$13.c)
 *     _KeyboardHosting::TabTipAdapter::NotifyOcclusionToCoreInputViewManager_::_1_::dtor$21 @ 0x180472B3C (_KeyboardHosting--TabTipAdapter--NotifyOcclusionToCoreInputViewManager_--_1_--dtor$21.c)
 *     _KeyboardHosting::TabTipAdapter::OnKeyboardButtonRequestShow_::_1_::dtor$3 @ 0x180475ED8 (_KeyboardHosting--TabTipAdapter--OnKeyboardButtonRequestShow_--_1_--dtor$3.c)
 *     _KeyboardHosting::TabTipAdapter::OnPrimaryViewShowingResponse_::_1_::dtor$7 @ 0x180476DFF (_KeyboardHosting--TabTipAdapter--OnPrimaryViewShowingResponse_--_1_--dtor$7.c)
 *     _KeyboardHosting::TabTipAdapter::OnPrimaryViewShowingResponse_::_1_::dtor$11 @ 0x180476E17 (_KeyboardHosting--TabTipAdapter--OnPrimaryViewShowingResponse_--_1_--dtor$11.c)
 *     _KeyboardHosting::TabTipAdapter::OnPrimaryViewShowingResponse_::_1_::dtor$19 @ 0x180476E2F (_KeyboardHosting--TabTipAdapter--OnPrimaryViewShowingResponse_--_1_--dtor$19.c)
 * Callees:
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180097BDC (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ?close@?$test_data_control@U_tip_DesktopTouchKeyboardShowOnTap@TouchKeyboardExperienceTip@@@tip@@QEAAXXZ @ 0x18022F79C (-close@-$test_data_control@U_tip_DesktopTouchKeyboardShowOnTap@TouchKeyboardExperienceTip@@@tip@.c)
 */

void __fastcall tip::test_data_control<TouchKeyboardExperienceTip::_tip_DesktopTouchKeyboardShowOnInvokeButton>::~test_data_control<TouchKeyboardExperienceTip::_tip_DesktopTouchKeyboardShowOnInvokeButton>(
        __int64 *a1)
{
  std::_Ref_count_base *v2; // rcx

  tip::test_data_control<TouchKeyboardExperienceTip::_tip_DesktopTouchKeyboardShowOnTap>::close(a1);
  v2 = (std::_Ref_count_base *)a1[1];
  if ( v2 )
    std::_Ref_count_base::_Decref(v2);
}

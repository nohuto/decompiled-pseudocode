/*
 * XREFs of ??1?$test_data_control@U_tip_DesktopTouchKeyboardShowOnTryShowV2@TouchKeyboardExperienceTip@@@tip@@QEAA@XZ @ 0x18046F128
 * Callers:
 *     _KeyboardHosting::TabTipAdapter::NotifyOcclusionToCoreInputViewManager_::_1_::dtor$25 @ 0x180472B54 (_KeyboardHosting--TabTipAdapter--NotifyOcclusionToCoreInputViewManager_--_1_--dtor$25.c)
 *     _KeyboardHosting::TabTipAdapter::OnInputPaneTryShowRequested_::_1_::dtor$7 @ 0x180475BFB (_KeyboardHosting--TabTipAdapter--OnInputPaneTryShowRequested_--_1_--dtor$7.c)
 *     _KeyboardHosting::TabTipAdapter::OnPrimaryViewShowingResponse_::_1_::dtor$23 @ 0x180476E47 (_KeyboardHosting--TabTipAdapter--OnPrimaryViewShowingResponse_--_1_--dtor$23.c)
 * Callees:
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180097BDC (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ?close@?$test_data_control@U_tip_TouchGestureTest@@@tip@@QEAAXXZ @ 0x18047DAD0 (-close@-$test_data_control@U_tip_TouchGestureTest@@@tip@@QEAAXXZ.c)
 */

void __fastcall tip::test_data_control<TouchKeyboardExperienceTip::_tip_DesktopTouchKeyboardShowOnTryShowV2>::~test_data_control<TouchKeyboardExperienceTip::_tip_DesktopTouchKeyboardShowOnTryShowV2>(
        __int64 a1)
{
  std::_Ref_count_base *v2; // rcx

  tip::test_data_control<_tip_TouchGestureTest>::close();
  v2 = *(std::_Ref_count_base **)(a1 + 8);
  if ( v2 )
    std::_Ref_count_base::_Decref(v2);
}

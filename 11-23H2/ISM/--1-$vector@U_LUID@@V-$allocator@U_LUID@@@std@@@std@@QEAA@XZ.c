/*
 * XREFs of ??1?$vector@U_LUID@@V?$allocator@U_LUID@@@std@@@std@@QEAA@XZ @ 0x18009B910
 * Callers:
 *     _LightDismissProcessor::OnHitTest_::_1_::dtor$0 @ 0x18006C08E (_LightDismissProcessor--OnHitTest_--_1_--dtor$0.c)
 *     _HitTestHelper::HitTestRequestWithRetry_::_1_::dtor$4 @ 0x18006D530 (_HitTestHelper--HitTestRequestWithRetry_--_1_--dtor$4.c)
 *     _CUIHierarchy::NotifyWindowOfActivationStateChange_::_1_::dtor$2 @ 0x18009C6B8 (_CUIHierarchy--NotifyWindowOfActivationStateChange_--_1_--dtor$2.c)
 *     _ResizeProcessor::GetControllerForManualResize_::_1_::dtor$1 @ 0x180164402 (_ResizeProcessor--GetControllerForManualResize_--_1_--dtor$1.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
void __fastcall std::vector<_LUID>::~vector<_LUID>(__int64 a1)
{
  std::vector<_LUID>::_Tidy(a1);
}

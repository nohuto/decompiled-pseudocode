/*
 * XREFs of ??1?$vector@U_LUID@@V?$allocator@U_LUID@@@std@@@std@@QEAA@XZ @ 0x180084858
 * Callers:
 *     _HitTestHelper::HitTestRequestWithRetry_::_1_::dtor$4 @ 0x180057B20 (_HitTestHelper--HitTestRequestWithRetry_--_1_--dtor$4.c)
 *     _CUIHierarchy::NotifyWindowOfActivationStateChange_::_1_::dtor$2 @ 0x1800855C0 (_CUIHierarchy--NotifyWindowOfActivationStateChange_--_1_--dtor$2.c)
 *     _ResizeProcessor::GetControllerForManualResize_::_1_::dtor$1 @ 0x1801457E5 (_ResizeProcessor--GetControllerForManualResize_--_1_--dtor$1.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall std::vector<_LUID>::~vector<_LUID>(__int64 a1)
{
  return std::vector<_LUID>::_Tidy(a1);
}

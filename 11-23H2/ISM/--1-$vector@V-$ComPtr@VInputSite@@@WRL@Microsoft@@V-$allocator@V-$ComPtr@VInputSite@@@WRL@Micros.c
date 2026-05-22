/*
 * XREFs of ??1?$vector@V?$ComPtr@VInputSite@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@VInputSite@@@WRL@Microsoft@@@std@@@std@@QEAA@XZ @ 0x18009B964
 * Callers:
 *     _InputSiteManager::GetInputSiteForEvaluationListFromDITCallbackStruct_::_1_::dtor$0 @ 0x18005F30F (_InputSiteManager--GetInputSiteForEvaluationListFromDITCallbackStruct_--_1_--dtor$0.c)
 *     _HitTestHelper::HitTestRequestWithRetry_::_1_::dtor$6 @ 0x18006D550 (_HitTestHelper--HitTestRequestWithRetry_--_1_--dtor$6.c)
 *     _HitTestHelper::HitTestRequestWithRetry_::_1_::dtor$7 @ 0x18006D570 (_HitTestHelper--HitTestRequestWithRetry_--_1_--dtor$7.c)
 *     _HitTestHelper::HitTestRequestWithRetry_::_1_::dtor$8 @ 0x18006D590 (_HitTestHelper--HitTestRequestWithRetry_--_1_--dtor$8.c)
 *     _CUIHierarchy::UpdateInputDisabledStateOnWindowAddition_::_1_::dtor$2 @ 0x18009DB88 (_CUIHierarchy--UpdateInputDisabledStateOnWindowAddition_--_1_--dtor$2.c)
 *     _InputSiteHierarchyManager::GetAllInputSites_::_1_::dtor$0 @ 0x18013E519 (_InputSiteHierarchyManager--GetAllInputSites_--_1_--dtor$0.c)
 *     _InputSiteHierarchyManager::GetInputSiteListToRoot_::_1_::dtor$1 @ 0x18013E72E (_InputSiteHierarchyManager--GetInputSiteListToRoot_--_1_--dtor$1.c)
 *     _CUIComponentInputObjectProxy::TransferForegroundToHost_::_1_::dtor$0 @ 0x180142799 (_CUIComponentInputObjectProxy--TransferForegroundToHost_--_1_--dtor$0.c)
 *     _ResizeProcessor::GetControllerForManualResize_::_1_::dtor$0 @ 0x1801643F6 (_ResizeProcessor--GetControllerForManualResize_--_1_--dtor$0.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall std::vector<Microsoft::WRL::ComPtr<InputSite>>::~vector<Microsoft::WRL::ComPtr<InputSite>>(
        __int64 a1)
{
  return std::vector<Microsoft::WRL::ComPtr<InputSite>>::_Tidy(a1);
}

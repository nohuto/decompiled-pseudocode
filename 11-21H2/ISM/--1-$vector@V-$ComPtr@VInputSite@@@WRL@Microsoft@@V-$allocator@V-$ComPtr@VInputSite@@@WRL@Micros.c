/*
 * XREFs of ??1?$vector@V?$ComPtr@VInputSite@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@VInputSite@@@WRL@Microsoft@@@std@@@std@@QEAA@XZ @ 0x1800848AC
 * Callers:
 *     _InputSiteManager::GetInputSiteForEvaluationListFromDITCallbackStruct_::_1_::dtor$0 @ 0x18004DD87 (_InputSiteManager--GetInputSiteForEvaluationListFromDITCallbackStruct_--_1_--dtor$0.c)
 *     _HitTestHelper::HitTestRequestWithRetry_::_1_::dtor$6 @ 0x180057B40 (_HitTestHelper--HitTestRequestWithRetry_--_1_--dtor$6.c)
 *     _HitTestHelper::HitTestRequestWithRetry_::_1_::dtor$7 @ 0x180057B60 (_HitTestHelper--HitTestRequestWithRetry_--_1_--dtor$7.c)
 *     _HitTestHelper::HitTestRequestWithRetry_::_1_::dtor$8 @ 0x180057B80 (_HitTestHelper--HitTestRequestWithRetry_--_1_--dtor$8.c)
 *     _InputSiteHierarchyManager::GetInputSiteListToRoot_::_1_::dtor$1 @ 0x180057F30 (_InputSiteHierarchyManager--GetInputSiteListToRoot_--_1_--dtor$1.c)
 *     _CUIHierarchy::UpdateInputDisabledStateOnWindowAddition_::_1_::dtor$2 @ 0x180086A74 (_CUIHierarchy--UpdateInputDisabledStateOnWindowAddition_--_1_--dtor$2.c)
 *     _InputSiteHierarchyManager::GetAllInputSites_::_1_::dtor$0 @ 0x180123869 (_InputSiteHierarchyManager--GetAllInputSites_--_1_--dtor$0.c)
 *     _CUIComponentInputObjectProxy::TransferForegroundToHost_::_1_::dtor$0 @ 0x1801272C8 (_CUIComponentInputObjectProxy--TransferForegroundToHost_--_1_--dtor$0.c)
 *     _ResizeProcessor::GetControllerForManualResize_::_1_::dtor$0 @ 0x1801457D9 (_ResizeProcessor--GetControllerForManualResize_--_1_--dtor$0.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall std::vector<Microsoft::WRL::ComPtr<InputSite>>::~vector<Microsoft::WRL::ComPtr<InputSite>>(
        __int64 a1)
{
  return std::vector<Microsoft::WRL::ComPtr<InputSite>>::_Tidy(a1);
}

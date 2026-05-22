/*
 * XREFs of ??1?$vector@V?$ComPtr@VInputSite@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@VInputSite@@@WRL@Microsoft@@@std@@@std@@QEAA@XZ @ 0x1800ADEA8
 * Callers:
 *     _InputSiteManager::GetInputSiteForEvaluationListFromDITCallbackStruct_::_1_::dtor$0 @ 0x180070F9B (_InputSiteManager--GetInputSiteForEvaluationListFromDITCallbackStruct_--_1_--dtor$0.c)
 *     _HitTestHelper::HitTestRequestWithRetry_::_1_::dtor$6 @ 0x180081610 (_HitTestHelper--HitTestRequestWithRetry_--_1_--dtor$6.c)
 *     _HitTestHelper::HitTestRequestWithRetry_::_1_::dtor$7 @ 0x180081630 (_HitTestHelper--HitTestRequestWithRetry_--_1_--dtor$7.c)
 *     _HitTestHelper::HitTestRequestWithRetry_::_1_::dtor$8 @ 0x180081650 (_HitTestHelper--HitTestRequestWithRetry_--_1_--dtor$8.c)
 *     _CUIHierarchy::UpdateInputDisabledStateOnWindowAddition_::_1_::dtor$2 @ 0x1800B00D8 (_CUIHierarchy--UpdateInputDisabledStateOnWindowAddition_--_1_--dtor$2.c)
 *     _InputSiteHierarchyManager::GetAllInputSites_::_1_::dtor$0 @ 0x18014C449 (_InputSiteHierarchyManager--GetAllInputSites_--_1_--dtor$0.c)
 *     _InputSiteHierarchyManager::GetInputSiteListToRoot_::_1_::dtor$1 @ 0x18014C65E (_InputSiteHierarchyManager--GetInputSiteListToRoot_--_1_--dtor$1.c)
 *     _CUIComponentInputObjectProxy::TransferForegroundToHost_::_1_::dtor$0 @ 0x180150849 (_CUIComponentInputObjectProxy--TransferForegroundToHost_--_1_--dtor$0.c)
 *     _ResizeProcessor::GetControllerForManualResize_::_1_::dtor$0 @ 0x180172676 (_ResizeProcessor--GetControllerForManualResize_--_1_--dtor$0.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall std::vector<Microsoft::WRL::ComPtr<InputSite>>::~vector<Microsoft::WRL::ComPtr<InputSite>>(
        __int64 a1)
{
  return std::vector<Microsoft::WRL::ComPtr<InputSite>>::_Tidy(a1);
}

/*
 * XREFs of ??1?$ComPtr@VInputInjectionClientProxy@@@WRL@Microsoft@@QEAA@XZ @ 0x1800ADE0C
 * Callers:
 *     _SystemCursorController2::SystemCursorController2_::_1_::dtor$1 @ 0x180080737 (_SystemCursorController2--SystemCursorController2_--_1_--dtor$1.c)
 *     _InputSiteManager::RegisterInputSiteElement_::_1_::dtor$1 @ 0x180082560 (_InputSiteManager--RegisterInputSiteElement_--_1_--dtor$1.c)
 *     _InputSiteManager::RegisterInputSiteElementWithHint_::_1_::dtor$2 @ 0x180082B10 (_InputSiteManager--RegisterInputSiteElementWithHint_--_1_--dtor$2.c)
 *     _CUIHierarchy::NotifyWindowOfActivationStateChange_::_1_::dtor$1 @ 0x1800AEBFC (_CUIHierarchy--NotifyWindowOfActivationStateChange_--_1_--dtor$1.c)
 *     _CUIHierarchy::NotifyWindowOfActivationStateChange_::_1_::dtor$3 @ 0x1800AEC14 (_CUIHierarchy--NotifyWindowOfActivationStateChange_--_1_--dtor$3.c)
 *     _CUIHierarchy::NotifyWindowOfInputDisabledStateChange_::_1_::dtor$1 @ 0x1800AED3B (_CUIHierarchy--NotifyWindowOfInputDisabledStateChange_--_1_--dtor$1.c)
 *     _CUIHierarchy::UpdateInputDisabledStateOnWindowAddition_::_1_::dtor$1 @ 0x1800B00CC (_CUIHierarchy--UpdateInputDisabledStateOnWindowAddition_--_1_--dtor$1.c)
 *     _CUIHierarchy::UpdateInputDisabledStateOnWindowAddition_::_1_::dtor$3 @ 0x1800B00E4 (_CUIHierarchy--UpdateInputDisabledStateOnWindowAddition_--_1_--dtor$3.c)
 *     ?SetInputDelegation@ForegroundManager@@QEAAXPEAVInputSite@@III@Z @ 0x1800B56B0 (-SetInputDelegation@ForegroundManager@@QEAAXPEAVInputSite@@III@Z.c)
 *     _ForegroundManager::SetInputDelegation_::_1_::dtor$0 @ 0x1800B5EE9 (_ForegroundManager--SetInputDelegation_--_1_--dtor$0.c)
 *     _InjectionRawInputProvider::GetWorkspaceRelativeCoordinates_::_1_::dtor$0 @ 0x1800F70E8 (_InjectionRawInputProvider--GetWorkspaceRelativeCoordinates_--_1_--dtor$0.c)
 *     _InputSystemInternalClientConnection::SetBootstrapProxy_::_1_::dtor$0 @ 0x18014A4C8 (_InputSystemInternalClientConnection--SetBootstrapProxy_--_1_--dtor$0.c)
 *     _CUIHostInputObjectProxy::TransferForegroundToComponent_::_1_::dtor$0 @ 0x18014F77F (_CUIHostInputObjectProxy--TransferForegroundToComponent_--_1_--dtor$0.c)
 *     _CUIComponentInputObjectProxy::TransferForegroundToHost_::_1_::dtor$1 @ 0x180150855 (_CUIComponentInputObjectProxy--TransferForegroundToHost_--_1_--dtor$1.c)
 *     _CBaseInputObserverServer_11_::DeliverToApps_::_1_::dtor$1 @ 0x180156E62 (_CBaseInputObserverServer_11_--DeliverToApps_--_1_--dtor$1.c)
 *     _CBaseInputObserverServer_11_::RegisterObserverClient_::_1_::dtor$0 @ 0x180157169 (_CBaseInputObserverServer_11_--RegisterObserverClient_--_1_--dtor$0.c)
 *     _std::_Func_impl_no_alloc__lambda_3e8e24ed727f6b874666958b1db22259__void_Microsoft::WRL::ComPtr_BamoInputObserverClientProxy__const_&_::_Do_call_::_1_::dtor$1 @ 0x180157339 (_std--_Func_impl_no_alloc__lambda_3e8e24ed727f6b874666958b1db22259__void_Microsoft--WRL--ComPtr_.c)
 *     _std::_List_node_emplace_op2_std::allocator_std::_List_node_std::pair_unsigned_long_const__DragNDropProcessor::MessageInfo__void_______::_List_node_emplace_op2_std::allocator_std::_List_node_std::pair_unsigned_long_const__DragNDropProcessor::MessageInfo__void________std::piecewise_construct_t_const_&_std::tuple_unsigned_long_const_&__std::tuple_____::_1_::dtor$3 @ 0x18016873A (_std--_List_node_emplace_op2_std--allocator_std--_List_node_std--pair_unsigned_long_ea_18016873A.c)
 *     _DragNDropProcessor::GetDragSourceInputSite_::_1_::dtor$3 @ 0x18016C548 (_DragNDropProcessor--GetDragSourceInputSite_--_1_--dtor$3.c)
 *     _DragNDropProcessor::HitTest_::_1_::dtor$3 @ 0x18016CD44 (_DragNDropProcessor--HitTest_--_1_--dtor$3.c)
 *     _DragNDropProcessor::HitTest_::_1_::dtor$4 @ 0x18016CD50 (_DragNDropProcessor--HitTest_--_1_--dtor$4.c)
 *     _DragNDropProcessor::HitTest_::_1_::dtor$5 @ 0x18016CD5C (_DragNDropProcessor--HitTest_--_1_--dtor$5.c)
 *     _DragNDropProcessor::HitTest_::_1_::dtor$7 @ 0x18016CD74 (_DragNDropProcessor--HitTest_--_1_--dtor$7.c)
 *     _DragNDropProcessor::SetupInteractionContext_::_1_::dtor$0 @ 0x18016E33F (_DragNDropProcessor--SetupInteractionContext_--_1_--dtor$0.c)
 *     _DragNDropProcessor::StartDrag_::_1_::dtor$3 @ 0x18016EC3E (_DragNDropProcessor--StartDrag_--_1_--dtor$3.c)
 *     ?StartManualDrag@DragNDropProcessor@@QEAAXKPEAVBamoManualDragAreaClientProxy@@@Z @ 0x18016EC50 (-StartManualDrag@DragNDropProcessor@@QEAAXKPEAVBamoManualDragAreaClientProxy@@@Z.c)
 *     _DragNDropProcessor::StartManualDrag_::_1_::dtor$0 @ 0x18016F0B2 (_DragNDropProcessor--StartManualDrag_--_1_--dtor$0.c)
 *     _ResizeProcessor::GetControllerForManualResize_::_1_::dtor$2 @ 0x18017268E (_ResizeProcessor--GetControllerForManualResize_--_1_--dtor$2.c)
 *     _ResizeProcessor::HitTest_::_1_::dtor$0 @ 0x1801729F0 (_ResizeProcessor--HitTest_--_1_--dtor$0.c)
 *     _std::_List_node_emplace_op2_std::allocator_std::_List_node_std::pair_unsigned_long_const__EdgyProcessor::EdgyDragMessageInfo__void_______::_List_node_emplace_op2_std::allocator_std::_List_node_std::pair_unsigned_long_const__EdgyProcessor::EdgyDragMessageInfo__void________std::piecewise_construct_t_const_&_std::tuple_unsigned_long_const_&__std::tuple_____::_1_::dtor$3 @ 0x180174469 (_std--_List_node_emplace_op2_std--allocator_std--_List_node_std--pair_unsigned_long_ea_180174469.c)
 *     _EdgyProcessor::HitTest_::_1_::dtor$0 @ 0x1801768D4 (_EdgyProcessor--HitTest_--_1_--dtor$0.c)
 *     _EdgyProcessor::HitTestForTarget_::_1_::dtor$1 @ 0x180176D02 (_EdgyProcessor--HitTestForTarget_--_1_--dtor$1.c)
 *     _EdgyProcessor::StartGestureRecognition_::_1_::dtor$0 @ 0x180178200 (_EdgyProcessor--StartGestureRecognition_--_1_--dtor$0.c)
 *     _EdgyProcessor::StartGestureRecognition_::_1_::dtor$5 @ 0x180178230 (_EdgyProcessor--StartGestureRecognition_--_1_--dtor$5.c)
 *     _ShellGesturesProcessor::TryFindResumableAnimationTarget_::_1_::dtor$0 @ 0x18017DF59 (_ShellGesturesProcessor--TryFindResumableAnimationTarget_--_1_--dtor$0.c)
 *     _InputDeliveryServer::RegisterInputAttemptedClient_::_1_::dtor$1 @ 0x180181483 (_InputDeliveryServer--RegisterInputAttemptedClient_--_1_--dtor$1.c)
 *     _ControllerNavigationManager::RegisterControllerProcessor_::_1_::dtor$0 @ 0x18019FEC7 (_ControllerNavigationManager--RegisterControllerProcessor_--_1_--dtor$0.c)
 *     _ControllerNavigationManager::RegisterOverride_::_1_::dtor$0 @ 0x1801A0141 (_ControllerNavigationManager--RegisterOverride_--_1_--dtor$0.c)
 *     _InputForwardProcessor::GetInputForwardInputSite_::_1_::dtor$1 @ 0x1801D4AFF (_InputForwardProcessor--GetInputForwardInputSite_--_1_--dtor$1.c)
 *     _InputForwardProcessor::GetInputForwardInputSite_::_1_::dtor$2 @ 0x1801D4B0B (_InputForwardProcessor--GetInputForwardInputSite_--_1_--dtor$2.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x1800793F0 (_guard_xfg_dispatch_icall_nop.c)
 */

_QWORD *__fastcall Microsoft::WRL::ComPtr<InputInjectionClientProxy>::~ComPtr<InputInjectionClientProxy>(_QWORD *a1)
{
  _QWORD *result; // rax
  __int64 v2; // rcx

  result = a1;
  v2 = *a1;
  if ( v2 )
  {
    *result = 0LL;
    return (_QWORD *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v2 + 8LL))(v2);
  }
  return result;
}

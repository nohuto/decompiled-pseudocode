/*
 * XREFs of ??1?$AsyncDeferral@VCNoResult@Internal@Windows@@@Internal@Windows@@QEAA@XZ @ 0x18014CF38
 * Callers:
 *     _InputSiteElementProxy::OnVirtualTouchpadControllerChanged_::_1_::dtor$21 @ 0x18007F770 (_InputSiteElementProxy--OnVirtualTouchpadControllerChanged_--_1_--dtor$21.c)
 *     _ContextualProcessorBuffer::TryAddProcessorAndContact_::_1_::dtor$0 @ 0x180081320 (_ContextualProcessorBuffer--TryAddProcessorAndContact_--_1_--dtor$0.c)
 *     _InputSiteElementProxy::OnWindowsMessageDeliveryChanged_::_1_::dtor$18 @ 0x1800814C0 (_InputSiteElementProxy--OnWindowsMessageDeliveryChanged_--_1_--dtor$18.c)
 *     _ContextualProcessorManager::OnHitTest_::_1_::dtor$5 @ 0x180081780 (_ContextualProcessorManager--OnHitTest_--_1_--dtor$5.c)
 *     _MPCConstantManagerClient::CreateHRPrincipal_::_1_::dtor$0 @ 0x180194483 (_MPCConstantManagerClient--CreateHRPrincipal_--_1_--dtor$0.c)
 *     _MPCConstantManagerClient::CreatePVPrincipal_::_1_::dtor$0 @ 0x180194853 (_MPCConstantManagerClient--CreatePVPrincipal_--_1_--dtor$0.c)
 *     _MPCConstantManagerClient::CreateStringVectorPrincipal_::_1_::dtor$0 @ 0x180194DB6 (_MPCConstantManagerClient--CreateStringVectorPrincipal_--_1_--dtor$0.c)
 *     _ContextualProcessorManager::OnFocusRequest_::_1_::dtor$4 @ 0x1801CBB9D (_ContextualProcessorManager--OnFocusRequest_--_1_--dtor$4.c)
 *     _ContextualProcessorBuffer::AddProcessor_::_1_::dtor$0 @ 0x1801CDA11 (_ContextualProcessorBuffer--AddProcessor_--_1_--dtor$0.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall Windows::Internal::AsyncDeferral<Windows::Internal::CNoResult>::~AsyncDeferral<Windows::Internal::CNoResult>(
        __int64 a1)
{
  return Microsoft::WRL::ComPtr<Windows::UI::Input::Spatial::Internal::IInputPriv>::InternalRelease((__int64 *)(a1 + 8));
}

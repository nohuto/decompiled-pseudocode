/*
 * XREFs of ??1?$AsyncDeferral@VCNoResult@Internal@Windows@@@Internal@Windows@@QEAA@XZ @ 0x180123D68
 * Callers:
 *     _InputSiteElementProxy::OnVirtualTouchpadControllerChanged_::_1_::dtor$19 @ 0x180054BB0 (_InputSiteElementProxy--OnVirtualTouchpadControllerChanged_--_1_--dtor$19.c)
 *     _ContextualProcessorBuffer::TryAddProcessorAndContact_::_1_::dtor$0 @ 0x1800578E0 (_ContextualProcessorBuffer--TryAddProcessorAndContact_--_1_--dtor$0.c)
 *     _ContextualProcessorManager::OnHitTest_::_1_::dtor$5 @ 0x180057C30 (_ContextualProcessorManager--OnHitTest_--_1_--dtor$5.c)
 *     _InputSiteElementProxy::OnWindowsMessageDeliveryChanged_::_1_::dtor$17 @ 0x180057E30 (_InputSiteElementProxy--OnWindowsMessageDeliveryChanged_--_1_--dtor$17.c)
 *     _MPCConstantManagerClient::CreateHRPrincipal_::_1_::dtor$0 @ 0x18016701D (_MPCConstantManagerClient--CreateHRPrincipal_--_1_--dtor$0.c)
 *     _MPCConstantManagerClient::CreatePVPrincipal_::_1_::dtor$0 @ 0x1801673EB (_MPCConstantManagerClient--CreatePVPrincipal_--_1_--dtor$0.c)
 *     _MPCConstantManagerClient::CreateStringVectorPrincipal_::_1_::dtor$0 @ 0x18016793A (_MPCConstantManagerClient--CreateStringVectorPrincipal_--_1_--dtor$0.c)
 *     _ContextualProcessorManager::OnFocusRequest_::_1_::dtor$4 @ 0x1801A01BF (_ContextualProcessorManager--OnFocusRequest_--_1_--dtor$4.c)
 *     _ContextualProcessorBuffer::AddProcessor_::_1_::dtor$0 @ 0x1801A2241 (_ContextualProcessorBuffer--AddProcessor_--_1_--dtor$0.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall Windows::Internal::AsyncDeferral<Windows::Internal::CNoResult>::~AsyncDeferral<Windows::Internal::CNoResult>(
        __int64 a1)
{
  return Microsoft::WRL::ComPtr<Windows::UI::Input::Spatial::Internal::IInputPriv>::InternalRelease((__int64 *)(a1 + 8));
}

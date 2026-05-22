/*
 * XREFs of ??1?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@QEAA@XZ @ 0x18001B674
 * Callers:
 *     ?OnTargetWithFocusChanged@LampArrayRawInputProvider@@UEAAJPEAUIInputTarget@@0@Z @ 0x180011020 (-OnTargetWithFocusChanged@LampArrayRawInputProvider@@UEAAJPEAUIInputTarget@@0@Z.c)
 *     ?OnDeviceAttach@InputStateManager@@UEAAJPEAUDeviceInfo@@PEAUIRawInputProvider@@@Z @ 0x180040590 (-OnDeviceAttach@InputStateManager@@UEAAJPEAUDeviceInfo@@PEAUIRawInputProvider@@@Z.c)
 *     __lambda_48f152b7375fc54a16cdd7806e5a908e_::operator()_::_1_::dtor$0 @ 0x180062319 (__lambda_48f152b7375fc54a16cdd7806e5a908e_--operator()_--_1_--dtor$0.c)
 *     _LampArrayRawInputProvider::UpdateDeviceAmbientProcess_::_1_::dtor$0 @ 0x1800631C3 (_LampArrayRawInputProvider--UpdateDeviceAmbientProcess_--_1_--dtor$0.c)
 *     _ShellHandwritingProcessor::OnInput_::_1_::dtor$0 @ 0x180078047 (_ShellHandwritingProcessor--OnInput_--_1_--dtor$0.c)
 *     _wil::details::FeatureStateManager::SubscribeToEnabledStateChanges_::_1_::dtor$0 @ 0x18008227D (_wil--details--FeatureStateManager--SubscribeToEnabledStateChanges_--_1_--dtor$0.c)
 *     _InputStateManager::OnDeviceAttach_::_1_::dtor$0 @ 0x18008228F (_InputStateManager--OnDeviceAttach_--_1_--dtor$0.c)
 *     _NonBamoInputDeliveryServer::Create_::_1_::dtor$0 @ 0x1800822B3 (_NonBamoInputDeliveryServer--Create_--_1_--dtor$0.c)
 *     _wil::details_abi::FeatureStateData::RecordFeatureUsage_::_1_::dtor$0 @ 0x1800A6D11 (_wil--details_abi--FeatureStateData--RecordFeatureUsage_--_1_--dtor$0.c)
 *     _InputSinkDataCache::InputSinkRemoved_::_1_::dtor$0 @ 0x1800AA560 (_InputSinkDataCache--InputSinkRemoved_--_1_--dtor$0.c)
 *     _MPC3DStateHelper::FireEventsOnInputThread_::_1_::dtor$2 @ 0x1800B9C18 (_MPC3DStateHelper--FireEventsOnInputThread_--_1_--dtor$2.c)
 *     _MPC3DStateHelper::On3DCompositorStateChanged_::_1_::dtor$0 @ 0x1800B9DA1 (_MPC3DStateHelper--On3DCompositorStateChanged_--_1_--dtor$0.c)
 *     _MPC3DStateHelper::Register3DCompositor_::_1_::dtor$0 @ 0x1800B9ED5 (_MPC3DStateHelper--Register3DCompositor_--_1_--dtor$0.c)
 *     ?OnDeviceRemoval@InputStateManager@@UEAAJPEAUDeviceInfo@@@Z @ 0x1800DB0B0 (-OnDeviceRemoval@InputStateManager@@UEAAJPEAUDeviceInfo@@@Z.c)
 *     ?OnLampArrayAdded@LampArrayRawInputProvider@@QEAAJPEAVPnpDevice@@@Z @ 0x1800F804C (-OnLampArrayAdded@LampArrayRawInputProvider@@QEAAJPEAVPnpDevice@@@Z.c)
 *     ?OnLampArrayRemoved@LampArrayRawInputProvider@@QEAAXPEAVPnpDevice@@@Z @ 0x1800F8318 (-OnLampArrayRemoved@LampArrayRawInputProvider@@QEAAXPEAVPnpDevice@@@Z.c)
 *     ?OnSipcClientConnection@LampArrayRawInputProvider@@CAXPEAXPEAUISIPCServer@@KK@Z @ 0x1800F8410 (-OnSipcClientConnection@LampArrayRawInputProvider@@CAXPEAXPEAUISIPCServer@@KK@Z.c)
 *     ?OnSipcEndpointStatus@LampArrayRawInputProvider@@CAXPEAXPEAUISIPCEndpoint@@W4SIPC_ENDPOINT_STATUS@@@Z @ 0x1800F8570 (-OnSipcEndpointStatus@LampArrayRawInputProvider@@CAXPEAXPEAUISIPCEndpoint@@W4SIPC_ENDPOINT_STATU.c)
 *     _KeyboardProcessor::OnInputReport_::_1_::dtor$0 @ 0x1801BFB03 (_KeyboardProcessor--OnInputReport_--_1_--dtor$0.c)
 * Callees:
 *     <none>
 */

void __fastcall wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockExclusive(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockExclusive(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>>(
        RTL_SRWLOCK **a1)
{
  RTL_SRWLOCK *v1; // rcx

  v1 = *a1;
  if ( v1 )
    ReleaseSRWLockExclusive(v1);
}

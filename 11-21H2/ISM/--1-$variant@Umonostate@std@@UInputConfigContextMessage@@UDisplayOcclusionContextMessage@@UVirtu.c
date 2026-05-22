/*
 * XREFs of ??1?$variant@Umonostate@std@@UInputConfigContextMessage@@UDisplayOcclusionContextMessage@@UVirtualTouchpadContextMessage@@UMIT_WIN32K_INPUTDESKTOP_STATE_MESSAGE@@@std@@QEAA@XZ @ 0x1800FA0D4
 * Callers:
 *     _InputConfigContextProvider::Broadcast_::_1_::dtor$0 @ 0x18005524A (_InputConfigContextProvider--Broadcast_--_1_--dtor$0.c)
 *     _InputConfigContextProvider::Broadcast_::_1_::dtor$11 @ 0x18005526E (_InputConfigContextProvider--Broadcast_--_1_--dtor$11.c)
 *     _std::_Func_impl_no_alloc__lambda_42c9e164bf5e678d8fb83ca938b11c90__void_MIT_WIN32K_INPUTDESKTOP_STATE_MESSAGE_const___::_Do_call_::_1_::dtor$1 @ 0x180057F96 (_std--_Func_impl_no_alloc__lambda_42c9e164bf5e678d8fb83ca938b11c90__void_MIT_WIN32K_ea_180057F96.c)
 *     _DWMCursorBroker::Initialize_::_1_::dtor$3 @ 0x180058353 (_DWMCursorBroker--Initialize_--_1_--dtor$3.c)
 *     _VirtualTouchpadControllerProxy::ConfigureVirtualTouchpad_::_1_::dtor$0 @ 0x180129FA3 (_VirtualTouchpadControllerProxy--ConfigureVirtualTouchpad_--_1_--dtor$0.c)
 *     _SystemContextManager::RegisterSystemContextEndpoint_::_1_::dtor$2 @ 0x18013543A (_SystemContextManager--RegisterSystemContextEndpoint_--_1_--dtor$2.c)
 *     _ISMHeatFrameworkHost::RegisterForSystemContext_::_1_::dtor$0 @ 0x180184BC3 (_ISMHeatFrameworkHost--RegisterForSystemContext_--_1_--dtor$0.c)
 *     _ISMHeatFrameworkHost::RegisterForSystemContext_::_1_::dtor$1 @ 0x180184BCF (_ISMHeatFrameworkHost--RegisterForSystemContext_--_1_--dtor$1.c)
 *     _ISMHeatFrameworkHost::RegisterForSystemContext_::_1_::dtor$2 @ 0x180184BDB (_ISMHeatFrameworkHost--RegisterForSystemContext_--_1_--dtor$2.c)
 *     _VirtualTouchpadContextProvider::Broadcast_::_1_::dtor$2 @ 0x18019DCA6 (_VirtualTouchpadContextProvider--Broadcast_--_1_--dtor$2.c)
 *     _DisplayOcclusionContextProvider::Broadcast_::_1_::dtor$2 @ 0x18019E8CB (_DisplayOcclusionContextProvider--Broadcast_--_1_--dtor$2.c)
 *     _GazeProcessor::Initialize_::_1_::dtor$1 @ 0x1801BB22E (_GazeProcessor--Initialize_--_1_--dtor$1.c)
 *     _GazeProcessor::OnDeviceUpdate_::_1_::dtor$0 @ 0x1801BB401 (_GazeProcessor--OnDeviceUpdate_--_1_--dtor$0.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall std::variant<std::monostate,InputConfigContextMessage,DisplayOcclusionContextMessage,VirtualTouchpadContextMessage,MIT_WIN32K_INPUTDESKTOP_STATE_MESSAGE>::~variant<std::monostate,InputConfigContextMessage,DisplayOcclusionContextMessage,VirtualTouchpadContextMessage,MIT_WIN32K_INPUTDESKTOP_STATE_MESSAGE>(
        __int64 a1)
{
  return std::_Variant_base<std::monostate,InputConfigContextMessage,DisplayOcclusionContextMessage,VirtualTouchpadContextMessage,MIT_WIN32K_INPUTDESKTOP_STATE_MESSAGE>::_Destroy(a1);
}

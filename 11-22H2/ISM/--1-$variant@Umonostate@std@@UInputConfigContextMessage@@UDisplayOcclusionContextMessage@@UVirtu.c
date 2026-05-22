/*
 * XREFs of ??1?$variant@Umonostate@std@@UInputConfigContextMessage@@UDisplayOcclusionContextMessage@@UVirtualTouchpadContextMessage@@UMIT_WIN32K_INPUTDESKTOP_STATE_MESSAGE@@@std@@QEAA@XZ @ 0x180124134
 * Callers:
 *     ??0GestureServices@@QEAA@PEAVBamoConnection@ISMBamos_AutoBamos@@@Z @ 0x180038C00 (--0GestureServices@@QEAA@PEAVBamoConnection@ISMBamos_AutoBamos@@@Z.c)
 *     _InputConfigContextProvider::Broadcast_::_1_::dtor$0 @ 0x18007FE8B (_InputConfigContextProvider--Broadcast_--_1_--dtor$0.c)
 *     _GestureServices::GestureServices_::_1_::dtor$11 @ 0x18007FEAF (_GestureServices--GestureServices_--_1_--dtor$11.c)
 *     _DWMCursorBroker::Initialize_::_1_::dtor$3 @ 0x18008026E (_DWMCursorBroker--Initialize_--_1_--dtor$3.c)
 *     _std::_Func_impl_no_alloc__lambda_42c9e164bf5e678d8fb83ca938b11c90__void_MIT_WIN32K_INPUTDESKTOP_STATE_MESSAGE_const___::_Do_call_::_1_::dtor$1 @ 0x180081274 (_std--_Func_impl_no_alloc__lambda_42c9e164bf5e678d8fb83ca938b11c90__void_MIT_WIN32K_ea_180081274.c)
 *     _VirtualTouchpadControllerProxy::ConfigureVirtualTouchpad_::_1_::dtor$0 @ 0x18015297B (_VirtualTouchpadControllerProxy--ConfigureVirtualTouchpad_--_1_--dtor$0.c)
 *     _SystemContextManager::RegisterSystemContextEndpoint_::_1_::dtor$2 @ 0x18015DD4C (_SystemContextManager--RegisterSystemContextEndpoint_--_1_--dtor$2.c)
 *     _ISMHeatFrameworkHost::RegisterForSystemContext_::_1_::dtor$0 @ 0x1801B1CC1 (_ISMHeatFrameworkHost--RegisterForSystemContext_--_1_--dtor$0.c)
 *     _ISMHeatFrameworkHost::RegisterForSystemContext_::_1_::dtor$1 @ 0x1801B1CCD (_ISMHeatFrameworkHost--RegisterForSystemContext_--_1_--dtor$1.c)
 *     _ISMHeatFrameworkHost::RegisterForSystemContext_::_1_::dtor$2 @ 0x1801B1CD9 (_ISMHeatFrameworkHost--RegisterForSystemContext_--_1_--dtor$2.c)
 *     _VirtualTouchpadContextProvider::Broadcast_::_1_::dtor$2 @ 0x1801C97B4 (_VirtualTouchpadContextProvider--Broadcast_--_1_--dtor$2.c)
 *     _DisplayOcclusionContextProvider::Broadcast_::_1_::dtor$2 @ 0x1801CA451 (_DisplayOcclusionContextProvider--Broadcast_--_1_--dtor$2.c)
 *     _GazeProcessor::Initialize_::_1_::dtor$1 @ 0x1801E6DDF (_GazeProcessor--Initialize_--_1_--dtor$1.c)
 *     _GazeProcessor::OnDeviceUpdate_::_1_::dtor$0 @ 0x1801E6FC0 (_GazeProcessor--OnDeviceUpdate_--_1_--dtor$0.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall std::variant<std::monostate,InputConfigContextMessage,DisplayOcclusionContextMessage,VirtualTouchpadContextMessage,MIT_WIN32K_INPUTDESKTOP_STATE_MESSAGE>::~variant<std::monostate,InputConfigContextMessage,DisplayOcclusionContextMessage,VirtualTouchpadContextMessage,MIT_WIN32K_INPUTDESKTOP_STATE_MESSAGE>(
        __int64 a1)
{
  return std::_Variant_base<std::monostate,InputConfigContextMessage,DisplayOcclusionContextMessage,VirtualTouchpadContextMessage,MIT_WIN32K_INPUTDESKTOP_STATE_MESSAGE>::_Destroy(a1);
}

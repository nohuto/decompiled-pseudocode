/*
 * XREFs of ??1?$variant@Umonostate@std@@UInputConfigContextMessage@@UDisplayOcclusionContextMessage@@UVirtualTouchpadContextMessage@@UMIT_WIN32K_INPUTDESKTOP_STATE_MESSAGE@@@std@@QEAA@XZ @ 0x1801160C4
 * Callers:
 *     ??0GestureServices@@QEAA@PEAVBamoConnection@ISMBamos_AutoBamos@@@Z @ 0x18003CC50 (--0GestureServices@@QEAA@PEAVBamoConnection@ISMBamos_AutoBamos@@@Z.c)
 *     _InputConfigContextProvider::Broadcast_::_1_::dtor$0 @ 0x18006C31B (_InputConfigContextProvider--Broadcast_--_1_--dtor$0.c)
 *     _GestureServices::GestureServices_::_1_::dtor$11 @ 0x18006C33F (_GestureServices--GestureServices_--_1_--dtor$11.c)
 *     _std::_Func_impl_no_alloc__lambda_42c9e164bf5e678d8fb83ca938b11c90__void_MIT_WIN32K_INPUTDESKTOP_STATE_MESSAGE_const___::_Do_call_::_1_::dtor$1 @ 0x18006D134 (_std--_Func_impl_no_alloc__lambda_42c9e164bf5e678d8fb83ca938b11c90__void_MIT_WIN32K_ea_18006D134.c)
 *     _DWMCursorBroker::Initialize_::_1_::dtor$3 @ 0x18006DC45 (_DWMCursorBroker--Initialize_--_1_--dtor$3.c)
 *     _VirtualTouchpadControllerProxy::ConfigureVirtualTouchpad_::_1_::dtor$0 @ 0x18014468E (_VirtualTouchpadControllerProxy--ConfigureVirtualTouchpad_--_1_--dtor$0.c)
 *     _SystemContextManager::RegisterSystemContextEndpoint_::_1_::dtor$2 @ 0x18014FA6C (_SystemContextManager--RegisterSystemContextEndpoint_--_1_--dtor$2.c)
 *     _ISMHeatFrameworkHost::RegisterForSystemContext_::_1_::dtor$0 @ 0x1801A3CE1 (_ISMHeatFrameworkHost--RegisterForSystemContext_--_1_--dtor$0.c)
 *     _ISMHeatFrameworkHost::RegisterForSystemContext_::_1_::dtor$1 @ 0x1801A3CED (_ISMHeatFrameworkHost--RegisterForSystemContext_--_1_--dtor$1.c)
 *     _ISMHeatFrameworkHost::RegisterForSystemContext_::_1_::dtor$2 @ 0x1801A3CF9 (_ISMHeatFrameworkHost--RegisterForSystemContext_--_1_--dtor$2.c)
 *     _VirtualTouchpadContextProvider::Broadcast_::_1_::dtor$2 @ 0x1801BBF14 (_VirtualTouchpadContextProvider--Broadcast_--_1_--dtor$2.c)
 *     _DisplayOcclusionContextProvider::Broadcast_::_1_::dtor$2 @ 0x1801BCBE9 (_DisplayOcclusionContextProvider--Broadcast_--_1_--dtor$2.c)
 *     _GazeProcessor::Initialize_::_1_::dtor$1 @ 0x1801D956F (_GazeProcessor--Initialize_--_1_--dtor$1.c)
 *     _GazeProcessor::OnDeviceUpdate_::_1_::dtor$0 @ 0x1801D9750 (_GazeProcessor--OnDeviceUpdate_--_1_--dtor$0.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall std::variant<std::monostate,InputConfigContextMessage,DisplayOcclusionContextMessage,VirtualTouchpadContextMessage,MIT_WIN32K_INPUTDESKTOP_STATE_MESSAGE>::~variant<std::monostate,InputConfigContextMessage,DisplayOcclusionContextMessage,VirtualTouchpadContextMessage,MIT_WIN32K_INPUTDESKTOP_STATE_MESSAGE>(
        __int64 a1)
{
  return std::_Variant_base<std::monostate,InputConfigContextMessage,DisplayOcclusionContextMessage,VirtualTouchpadContextMessage,MIT_WIN32K_INPUTDESKTOP_STATE_MESSAGE>::_Destroy(a1);
}

/*
 * XREFs of ??1?$unique_ptr@VCEndpointInstance@@U?$default_delete@VCEndpointInstance@@@std@@@std@@QEAA@XZ @ 0x14005D138
 * Callers:
 *     ?CreateBridgeToApo@CBridgeToAPOProcessNode@@QEAAJPEAUIDeviceGraphObjectCache@@PEAUBRIDGE_STREAM_DESCRIPTOR@@PEAUIAudioProcessingObject@@I@Z @ 0x14005D764 (-CreateBridgeToApo@CBridgeToAPOProcessNode@@QEAAJPEAUIDeviceGraphObjectCache@@PEAUBRIDGE_STREAM_.c)
 *     _CBridgeToAPOProcessNode::CreateBridgeToApo_::_1_::dtor$0 @ 0x14005D9B4 (_CBridgeToAPOProcessNode--CreateBridgeToApo_--_1_--dtor$0.c)
 *     ?CreateStreamInstance@CBridgeSinkProcessNode@@UEAAJPEAUSYSTEM_AUDIO_STREAM_DESCRIPTOR@@PEAUIDeviceGraphObjectCache@@_JIPEAPEAUICrossProcessMemory@@PEAPEAUICrossProcessEvent@@PEAUSYSTEM_AUDIO_STREAM@@@Z @ 0x14005DA00 (-CreateStreamInstance@CBridgeSinkProcessNode@@UEAAJPEAUSYSTEM_AUDIO_STREAM_DESCRIPTOR@@PEAUIDevi.c)
 *     _CBridgeSinkProcessNode::CreateStreamInstance_::_1_::dtor$0 @ 0x14005DC1E (_CBridgeSinkProcessNode--CreateStreamInstance_--_1_--dtor$0.c)
 *     ?CreateStreamInstance@CBridgeSourceProcessNode@@UEAAJPEAUSYSTEM_AUDIO_STREAM_DESCRIPTOR@@PEAUIDeviceGraphObjectCache@@_JIPEAPEAUICrossProcessMemory@@PEAPEAUICrossProcessEvent@@PEAUSYSTEM_AUDIO_STREAM@@@Z @ 0x14005DC50 (-CreateStreamInstance@CBridgeSourceProcessNode@@UEAAJPEAUSYSTEM_AUDIO_STREAM_DESCRIPTOR@@PEAUIDe.c)
 *     _CBridgeSourceProcessNode::CreateStreamInstance_::_1_::dtor$0 @ 0x14005DCFF (_CBridgeSourceProcessNode--CreateStreamInstance_--_1_--dtor$0.c)
 * Callees:
 *     ??_GCEndpointInstance@@QEAAPEAXI@Z @ 0x140022F00 (--_GCEndpointInstance@@QEAAPEAXI@Z.c)
 */

CEndpointInstance *__fastcall std::unique_ptr<CEndpointInstance>::~unique_ptr<CEndpointInstance>(
        CEndpointInstance **a1)
{
  CEndpointInstance *v1; // rcx
  CEndpointInstance *result; // rax

  v1 = *a1;
  if ( v1 )
    return CEndpointInstance::`scalar deleting destructor'(v1);
  return result;
}

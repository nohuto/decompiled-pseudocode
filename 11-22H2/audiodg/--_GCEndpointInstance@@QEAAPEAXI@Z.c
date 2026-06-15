/*
 * XREFs of ??_GCEndpointInstance@@QEAAPEAXI@Z @ 0x140022F00
 * Callers:
 *     ??1CStreamProcessNode@@UEAA@XZ @ 0x140022EBC (--1CStreamProcessNode@@UEAA@XZ.c)
 *     ??1CDeviceProcessNode@@UEAA@XZ @ 0x14003821A (--1CDeviceProcessNode@@UEAA@XZ.c)
 *     ??1?$unique_ptr@VCEndpointInstance@@U?$default_delete@VCEndpointInstance@@@wistd@@@wistd@@QEAA@XZ @ 0x14004A2A4 (--1-$unique_ptr@VCEndpointInstance@@U-$default_delete@VCEndpointInstance@@@wistd@@@wistd@@QEAA@X.c)
 *     ??1?$out_param_t@V?$unique_ptr@VCEndpointInstance@@U?$default_delete@VCEndpointInstance@@@std@@@std@@@details@wil@@QEAA@XZ @ 0x14005D0D4 (--1-$out_param_t@V-$unique_ptr@VCEndpointInstance@@U-$default_delete@VCEndpointInstance@@@std@@@.c)
 *     ??1?$unique_ptr@VCEndpointInstance@@U?$default_delete@VCEndpointInstance@@@std@@@std@@QEAA@XZ @ 0x14005D188 (--1-$unique_ptr@VCEndpointInstance@@U-$default_delete@VCEndpointInstance@@@std@@@std@@QEAA@XZ.c)
 *     ?CreateBridgeToApo@CBridgeToAPOProcessNode@@QEAAJPEAUIDeviceGraphObjectCache@@PEAUBRIDGE_STREAM_DESCRIPTOR@@PEAUIAudioProcessingObject@@I@Z @ 0x14005D7B4 (-CreateBridgeToApo@CBridgeToAPOProcessNode@@QEAAJPEAUIDeviceGraphObjectCache@@PEAUBRIDGE_STREAM_.c)
 *     ?CreateStreamInstance@CBridgeSourceProcessNode@@UEAAJPEAUSYSTEM_AUDIO_STREAM_DESCRIPTOR@@PEAUIDeviceGraphObjectCache@@_JIPEAPEAUICrossProcessMemory@@PEAPEAUICrossProcessEvent@@PEAUSYSTEM_AUDIO_STREAM@@@Z @ 0x14005DCA0 (-CreateStreamInstance@CBridgeSourceProcessNode@@UEAAJPEAUSYSTEM_AUDIO_STREAM_DESCRIPTOR@@PEAUIDe.c)
 * Callees:
 *     ??1CEndpointInstance@@QEAA@XZ @ 0x14002301C (--1CEndpointInstance@@QEAA@XZ.c)
 *     ??3@YAXPEAX_K@Z @ 0x140028498 (--3@YAXPEAX_K@Z.c)
 */

CEndpointInstance *__fastcall CEndpointInstance::`scalar deleting destructor'(CEndpointInstance *this)
{
  CEndpointInstance::~CEndpointInstance(this);
  operator delete(this);
  return this;
}

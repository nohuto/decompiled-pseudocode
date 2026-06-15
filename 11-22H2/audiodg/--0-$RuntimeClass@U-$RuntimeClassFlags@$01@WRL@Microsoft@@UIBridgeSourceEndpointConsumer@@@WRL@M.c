/*
 * XREFs of ??0?$RuntimeClass@U?$RuntimeClassFlags@$01@WRL@Microsoft@@UIBridgeSourceEndpointConsumer@@@WRL@Microsoft@@QEAA@XZ @ 0x14004F078
 * Callers:
 *     ??$MakeAndInitialize@VCBridgeToApoAuxInput@@UIBridgeSourceEndpointConsumer@@AEAPEAUIDeviceGraphObjectCache@@AEAPEAUBRIDGE_STREAM_DESCRIPTOR@@AEAPEAUIAudioProcessingObject@@AEAPEAUIAudioMediaType@@AEAI@Details@WRL@Microsoft@@YAJPEAPEAUIBridgeSourceEndpointConsumer@@AEAPEAUIDeviceGraphObjectCache@@AEAPEAUBRIDGE_STREAM_DESCRIPTOR@@AEAPEAUIAudioProcessingObject@@AEAPEAUIAudioMediaType@@AEAI@Z @ 0x14004EEE4 (--$MakeAndInitialize@VCBridgeToApoAuxInput@@UIBridgeSourceEndpointConsumer@@AEAPEAUIDeviceGraphO.c)
 *     ??$MakeAndInitialize@VCBridgeToRenderGraph@@UIBridgeSourceEndpointConsumer@@AEAPEAUIDeviceGraphObjectCache@@AEAPEAUICrossProcessMemory@@AEAPEAUSYSTEM_AUDIO_STREAM@@AEAIAEAI@Details@WRL@Microsoft@@YAJPEAPEAUIBridgeSourceEndpointConsumer@@AEAPEAUIDeviceGraphObjectCache@@AEAPEAUICrossProcessMemory@@AEAPEAUSYSTEM_AUDIO_STREAM@@AEAI4@Z @ 0x14007A048 (--$MakeAndInitialize@VCBridgeToRenderGraph@@UIBridgeSourceEndpointConsumer@@AEAPEAUIDeviceGraphO.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x14002F210 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,IBridgeSourceEndpointConsumer>::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,IBridgeSourceEndpointConsumer>(
        __int64 a1)
{
  *(_DWORD *)(a1 + 12) = 1;
  *(_QWORD *)a1 = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,IBridgeSourceEndpointConsumer>::`vftable';
  if ( Microsoft::WRL::Details::ModuleBase::module_ )
    (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                         + 8LL))(Microsoft::WRL::Details::ModuleBase::module_);
  return a1;
}

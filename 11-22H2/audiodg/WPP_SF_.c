/*
 * XREFs of WPP_SF_ @ 0x1400528A0
 * Callers:
 *     ?CreateSubmixPipeInstance@CPipeInstance@@SAJPEAUIDeviceGraphObjectCache@@PEAUSUBMIX_DESCRIPTOR@@PEAPEAV1@@Z @ 0x14000A320 (-CreateSubmixPipeInstance@CPipeInstance@@SAJPEAUIDeviceGraphObjectCache@@PEAUSUBMIX_DESCRIPTOR@@.c)
 *     ?Cleanup@CPipeInstance@@AEAAXXZ @ 0x14000D480 (-Cleanup@CPipeInstance@@AEAAXXZ.c)
 *     ?CreateDevicePipeInstance@CPipeInstance@@SAJPEAUIAudioProcessor@@PEAUIDeviceGraphObjectCache@@PEAUAUDIO_DEVICE_PIPE_DESCRIPTOR@@AEAV?$unique_ptr@VCPipeInstance@@U?$default_delete@VCPipeInstance@@@wistd@@@wistd@@@Z @ 0x14001CF18 (-CreateDevicePipeInstance@CPipeInstance@@SAJPEAUIAudioProcessor@@PEAUIDeviceGraphObjectCache@@PE.c)
 *     ?CreateDeviceProcessNode@CDeviceProcessNode@@SAJPEAUAUDIO_DEVICE_PIPE_DESCRIPTOR@@PEAPEAV1@@Z @ 0x14001D8B0 (-CreateDeviceProcessNode@CDeviceProcessNode@@SAJPEAUAUDIO_DEVICE_PIPE_DESCRIPTOR@@PEAPEAV1@@Z.c)
 *     _lambda_10c7ce318882e0e942d95a651b89d589_::operator() @ 0x140050520 (_lambda_10c7ce318882e0e942d95a651b89d589_--operator().c)
 *     ?PostMessageLoop@CAudioDGModule@@QEAAJXZ @ 0x1400516E0 (-PostMessageLoop@CAudioDGModule@@QEAAJXZ.c)
 *     ?RunMessageLoop@CAudioDGModule@@QEAAJXZ @ 0x1400520F8 (-RunMessageLoop@CAudioDGModule@@QEAAJXZ.c)
 *     ?Cleanup@CSystemAudioDeviceBase@@MEAAXXZ @ 0x140055CD0 (-Cleanup@CSystemAudioDeviceBase@@MEAAXXZ.c)
 *     ?Cleanup@CSystemAudioDeviceSharedBase@@MEAAXXZ @ 0x140058980 (-Cleanup@CSystemAudioDeviceSharedBase@@MEAAXXZ.c)
 *     ?Initialize@CSystemAudioDeviceOffloadGraph@@UEAAJPEAUAUDIO_DEVICE_PIPE_DESCRIPTOR@@PEAUIAudioGraphCallback@@K@Z @ 0x14005B5C0 (-Initialize@CSystemAudioDeviceOffloadGraph@@UEAAJPEAUAUDIO_DEVICE_PIPE_DESCRIPTOR@@PEAUIAudioGra.c)
 *     ?CreateFormatConverterPipeInstance@CPipeInstance@@SAJPEAUIDeviceGraphObjectCache@@PEBUFORMAT_CONVERTER_PIPE_DESCRIPTOR@@PEAPEAV1@@Z @ 0x14005C6A0 (-CreateFormatConverterPipeInstance@CPipeInstance@@SAJPEAUIDeviceGraphObjectCache@@PEBUFORMAT_CON.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall WPP_SF_(__int64 a1, unsigned __int16 a2, __int64 a3)
{
  return EtwTraceMessage(a1, 43LL, a3, a2, 0LL);
}

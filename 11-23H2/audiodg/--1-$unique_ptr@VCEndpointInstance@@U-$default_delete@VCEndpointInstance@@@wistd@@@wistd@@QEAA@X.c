/*
 * XREFs of ??1?$unique_ptr@VCEndpointInstance@@U?$default_delete@VCEndpointInstance@@@wistd@@@wistd@@QEAA@XZ @ 0x14004A264
 * Callers:
 *     ?CreateStreamEndpointInstance@CEndpointInstance@@SAJPEAUSYSTEM_AUDIO_STREAM_DESCRIPTOR@@_JIPEAUSYSTEM_AUDIO_STREAM@@PEAPEAUICrossProcessMemory@@PEAPEAUICrossProcessEvent@@PEAPEAV1@@Z @ 0x140019128 (-CreateStreamEndpointInstance@CEndpointInstance@@SAJPEAUSYSTEM_AUDIO_STREAM_DESCRIPTOR@@_JIPEAUS.c)
 *     ?CreateDeviceEndpointInstance@CEndpointInstance@@SAJPEAUAUDIO_DEVICE_PIPE_DESCRIPTOR@@PEAPEAV1@@Z @ 0x14001B78C (-CreateDeviceEndpointInstance@CEndpointInstance@@SAJPEAUAUDIO_DEVICE_PIPE_DESCRIPTOR@@PEAPEAV1@@.c)
 *     _CEndpointInstance::CreateDeviceEndpointInstance_::_1_::dtor$12 @ 0x140036016 (_CEndpointInstance--CreateDeviceEndpointInstance_--_1_--dtor$12.c)
 *     ?CreateSpatialStreamEndpointInstance@CEndpointInstance@@SAJPEAUSYSTEM_AUDIO_STREAM_DESCRIPTOR@@_JIPEAUSYSTEM_AUDIO_STREAM@@PEAPEAUICrossProcessMemory@@PEAPEAUICrossProcessEvent@@PEAPEAV1@@Z @ 0x140060A34 (-CreateSpatialStreamEndpointInstance@CEndpointInstance@@SAJPEAUSYSTEM_AUDIO_STREAM_DESCRIPTOR@@_.c)
 *     _CEndpointInstance::CreateSpatialStreamEndpointInstance_::_1_::dtor$9 @ 0x1400611A4 (_CEndpointInstance--CreateSpatialStreamEndpointInstance_--_1_--dtor$9.c)
 * Callees:
 *     ??_GCEndpointInstance@@QEAAPEAXI@Z @ 0x140022F00 (--_GCEndpointInstance@@QEAAPEAXI@Z.c)
 */

CEndpointInstance *__fastcall wistd::unique_ptr<CEndpointInstance,wistd::default_delete<CEndpointInstance>>::~unique_ptr<CEndpointInstance,wistd::default_delete<CEndpointInstance>>(
        CEndpointInstance **a1)
{
  CEndpointInstance *result; // rax

  result = *a1;
  *a1 = 0LL;
  if ( result )
    return CEndpointInstance::`scalar deleting destructor'(result);
  return result;
}

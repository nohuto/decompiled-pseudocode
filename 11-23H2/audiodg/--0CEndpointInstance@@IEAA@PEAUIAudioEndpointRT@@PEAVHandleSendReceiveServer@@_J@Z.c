/*
 * XREFs of ??0CEndpointInstance@@IEAA@PEAUIAudioEndpointRT@@PEAVHandleSendReceiveServer@@_J@Z @ 0x14001A82C
 * Callers:
 *     ?CreateStreamEndpointInstance@CEndpointInstance@@SAJPEAUSYSTEM_AUDIO_STREAM_DESCRIPTOR@@_JIPEAUSYSTEM_AUDIO_STREAM@@PEAPEAUICrossProcessMemory@@PEAPEAUICrossProcessEvent@@PEAPEAV1@@Z @ 0x140019128 (-CreateStreamEndpointInstance@CEndpointInstance@@SAJPEAUSYSTEM_AUDIO_STREAM_DESCRIPTOR@@_JIPEAUS.c)
 *     ?CreateDeviceEndpointInstance@CEndpointInstance@@SAJPEAUAUDIO_DEVICE_PIPE_DESCRIPTOR@@PEAPEAV1@@Z @ 0x14001B78C (-CreateDeviceEndpointInstance@CEndpointInstance@@SAJPEAUAUDIO_DEVICE_PIPE_DESCRIPTOR@@PEAPEAV1@@.c)
 *     ?CreateBridgeSourceEndpointInstance@CEndpointInstance@@SAJPEAUIDeviceGraphObjectCache@@_JPEAUIAudioMediaType@@IPEAPEAV1@@Z @ 0x140060948 (-CreateBridgeSourceEndpointInstance@CEndpointInstance@@SAJPEAUIDeviceGraphObjectCache@@_JPEAUIAu.c)
 *     ?CreateSpatialStreamEndpointInstance@CEndpointInstance@@SAJPEAUSYSTEM_AUDIO_STREAM_DESCRIPTOR@@_JIPEAUSYSTEM_AUDIO_STREAM@@PEAPEAUICrossProcessMemory@@PEAPEAUICrossProcessEvent@@PEAPEAV1@@Z @ 0x140060A34 (-CreateSpatialStreamEndpointInstance@CEndpointInstance@@SAJPEAUSYSTEM_AUDIO_STREAM_DESCRIPTOR@@_.c)
 * Callees:
 *     ?AtlComPtrAssign@ATL@@YAPEAUIUnknown@@PEAPEAU2@PEAU2@@Z @ 0x140012E70 (-AtlComPtrAssign@ATL@@YAPEAUIUnknown@@PEAPEAU2@PEAU2@@Z.c)
 */

CEndpointInstance *__fastcall CEndpointInstance::CEndpointInstance(
        CEndpointInstance *this,
        struct IUnknown *a2,
        struct HandleSendReceiveServer *a3,
        __int64 a4)
{
  CEndpointInstance *result; // rax

  *(_QWORD *)this = 0LL;
  *((_QWORD *)this + 3) = 0LL;
  if ( a2 )
    ATL::AtlComPtrAssign((struct IUnknown **)this, a2);
  *((_QWORD *)this + 2) = a3;
  result = this;
  *((_QWORD *)this + 1) = a4;
  return result;
}

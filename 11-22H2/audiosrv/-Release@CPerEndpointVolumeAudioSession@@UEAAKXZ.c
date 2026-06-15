/*
 * XREFs of ?Release@CPerEndpointVolumeAudioSession@@UEAAKXZ @ 0x1800819B0
 * Callers:
 *     ?Release@CPerEndpointVolumeAudioSession@@W7EAAKXZ @ 0x180076520 (-Release@CPerEndpointVolumeAudioSession@@W7EAAKXZ.c)
 *     ?Release@CPerEndpointVolumeAudioSession@@WBA@EAAKXZ @ 0x180076540 (-Release@CPerEndpointVolumeAudioSession@@WBA@EAAKXZ.c)
 *     ?Release@CPerEndpointVolumeAudioSession@@WBI@EAAKXZ @ 0x180076560 (-Release@CPerEndpointVolumeAudioSession@@WBI@EAAKXZ.c)
 *     ?Release@CPerEndpointVolumeAudioSession@@WCA@EAAKXZ @ 0x180076580 (-Release@CPerEndpointVolumeAudioSession@@WCA@EAAKXZ.c)
 *     ?Release@CPerEndpointVolumeAudioSession@@WCI@EAAKXZ @ 0x1800765A0 (-Release@CPerEndpointVolumeAudioSession@@WCI@EAAKXZ.c)
 *     ?Release@CPerEndpointVolumeAudioSession@@WDJI@EAAKXZ @ 0x1800765C0 (-Release@CPerEndpointVolumeAudioSession@@WDJI@EAAKXZ.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall CPerEndpointVolumeAudioSession::Release(volatile signed __int64 *this)
{
  return Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,Microsoft::WRL::ChainInterfaces<IAudioSessionPolicyControl,IAudioSessionInfo,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil>,IAudioSessionInfoInternal,IAudioSessionDuckingControl,IInspectable>::Release(this);
}

/*
 * XREFs of ?NDAddRef@CSystemEffectWrapper@@UEAAKXZ @ 0x140075F70
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CSystemEffectWrapper::NDAddRef(CSystemEffectWrapper *this)
{
  return Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,IAudioProcessingObject,IAudioProcessingObjectConfiguration,IAudioProcessingObjectRT,IAudioSystemEffects3,IApoAuxiliaryInputConfiguration,IApoAuxiliaryInputRT,IApoAcousticEchoCancellation,IAudioAmbisonics,IAPOPreferredFormatSupport,ISystemEffectWrapper,IAudioProcessingObjectNotifications2,IAPOWrapperSrv>::AddRef((__int64)this - 128);
}

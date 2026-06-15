/*
 * XREFs of ??_G?$RuntimeClass@U?$RuntimeClassFlags@$01@WRL@Microsoft@@UIAPOWrapperClient@@UIAudioProcessingObject@@UIAudioSystemEffects2@@UIAudioSystemEffects3@@UIApoAuxiliaryInputConfiguration@@UIAudioProcessingObjectInternal@@UIApoAcousticEchoCancellation@@UIAPOPreferredFormatSupport@@UIAudioSystemEffectsCustomFormats@@@WRL@Microsoft@@UEAAPEAXI@Z @ 0x1800CF390
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x180067038 (--3@YAXPEAX_K@Z.c)
 */

_DWORD *__fastcall Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,IAPOWrapperClient,IAudioProcessingObject,IAudioSystemEffects2,IAudioSystemEffects3,IApoAuxiliaryInputConfiguration,IAudioProcessingObjectInternal,IApoAcousticEchoCancellation,IAPOPreferredFormatSupport,IAudioSystemEffectsCustomFormats>::`scalar deleting destructor'(
        _DWORD *a1,
        char a2)
{
  a1[19] = -1073741823;
  if ( (a2 & 1) != 0 )
    operator delete(a1);
  return a1;
}

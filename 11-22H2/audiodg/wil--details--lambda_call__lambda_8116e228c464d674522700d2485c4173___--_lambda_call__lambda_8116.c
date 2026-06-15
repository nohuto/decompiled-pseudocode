/*
 * XREFs of wil::details::lambda_call__lambda_8116e228c464d674522700d2485c4173___::_lambda_call__lambda_8116e228c464d674522700d2485c4173___ @ 0x14005AB04
 * Callers:
 *     ?Initialize@CSystemAudioDeviceOffloadGraph@@UEAAJPEAUAUDIO_DEVICE_PIPE_DESCRIPTOR@@PEAUIAudioGraphCallback@@K@Z @ 0x14005B5C0 (-Initialize@CSystemAudioDeviceOffloadGraph@@UEAAJPEAUAUDIO_DEVICE_PIPE_DESCRIPTOR@@PEAUIAudioGra.c)
 * Callees:
 *     ?Cleanup@CSystemAudioDeviceSharedBase@@MEAAXXZ @ 0x140058980 (-Cleanup@CSystemAudioDeviceSharedBase@@MEAAXXZ.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall wil::details::lambda_call__lambda_8116e228c464d674522700d2485c4173___::_lambda_call__lambda_8116e228c464d674522700d2485c4173___(
        __int64 a1)
{
  if ( *(_BYTE *)(a1 + 8) )
  {
    *(_BYTE *)(a1 + 8) = 0;
    CSystemAudioDeviceSharedBase::Cleanup(*(CSystemAudioDeviceSharedBase **)a1);
  }
}

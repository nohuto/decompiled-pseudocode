/*
 * XREFs of ??1?$ComPtr@VAudioEffectsWatcher@@@WRL@Microsoft@@QEAA@XZ @ 0x1800D56B8
 * Callers:
 *     ??$MakeAndInitialize@VAudioEffectsWatcher@@UIAudioEffectsWatcher@@AEAPEBGAEAKAEAHAEAW4DiscoverySettings@@@Details@WRL@Microsoft@@YAJPEAPEAUIAudioEffectsWatcher@@AEAPEBGAEAKAEAHAEAW4DiscoverySettings@@@Z @ 0x1800D5168 (--$MakeAndInitialize@VAudioEffectsWatcher@@UIAudioEffectsWatcher@@AEAPEBGAEAKAEAHAEAW4DiscoveryS.c)
 *     _Microsoft::WRL::Details::MakeAndInitialize_AudioEffectsWatcher_IAudioEffectsWatcher_unsigned_short_const___&_unsigned_long_&_int_&_enum_DiscoverySettings_&__::_1_::dtor$2 @ 0x1800D526D (_Microsoft--WRL--Details--MakeAndInitialize_AudioEffectsWatcher_IAudioEffectsWatche_ea_1800D526D.c)
 * Callees:
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UIAudioEffectsWatcher@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x1800D6730 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UIAud_ea_1800D6730.c)
 */

__int64 __fastcall Microsoft::WRL::ComPtr<AudioEffectsWatcher>::~ComPtr<AudioEffectsWatcher>(__int64 *a1)
{
  __int64 result; // rax

  result = *a1;
  if ( *a1 )
  {
    *a1 = 0LL;
    return Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,IAudioEffectsWatcher>::Release(result);
  }
  return result;
}

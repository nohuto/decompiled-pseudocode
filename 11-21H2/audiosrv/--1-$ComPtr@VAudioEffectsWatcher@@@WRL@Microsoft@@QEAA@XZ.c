/*
 * XREFs of ??1?$ComPtr@VAudioEffectsWatcher@@@WRL@Microsoft@@QEAA@XZ @ 0x1800D2ABC
 * Callers:
 *     _Microsoft::WRL::Details::MakeAndInitialize_AudioEffectsWatcher_IAudioEffectsWatcher_unsigned_short_const___&_unsigned_long_&_int_&_enum_DiscoverySettings_&__::_1_::dtor$2 @ 0x1800D25F9 (_Microsoft--WRL--Details--MakeAndInitialize_AudioEffectsWatcher_IAudioEffectsWatche_ea_1800D25F9.c)
 * Callees:
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UIAudioEffectsWatcher@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x1800D3FA0 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UIAud_ea_1800D3FA0.c)
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

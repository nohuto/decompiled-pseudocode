/*
 * XREFs of ??1?$ComPtr@VCAudioSessionStore@@@WRL@Microsoft@@QEAA@XZ @ 0x180113F94
 * Callers:
 *     ??$MakeAndInitialize@VCAudioSessionStore@@UIAudioSessionStore@@AEAPEAUIAudioSessionInfo@@@Details@WRL@Microsoft@@YAJPEAPEAUIAudioSessionStore@@AEAPEAUIAudioSessionInfo@@@Z @ 0x180013E50 (--$MakeAndInitialize@VCAudioSessionStore@@UIAudioSessionStore@@AEAPEAUIAudioSessionInfo@@@Detail.c)
 *     _Microsoft::WRL::Details::MakeAndInitialize_CAudioSessionStore_IAudioSessionStore_IAudioSessionInfo___&__::_1_::dtor$1 @ 0x180079383 (_Microsoft--WRL--Details--MakeAndInitialize_CAudioSessionStore_IAudioSessionStore_IAudioSessionI.c)
 * Callees:
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UIInspectable@@UIPropertyStore@@UIAudioSessionStore@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180012BC0 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UIInspectable@@UIP.c)
 */

__int64 __fastcall Microsoft::WRL::ComPtr<CAudioSessionStore>::~ComPtr<CAudioSessionStore>(__int64 *a1)
{
  __int64 result; // rax

  result = *a1;
  if ( *a1 )
  {
    *a1 = 0LL;
    return Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,IInspectable,IPropertyStore,IAudioSessionStore>::Release(result);
  }
  return result;
}

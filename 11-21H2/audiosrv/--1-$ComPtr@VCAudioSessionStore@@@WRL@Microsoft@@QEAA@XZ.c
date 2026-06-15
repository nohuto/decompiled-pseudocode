/*
 * XREFs of ??1?$ComPtr@VCAudioSessionStore@@@WRL@Microsoft@@QEAA@XZ @ 0x1800E7EFC
 * Callers:
 *     _Microsoft::WRL::Details::MakeAndInitialize_CAudioSessionStore_IAudioSessionStore_IAudioSessionInfo___&__::_1_::dtor$1 @ 0x18006C712 (_Microsoft--WRL--Details--MakeAndInitialize_CAudioSessionStore_IAudioSessionStore_IAudioSessionI.c)
 * Callees:
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UIInspectable@@UIPropertyStore@@UIAudioSessionStore@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180004250 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UIInspectable@@UIP.c)
 */

volatile signed __int64 *__fastcall Microsoft::WRL::ComPtr<CAudioSessionStore>::~ComPtr<CAudioSessionStore>(
        volatile signed __int64 **a1)
{
  volatile signed __int64 *result; // rax

  result = *a1;
  if ( *a1 )
  {
    *a1 = 0LL;
    return (volatile signed __int64 *)Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,IInspectable,IPropertyStore,IAudioSessionStore>::Release(result);
  }
  return result;
}

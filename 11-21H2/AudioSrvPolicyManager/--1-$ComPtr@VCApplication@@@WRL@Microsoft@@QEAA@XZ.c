/*
 * XREFs of ??1?$ComPtr@VCApplication@@@WRL@Microsoft@@QEAA@XZ @ 0x18001EC3C
 * Callers:
 *     _Microsoft::WRL::Details::MakeAndInitialize_CApplication_CApplication_unsigned_short_const___&_unsigned___int64_&_unsigned_long_&__::_1_::dtor$2 @ 0x18004572A (_Microsoft--WRL--Details--MakeAndInitialize_CApplication_CApplication_unsigned_shor_ea_18004572A.c)
 * Callees:
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIAudioStreamPreStartContext@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x18000BF70 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIAudioStreamPreS.c)
 */

volatile signed __int32 *__fastcall Microsoft::WRL::ComPtr<CApplication>::~ComPtr<CApplication>(
        volatile signed __int32 **a1)
{
  volatile signed __int32 *result; // rax

  result = *a1;
  if ( *a1 )
  {
    *a1 = 0LL;
    return (volatile signed __int32 *)Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IAudioStreamPreStartContext>::Release(result);
  }
  return result;
}

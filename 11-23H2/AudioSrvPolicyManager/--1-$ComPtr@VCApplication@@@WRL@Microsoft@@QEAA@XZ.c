/*
 * XREFs of ??1?$ComPtr@VCApplication@@@WRL@Microsoft@@QEAA@XZ @ 0x18002C4E4
 * Callers:
 *     _Microsoft::WRL::Details::MakeAndInitialize_CApplication_CApplication_unsigned_short_const___&_unsigned___int64_&_unsigned_long_&__::_1_::dtor$2 @ 0x1800493C4 (_Microsoft--WRL--Details--MakeAndInitialize_CApplication_CApplication_unsigned_shor_ea_1800493C4.c)
 * Callees:
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIAudioStreamPreStartContext@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x18001DAF0 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIAudioStreamPreS.c)
 */

__int64 __fastcall Microsoft::WRL::ComPtr<CApplication>::~ComPtr<CApplication>(__int64 *a1, volatile int *a2)
{
  __int64 result; // rax

  result = *a1;
  if ( *a1 )
  {
    *a1 = 0LL;
    return Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IAudioStreamPreStartContext>::Release(
             result,
             a2);
  }
  return result;
}

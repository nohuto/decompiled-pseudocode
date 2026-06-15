/*
 * XREFs of ??1?$ComPtr@VCProcess@@@WRL@Microsoft@@QEAA@XZ @ 0x18001EC60
 * Callers:
 *     _Microsoft::WRL::Details::MakeAndInitialize_CProcess_CProcess_void___unsigned_long_&_unsigned_long_&_unsigned_short___unsigned_short___unsigned___int64_&_unsigned_short___bool_unsigned_short___bool_&_bool_&_int_&_int_&_int_&_int_&_int_&_int_&_bool_&_int_&_int_&__::_1_::dtor$2 @ 0x180045777 (_Microsoft--WRL--Details--MakeAndInitialize_CProcess_CProcess_void___unsigned_long__ea_180045777.c)
 * Callees:
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIAudioProcess@@UIAudioProcessInternal@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x18000BCA0 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIAudioProcess@@U.c)
 */

volatile signed __int32 *__fastcall Microsoft::WRL::ComPtr<CProcess>::~ComPtr<CProcess>(volatile signed __int32 **a1)
{
  volatile signed __int32 *result; // rax

  result = *a1;
  if ( *a1 )
  {
    *a1 = 0LL;
    return (volatile signed __int32 *)Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IAudioProcess,IAudioProcessInternal>::Release(result);
  }
  return result;
}

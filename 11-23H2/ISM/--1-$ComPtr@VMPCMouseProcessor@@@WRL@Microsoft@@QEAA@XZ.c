/*
 * XREFs of ??1?$ComPtr@VMPCMouseProcessor@@@WRL@Microsoft@@QEAA@XZ @ 0x1801E6614
 * Callers:
 *     ??$MakeAndInitialize@VMPCMouseProcessor@@UIInputProcessor@@AEAPEAUInputProcessorCreateParams@@@Details@WRL@Microsoft@@YAJPEAPEAUIInputProcessor@@AEAPEAUInputProcessorCreateParams@@@Z @ 0x180040270 (--$MakeAndInitialize@VMPCMouseProcessor@@UIInputProcessor@@AEAPEAUInputProcessorCreateParams@@@D.c)
 *     _Microsoft::WRL::Details::MakeAndInitialize_MPCMouseProcessor_IInputProcessor_InputProcessorCreateParams___&__::_1_::dtor$2 @ 0x18006EE09 (_Microsoft--WRL--Details--MakeAndInitialize_MPCMouseProcessor_IInputProcessor_Input_ea_18006EE09.c)
 * Callees:
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIRawInputProvider@@UIMouseProcessorForwarding@@VMPCInputProviderBase@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180014CD0 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIRawInputProvide.c)
 */

__int64 __fastcall Microsoft::WRL::ComPtr<MPCMouseProcessor>::~ComPtr<MPCMouseProcessor>(__int64 *a1)
{
  __int64 result; // rax

  result = *a1;
  if ( *a1 )
  {
    *a1 = 0LL;
    return Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IRawInputProvider,IMouseProcessorForwarding,MPCInputProviderBase>::Release(result);
  }
  return result;
}

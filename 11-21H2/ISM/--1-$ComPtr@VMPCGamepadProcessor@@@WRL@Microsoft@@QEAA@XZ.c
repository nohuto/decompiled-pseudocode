/*
 * XREFs of ??1?$ComPtr@VMPCGamepadProcessor@@@WRL@Microsoft@@QEAA@XZ @ 0x1801C44A8
 * Callers:
 *     _Microsoft::WRL::Details::MakeAndInitialize_MPCGamepadProcessor_IInputProcessor_InputProcessorCreateParams___&__::_1_::dtor$2 @ 0x1801C42A9 (_Microsoft--WRL--Details--MakeAndInitialize_MPCGamepadProcessor_IInputProcessor_Inp_ea_1801C42A9.c)
 * Callees:
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIRawInputProvider@@VMPCInputProviderBase@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x1801C6780 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIRa_ea_1801C6780.c)
 */

__int64 __fastcall Microsoft::WRL::ComPtr<MPCGamepadProcessor>::~ComPtr<MPCGamepadProcessor>(__int64 *a1)
{
  __int64 result; // rax

  result = *a1;
  if ( *a1 )
  {
    *a1 = 0LL;
    return Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IRawInputProvider,MPCInputProviderBase>::Release(result);
  }
  return result;
}

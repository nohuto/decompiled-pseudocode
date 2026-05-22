/*
 * XREFs of ??1?$ComPtr@VMPCRawInputProvider@@@WRL@Microsoft@@QEAA@XZ @ 0x1800B5CF8
 * Callers:
 *     _Microsoft::WRL::Details::MakeAndInitialize_MPCRawInputProvider_IRawInputProvider_IRawInputClient___&__::_1_::dtor$1 @ 0x1800554A6 (_Microsoft--WRL--Details--MakeAndInitialize_MPCRawInputProvider_IRawInputProvider_I_ea_1800554A6.c)
 * Callees:
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIRawInputProvider@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180046C90 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIRa_ea_180046C90.c)
 */

__int64 __fastcall Microsoft::WRL::ComPtr<MPCRawInputProvider>::~ComPtr<MPCRawInputProvider>(
        __int64 *a1,
        volatile int *a2)
{
  __int64 result; // rax

  result = *a1;
  if ( *a1 )
  {
    *a1 = 0LL;
    return Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IRawInputProvider>::Release(
             result,
             a2);
  }
  return result;
}

/*
 * XREFs of ??1?$ComPtr@VMPCRawInputProvider@@@WRL@Microsoft@@QEAA@XZ @ 0x1800DDDE4
 * Callers:
 *     ??$MakeAndInitialize@VMPCRawInputProvider@@UIRawInputProvider@@AEAPEAUIRawInputClient@@@Details@WRL@Microsoft@@YAJPEAPEAUIRawInputProvider@@AEAPEAUIRawInputClient@@@Z @ 0x18003B118 (--$MakeAndInitialize@VMPCRawInputProvider@@UIRawInputProvider@@AEAPEAUIRawInputClient@@@Details@.c)
 *     _Microsoft::WRL::Details::MakeAndInitialize_MPCRawInputProvider_IRawInputProvider_IRawInputClient___&__::_1_::dtor$1 @ 0x180081BEC (_Microsoft--WRL--Details--MakeAndInitialize_MPCRawInputProvider_IRawInputProvider_IRawInputClien.c)
 * Callees:
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIRawInputProvider@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180050C90 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIRa_ea_180050C90.c)
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

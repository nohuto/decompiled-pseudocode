/*
 * XREFs of HalpMcaProcessorBankConfig @ 0x140380694
 * Callers:
 *     HalpMcaSetProcessorConfig @ 0x140A8ABB4 (HalpMcaSetProcessorConfig.c)
 * Callees:
 *     HalpGetCpuVendor @ 0x140380794 (HalpGetCpuVendor.c)
 *     HalpMcaProcessorBankConfigAmd @ 0x1405064A8 (HalpMcaProcessorBankConfigAmd.c)
 */

__int64 __fastcall HalpMcaProcessorBankConfig(__int64 a1, unsigned int a2)
{
  __int64 result; // rax

  result = HalpGetCpuVendor();
  if ( (_BYTE)result == 1 )
  {
    if ( HalpMcaScalableRasSupported )
      return HalpMcaProcessorBankConfigAmd(a1, a2);
  }
  return result;
}

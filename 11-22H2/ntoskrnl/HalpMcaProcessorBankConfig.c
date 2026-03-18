/*
 * XREFs of HalpMcaProcessorBankConfig @ 0x140380B44
 * Callers:
 *     HalpMcaSetProcessorConfig @ 0x140A8B414 (HalpMcaSetProcessorConfig.c)
 * Callees:
 *     HalpGetCpuVendor @ 0x140380C44 (HalpGetCpuVendor.c)
 *     HalpMcaProcessorBankConfigAmd @ 0x140506068 (HalpMcaProcessorBankConfigAmd.c)
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

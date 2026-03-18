/*
 * XREFs of HalpCmciPollProcessor @ 0x140380298
 * Callers:
 *     HalpCmciInitProcessor @ 0x1403801A8 (HalpCmciInitProcessor.c)
 *     HalpCmciDeferredRoutine @ 0x140505710 (HalpCmciDeferredRoutine.c)
 * Callees:
 *     HalpGetMcaPcrContext @ 0x140380334 (HalpGetMcaPcrContext.c)
 *     HalpCmcPollProcessor @ 0x140380398 (HalpCmcPollProcessor.c)
 *     HalpGetCpuVendor @ 0x1403805F4 (HalpGetCpuVendor.c)
 *     HalpCmciSetProcessorConfigAMD @ 0x140505A98 (HalpCmciSetProcessorConfigAMD.c)
 */

__int64 __fastcall HalpCmciPollProcessor(__int64 a1)
{
  char CpuVendor; // di
  __int64 McaPcrContext; // rax
  __int64 v4; // rdx
  __int64 result; // rax
  __int64 v6; // rdx

  CpuVendor = HalpGetCpuVendor();
  McaPcrContext = HalpGetMcaPcrContext(a1);
  LOBYTE(v4) = 1;
  result = HalpCmcPollProcessor(*(_QWORD *)(McaPcrContext + 16), v4, a1, McaPcrContext);
  if ( CpuVendor == 1 )
  {
    LOBYTE(v6) = 1;
    return HalpCmciSetProcessorConfigAMD(HalpCmcErrorSource, v6, a1);
  }
  return result;
}

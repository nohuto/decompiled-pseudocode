/*
 * XREFs of HalpWheaReadMsrMisc @ 0x140518A08
 * Callers:
 *     HalpMcaPopulateErrorData @ 0x14050332C (HalpMcaPopulateErrorData.c)
 *     HalpCmciSetProcessorConfigAMD @ 0x140505A98 (HalpCmciSetProcessorConfigAMD.c)
 *     HalpIsCmciImplementedAMD @ 0x140A957DC (HalpIsCmciImplementedAMD.c)
 * Callees:
 *     HalpGetCpuVendor @ 0x1403805F4 (HalpGetCpuVendor.c)
 *     _guard_dispatch_icall @ 0x140429C20 (_guard_dispatch_icall.c)
 */

__int64 __fastcall HalpWheaReadMsrMisc(__int64 a1, int a2)
{
  __int64 v4; // rdx

  if ( HalpGetCpuVendor() == 1 && HalpMcaScalableRasSupported )
    v4 = (unsigned int)(16 * a2 - 1073733629);
  else
    v4 = (unsigned int)(4 * a2 + 1027);
  return ((__int64 (__fastcall *)(__int64, __int64, _QWORD))HalpWheaReadMsr)(a1, v4, 0LL);
}

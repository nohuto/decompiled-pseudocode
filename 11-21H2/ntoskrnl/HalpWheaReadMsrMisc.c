/*
 * XREFs of HalpWheaReadMsrMisc @ 0x14051BC80
 * Callers:
 *     HalpMcaPopulateErrorData @ 0x140507040 (HalpMcaPopulateErrorData.c)
 *     HalpCmciSetProcessorConfigAMD @ 0x140509960 (HalpCmciSetProcessorConfigAMD.c)
 *     HalpIsCmciImplementedAMD @ 0x140A61640 (HalpIsCmciImplementedAMD.c)
 * Callees:
 *     HalpGetCpuVendor @ 0x1403AAE50 (HalpGetCpuVendor.c)
 *     _guard_dispatch_icall @ 0x14042A5E0 (_guard_dispatch_icall.c)
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

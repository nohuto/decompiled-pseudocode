/*
 * XREFs of HalpWheaWriteMsrStatus @ 0x140380458
 * Callers:
 *     HalpMcaClearError @ 0x140502F90 (HalpMcaClearError.c)
 *     HalpMcaReadError @ 0x1405034B0 (HalpMcaReadError.c)
 *     HalpMcaReadErrorUncorrectedAMD @ 0x140506038 (HalpMcaReadErrorUncorrectedAMD.c)
 *     HalpMcaSetProcessorConfig @ 0x140A8ABB4 (HalpMcaSetProcessorConfig.c)
 * Callees:
 *     HalpGetCpuVendor @ 0x1403805F4 (HalpGetCpuVendor.c)
 *     _guard_dispatch_icall @ 0x140429C20 (_guard_dispatch_icall.c)
 */

__int64 __fastcall HalpWheaWriteMsrStatus(__int64 a1, int a2)
{
  __int64 v4; // rdx

  if ( (unsigned __int8)HalpGetCpuVendor() == 1 && HalpMcaScalableRasSupported )
    v4 = (unsigned int)(16 * a2 - 1073733631);
  else
    v4 = (unsigned int)(4 * a2 + 1025);
  return ((__int64 (__fastcall *)(__int64, __int64, _QWORD))HalpWheaWriteMsr)(a1, v4, 0LL);
}

/*
 * XREFs of HalpWheaReadMsrStatus @ 0x140380740
 * Callers:
 *     HalpMcaReadErrorPresence @ 0x1403806C4 (HalpMcaReadErrorPresence.c)
 *     HalpMcaReadError @ 0x140503A00 (HalpMcaReadError.c)
 *     HalpMcaProcessorBankClear @ 0x14050641C (HalpMcaProcessorBankClear.c)
 * Callees:
 *     HalpGetCpuVendor @ 0x140380794 (HalpGetCpuVendor.c)
 *     _guard_dispatch_icall @ 0x140429FB0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall HalpWheaReadMsrStatus(__int64 a1, int a2, __int64 a3)
{
  __int64 v6; // rdx

  if ( (unsigned __int8)HalpGetCpuVendor() == 1 && HalpMcaScalableRasSupported )
    v6 = (unsigned int)(16 * a2 - 1073733631);
  else
    v6 = (unsigned int)(4 * a2 + 1025);
  return ((__int64 (__fastcall *)(__int64, __int64, __int64))HalpWheaReadMsr)(a1, v6, a3);
}

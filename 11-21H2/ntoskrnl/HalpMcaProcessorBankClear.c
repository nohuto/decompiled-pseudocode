/*
 * XREFs of HalpMcaProcessorBankClear @ 0x140509D78
 * Callers:
 *     HalpMcaClearError @ 0x140506CA4 (HalpMcaClearError.c)
 * Callees:
 *     HalpWheaReadMsrStatus @ 0x1403AAD30 (HalpWheaReadMsrStatus.c)
 *     HalpGetCpuVendor @ 0x1403AAE50 (HalpGetCpuVendor.c)
 *     _guard_dispatch_icall @ 0x14042A5E0 (_guard_dispatch_icall.c)
 */

char __fastcall HalpMcaProcessorBankClear(__int64 a1, int a2)
{
  __int64 MsrStatus; // rax
  __int64 v5; // rdx

  LOBYTE(MsrStatus) = HalpGetCpuVendor();
  if ( (_BYTE)MsrStatus == 1 )
  {
    if ( HalpMcaScalableRasSupported )
    {
      MsrStatus = HalpWheaReadMsrStatus(a1, a2, 0LL);
      if ( (MsrStatus & 0x100000000000LL) != 0 )
      {
        v5 = (unsigned int)(16 * a2 - 1073733624);
LABEL_8:
        LOBYTE(MsrStatus) = HalpWheaWriteMsr(a1, v5, 0LL);
      }
    }
  }
  else if ( (_BYTE)MsrStatus == 2 )
  {
    MsrStatus = ((__int64 (__fastcall *)(__int64, __int64, _QWORD))HalpWheaReadMsr)(a1, 377LL, 0LL);
    if ( (MsrStatus & 0xFF0000) != 0 )
    {
      v5 = 392LL;
      goto LABEL_8;
    }
  }
  return MsrStatus;
}

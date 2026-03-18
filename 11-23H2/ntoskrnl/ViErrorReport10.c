/*
 * XREFs of ViErrorReport10 @ 0x1405CFEA8
 * Callers:
 *     IovpCallDriver2 @ 0x140ACC6FC (IovpCallDriver2.c)
 *     VfPnpVerifyIrpStackUpward @ 0x140AE7170 (VfPnpVerifyIrpStackUpward.c)
 *     ViPnpVerifyMinorWasProcessedProperly @ 0x140AE7460 (ViPnpVerifyMinorWasProcessedProperly.c)
 *     VfWmiVerifyIrpStackUpward @ 0x140AE7AA0 (VfWmiVerifyIrpStackUpward.c)
 * Callees:
 *     RtlStringCbPrintfA @ 0x140384568 (RtlStringCbPrintfA.c)
 *     __security_check_cookie @ 0x1403D7CE0 (__security_check_cookie.c)
 *     VfUtilDbgPrint @ 0x1405CE2D4 (VfUtilDbgPrint.c)
 *     ViErrorDisplayDescription @ 0x140AD3700 (ViErrorDisplayDescription.c)
 *     ViErrorFinishReport @ 0x140AD3754 (ViErrorFinishReport.c)
 */

__int64 __fastcall ViErrorReport10(unsigned int a1, const void *a2, const void *a3, const void *a4)
{
  char pszDest[112]; // [rsp+30h] [rbp-A8h] BYREF

  ViErrorDisplayDescription();
  if ( RtlStringCbPrintfA(pszDest, 0x63uLL, "CulpritAddress = %p, Irp = %p, DeviceObject = %p.\n", a2, a3, a4) >= 0 )
    VfUtilDbgPrint(pszDest);
  return ViErrorFinishReport(a1, a2, a3, a4);
}

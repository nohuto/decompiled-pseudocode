/*
 * XREFs of ViErrorReport10 @ 0x1405D0418
 * Callers:
 *     IovpCallDriver2 @ 0x140ACC6EC (IovpCallDriver2.c)
 *     VfPnpVerifyIrpStackUpward @ 0x140AE7160 (VfPnpVerifyIrpStackUpward.c)
 *     ViPnpVerifyMinorWasProcessedProperly @ 0x140AE7450 (ViPnpVerifyMinorWasProcessedProperly.c)
 *     VfWmiVerifyIrpStackUpward @ 0x140AE7A90 (VfWmiVerifyIrpStackUpward.c)
 * Callees:
 *     RtlStringCbPrintfA @ 0x140384748 (RtlStringCbPrintfA.c)
 *     __security_check_cookie @ 0x1403D7EC0 (__security_check_cookie.c)
 *     VfUtilDbgPrint @ 0x1405CE844 (VfUtilDbgPrint.c)
 *     ViErrorDisplayDescription @ 0x140AD36F0 (ViErrorDisplayDescription.c)
 *     ViErrorFinishReport @ 0x140AD3744 (ViErrorFinishReport.c)
 */

__int64 __fastcall ViErrorReport10(unsigned int a1, const void *a2, const void *a3, const void *a4)
{
  char pszDest[112]; // [rsp+30h] [rbp-A8h] BYREF

  ViErrorDisplayDescription();
  if ( RtlStringCbPrintfA(pszDest, 0x63uLL, "CulpritAddress = %p, Irp = %p, DeviceObject = %p.\n", a2, a3, a4) >= 0 )
    VfUtilDbgPrint(pszDest);
  return ViErrorFinishReport(a1, a2, a3, a4);
}

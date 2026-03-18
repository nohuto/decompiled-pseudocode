/*
 * XREFs of ViErrorReport10 @ 0x1405FFBC8
 * Callers:
 *     IovpCallDriver2 @ 0x140A8BD60 (IovpCallDriver2.c)
 *     VfPnpVerifyIrpStackUpward @ 0x140AA6400 (VfPnpVerifyIrpStackUpward.c)
 *     ViPnpVerifyMinorWasProcessedProperly @ 0x140AA66E0 (ViPnpVerifyMinorWasProcessedProperly.c)
 *     VfWmiVerifyIrpStackUpward @ 0x140AA6CA0 (VfWmiVerifyIrpStackUpward.c)
 * Callees:
 *     RtlStringCbPrintfA @ 0x1403BF7F4 (RtlStringCbPrintfA.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     VfUtilDbgPrint @ 0x1405FDF9C (VfUtilDbgPrint.c)
 *     ViErrorDisplayDescription @ 0x140A92CE0 (ViErrorDisplayDescription.c)
 *     ViErrorFinishReport @ 0x140A92D34 (ViErrorFinishReport.c)
 */

__int64 __fastcall ViErrorReport10(unsigned int a1, const void *a2, const void *a3, const void *a4)
{
  char pszDest[112]; // [rsp+30h] [rbp-A8h] BYREF

  ViErrorDisplayDescription();
  if ( RtlStringCbPrintfA(pszDest, 0x63uLL, "CulpritAddress = %p, Irp = %p, DeviceObject = %p.\n", a2, a3, a4) >= 0 )
    VfUtilDbgPrint(pszDest);
  return ViErrorFinishReport(a1, a2, a3, a4);
}

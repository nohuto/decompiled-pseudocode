/*
 * XREFs of ViErrorReport1 @ 0x1405CFE24
 * Callers:
 *     ViGenericVerifyIrpStackDownward @ 0x140AC30F0 (ViGenericVerifyIrpStackDownward.c)
 *     ViGenericVerifyIrpStackUpward @ 0x140AC32F0 (ViGenericVerifyIrpStackUpward.c)
 *     IovpCallDriver1 @ 0x140ACC1A0 (IovpCallDriver1.c)
 *     IovpCallDriver2 @ 0x140ACC6FC (IovpCallDriver2.c)
 *     IovpCompleteRequest1 @ 0x140ACC9FC (IovpCompleteRequest1.c)
 *     IovpCompleteRequest4 @ 0x140ACCEC8 (IovpCompleteRequest4.c)
 *     IovpExamineIrpStackForwarding @ 0x140ACD034 (IovpExamineIrpStackForwarding.c)
 *     IovpValidateStatusInformation @ 0x140ACD18C (IovpValidateStatusInformation.c)
 *     VfAfterCallDriver @ 0x140ACD408 (VfAfterCallDriver.c)
 *     VfIoFreeIrp @ 0x140ACD814 (VfIoFreeIrp.c)
 *     VfIoInitializeIrp @ 0x140ACD9CC (VfIoInitializeIrp.c)
 *     VfPnpVerifyIrpStackDownward @ 0x140AE6FE0 (VfPnpVerifyIrpStackDownward.c)
 *     VfPnpVerifyIrpStackUpward @ 0x140AE7170 (VfPnpVerifyIrpStackUpward.c)
 *     VfPnpVerifyNewRequest @ 0x140AE7380 (VfPnpVerifyNewRequest.c)
 *     ViPnpVerifyMinorWasProcessedProperly @ 0x140AE7460 (ViPnpVerifyMinorWasProcessedProperly.c)
 *     VfPowerVerifyIrpStackDownward @ 0x140AE77F0 (VfPowerVerifyIrpStackDownward.c)
 *     VfPowerVerifyIrpStackUpward @ 0x140AE78E0 (VfPowerVerifyIrpStackUpward.c)
 *     VfPowerVerifyNewRequest @ 0x140AE7920 (VfPowerVerifyNewRequest.c)
 *     VfWmiVerifyIrpStackDownward @ 0x140AE7A20 (VfWmiVerifyIrpStackDownward.c)
 *     VfWmiVerifyNewRequest @ 0x140AE7B30 (VfWmiVerifyNewRequest.c)
 * Callees:
 *     RtlStringCbPrintfA @ 0x140384568 (RtlStringCbPrintfA.c)
 *     __security_check_cookie @ 0x1403D7CE0 (__security_check_cookie.c)
 *     VfUtilDbgPrint @ 0x1405CE2D4 (VfUtilDbgPrint.c)
 *     ViErrorDisplayDescription @ 0x140AD3700 (ViErrorDisplayDescription.c)
 *     ViErrorFinishReport @ 0x140AD3754 (ViErrorFinishReport.c)
 */

__int64 __fastcall ViErrorReport1(unsigned int a1, const void *a2, const void *a3)
{
  char pszDest[64]; // [rsp+30h] [rbp-68h] BYREF

  ViErrorDisplayDescription();
  if ( RtlStringCbPrintfA(pszDest, 0x40uLL, "CulpritAddress = %p, Irp = %p.\n", a2, a3) >= 0 )
    VfUtilDbgPrint(pszDest);
  return ViErrorFinishReport(a1, a2, a3, 0LL);
}

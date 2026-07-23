/*
 * XREFs of ViErrorReport1 @ 0x1405D0394
 * Callers:
 *     ViGenericVerifyIrpStackDownward @ 0x140AC30E0 (ViGenericVerifyIrpStackDownward.c)
 *     ViGenericVerifyIrpStackUpward @ 0x140AC32E0 (ViGenericVerifyIrpStackUpward.c)
 *     IovpCallDriver1 @ 0x140ACC190 (IovpCallDriver1.c)
 *     IovpCallDriver2 @ 0x140ACC6EC (IovpCallDriver2.c)
 *     IovpCompleteRequest1 @ 0x140ACC9EC (IovpCompleteRequest1.c)
 *     IovpCompleteRequest4 @ 0x140ACCEB8 (IovpCompleteRequest4.c)
 *     IovpExamineIrpStackForwarding @ 0x140ACD024 (IovpExamineIrpStackForwarding.c)
 *     IovpValidateStatusInformation @ 0x140ACD17C (IovpValidateStatusInformation.c)
 *     VfAfterCallDriver @ 0x140ACD3F8 (VfAfterCallDriver.c)
 *     VfIoFreeIrp @ 0x140ACD804 (VfIoFreeIrp.c)
 *     VfIoInitializeIrp @ 0x140ACD9BC (VfIoInitializeIrp.c)
 *     VfPnpVerifyIrpStackDownward @ 0x140AE6FD0 (VfPnpVerifyIrpStackDownward.c)
 *     VfPnpVerifyIrpStackUpward @ 0x140AE7160 (VfPnpVerifyIrpStackUpward.c)
 *     VfPnpVerifyNewRequest @ 0x140AE7370 (VfPnpVerifyNewRequest.c)
 *     ViPnpVerifyMinorWasProcessedProperly @ 0x140AE7450 (ViPnpVerifyMinorWasProcessedProperly.c)
 *     VfPowerVerifyIrpStackDownward @ 0x140AE77E0 (VfPowerVerifyIrpStackDownward.c)
 *     VfPowerVerifyIrpStackUpward @ 0x140AE78D0 (VfPowerVerifyIrpStackUpward.c)
 *     VfPowerVerifyNewRequest @ 0x140AE7910 (VfPowerVerifyNewRequest.c)
 *     VfWmiVerifyIrpStackDownward @ 0x140AE7A10 (VfWmiVerifyIrpStackDownward.c)
 *     VfWmiVerifyNewRequest @ 0x140AE7B20 (VfWmiVerifyNewRequest.c)
 * Callees:
 *     RtlStringCbPrintfA @ 0x140384748 (RtlStringCbPrintfA.c)
 *     __security_check_cookie @ 0x1403D7EC0 (__security_check_cookie.c)
 *     VfUtilDbgPrint @ 0x1405CE844 (VfUtilDbgPrint.c)
 *     ViErrorDisplayDescription @ 0x140AD36F0 (ViErrorDisplayDescription.c)
 *     ViErrorFinishReport @ 0x140AD3744 (ViErrorFinishReport.c)
 */

__int64 __fastcall ViErrorReport1(unsigned int a1, const void *a2, const void *a3)
{
  char pszDest[64]; // [rsp+30h] [rbp-68h] BYREF

  ViErrorDisplayDescription();
  if ( RtlStringCbPrintfA(pszDest, 0x40uLL, "CulpritAddress = %p, Irp = %p.\n", a2, a3) >= 0 )
    VfUtilDbgPrint(pszDest);
  return ViErrorFinishReport(a1, a2, a3, 0LL);
}

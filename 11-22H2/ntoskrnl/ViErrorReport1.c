/*
 * XREFs of ViErrorReport1 @ 0x1405CFEB4
 * Callers:
 *     ViGenericVerifyIrpStackDownward @ 0x140AC40C0 (ViGenericVerifyIrpStackDownward.c)
 *     ViGenericVerifyIrpStackUpward @ 0x140AC42C0 (ViGenericVerifyIrpStackUpward.c)
 *     IovpCallDriver1 @ 0x140ACD170 (IovpCallDriver1.c)
 *     IovpCallDriver2 @ 0x140ACD6CC (IovpCallDriver2.c)
 *     IovpCompleteRequest1 @ 0x140ACD9CC (IovpCompleteRequest1.c)
 *     IovpCompleteRequest4 @ 0x140ACDE98 (IovpCompleteRequest4.c)
 *     IovpExamineIrpStackForwarding @ 0x140ACE004 (IovpExamineIrpStackForwarding.c)
 *     IovpValidateStatusInformation @ 0x140ACE15C (IovpValidateStatusInformation.c)
 *     VfAfterCallDriver @ 0x140ACE3D8 (VfAfterCallDriver.c)
 *     VfIoFreeIrp @ 0x140ACE7E4 (VfIoFreeIrp.c)
 *     VfIoInitializeIrp @ 0x140ACE99C (VfIoInitializeIrp.c)
 *     VfPnpVerifyIrpStackDownward @ 0x140AE7FB0 (VfPnpVerifyIrpStackDownward.c)
 *     VfPnpVerifyIrpStackUpward @ 0x140AE8140 (VfPnpVerifyIrpStackUpward.c)
 *     VfPnpVerifyNewRequest @ 0x140AE8350 (VfPnpVerifyNewRequest.c)
 *     ViPnpVerifyMinorWasProcessedProperly @ 0x140AE8430 (ViPnpVerifyMinorWasProcessedProperly.c)
 *     VfPowerVerifyIrpStackDownward @ 0x140AE87C0 (VfPowerVerifyIrpStackDownward.c)
 *     VfPowerVerifyIrpStackUpward @ 0x140AE88B0 (VfPowerVerifyIrpStackUpward.c)
 *     VfPowerVerifyNewRequest @ 0x140AE88F0 (VfPowerVerifyNewRequest.c)
 *     VfWmiVerifyIrpStackDownward @ 0x140AE89F0 (VfWmiVerifyIrpStackDownward.c)
 *     VfWmiVerifyNewRequest @ 0x140AE8B00 (VfWmiVerifyNewRequest.c)
 * Callees:
 *     RtlStringCbPrintfA @ 0x140383768 (RtlStringCbPrintfA.c)
 *     __security_check_cookie @ 0x1403D7680 (__security_check_cookie.c)
 *     VfUtilDbgPrint @ 0x1405CE364 (VfUtilDbgPrint.c)
 *     ViErrorDisplayDescription @ 0x140AD46D0 (ViErrorDisplayDescription.c)
 *     ViErrorFinishReport @ 0x140AD4724 (ViErrorFinishReport.c)
 */

__int64 __fastcall ViErrorReport1(unsigned int a1, const void *a2, const void *a3)
{
  char pszDest[64]; // [rsp+30h] [rbp-68h] BYREF

  ViErrorDisplayDescription();
  if ( RtlStringCbPrintfA(pszDest, 0x40uLL, "CulpritAddress = %p, Irp = %p.\n", a2, a3) >= 0 )
    VfUtilDbgPrint(pszDest);
  return ViErrorFinishReport(a1, a2, a3, 0LL);
}

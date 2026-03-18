/*
 * XREFs of RtlStringCbPrintfA @ 0x140383768
 * Callers:
 *     RtlpVerCompare @ 0x140383694 (RtlpVerCompare.c)
 *     KiDumpParameterImages @ 0x14056A568 (KiDumpParameterImages.c)
 *     ViErrorReport1 @ 0x1405CFEB4 (ViErrorReport1.c)
 *     ViErrorReport10 @ 0x1405CFF38 (ViErrorReport10.c)
 *     ViErrorReport4 @ 0x1405CFFCC (ViErrorReport4.c)
 *     ViErrorReport6 @ 0x1405D0070 (ViErrorReport6.c)
 *     ExpSystemErrorHandler2 @ 0x140AAB210 (ExpSystemErrorHandler2.c)
 *     ViGenericVerifyIrpStackDownward @ 0x140AC40C0 (ViGenericVerifyIrpStackDownward.c)
 *     ViGenericVerifyNewIrp @ 0x140AC4390 (ViGenericVerifyNewIrp.c)
 *     VfIoDeleteDevice @ 0x140AD3214 (VfIoDeleteDevice.c)
 *     VfIoDetachDevice @ 0x140AD3398 (VfIoDetachDevice.c)
 *     VfErrorReport7 @ 0x140AD4564 (VfErrorReport7.c)
 *     VfErrorReport8 @ 0x140AD45FC (VfErrorReport8.c)
 *     VerifierNtCreateFile @ 0x140AE4BA0 (VerifierNtCreateFile.c)
 *     VerifierNtReadFile @ 0x140AE4D50 (VerifierNtReadFile.c)
 *     VerifierNtWriteFile @ 0x140AE4EA0 (VerifierNtWriteFile.c)
 *     Phase1InitializationDiscard @ 0x140B4FF9C (Phase1InitializationDiscard.c)
 *     InitBootProcessor @ 0x140B52774 (InitBootProcessor.c)
 *     RamdiskStart @ 0x140B9C590 (RamdiskStart.c)
 * Callees:
 *     RtlStringVPrintfWorkerA @ 0x1403837A8 (RtlStringVPrintfWorkerA.c)
 */

NTSTATUS RtlStringCbPrintfA(NTSTRSAFE_PSTR pszDest, size_t cbDest, NTSTRSAFE_PCSTR pszFormat, ...)
{
  NTSTATUS result; // eax
  va_list va; // [rsp+68h] [rbp+20h] BYREF

  va_start(va, pszFormat);
  if ( cbDest - 1 <= 0x7FFFFFFE )
    return RtlStringVPrintfWorkerA(pszDest, cbDest, 0LL, pszFormat, va);
  result = -1073741811;
  if ( cbDest )
    *pszDest = 0;
  return result;
}

/*
 * XREFs of RtlStringCbPrintfA @ 0x140384568
 * Callers:
 *     RtlpVerCompare @ 0x140384494 (RtlpVerCompare.c)
 *     KiDumpParameterImages @ 0x14056A4C8 (KiDumpParameterImages.c)
 *     ViErrorReport1 @ 0x1405CFE24 (ViErrorReport1.c)
 *     ViErrorReport10 @ 0x1405CFEA8 (ViErrorReport10.c)
 *     ViErrorReport4 @ 0x1405CFF3C (ViErrorReport4.c)
 *     ViErrorReport6 @ 0x1405CFFE0 (ViErrorReport6.c)
 *     ExpSystemErrorHandler2 @ 0x140AAB150 (ExpSystemErrorHandler2.c)
 *     ViGenericVerifyIrpStackDownward @ 0x140AC30F0 (ViGenericVerifyIrpStackDownward.c)
 *     ViGenericVerifyNewIrp @ 0x140AC33C0 (ViGenericVerifyNewIrp.c)
 *     VfIoDeleteDevice @ 0x140AD2244 (VfIoDeleteDevice.c)
 *     VfIoDetachDevice @ 0x140AD23C8 (VfIoDetachDevice.c)
 *     VfErrorReport7 @ 0x140AD3594 (VfErrorReport7.c)
 *     VfErrorReport8 @ 0x140AD362C (VfErrorReport8.c)
 *     VerifierNtCreateFile @ 0x140AE3BD0 (VerifierNtCreateFile.c)
 *     VerifierNtReadFile @ 0x140AE3D80 (VerifierNtReadFile.c)
 *     VerifierNtWriteFile @ 0x140AE3ED0 (VerifierNtWriteFile.c)
 *     Phase1InitializationDiscard @ 0x140B4FFBC (Phase1InitializationDiscard.c)
 *     InitBootProcessor @ 0x140B52774 (InitBootProcessor.c)
 *     RamdiskStart @ 0x140B9B590 (RamdiskStart.c)
 * Callees:
 *     RtlStringVPrintfWorkerA @ 0x1403845A8 (RtlStringVPrintfWorkerA.c)
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

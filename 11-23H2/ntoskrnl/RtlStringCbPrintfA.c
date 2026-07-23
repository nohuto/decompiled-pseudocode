/*
 * XREFs of RtlStringCbPrintfA @ 0x140384748
 * Callers:
 *     RtlpVerCompare @ 0x140384674 (RtlpVerCompare.c)
 *     KiDumpParameterImages @ 0x14056AB88 (KiDumpParameterImages.c)
 *     ViErrorReport1 @ 0x1405D0394 (ViErrorReport1.c)
 *     ViErrorReport10 @ 0x1405D0418 (ViErrorReport10.c)
 *     ViErrorReport4 @ 0x1405D04AC (ViErrorReport4.c)
 *     ViErrorReport6 @ 0x1405D0550 (ViErrorReport6.c)
 *     ExpSystemErrorHandler2 @ 0x140AAAFC0 (ExpSystemErrorHandler2.c)
 *     ViGenericVerifyIrpStackDownward @ 0x140AC30E0 (ViGenericVerifyIrpStackDownward.c)
 *     ViGenericVerifyNewIrp @ 0x140AC33B0 (ViGenericVerifyNewIrp.c)
 *     VfIoDeleteDevice @ 0x140AD2234 (VfIoDeleteDevice.c)
 *     VfIoDetachDevice @ 0x140AD23B8 (VfIoDetachDevice.c)
 *     VfErrorReport7 @ 0x140AD3584 (VfErrorReport7.c)
 *     VfErrorReport8 @ 0x140AD361C (VfErrorReport8.c)
 *     VerifierNtCreateFile @ 0x140AE3BC0 (VerifierNtCreateFile.c)
 *     VerifierNtReadFile @ 0x140AE3D70 (VerifierNtReadFile.c)
 *     VerifierNtWriteFile @ 0x140AE3EC0 (VerifierNtWriteFile.c)
 *     Phase1InitializationDiscard @ 0x140B4FFBC (Phase1InitializationDiscard.c)
 *     InitBootProcessor @ 0x140B52774 (InitBootProcessor.c)
 *     RamdiskStart @ 0x140B9B590 (RamdiskStart.c)
 * Callees:
 *     RtlStringVPrintfWorkerA @ 0x140384788 (RtlStringVPrintfWorkerA.c)
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

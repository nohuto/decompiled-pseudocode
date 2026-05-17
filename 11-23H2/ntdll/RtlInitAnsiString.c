/*
 * XREFs of RtlInitAnsiString @ 0x18000C230
 * Callers:
 *     LdrpReportError @ 0x18000C07C (LdrpReportError.c)
 *     RtlIsApiSetImplemented @ 0x18000C270 (RtlIsApiSetImplemented.c)
 *     LdrpLogDelayLoadTrigger @ 0x180015FA8 (LdrpLogDelayLoadTrigger.c)
 *     RtlInitUTF8String @ 0x180016050 (RtlInitUTF8String.c)
 *     LdrpGetDelayloadExportDll @ 0x18001605C (LdrpGetDelayloadExportDll.c)
 *     LdrpSnapKernelBaseExtensions @ 0x180018890 (LdrpSnapKernelBaseExtensions.c)
 *     RtlGetVersion @ 0x18002F620 (RtlGetVersion.c)
 *     LdrpGetShimEngineInterface @ 0x180079AA8 (LdrpGetShimEngineInterface.c)
 *     AVrfpDetectVerifiedExports @ 0x1800E5E9C (AVrfpDetectVerifiedExports.c)
 *     AVrfpVerifierStopInitialize @ 0x1800E6D28 (AVrfpVerifierStopInitialize.c)
 * Callees:
 *     <none>
 */

void __stdcall RtlInitAnsiString(PSTRING DestinationString, PCSZ SourceString)
{
  unsigned __int64 v2; // rax

  *(_QWORD *)&DestinationString->Length = 0LL;
  DestinationString->Buffer = (char *)SourceString;
  if ( SourceString )
  {
    v2 = -1LL;
    do
      ++v2;
    while ( SourceString[v2] );
    if ( v2 >= 0xFFFF )
      LOWORD(v2) = -2;
    DestinationString->Length = v2;
    DestinationString->MaximumLength = v2 + 1;
  }
}

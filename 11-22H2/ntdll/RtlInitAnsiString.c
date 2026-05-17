/*
 * XREFs of RtlInitAnsiString @ 0x18000C450
 * Callers:
 *     LdrpReportError @ 0x18000C29C (LdrpReportError.c)
 *     RtlIsApiSetImplemented @ 0x18000C490 (RtlIsApiSetImplemented.c)
 *     LdrpLogDelayLoadTrigger @ 0x1800161B8 (LdrpLogDelayLoadTrigger.c)
 *     RtlInitUTF8String @ 0x180016260 (RtlInitUTF8String.c)
 *     LdrpGetDelayloadExportDll @ 0x18001626C (LdrpGetDelayloadExportDll.c)
 *     LdrpSnapKernelBaseExtensions @ 0x180018AA0 (LdrpSnapKernelBaseExtensions.c)
 *     RtlGetVersion @ 0x18002F7F0 (RtlGetVersion.c)
 *     LdrpGetShimEngineInterface @ 0x180079438 (LdrpGetShimEngineInterface.c)
 *     AVrfpDetectVerifiedExports @ 0x1800E4B6C (AVrfpDetectVerifiedExports.c)
 *     AVrfpVerifierStopInitialize @ 0x1800E59F8 (AVrfpVerifierStopInitialize.c)
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

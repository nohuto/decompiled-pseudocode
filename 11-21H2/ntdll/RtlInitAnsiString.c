/*
 * XREFs of RtlInitAnsiString @ 0x180035350
 * Callers:
 *     RtlInitUTF8String @ 0x1800340F0 (RtlInitUTF8String.c)
 *     LdrpLogDelayLoadTrigger @ 0x1800351A0 (LdrpLogDelayLoadTrigger.c)
 *     LdrpGetDelayloadExportDll @ 0x18003523C (LdrpGetDelayloadExportDll.c)
 *     LdrpSnapKernelBaseExtensions @ 0x1800437E8 (LdrpSnapKernelBaseExtensions.c)
 *     RtlIsApiSetImplemented @ 0x180048760 (RtlIsApiSetImplemented.c)
 *     RtlGetVersion @ 0x18004ED20 (RtlGetVersion.c)
 *     LdrpGetShimEngineInterface @ 0x180072C90 (LdrpGetShimEngineInterface.c)
 *     LdrpReportError @ 0x18007E00C (LdrpReportError.c)
 *     AVrfpDetectVerifiedExports @ 0x1800E5CDC (AVrfpDetectVerifiedExports.c)
 *     AVrfpVerifierStopInitialize @ 0x1800E6B9C (AVrfpVerifierStopInitialize.c)
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

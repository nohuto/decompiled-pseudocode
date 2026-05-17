/*
 * XREFs of RtlpReportHeapFailure @ 0x180117C30
 * Callers:
 *     RtlpHeapHandleError @ 0x180114EB0 (RtlpHeapHandleError.c)
 * Callees:
 *     RtlIsAnyDebuggerPresent @ 0x18010BF70 (RtlIsAnyDebuggerPresent.c)
 *     RtlpGetModifiedProcessCookie @ 0x180114E38 (RtlpGetModifiedProcessCookie.c)
 *     RtlpPrintErrorInformation @ 0x1801176E0 (RtlpPrintErrorInformation.c)
 */

char __fastcall RtlpReportHeapFailure(int a1)
{
  int ModifiedProcessCookie; // eax
  unsigned int v3; // r8d

  ModifiedProcessCookie = RtlpGetModifiedProcessCookie();
  if ( RtlpDisableBreakOnFailureCookie == ModifiedProcessCookie )
  {
    if ( a1 <= RtlpHeapErrorHandlerThreshold )
    {
      RtlpPrintErrorInformation();
      LOBYTE(ModifiedProcessCookie) = RtlIsAnyDebuggerPresent();
      if ( (_BYTE)ModifiedProcessCookie )
      {
        if ( (RtlpHpHeapFeatures & 4) == 0 )
          __debugbreak();
      }
    }
  }
  else
  {
    LOBYTE(v3) = ~RtlpHpHeapFeatures;
    LOBYTE(ModifiedProcessCookie) = RtlReportCriticalFailure(-1073740940, (__int64)&RtlpHeapFailureInfo, (v3 >> 2) & 1);
  }
  return ModifiedProcessCookie;
}

/*
 * XREFs of RtlpReportHeapFailure @ 0x180119528
 * Callers:
 *     RtlpHeapHandleError @ 0x180116718 (RtlpHeapHandleError.c)
 * Callees:
 *     RtlpGetModifiedProcessCookie @ 0x1800B0FC8 (RtlpGetModifiedProcessCookie.c)
 *     RtlIsAnyDebuggerPresent @ 0x18010D580 (RtlIsAnyDebuggerPresent.c)
 *     RtlpPrintErrorInformation @ 0x180118FCC (RtlpPrintErrorInformation.c)
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

/*
 * XREFs of PpmEventTraceMakeupPerfCheck @ 0x14046343C
 * Callers:
 *     PpmCheckMakeupSkippedChecks @ 0x1403573E0 (PpmCheckMakeupSkippedChecks.c)
 * Callees:
 *     EtwWriteEx @ 0x1402581E0 (EtwWriteEx.c)
 *     EtwEventEnabled @ 0x140258420 (EtwEventEnabled.c)
 */

void PpmEventTraceMakeupPerfCheck()
{
  REGHANDLE v0; // rbx

  if ( PpmEtwRegistered )
  {
    v0 = PpmEtwHandle;
    if ( EtwEventEnabled(PpmEtwHandle, &PPM_ETW_PERF_CHECK_MAKEUP) )
      EtwWriteEx(v0, &PPM_ETW_PERF_CHECK_MAKEUP, 0LL, 0, 0LL, 0LL, 0, 0LL);
  }
}

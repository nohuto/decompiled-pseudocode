/*
 * XREFs of RtlGetHostNtSystemRoot @ 0x1407EACB0
 * Callers:
 *     IoConfigureCrashDump @ 0x14054F964 (IoConfigureCrashDump.c)
 *     IopStoreBootDriveLetter @ 0x140B39740 (IopStoreBootDriveLetter.c)
 * Callees:
 *     PdcCreateWatchdogAroundClientCall @ 0x140293450 (PdcCreateWatchdogAroundClientCall.c)
 *     PsGetServerSiloGlobals @ 0x140297694 (PsGetServerSiloGlobals.c)
 */

char *RtlGetHostNtSystemRoot()
{
  __int64 v0; // rax

  v0 = PdcCreateWatchdogAroundClientCall();
  return (char *)PsGetServerSiloGlobals(v0) + 1264;
}

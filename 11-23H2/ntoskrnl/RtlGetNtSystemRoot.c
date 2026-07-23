/*
 * XREFs of RtlGetNtSystemRoot @ 0x140695E40
 * Callers:
 *     ObpUseSystemDeviceMap @ 0x14067EA7C (ObpUseSystemDeviceMap.c)
 *     MiDriverLoadSucceeded @ 0x140695BC4 (MiDriverLoadSucceeded.c)
 *     SdbpGetManifestedMergeStubAlloc @ 0x140A4EDB8 (SdbpGetManifestedMergeStubAlloc.c)
 *     SdbpGetProcessHistory @ 0x140A520D8 (SdbpGetProcessHistory.c)
 *     AslEnvVarQuery @ 0x140A577FC (AslEnvVarQuery.c)
 * Callees:
 *     PsGetCurrentServerSiloGlobals @ 0x14022D480 (PsGetCurrentServerSiloGlobals.c)
 *     PsIsCurrentThreadInServerSilo @ 0x140287700 (PsIsCurrentThreadInServerSilo.c)
 */

PWSTR RtlGetNtSystemRoot(void)
{
  if ( PsIsCurrentThreadInServerSilo() )
    return (PWSTR)(*((_QWORD *)PsGetCurrentServerSiloGlobals() + 165) + 30LL);
  else
    return (PWSTR)0xFFFFF78000000030LL;
}

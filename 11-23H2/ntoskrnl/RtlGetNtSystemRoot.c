/*
 * XREFs of RtlGetNtSystemRoot @ 0x140695E40
 * Callers:
 *     ObpUseSystemDeviceMap @ 0x14067EA7C (ObpUseSystemDeviceMap.c)
 *     MiDriverLoadSucceeded @ 0x140695BC4 (MiDriverLoadSucceeded.c)
 *     SdbpGetManifestedMergeStubAlloc @ 0x140A4EB08 (SdbpGetManifestedMergeStubAlloc.c)
 *     SdbpGetProcessHistory @ 0x140A51E28 (SdbpGetProcessHistory.c)
 *     AslEnvVarQuery @ 0x140A5754C (AslEnvVarQuery.c)
 * Callees:
 *     PsGetCurrentServerSiloGlobals @ 0x14022D370 (PsGetCurrentServerSiloGlobals.c)
 *     PsIsCurrentThreadInServerSilo @ 0x140287470 (PsIsCurrentThreadInServerSilo.c)
 */

__int64 RtlGetNtSystemRoot()
{
  if ( PsIsCurrentThreadInServerSilo() )
    return *((_QWORD *)PsGetCurrentServerSiloGlobals() + 165) + 30LL;
  else
    return 0xFFFFF78000000030uLL;
}

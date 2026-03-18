/*
 * XREFs of RtlGetConsoleSessionForegroundProcessId @ 0x1409BF2B0
 * Callers:
 *     <none>
 * Callees:
 *     PsGetCurrentServerSiloGlobals @ 0x14022D370 (PsGetCurrentServerSiloGlobals.c)
 *     PsIsCurrentThreadInServerSilo @ 0x140287470 (PsIsCurrentThreadInServerSilo.c)
 */

__int64 RtlGetConsoleSessionForegroundProcessId()
{
  if ( PsIsCurrentThreadInServerSilo() )
    return *(_QWORD *)(*((_QWORD *)PsGetCurrentServerSiloGlobals() + 165) + 8LL);
  else
    return MEMORY[0xFFFFF78000000338];
}

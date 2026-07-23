/*
 * XREFs of RtlGetConsoleSessionForegroundProcessId @ 0x1409BF4B0
 * Callers:
 *     <none>
 * Callees:
 *     PsGetCurrentServerSiloGlobals @ 0x14022D480 (PsGetCurrentServerSiloGlobals.c)
 *     PsIsCurrentThreadInServerSilo @ 0x140287700 (PsIsCurrentThreadInServerSilo.c)
 */

ULONGLONG RtlGetConsoleSessionForegroundProcessId(void)
{
  if ( PsIsCurrentThreadInServerSilo() )
    return *(_QWORD *)(*((_QWORD *)PsGetCurrentServerSiloGlobals() + 165) + 8LL);
  else
    return MEMORY[0xFFFFF78000000338];
}

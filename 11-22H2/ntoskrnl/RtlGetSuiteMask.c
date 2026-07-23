/*
 * XREFs of RtlGetSuiteMask @ 0x1407592D0
 * Callers:
 *     RtlGetVersion @ 0x140759210 (RtlGetVersion.c)
 * Callees:
 *     PsGetCurrentServerSiloGlobals @ 0x14022D390 (PsGetCurrentServerSiloGlobals.c)
 *     PsIsCurrentThreadInServerSilo @ 0x140287350 (PsIsCurrentThreadInServerSilo.c)
 */

ULONG RtlGetSuiteMask(void)
{
  if ( PsIsCurrentThreadInServerSilo() )
    return *(_DWORD *)(*((_QWORD *)PsGetCurrentServerSiloGlobals() + 165) + 20LL);
  else
    return MEMORY[0xFFFFF780000002D0];
}

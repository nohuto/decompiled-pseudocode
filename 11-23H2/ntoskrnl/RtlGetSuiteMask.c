/*
 * XREFs of RtlGetSuiteMask @ 0x140758FB0
 * Callers:
 *     RtlGetVersion @ 0x140758EF0 (RtlGetVersion.c)
 * Callees:
 *     PsGetCurrentServerSiloGlobals @ 0x14022D480 (PsGetCurrentServerSiloGlobals.c)
 *     PsIsCurrentThreadInServerSilo @ 0x140287700 (PsIsCurrentThreadInServerSilo.c)
 */

ULONG RtlGetSuiteMask(void)
{
  if ( PsIsCurrentThreadInServerSilo() )
    return *(_DWORD *)(*((_QWORD *)PsGetCurrentServerSiloGlobals() + 165) + 20LL);
  else
    return MEMORY[0xFFFFF780000002D0];
}

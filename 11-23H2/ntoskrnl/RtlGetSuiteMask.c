/*
 * XREFs of RtlGetSuiteMask @ 0x140758DC0
 * Callers:
 *     RtlGetVersion @ 0x140758D00 (RtlGetVersion.c)
 * Callees:
 *     PsGetCurrentServerSiloGlobals @ 0x14022D370 (PsGetCurrentServerSiloGlobals.c)
 *     PsIsCurrentThreadInServerSilo @ 0x140287470 (PsIsCurrentThreadInServerSilo.c)
 */

__int64 RtlGetSuiteMask()
{
  if ( PsIsCurrentThreadInServerSilo() )
    return *(unsigned int *)(*((_QWORD *)PsGetCurrentServerSiloGlobals() + 165) + 20LL);
  else
    return MEMORY[0xFFFFF780000002D0];
}

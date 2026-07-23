/*
 * XREFs of RtlGetSuiteMask @ 0x1406C26F0
 * Callers:
 *     RtlGetVersion @ 0x1406C2630 (RtlGetVersion.c)
 * Callees:
 *     PsIsCurrentThreadInServerSilo @ 0x1402DF580 (PsIsCurrentThreadInServerSilo.c)
 *     sub_140347DB0 @ 0x140347DB0 (sub_140347DB0.c)
 */

ULONG RtlGetSuiteMask(void)
{
  if ( PsIsCurrentThreadInServerSilo() )
    return *(_DWORD *)(*((_QWORD *)sub_140347DB0() + 165) + 20LL);
  else
    return MEMORY[0xFFFFF780000002D0];
}

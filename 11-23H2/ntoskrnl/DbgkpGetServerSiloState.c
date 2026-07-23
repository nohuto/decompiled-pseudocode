/*
 * XREFs of DbgkpGetServerSiloState @ 0x1408223F4
 * Callers:
 *     DbgkpInitializePhase0 @ 0x140B4FD94 (DbgkpInitializePhase0.c)
 *     DbgkpInitializePhase1 @ 0x140B4FEDC (DbgkpInitializePhase1.c)
 * Callees:
 *     PsGetServerSiloGlobals @ 0x140297924 (PsGetServerSiloGlobals.c)
 */

char *__fastcall DbgkpGetServerSiloState(__int64 a1)
{
  return (char *)PsGetServerSiloGlobals(a1) + 968;
}

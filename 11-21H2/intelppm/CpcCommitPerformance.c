/*
 * XREFs of CpcCommitPerformance @ 0x1C0003EC0
 * Callers:
 *     <none>
 * Callees:
 *     CpcSegregateCommandActuation @ 0x1C0003F32 (CpcSegregateCommandActuation.c)
 */

__int64 __fastcall CpcCommitPerformance(__int64 a1, __int64 a2, __int64 a3)
{
  LOBYTE(a3) = 1;
  return CpcSegregateCommandActuation(CpcSubspaceCommitPerformance, a1, a3);
}

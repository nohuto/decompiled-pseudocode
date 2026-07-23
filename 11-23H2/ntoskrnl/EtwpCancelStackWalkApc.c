/*
 * XREFs of EtwpCancelStackWalkApc @ 0x140600090
 * Callers:
 *     <none>
 * Callees:
 *     EtwpFinalizePendingApc @ 0x140468C94 (EtwpFinalizePendingApc.c)
 */

void __fastcall EtwpCancelStackWalkApc(__int64 a1)
{
  EtwpFinalizePendingApc(*(unsigned int **)(a1 + 56), a1);
}

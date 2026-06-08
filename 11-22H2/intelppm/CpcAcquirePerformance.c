/*
 * XREFs of CpcAcquirePerformance @ 0x1C0008C60
 * Callers:
 *     <none>
 * Callees:
 *     CpcSegregateCommandActuation @ 0x1C00051B2 (CpcSegregateCommandActuation.c)
 */

__int64 __fastcall CpcAcquirePerformance(__int64 a1)
{
  KeClearEvent(&Event);
  return CpcSegregateCommandActuation((void (__fastcall *)(__int64 *, int *))CpcSubspaceAcquirePerformance, a1, 0);
}

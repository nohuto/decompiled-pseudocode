/*
 * XREFs of CpcAcquirePerformance @ 0x1C0007540
 * Callers:
 *     <none>
 * Callees:
 *     CpcSegregateCommandActuation @ 0x1C0003F32 (CpcSegregateCommandActuation.c)
 */

__int64 __fastcall CpcAcquirePerformance(__int64 a1)
{
  KeClearEvent(&Event);
  return CpcSegregateCommandActuation((void (__fastcall *)(__int64 *, int *))CpcSubspaceAcquirePerformance, a1, 0);
}

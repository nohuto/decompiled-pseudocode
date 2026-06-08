/*
 * XREFs of CpcReadFeedback @ 0x1C0004770
 * Callers:
 *     <none>
 * Callees:
 *     CpcSegregateCommandActuation @ 0x1C0002310 (CpcSegregateCommandActuation.c)
 */

__int64 __fastcall CpcReadFeedback(__int64 a1)
{
  KeClearEvent(&Event);
  return CpcSegregateCommandActuation((void (__fastcall *)(__int64 *, int *))CpcSubspaceReadFeedback, a1, 1);
}

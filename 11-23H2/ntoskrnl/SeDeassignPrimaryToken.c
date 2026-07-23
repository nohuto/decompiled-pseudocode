/*
 * XREFs of SeDeassignPrimaryToken @ 0x1407610C4
 * Callers:
 *     PspProcessDelete @ 0x1407612A0 (PspProcessDelete.c)
 *     SeAssignPrimaryToken @ 0x14084079C (SeAssignPrimaryToken.c)
 * Callees:
 *     ObfDereferenceObject @ 0x140231660 (ObfDereferenceObject.c)
 *     ObFastReplaceObject @ 0x14029A808 (ObFastReplaceObject.c)
 */

LONG_PTR __fastcall SeDeassignPrimaryToken(__int64 a1)
{
  _BYTE *v1; // rax

  v1 = (_BYTE *)ObFastReplaceObject((volatile __int64 *)(a1 + 1208), 0LL);
  v1[204] = 0;
  return ObfDereferenceObject(v1);
}

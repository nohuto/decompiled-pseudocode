/*
 * XREFs of sub_1405E1550 @ 0x1405E1550
 * Callers:
 *     <none>
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x1402AC540 (ObfDereferenceObjectWithTag.c)
 *     sub_1402AD030 @ 0x1402AD030 (sub_1402AD030.c)
 *     sub_140347810 @ 0x140347810 (sub_140347810.c)
 *     sub_1405E0C00 @ 0x1405E0C00 (sub_1405E0C00.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

void __fastcall sub_1405E1550(_QWORD *P)
{
  __int64 v2; // r8

  if ( sub_140347810((struct _EX_RUNDOWN_REF *)(P[4] + 1112LL)) )
  {
    sub_1405E0C00(P[4], 0LL, v2);
    sub_1402AD030((struct _EX_RUNDOWN_REF *)(P[4] + 1112LL));
  }
  ObfDereferenceObjectWithTag((PVOID)P[4], 0x624A7350u);
  ExFreePoolWithTag(P, 0x65446954u);
}

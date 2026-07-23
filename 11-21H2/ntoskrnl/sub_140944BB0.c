/*
 * XREFs of sub_140944BB0 @ 0x140944BB0
 * Callers:
 *     <none>
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x1402AC540 (ObfDereferenceObjectWithTag.c)
 *     sub_14078AB30 @ 0x14078AB30 (sub_14078AB30.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

void __fastcall sub_140944BB0(PVOID P)
{
  sub_14078AB30(*((_QWORD **)P + 4), 0LL, 0LL, *((_QWORD *)P + 5), *((_QWORD *)P + 6), *((unsigned __int16 **)P + 7));
  ObfDereferenceObjectWithTag(*((PVOID *)P + 4), 0x4E706E50u);
  ExFreePoolWithTag(P, 0x38706E50u);
}

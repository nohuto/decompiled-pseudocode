/*
 * XREFs of sub_1407AB750 @ 0x1407AB750
 * Callers:
 *     sub_1406652DC @ 0x1406652DC (sub_1406652DC.c)
 *     sub_1406666B4 @ 0x1406666B4 (sub_1406666B4.c)
 *     sub_140667F24 @ 0x140667F24 (sub_140667F24.c)
 *     sub_14074E85C @ 0x14074E85C (sub_14074E85C.c)
 *     sub_1407A6CE4 @ 0x1407A6CE4 (sub_1407A6CE4.c)
 *     sub_1407A9A80 @ 0x1407A9A80 (sub_1407A9A80.c)
 *     sub_1407AA950 @ 0x1407AA950 (sub_1407AA950.c)
 * Callees:
 *     ObfReferenceObject @ 0x140347CF0 (ObfReferenceObject.c)
 */

LONG_PTR __fastcall sub_1407AB750(__int64 a1, void *a2)
{
  LONG_PTR result; // rax

  result = ObfReferenceObject(a2);
  *(_DWORD *)(a1 + 40) |= 0x1000u;
  *(_QWORD *)(a1 + 24) = a2;
  return result;
}

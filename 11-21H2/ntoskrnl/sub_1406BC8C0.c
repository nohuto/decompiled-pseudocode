/*
 * XREFs of sub_1406BC8C0 @ 0x1406BC8C0
 * Callers:
 *     sub_1406BC6A8 @ 0x1406BC6A8 (sub_1406BC6A8.c)
 *     sub_140B156F8 @ 0x140B156F8 (sub_140B156F8.c)
 * Callees:
 *     ObfReferenceObject @ 0x140347CF0 (ObfReferenceObject.c)
 */

LONG_PTR __fastcall sub_1406BC8C0(__int64 a1, __int64 a2)
{
  void *v2; // rcx
  LONG_PTR result; // rax

  *(_OWORD *)a1 = *(_OWORD *)a2;
  *(_QWORD *)(a1 + 16) = *(_QWORD *)(a2 + 16);
  v2 = *(void **)(a1 + 8);
  if ( v2 )
    return ObfReferenceObject(v2);
  return result;
}

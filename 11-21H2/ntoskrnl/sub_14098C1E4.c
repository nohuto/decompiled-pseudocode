/*
 * XREFs of sub_14098C1E4 @ 0x14098C1E4
 * Callers:
 *     sub_140A4A768 @ 0x140A4A768 (sub_140A4A768.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x1402AC540 (ObfDereferenceObjectWithTag.c)
 *     sub_14036B86C @ 0x14036B86C (sub_14036B86C.c)
 *     sub_14099E908 @ 0x14099E908 (sub_14099E908.c)
 */

LONG_PTR __fastcall sub_14098C1E4(__int64 a1)
{
  LONG_PTR result; // rax
  void *v2; // rbx

  result = (LONG_PTR)sub_14036B86C(a1, 0x67696450u);
  v2 = (void *)result;
  if ( result )
  {
    if ( *(_QWORD *)(*(_QWORD *)(result + 312) + 40LL) )
      sub_14099E908();
    result = ObfDereferenceObjectWithTag(v2, 0x67696450u);
  }
  byte_140C24274 = 1;
  return result;
}

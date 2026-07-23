/*
 * XREFs of sub_14085CB58 @ 0x14085CB58
 * Callers:
 *     IoResolveDependency @ 0x1403CBF80 (IoResolveDependency.c)
 *     sub_14085C97C @ 0x14085C97C (sub_14085C97C.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x1402AC540 (ObfDereferenceObjectWithTag.c)
 *     sub_14085CA14 @ 0x14085CA14 (sub_14085CA14.c)
 */

void __fastcall sub_14085CB58(_QWORD *a1, __int64 a2)
{
  if ( *(_QWORD *)(a2 + 72) != a2 + 72 )
    ObfDereferenceObjectWithTag(a1, 0x44706E50u);
  *(_QWORD *)(a1[39] + 80LL) = 0LL;
  *(_QWORD *)(a2 + 48) = 0LL;
  if ( (*(_DWORD *)(a2 + 88))-- == 1 )
    sub_14085CA14((_QWORD *)a2);
}

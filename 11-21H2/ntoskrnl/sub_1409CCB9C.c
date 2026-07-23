/*
 * XREFs of sub_1409CCB9C @ 0x1409CCB9C
 * Callers:
 *     sub_14069BBC0 @ 0x14069BBC0 (sub_14069BBC0.c)
 *     sub_14069BDD0 @ 0x14069BDD0 (sub_14069BDD0.c)
 * Callees:
 *     sub_1409CCC54 @ 0x1409CCC54 (sub_1409CCC54.c)
 */

__int64 __fastcall sub_1409CCB9C(__int64 a1)
{
  void *v2; // rcx
  __int64 result; // rax

  v2 = *(void **)(a1 + 120);
  if ( v2 )
  {
    result = sub_1409CCC54(v2);
    *(_QWORD *)(a1 + 120) = 0LL;
  }
  return result;
}

/*
 * XREFs of sub_14069BFB8 @ 0x14069BFB8
 * Callers:
 *     sub_14069BBC0 @ 0x14069BBC0 (sub_14069BBC0.c)
 *     sub_14069BDD0 @ 0x14069BDD0 (sub_14069BDD0.c)
 * Callees:
 *     sub_1409CE8C4 @ 0x1409CE8C4 (sub_1409CE8C4.c)
 */

__int64 __fastcall sub_14069BFB8(__int64 a1)
{
  void *v2; // rcx
  __int64 result; // rax

  v2 = *(void **)(a1 + 112);
  if ( v2 )
  {
    result = sub_1409CE8C4(v2);
    *(_QWORD *)(a1 + 112) = 0LL;
  }
  return result;
}

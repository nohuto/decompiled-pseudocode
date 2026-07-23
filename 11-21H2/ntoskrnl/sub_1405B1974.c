/*
 * XREFs of sub_1405B1974 @ 0x1405B1974
 * Callers:
 *     sub_14026DC5C @ 0x14026DC5C (sub_14026DC5C.c)
 *     sub_1402EB440 @ 0x1402EB440 (sub_1402EB440.c)
 *     sub_14031C860 @ 0x14031C860 (sub_14031C860.c)
 *     sub_140582320 @ 0x140582320 (sub_140582320.c)
 *     sub_1405B1A10 @ 0x1405B1A10 (sub_1405B1A10.c)
 * Callees:
 *     sub_1403C2B24 @ 0x1403C2B24 (sub_1403C2B24.c)
 *     sub_1405B0B24 @ 0x1405B0B24 (sub_1405B0B24.c)
 */

__int64 __fastcall sub_1405B1974(__int64 a1, __int64 a2, unsigned __int64 a3, int a4)
{
  __int64 result; // rax

  if ( *(_QWORD *)(a1 + 64) + *(_QWORD *)(a1 + 32) < a3 )
  {
    result = (__int64)sub_1405B0B24(a1, a2, a4);
    if ( !result )
      return result;
    sub_1403C2B24(a2, a1, result);
  }
  return 1LL;
}

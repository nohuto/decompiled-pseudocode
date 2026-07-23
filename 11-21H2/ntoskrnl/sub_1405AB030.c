/*
 * XREFs of sub_1405AB030 @ 0x1405AB030
 * Callers:
 *     sub_1405AA614 @ 0x1405AA614 (sub_1405AA614.c)
 *     sub_1405AAF9C @ 0x1405AAF9C (sub_1405AAF9C.c)
 *     sub_1405ABD20 @ 0x1405ABD20 (sub_1405ABD20.c)
 *     sub_1405ACB84 @ 0x1405ACB84 (sub_1405ACB84.c)
 *     sub_14097CA4C @ 0x14097CA4C (sub_14097CA4C.c)
 *     sub_14097D244 @ 0x14097D244 (sub_14097D244.c)
 *     sub_14097D2A0 @ 0x14097D2A0 (sub_14097D2A0.c)
 *     sub_14097DFA0 @ 0x14097DFA0 (sub_14097DFA0.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_1405AB030(__int64 a1)
{
  int v1; // edx
  __int64 result; // rax

  v1 = *(_DWORD *)(a1 + 40) & 3;
  if ( v1 == 1 )
    return 16LL;
  if ( v1 == 2 )
    return 512LL;
  result = 0LL;
  if ( v1 == 3 )
    return 0x40000LL;
  return result;
}

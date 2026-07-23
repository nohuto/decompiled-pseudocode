/*
 * XREFs of sub_1403BF088 @ 0x1403BF088
 * Callers:
 *     sub_1403BED70 @ 0x1403BED70 (sub_1403BED70.c)
 *     sub_1403BEFA8 @ 0x1403BEFA8 (sub_1403BEFA8.c)
 *     sub_140AF9858 @ 0x140AF9858 (sub_140AF9858.c)
 *     sub_140AF9A94 @ 0x140AF9A94 (sub_140AF9A94.c)
 * Callees:
 *     sub_1403B1F04 @ 0x1403B1F04 (sub_1403B1F04.c)
 *     sub_1403BF3B8 @ 0x1403BF3B8 (sub_1403BF3B8.c)
 *     sub_140AF9E94 @ 0x140AF9E94 (sub_140AF9E94.c)
 */

__int64 __fastcall sub_1403BF088(__int64 a1, unsigned int a2)
{
  __int64 v2; // rbx
  unsigned int v5; // edi
  __int64 v6; // rax
  __int64 v7; // [rsp+40h] [rbp+8h] BYREF

  v2 = 0LL;
  if ( !a1 )
    return sub_1403B1F04(0LL, a2);
  v7 = 0x1000000LL;
  v5 = (a2 >> 12) + ((a2 & 0xFFF) != 0);
  v6 = sub_140AF9E94(a1, &v7, v5, 0LL);
  if ( !v6 )
    return v2;
  return sub_1403BF3B8(v6, v5, 1, 0, 4);
}

/*
 * XREFs of sub_14069F1F4 @ 0x14069F1F4
 * Callers:
 *     sub_14065C7A4 @ 0x14065C7A4 (sub_14065C7A4.c)
 *     sub_14069EE0C @ 0x14069EE0C (sub_14069EE0C.c)
 *     sub_140914324 @ 0x140914324 (sub_140914324.c)
 *     sub_1409224D4 @ 0x1409224D4 (sub_1409224D4.c)
 * Callees:
 *     memset @ 0x140435E00 (memset.c)
 *     sub_14069F244 @ 0x14069F244 (sub_14069F244.c)
 *     sub_14069F2B4 @ 0x14069F2B4 (sub_14069F2B4.c)
 */

__int64 __fastcall sub_14069F1F4(char *a1)
{
  char *v2; // rbx
  __int64 v3; // rdi
  __int64 result; // rax

  memset(a1, 0, 0x160uLL);
  sub_14069F2B4(a1 + 8);
  v2 = a1 + 88;
  v3 = 2LL;
  do
  {
    result = sub_14069F244(v2);
    v2 += 128;
    --v3;
  }
  while ( v3 );
  return result;
}

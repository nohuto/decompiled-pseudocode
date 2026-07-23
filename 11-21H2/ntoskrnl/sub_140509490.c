/*
 * XREFs of sub_140509490 @ 0x140509490
 * Callers:
 *     <none>
 * Callees:
 *     sub_1403BF3B8 @ 0x1403BF3B8 (sub_1403BF3B8.c)
 *     sub_140AF9E94 @ 0x140AF9E94 (sub_140AF9E94.c)
 */

unsigned __int64 __fastcall sub_140509490(__int64 a1, unsigned int a2, __int64 *a3, unsigned int a4)
{
  __int64 v7; // rax
  __int64 v8; // rbx
  unsigned __int64 result; // rax

  v7 = sub_140AF9E94(a1, 0LL, a2, 0LL);
  v8 = v7;
  if ( !v7 )
    return 0LL;
  result = sub_1403BF3B8(v7, a2, 1u, 0LL, a4);
  if ( !result )
    return 0LL;
  *a3 = v8;
  return result;
}

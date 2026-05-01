/*
 * XREFs of sub_18000D18C @ 0x18000D18C
 * Callers:
 *     sub_18000FCC0 @ 0x18000FCC0 (sub_18000FCC0.c)
 *     sub_180010DC4 @ 0x180010DC4 (sub_180010DC4.c)
 * Callees:
 *     sub_18000DD90 @ 0x18000DD90 (sub_18000DD90.c)
 */

__int64 *__fastcall sub_18000D18C(__int64 *a1, __int64 *a2)
{
  __int64 v2; // rax
  __int64 v4; // rcx

  v2 = *a2;
  *a2 = 0LL;
  v4 = *a1;
  *a1 = v2;
  if ( v4 )
    sub_18000DD90();
  return a1;
}

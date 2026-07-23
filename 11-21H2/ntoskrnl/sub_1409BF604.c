/*
 * XREFs of sub_1409BF604 @ 0x1409BF604
 * Callers:
 *     sub_140832FD0 @ 0x140832FD0 (sub_140832FD0.c)
 * Callees:
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 */

__int64 __fastcall sub_1409BF604(__int64 a1, __int64 a2, unsigned __int64 a3, __int64 a4)
{
  unsigned __int64 i; // rdi
  int v9; // eax

  for ( i = 0LL; i < a3; a2 += a4 )
  {
    v9 = sub_14042A5E0(a1, a2);
    if ( v9 < 0 )
      break;
    if ( !v9 )
      return a2;
    ++i;
  }
  return 0LL;
}

/*
 * XREFs of sub_140554800 @ 0x140554800
 * Callers:
 *     sub_14055225C @ 0x14055225C (sub_14055225C.c)
 *     sub_140553FB4 @ 0x140553FB4 (sub_140553FB4.c)
 *     sub_1405550FC @ 0x1405550FC (sub_1405550FC.c)
 *     sub_14055CA14 @ 0x14055CA14 (sub_14055CA14.c)
 *     sub_14055D50C @ 0x14055D50C (sub_14055D50C.c)
 *     sub_14055DEF4 @ 0x14055DEF4 (sub_14055DEF4.c)
 * Callees:
 *     sub_14028FBF0 @ 0x14028FBF0 (sub_14028FBF0.c)
 */

__int64 __fastcall sub_140554800(__int64 a1, unsigned int a2)
{
  int v2; // ebp
  unsigned int v3; // ebx
  unsigned __int64 v4; // rsi

  v2 = 4096 - (a1 & 0xFFF);
  v3 = 0;
  v4 = a1 & 0xFFFFFFFFFFFFF000uLL;
  if ( !a2 )
    return a2;
  do
  {
    if ( !sub_14028FBF0(v4) )
      break;
    v3 += v2;
    v4 += 4096LL;
    if ( !v4 )
      break;
    v2 = 4096;
  }
  while ( v3 < a2 );
  if ( v3 >= a2 )
    return a2;
  return v3;
}

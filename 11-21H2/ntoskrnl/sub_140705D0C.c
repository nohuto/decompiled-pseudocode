/*
 * XREFs of sub_140705D0C @ 0x140705D0C
 * Callers:
 *     sub_1407E4964 @ 0x1407E4964 (sub_1407E4964.c)
 * Callees:
 *     sub_14029A240 @ 0x14029A240 (sub_14029A240.c)
 *     sub_140704E08 @ 0x140704E08 (sub_140704E08.c)
 */

__int64 __fastcall sub_140705D0C(unsigned __int64 *a1, __int64 a2)
{
  unsigned __int16 v3; // ax
  int v4; // eax
  unsigned int v6; // [rsp+38h] [rbp+10h] BYREF
  unsigned int v7; // [rsp+40h] [rbp+18h] BYREF

  v7 = 0;
  v6 = 0;
  if ( !*(_QWORD *)(a2 + 1408) || (v3 = *(_WORD *)(a2 + 2412)) == 0 )
    v3 = -31132;
  v4 = sub_140704E08(v3);
  if ( !v4 )
    return 3221225485LL;
  sub_14029A240(v4, (int *)&v6, &v7);
  *a1 = ((~(v7 - 1LL) & (((((*a1 - 4) & 0xFFFFFFFFFFFFFFFCuLL) - 5) & 0xFFFFFFFFFFFFFFF8uLL) - v6)) - 4) & 0xFFFFFFFFFFFFFFF0uLL;
  return 0LL;
}

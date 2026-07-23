/*
 * XREFs of sub_140266AD0 @ 0x140266AD0
 * Callers:
 *     sub_140387140 @ 0x140387140 (sub_140387140.c)
 *     sub_1407BD420 @ 0x1407BD420 (sub_1407BD420.c)
 * Callees:
 *     sub_140266B40 @ 0x140266B40 (sub_140266B40.c)
 */

_BOOL8 __fastcall sub_140266AD0(_QWORD *a1, __int64 a2, unsigned int a3)
{
  unsigned __int64 v3; // rax
  unsigned __int64 v4; // r9
  unsigned __int64 v5; // rax
  unsigned __int64 v6; // r11

  if ( a1[2120] < a2 + 159 )
    return 0LL;
  v3 = a1[2157];
  v4 = a1[2187] - v3;
  if ( v3 > a1[2187] )
    v4 = 0LL;
  if ( v4 < a2 + 4223 )
    return 0LL;
  v5 = sub_140266B40(a1, a3);
  return v5 >= v6;
}

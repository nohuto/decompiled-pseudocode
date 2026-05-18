/*
 * XREFs of sub_180012228 @ 0x180012228
 * Callers:
 *     sub_18001207C @ 0x18001207C (sub_18001207C.c)
 *     sub_180013280 @ 0x180013280 (sub_180013280.c)
 *     sub_180016F04 @ 0x180016F04 (sub_180016F04.c)
 *     sub_18002E5A8 @ 0x18002E5A8 (sub_18002E5A8.c)
 *     sub_180071228 @ 0x180071228 (sub_180071228.c)
 *     sub_180093AFC @ 0x180093AFC (sub_180093AFC.c)
 *     sub_180097288 @ 0x180097288 (sub_180097288.c)
 *     sub_1800DA840 @ 0x1800DA840 (sub_1800DA840.c)
 *     sub_1800E0590 @ 0x1800E0590 (sub_1800E0590.c)
 * Callees:
 *     sub_18001203C @ 0x18001203C (sub_18001203C.c)
 */

_QWORD *__fastcall sub_180012228(char *a1, char *a2, _QWORD *a3)
{
  _QWORD *v3; // rbx
  signed __int64 v4; // r8

  v3 = a3;
  if ( a1 != a2 )
  {
    v4 = a1 - (char *)a3;
    do
    {
      *v3 = 0LL;
      v3[1] = 0LL;
      *v3 = *(_QWORD *)((char *)v3 + v4);
      v3[1] = *(_QWORD *)((char *)v3 + v4 + 8);
      *(_QWORD *)((char *)v3 + v4) = 0LL;
      *(_QWORD *)((char *)v3 + v4 + 8) = 0LL;
      v3 += 2;
    }
    while ( (char *)v3 + v4 != a2 );
  }
  sub_18001203C((__int64)v3, (__int64)v3);
  return v3;
}

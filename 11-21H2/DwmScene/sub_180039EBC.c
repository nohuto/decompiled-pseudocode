/*
 * XREFs of sub_180039EBC @ 0x180039EBC
 * Callers:
 *     sub_18002A240 @ 0x18002A240 (sub_18002A240.c)
 *     sub_180036B84 @ 0x180036B84 (sub_180036B84.c)
 *     sub_18003FE40 @ 0x18003FE40 (sub_18003FE40.c)
 *     sub_180055C48 @ 0x180055C48 (sub_180055C48.c)
 *     sub_18005C210 @ 0x18005C210 (sub_18005C210.c)
 *     sub_18005C490 @ 0x18005C490 (sub_18005C490.c)
 *     sub_18005D70C @ 0x18005D70C (sub_18005D70C.c)
 *     sub_18007A618 @ 0x18007A618 (sub_18007A618.c)
 *     sub_18008E3B8 @ 0x18008E3B8 (sub_18008E3B8.c)
 *     sub_180096660 @ 0x180096660 (sub_180096660.c)
 *     sub_180096EF0 @ 0x180096EF0 (sub_180096EF0.c)
 *     sub_180099D5C @ 0x180099D5C (sub_180099D5C.c)
 *     sub_18009B150 @ 0x18009B150 (sub_18009B150.c)
 *     sub_18009F3E0 @ 0x18009F3E0 (sub_18009F3E0.c)
 * Callees:
 *     sub_18002C5FC @ 0x18002C5FC (sub_18002C5FC.c)
 *     sub_18002C8E4 @ 0x18002C8E4 (sub_18002C8E4.c)
 *     sub_180031D58 @ 0x180031D58 (sub_180031D58.c)
 */

// Hidden C++ exception states: #wind=2
_QWORD *__fastcall sub_180039EBC(__int64 a1, _QWORD *a2)
{
  __int64 v5; // [rsp+20h] [rbp-18h] BYREF
  char v6; // [rsp+28h] [rbp-10h]

  sub_18002C5FC(a1 + 112, (__int64)&v5);
  sub_180031D58(a2, (char **)(a1 + 88));
  if ( v6 )
    sub_18002C8E4(v5);
  return a2;
}

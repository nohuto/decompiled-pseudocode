/*
 * XREFs of sub_18009FAC0 @ 0x18009FAC0
 * Callers:
 *     sub_18009F980 @ 0x18009F980 (sub_18009F980.c)
 *     sub_18009F9A0 @ 0x18009F9A0 (sub_18009F9A0.c)
 *     sub_18009F9C0 @ 0x18009F9C0 (sub_18009F9C0.c)
 *     sub_18009F9E0 @ 0x18009F9E0 (sub_18009F9E0.c)
 *     sub_18009FA00 @ 0x18009FA00 (sub_18009FA00.c)
 *     sub_18009FA20 @ 0x18009FA20 (sub_18009FA20.c)
 *     sub_18009FA40 @ 0x18009FA40 (sub_18009FA40.c)
 *     sub_18009FA60 @ 0x18009FA60 (sub_18009FA60.c)
 *     sub_18009FA80 @ 0x18009FA80 (sub_18009FA80.c)
 *     sub_18009FAA0 @ 0x18009FAA0 (sub_18009FAA0.c)
 * Callees:
 *     sub_18000B988 @ 0x18000B988 (sub_18000B988.c)
 *     sub_18009F818 @ 0x18009F818 (sub_18009F818.c)
 */

_QWORD *__fastcall sub_18009FAC0(_QWORD *lpMem, char a2)
{
  sub_18009F818(lpMem);
  if ( (a2 & 1) != 0 )
    sub_18000B988(lpMem);
  return lpMem;
}

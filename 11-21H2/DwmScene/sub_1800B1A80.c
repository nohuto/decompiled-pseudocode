/*
 * XREFs of sub_1800B1A80 @ 0x1800B1A80
 * Callers:
 *     sub_1800B1940 @ 0x1800B1940 (sub_1800B1940.c)
 *     sub_1800B1960 @ 0x1800B1960 (sub_1800B1960.c)
 *     sub_1800B1980 @ 0x1800B1980 (sub_1800B1980.c)
 *     sub_1800B19A0 @ 0x1800B19A0 (sub_1800B19A0.c)
 *     sub_1800B19C0 @ 0x1800B19C0 (sub_1800B19C0.c)
 *     sub_1800B19E0 @ 0x1800B19E0 (sub_1800B19E0.c)
 *     sub_1800B1A00 @ 0x1800B1A00 (sub_1800B1A00.c)
 *     sub_1800B1A20 @ 0x1800B1A20 (sub_1800B1A20.c)
 *     sub_1800B1A40 @ 0x1800B1A40 (sub_1800B1A40.c)
 *     sub_1800B1A60 @ 0x1800B1A60 (sub_1800B1A60.c)
 * Callees:
 *     sub_18000B998 @ 0x18000B998 (sub_18000B998.c)
 *     sub_1800B17E0 @ 0x1800B17E0 (sub_1800B17E0.c)
 */

_QWORD *__fastcall sub_1800B1A80(_QWORD *lpMem, char a2)
{
  sub_1800B17E0(lpMem);
  if ( (a2 & 1) != 0 )
    sub_18000B998(lpMem);
  return lpMem;
}

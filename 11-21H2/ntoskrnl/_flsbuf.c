/*
 * XREFs of _flsbuf @ 0x1403E3D0C
 * Callers:
 *     sub_1403E0460 @ 0x1403E0460 (sub_1403E0460.c)
 *     sub_1403E0580 @ 0x1403E0580 (sub_1403E0580.c)
 *     _snprintf @ 0x1403E0F90 (_snprintf.c)
 *     _snwprintf @ 0x1403E1050 (_snwprintf.c)
 *     swprintf @ 0x1403E12E0 (swprintf.c)
 *     sub_1403E13CC @ 0x1403E13CC (sub_1403E13CC.c)
 *     sprintf @ 0x1403E26A0 (sprintf.c)
 *     sub_1403E3198 @ 0x1403E3198 (sub_1403E3198.c)
 *     write_char_0 @ 0x1403E4FC8 (write_char_0.c)
 *     sub_1403E8394 @ 0x1403E8394 (sub_1403E8394.c)
 *     sub_1403E847C @ 0x1403E847C (sub_1403E847C.c)
 * Callees:
 *     <none>
 */

int __cdecl flsbuf(int Ch, FILE *File)
{
  File->_flag |= 0x20u;
  return -1;
}

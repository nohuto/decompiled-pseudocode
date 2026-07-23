/*
 * XREFs of sub_140858BF8 @ 0x140858BF8
 * Callers:
 *     sub_140A5B550 @ 0x140A5B550 (sub_140A5B550.c)
 * Callees:
 *     sub_1406D2264 @ 0x1406D2264 (sub_1406D2264.c)
 *     EtwRegister @ 0x1406D2350 (EtwRegister.c)
 */

__int64 sub_140858BF8()
{
  if ( EtwRegister(&stru_140012FD8, 0LL, 0LL, &qword_140C4C680) >= 0 )
    byte_140C4C688 = 1;
  sub_1406D2264((char *)&dword_140C04538, 0LL, 0LL);
  return 0LL;
}

/*
 * XREFs of sub_14081CC60 @ 0x14081CC60
 * Callers:
 *     sub_1406D1E90 @ 0x1406D1E90 (sub_1406D1E90.c)
 *     sub_140808C14 @ 0x140808C14 (sub_140808C14.c)
 * Callees:
 *     sub_140750EC4 @ 0x140750EC4 (sub_140750EC4.c)
 */

char sub_14081CC60()
{
  __int64 v0; // rbx
  int v1; // ecx
  char result; // al
  __int128 v3; // [rsp+20h] [rbp-28h] BYREF

  v3 = 0LL;
  v0 = (((unsigned __int64)MEMORY[0xFFFFF78000000004] << 32)
      * (unsigned __int128)(unsigned __int64)(MEMORY[0xFFFFF78000000320] << 8)) >> 64;
  sub_140750EC4(&v3);
  v1 = 0;
  byte_140D01494 = v3;
  if ( BYTE1(v3) )
    v1 = HIDWORD(v3);
  dword_140D01488 = dword_140C23310;
  result = byte_140C23315;
  dword_140D01490 = v1;
  byte_140D0148C = byte_140C23315;
  qword_140C548A8 = v0;
  return result;
}

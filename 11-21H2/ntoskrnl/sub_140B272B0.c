/*
 * XREFs of sub_140B272B0 @ 0x140B272B0
 * Callers:
 *     sub_140B270C4 @ 0x140B270C4 (sub_140B270C4.c)
 *     sub_140B271D8 @ 0x140B271D8 (sub_140B271D8.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x140347630 (RtlInitUnicodeString.c)
 *     memset @ 0x140435E00 (memset.c)
 *     sub_1406D2264 @ 0x1406D2264 (sub_1406D2264.c)
 */

void __fastcall sub_140B272B0(int a1)
{
  if ( a1 )
  {
    if ( a1 == 3 )
    {
      byte_140C1CF00 = 0;
      if ( (int)sub_1406D2264((char *)&dword_140D3B940, 0LL, 0LL) >= 0 )
        byte_140C1CF00 = 1;
    }
  }
  else
  {
    RtlInitUnicodeString(&stru_140C1CF10, &word_140B33460);
    qword_140C1CB48 = 0LL;
    memset(&qword_140C1CB60, 0, 0x230uLL);
    qword_140C1CB90 = 0LL;
    qword_140C1CB78 = (__int64)&qword_140C1CB70;
    qword_140C1CB70 = &qword_140C1CB70;
    qword_140C1CB68 = (__int64)&qword_140C1CB60;
    qword_140C1CB60 = &qword_140C1CB60;
    dword_140C1CD80 = 1;
    dword_140C1CD84 = 1;
  }
}

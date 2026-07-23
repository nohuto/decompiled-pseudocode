/*
 * XREFs of sub_1405BE588 @ 0x1405BE588
 * Callers:
 *     sub_1405BE614 @ 0x1405BE614 (sub_1405BE614.c)
 *     sub_1405BE81C @ 0x1405BE81C (sub_1405BE81C.c)
 * Callees:
 *     memset @ 0x140435E00 (memset.c)
 *     sub_1405BCBC4 @ 0x1405BCBC4 (sub_1405BCBC4.c)
 */

__int64 __fastcall sub_1405BE588(__int16 *a1, __int64 a2, unsigned int a3)
{
  unsigned __int64 v6; // rdx
  __int16 *v8[9]; // [rsp+20h] [rbp-48h] BYREF

  memset(v8, 0, 0x40uLL);
  v6 = 4LL;
  v8[0] = a1;
  if ( (a3 & 4) != 0 )
  {
    v6 = (a3 & 0x20 | 0x10) >> 4;
  }
  else if ( (a3 & 1) != 0 )
  {
    v6 = 2LL;
    HIDWORD(v8[2]) = 2;
    if ( (a3 & 0x30) != 0x30 )
      v6 = 0LL;
  }
  sub_1405BCBC4(a2, v6, a3, v8);
  return LODWORD(v8[3]);
}

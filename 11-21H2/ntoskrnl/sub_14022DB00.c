/*
 * XREFs of sub_14022DB00 @ 0x14022DB00
 * Callers:
 *     sub_140223A20 @ 0x140223A20 (sub_140223A20.c)
 *     sub_14022DA40 @ 0x14022DA40 (sub_14022DA40.c)
 *     sub_14027B3C0 @ 0x14027B3C0 (sub_14027B3C0.c)
 *     sub_1402A7C20 @ 0x1402A7C20 (sub_1402A7C20.c)
 *     sub_1402A9790 @ 0x1402A9790 (sub_1402A9790.c)
 *     sub_1402ABBF0 @ 0x1402ABBF0 (sub_1402ABBF0.c)
 *     sub_1402E1D0C @ 0x1402E1D0C (sub_1402E1D0C.c)
 *     KeSetTimer2 @ 0x140353C40 (KeSetTimer2.c)
 *     WmiGetClock @ 0x140630E90 (WmiGetClock.c)
 *     sub_140811238 @ 0x140811238 (sub_140811238.c)
 *     sub_140AFAD4C @ 0x140AFAD4C (sub_140AFAD4C.c)
 *     sub_140B24C44 @ 0x140B24C44 (sub_140B24C44.c)
 * Callees:
 *     KeQueryPerformanceCounter @ 0x1403027F0 (KeQueryPerformanceCounter.c)
 */

__int64 sub_14022DB00()
{
  __int64 v0; // rbx
  __int64 v1; // rbp
  LARGE_INTEGER v2; // rsi
  unsigned __int64 v3; // r14
  char v4; // di
  LARGE_INTEGER PerformanceCounter; // rdx
  LONGLONG v6; // rdx

  while ( 1 )
  {
    v0 = MEMORY[0xFFFFF78000000340];
    if ( (MEMORY[0xFFFFF78000000340] & 1) == 0 )
    {
      v1 = MEMORY[0xFFFFF78000000014];
      v2.QuadPart = MEMORY[0xFFFFF78000000348];
      v3 = MEMORY[0xFFFFF78000000358];
      v4 = MEMORY[0xFFFFF78000000368];
      PerformanceCounter = KeQueryPerformanceCounter(0LL);
      if ( MEMORY[0xFFFFF78000000340] == v0 )
        break;
    }
    _mm_pause();
  }
  if ( PerformanceCounter.QuadPart <= (unsigned __int64)v2.QuadPart )
    return v1;
  v6 = PerformanceCounter.QuadPart - v2.QuadPart - 1;
  if ( v4 )
    v6 <<= v4;
  return (((unsigned __int64)v6 * (unsigned __int128)v3) >> 64) + v1;
}

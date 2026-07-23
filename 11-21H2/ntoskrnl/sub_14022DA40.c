/*
 * XREFs of sub_14022DA40 @ 0x14022DA40
 * Callers:
 *     HalQueryRealTimeClock @ 0x14022D360 (HalQueryRealTimeClock.c)
 *     HalCalibratePerformanceCounter @ 0x14038B8D0 (HalCalibratePerformanceCounter.c)
 *     sub_14039157C @ 0x14039157C (sub_14039157C.c)
 *     HalSetRealTimeClock @ 0x140503420 (HalSetRealTimeClock.c)
 * Callees:
 *     sub_14022DB00 @ 0x14022DB00 (sub_14022DB00.c)
 *     sub_1402D1A48 @ 0x1402D1A48 (sub_1402D1A48.c)
 *     KeQueryPerformanceCounter @ 0x1403027F0 (KeQueryPerformanceCounter.c)
 */

char __fastcall sub_14022DA40(__int64 *a1, __int64 a2, __int64 a3)
{
  __int64 v4; // rbx
  LARGE_INTEGER PerformanceCounter; // rax
  __int128 v7; // [rsp+20h] [rbp-18h] BYREF
  __int64 v8; // [rsp+48h] [rbp+10h] BYREF

  v7 = 0LL;
  if ( dword_140C4BFCC == 2 )
    return 0;
  if ( a1 )
  {
    v4 = *a1;
    v8 = *a1;
  }
  else
  {
    if ( dword_140C4BFCC )
      return 0;
    v4 = sub_14022DB00(0LL, a2, a3);
    v8 = v4;
  }
  sub_1402D1A48(&v8, &v7);
  if ( (__int16)v7 <= 1601 )
    return 0;
  PerformanceCounter = KeQueryPerformanceCounter(0LL);
  dword_140C4C700 = PerformanceCounter.HighPart;
  qword_140C4C6F8 = PerformanceCounter.QuadPart;
  dword_140C4C6F4 = HIDWORD(v8);
  qword_140C4C6EC = v4;
  dword_140C4C6E8 = PerformanceCounter.HighPart;
  qword_140C4C6E0 = PerformanceCounter.QuadPart;
  if ( a1 )
    byte_140C4C704 = 0;
  return 1;
}

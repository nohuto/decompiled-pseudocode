/*
 * XREFs of sub_14038B7AC @ 0x14038B7AC
 * Callers:
 *     HalQueryRealTimeClock @ 0x14022D360 (HalQueryRealTimeClock.c)
 *     HalCalibratePerformanceCounter @ 0x14038B8D0 (HalCalibratePerformanceCounter.c)
 *     sub_14039157C @ 0x14039157C (sub_14039157C.c)
 * Callees:
 *     sub_1402D1A48 @ 0x1402D1A48 (sub_1402D1A48.c)
 *     KeQueryPerformanceCounter @ 0x1403027F0 (KeQueryPerformanceCounter.c)
 */

char __fastcall sub_14038B7AC(_QWORD *a1, bool *a2)
{
  __int64 v4; // rdi
  LARGE_INTEGER v5; // rbx
  LARGE_INTEGER v6; // r8
  __int128 v8; // [rsp+20h] [rbp-28h] BYREF
  LARGE_INTEGER PerformanceFrequency; // [rsp+60h] [rbp+18h] BYREF
  __int64 v10; // [rsp+68h] [rbp+20h] BYREF

  PerformanceFrequency.QuadPart = 0LL;
  v8 = 0LL;
  if ( dword_140C4BFCC == 2 )
    return 0;
  while ( 1 )
  {
    v4 = qword_140C4C6E0;
    v10 = qword_140C4C6EC;
    v5 = KeQueryPerformanceCounter(&PerformanceFrequency);
    if ( v4 == qword_140C4C6F8 )
      break;
    _mm_pause();
  }
  sub_1402D1A48(&v10, &v8, v6.QuadPart);
  if ( (__int16)v8 <= 1601 )
    return 0;
  *a1 = v10 + 10000000 * (v5.QuadPart - v4) / PerformanceFrequency.QuadPart;
  if ( a2 )
    *a2 = byte_140C4C704 == 0;
  return 1;
}

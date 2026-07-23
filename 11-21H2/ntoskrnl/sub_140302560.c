/*
 * XREFs of sub_140302560 @ 0x140302560
 * Callers:
 *     KeStallExecutionProcessor @ 0x140303560 (KeStallExecutionProcessor.c)
 *     KeStallWhileFrozen @ 0x140573650 (KeStallWhileFrozen.c)
 *     sub_140573670 @ 0x140573670 (sub_140573670.c)
 * Callees:
 *     KeQueryPerformanceCounter @ 0x1403027F0 (KeQueryPerformanceCounter.c)
 */

__int64 __fastcall sub_140302560(__int64 a1, char a2)
{
  __int64 v2; // rsi
  __int64 result; // rax
  LARGE_INTEGER v6; // r8
  LARGE_INTEGER PerformanceFrequency; // [rsp+30h] [rbp+8h] BYREF

  v2 = qword_140C2AD98;
  PerformanceFrequency.QuadPart = 0LL;
  if ( a1 == qword_140C2AD98 )
  {
    v6 = KeQueryPerformanceCounter(&PerformanceFrequency);
    if ( (unsigned __int64)(1000 * (v6.QuadPart - qword_140C2AD70)) / PerformanceFrequency.QuadPart > 0x1F4 )
      qword_140C2AD70 = v6.QuadPart;
  }
  result = qword_140C2AD88;
  if ( a2 && v2 && v2 != a1 && qword_140C2AD88 && qword_140C2AD88 != a1 )
    _mm_pause();
  return result;
}

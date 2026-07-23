/*
 * XREFs of sub_140653654 @ 0x140653654
 * Callers:
 *     sub_14065355C @ 0x14065355C (sub_14065355C.c)
 * Callees:
 *     KeQueryPerformanceCounter @ 0x1403027F0 (KeQueryPerformanceCounter.c)
 */

bool __fastcall sub_140653654(__int64 a1, __int64 a2)
{
  ULONG v2; // ebx
  LARGE_INTEGER PerformanceCounter; // rax
  bool v4; // cc
  LONG v6; // [rsp+3Ch] [rbp+14h]

  v6 = HIDWORD(a2);
  v2 = a2;
  PerformanceCounter = KeQueryPerformanceCounter(0LL);
  v4 = PerformanceCounter.HighPart <= v6;
  if ( PerformanceCounter.HighPart == v6 )
  {
    if ( PerformanceCounter.LowPart >= v2 )
      return 1;
    v4 = PerformanceCounter.HighPart <= v6;
  }
  return !v4;
}

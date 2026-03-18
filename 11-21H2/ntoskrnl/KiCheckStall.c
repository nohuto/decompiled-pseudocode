/*
 * XREFs of KiCheckStall @ 0x140302560
 * Callers:
 *     KeStallExecutionProcessor @ 0x140303560 (KeStallExecutionProcessor.c)
 *     KeStallWhileFrozen @ 0x140573650 (KeStallWhileFrozen.c)
 *     KeSwitchFrozenProcessor @ 0x140573670 (KeSwitchFrozenProcessor.c)
 * Callees:
 *     KeQueryPerformanceCounter @ 0x1403027F0 (KeQueryPerformanceCounter.c)
 */

__int64 __fastcall KiCheckStall(__int64 a1, char a2)
{
  __int64 v2; // rsi
  __int64 result; // rax
  LARGE_INTEGER v6; // r8
  LARGE_INTEGER PerformanceFrequency; // [rsp+30h] [rbp+8h] BYREF

  v2 = KiFreezeStallOwner;
  PerformanceFrequency.QuadPart = 0LL;
  if ( a1 == KiFreezeStallOwner )
  {
    v6 = KeQueryPerformanceCounter(&PerformanceFrequency);
    if ( (unsigned __int64)(1000 * (v6.QuadPart - KiLastStallTick)) / PerformanceFrequency.QuadPart > 0x1F4 )
      KiLastStallTick = v6.QuadPart;
  }
  result = KiDebuggerOwner;
  if ( a2 && v2 && v2 != a1 && KiDebuggerOwner && KiDebuggerOwner != a1 )
    _mm_pause();
  return result;
}

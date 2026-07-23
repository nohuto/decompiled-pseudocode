/*
 * XREFs of KiCheckStall @ 0x1402C2920
 * Callers:
 *     KeStallExecutionProcessor @ 0x1402C32C0 (KeStallExecutionProcessor.c)
 *     KeStallWhileFrozen @ 0x140577070 (KeStallWhileFrozen.c)
 *     KeSwitchFrozenProcessor @ 0x140577090 (KeSwitchFrozenProcessor.c)
 * Callees:
 *     KeQueryPerformanceCounter @ 0x1402C3500 (KeQueryPerformanceCounter.c)
 */

__int64 __fastcall KiCheckStall(__int64 a1, char a2)
{
  __int64 v3; // rdi
  __int64 result; // rax
  LARGE_INTEGER v6; // r8
  LARGE_INTEGER PerformanceFrequency; // [rsp+30h] [rbp+8h] BYREF

  PerformanceFrequency.QuadPart = 0LL;
  v3 = KiFreezeStallOwner;
  if ( a1 == KiFreezeStallOwner )
  {
    v6 = KeQueryPerformanceCounter(&PerformanceFrequency);
    if ( (unsigned __int64)(1000 * (v6.QuadPart - KiLastStallTick)) / PerformanceFrequency.QuadPart > 0x1F4 )
      KiLastStallTick = v6.QuadPart;
  }
  result = KiDebuggerOwner;
  if ( a2 && v3 && v3 != a1 && KiDebuggerOwner && KiDebuggerOwner != a1 )
    _mm_pause();
  return result;
}

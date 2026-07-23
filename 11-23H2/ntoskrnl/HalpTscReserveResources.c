/*
 * XREFs of HalpTscReserveResources @ 0x1403B1F28
 * Callers:
 *     HalpTimerInitSystem @ 0x14037ABD0 (HalpTimerInitSystem.c)
 * Callees:
 *     HalpQueryMaximumRegisteredProcessorCount @ 0x140377200 (HalpQueryMaximumRegisteredProcessorCount.c)
 *     HalpMmAllocCtxAlloc @ 0x14039B000 (HalpMmAllocCtxAlloc.c)
 *     HalpTscCheckAdjustMsrCapability @ 0x1403B2040 (HalpTscCheckAdjustMsrCapability.c)
 *     KeBugCheckEx @ 0x14041EDE0 (KeBugCheckEx.c)
 *     memset @ 0x140435E00 (memset.c)
 */

__int64 HalpTscReserveResources()
{
  __int64 result; // rax
  __int64 v1; // rdi
  __int64 v2; // rcx
  ULONG_PTR v3; // rbx
  void *v4; // rax
  __int64 v5; // rsi

  HalpTscFallbackLock = 0LL;
  result = HalpQueryMaximumRegisteredProcessorCount();
  v1 = (unsigned int)result;
  if ( *(_DWORD *)(HalpPerformanceCounter + 228) == 5 )
  {
    v2 = (4 * (_DWORD)result + ((4 * (_DWORD)result + 8 * (_DWORD)result + 7) & 0xFFFFFFF8) + 7) & 0xFFFFFFF8;
    v3 = ((((_DWORD)v2 + 4 * (_DWORD)result + 7) & 0xFFFFFFF8) + ((_DWORD)result << 7) + 135) & 0xFFFFFFF8;
    v4 = (void *)HalpMmAllocCtxAlloc(v2, v3);
    v5 = (__int64)v4;
    if ( !v4 )
      KeBugCheckEx(0xACu, v3, 0xAB00uLL, (ULONG_PTR)"minkernel\\hals\\lib\\timers\\pc\\tscsync.c", 0x166uLL);
    memset(v4, 0, v3);
    HalpTscDeltas = v5;
    HalpTscMaximumCounterSyncSpread = 1024;
    HalpTscNopCycles = (v5 + 8 * v1 + 7) & 0xFFFFFFFFFFFFFFF8uLL;
    HalpTscWaves = (HalpTscNopCycles + 4 * v1 + 7) & 0xFFFFFFFFFFFFFFF8uLL;
    HalpTscSkewOffset = (HalpTscWaves + 4 * v1 + 7) & 0xFFFFFFFFFFFFFFF8uLL;
    TscRequest = (((HalpTscSkewOffset + 4 * v1 + 7) & 0xFFFFFFFFFFFFFFF8uLL) + 120) & 0xFFFFFFFFFFFFFF80uLL;
    result = HalpTscCheckAdjustMsrCapability();
    HalpTscAdjustAvailable = result;
  }
  return result;
}

/*
 * XREFs of HalpTscCheckDisposition @ 0x14050AA54
 * Callers:
 *     HalpPowerStateCallback @ 0x1403B08B0 (HalpPowerStateCallback.c)
 * Callees:
 *     KeQueryActiveProcessorCountEx @ 0x140222050 (KeQueryActiveProcessorCountEx.c)
 *     KeBugCheckEx @ 0x14041EDE0 (KeBugCheckEx.c)
 */

void HalpTscCheckDisposition()
{
  ULONG_PTR v0; // rbx
  unsigned int v1; // ecx

  v0 = HalpPerformanceCounter;
  if ( *(_DWORD *)(HalpPerformanceCounter + 228) == 5
    && (*(_DWORD *)(HalpPerformanceCounter + 184) & 0x20) == 0
    && KeQueryActiveProcessorCountEx(0xFFFFu) > 1 )
  {
    v1 = -1;
    if ( HalpTscMaximumComputedSpread < 0xFFFFFFFF )
      v1 = HalpTscMaximumComputedSpread;
    KeBugCheckEx(0x5Cu, 0x110uLL, v0, 0x2AuLL, v1);
  }
}

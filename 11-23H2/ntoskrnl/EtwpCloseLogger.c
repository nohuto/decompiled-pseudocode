/*
 * XREFs of EtwpCloseLogger @ 0x1403C2520
 * Callers:
 *     EtwpOpenLogger @ 0x1402275F0 (EtwpOpenLogger.c)
 *     EtwpLogKernelEvent @ 0x140233CA0 (EtwpLogKernelEvent.c)
 *     EtwpLogSystemEventUnsafe @ 0x1403833F4 (EtwpLogSystemEventUnsafe.c)
 *     EtwpCCSwapFlush @ 0x14038AA04 (EtwpCCSwapFlush.c)
 *     EtwpKernelTraceRundown @ 0x1408200C8 (EtwpKernelTraceRundown.c)
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x14022F700 (KeLeaveCriticalRegionThread.c)
 *     ExReleaseRundownProtectionCacheAwareEx @ 0x140259CD0 (ExReleaseRundownProtectionCacheAwareEx.c)
 */

_QWORD *__fastcall EtwpCloseLogger(unsigned int a1, __int64 a2, char a3)
{
  _QWORD *result; // rax

  if ( a3 )
  {
    ExReleaseRundownProtectionCacheAwareEx(*(PEX_RUNDOWN_REF_CACHE_AWARE *)(*(_QWORD *)(a2 + 448) + 8LL * a1), 1u);
    return KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  }
  return result;
}

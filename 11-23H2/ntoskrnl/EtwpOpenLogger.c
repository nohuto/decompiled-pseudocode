/*
 * XREFs of EtwpOpenLogger @ 0x1402275F0
 * Callers:
 *     EtwpTraceMessageVa @ 0x140226F10 (EtwpTraceMessageVa.c)
 *     NtTraceEvent @ 0x1402578E0 (NtTraceEvent.c)
 *     EtwpLogSystemEventUnsafe @ 0x1403833F4 (EtwpLogSystemEventUnsafe.c)
 *     EtwpCCSwapFlush @ 0x14038AA04 (EtwpCCSwapFlush.c)
 *     EtwTraceEvent @ 0x140468382 (EtwTraceEvent.c)
 *     EtwSendTraceBuffer @ 0x1405FF1A0 (EtwSendTraceBuffer.c)
 *     EtwTraceRaw @ 0x1405FF338 (EtwTraceRaw.c)
 *     EtwpKernelTraceRundown @ 0x1408200C8 (EtwpKernelTraceRundown.c)
 * Callees:
 *     ObGetCurrentIrql @ 0x14020B9A0 (ObGetCurrentIrql.c)
 *     KeLeaveCriticalRegion @ 0x140231460 (KeLeaveCriticalRegion.c)
 *     ExAcquireRundownProtectionCacheAwareEx @ 0x140321E00 (ExAcquireRundownProtectionCacheAwareEx.c)
 *     EtwpCloseLogger @ 0x1403C2520 (EtwpCloseLogger.c)
 */

__int64 __fastcall EtwpOpenLogger(unsigned int a1, __int64 a2, char a3, _BYTE *a4)
{
  __int64 v4; // rdi
  struct _KTHREAD *CurrentThread; // rax
  __int64 v8; // rbp
  __int64 v9; // r8
  __int64 result; // rax

  v4 = a1;
  *a4 = 0;
  if ( a3 == 1 || ObGetCurrentIrql() < 2u )
  {
    CurrentThread = KeGetCurrentThread();
    v8 = v4;
    --CurrentThread->KernelApcDisable;
    if ( !ExAcquireRundownProtectionCacheAwareEx(*(PEX_RUNDOWN_REF_CACHE_AWARE *)(*(_QWORD *)(a2 + 448) + 8 * v4), 1u) )
    {
      KeLeaveCriticalRegion();
      return 0LL;
    }
    *a4 = 1;
  }
  else
  {
    v8 = v4;
  }
  result = *(_QWORD *)(*(_QWORD *)(a2 + 456) + 8 * v8);
  if ( (result & 1) != 0 )
  {
    LOBYTE(v9) = *a4;
    EtwpCloseLogger((unsigned int)v4, a2, v9);
    return 0LL;
  }
  return result;
}

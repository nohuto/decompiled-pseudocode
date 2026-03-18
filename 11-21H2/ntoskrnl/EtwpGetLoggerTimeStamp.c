/*
 * XREFs of EtwpGetLoggerTimeStamp @ 0x1402E1D0C
 * Callers:
 *     EtwpPrepareDirtyBuffer @ 0x1402E1CBC (EtwpPrepareDirtyBuffer.c)
 *     EtwpLogContextSwapEvent @ 0x1403ABB10 (EtwpLogContextSwapEvent.c)
 *     EtwSendTraceBuffer @ 0x140630940 (EtwSendTraceBuffer.c)
 *     EtwpRelinquishCompressionTarget @ 0x1406355B0 (EtwpRelinquishCompressionTarget.c)
 *     EtwpRotateCompressionTarget @ 0x140635600 (EtwpRotateCompressionTarget.c)
 *     EtwpInitializeTimeStamp @ 0x1406EFBC8 (EtwpInitializeTimeStamp.c)
 * Callees:
 *     RtlGetSystemTimePrecise @ 0x14022DB00 (RtlGetSystemTimePrecise.c)
 *     KeQueryPerformanceCounter @ 0x1403027F0 (KeQueryPerformanceCounter.c)
 *     _guard_dispatch_icall @ 0x14042A5E0 (_guard_dispatch_icall.c)
 */

LARGE_INTEGER __fastcall EtwpGetLoggerTimeStamp(__int64 a1)
{
  unsigned __int64 v1; // rax
  int v2; // eax
  int v4; // eax
  __int64 v5; // [rsp+30h] [rbp+8h] BYREF

  v1 = *(_QWORD *)(a1 + 24);
  if ( v1 > 3 )
    goto LABEL_10;
  if ( !(_DWORD)v1 )
    return (LARGE_INTEGER)RtlGetSystemTimePrecise();
  v2 = v1 - 1;
  if ( !v2 )
    return KeQueryPerformanceCounter(0LL);
  v4 = v2 - 1;
  if ( v4 )
  {
    if ( v4 == 1 )
      return (LARGE_INTEGER)__rdtsc();
LABEL_10:
    __fastfail(0x3Du);
  }
  v5 = 0LL;
  ((void (__fastcall *)(__int64 *))off_140C02030[0])(&v5);
  return (LARGE_INTEGER)v5;
}

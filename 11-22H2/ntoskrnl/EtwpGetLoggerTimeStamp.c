/*
 * XREFs of EtwpGetLoggerTimeStamp @ 0x140227B6C
 * Callers:
 *     EtwpPrepareDirtyBuffer @ 0x140227BA8 (EtwpPrepareDirtyBuffer.c)
 *     EtwSendTraceBuffer @ 0x1405FF230 (EtwSendTraceBuffer.c)
 *     EtwpRelinquishCompressionTarget @ 0x140602AD8 (EtwpRelinquishCompressionTarget.c)
 *     EtwpRotateCompressionTarget @ 0x140602B28 (EtwpRotateCompressionTarget.c)
 *     EtwpInitializeTimeStamp @ 0x1407DC230 (EtwpInitializeTimeStamp.c)
 * Callees:
 *     RtlGetSystemTimePrecise @ 0x140226E30 (RtlGetSystemTimePrecise.c)
 *     KeQueryPerformanceCounter @ 0x1402C3240 (KeQueryPerformanceCounter.c)
 *     _guard_dispatch_icall @ 0x140429560 (_guard_dispatch_icall.c)
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
    return RtlGetSystemTimePrecise();
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
  ((void (__fastcall *)(__int64 *))off_140C01DF0[0])(&v5);
  return (LARGE_INTEGER)v5;
}

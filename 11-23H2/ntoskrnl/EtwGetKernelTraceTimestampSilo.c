/*
 * XREFs of EtwGetKernelTraceTimestampSilo @ 0x1402A3240
 * Callers:
 *     KiExecuteAllDpcs @ 0x140244590 (KiExecuteAllDpcs.c)
 *     KiExpireTimer2 @ 0x140251B40 (KiExpireTimer2.c)
 *     KiIpiSendRequest @ 0x1402540E0 (KiIpiSendRequest.c)
 *     PfHardFaultRecord @ 0x1402A31A4 (PfHardFaultRecord.c)
 *     EtwGetKernelTraceTimestamp @ 0x1402A3220 (EtwGetKernelTraceTimestamp.c)
 *     KiIpiProcessRequests @ 0x140334C80 (KiIpiProcessRequests.c)
 *     HvcallFastExtended @ 0x1403CC390 (HvcallFastExtended.c)
 *     HvlSendSyntheticClusterIpi @ 0x1403CC480 (HvlSendSyntheticClusterIpi.c)
 * Callees:
 *     RtlGetSystemTimePrecise @ 0x140226F20 (RtlGetSystemTimePrecise.c)
 *     KeQueryPerformanceCounter @ 0x1402C3500 (KeQueryPerformanceCounter.c)
 *     _guard_dispatch_icall @ 0x140429FB0 (_guard_dispatch_icall.c)
 */

LARGE_INTEGER __fastcall EtwGetKernelTraceTimestampSilo(LARGE_INTEGER *a1, unsigned int a2, __int64 a3)
{
  unsigned __int64 v3; // r10
  int v5; // ebx
  _QWORD *v6; // r9
  __int64 v7; // r9
  unsigned int v8; // eax
  bool i; // zf
  __int64 v10; // rdx
  __int64 v11; // r8
  LARGE_INTEGER PerformanceCounter; // rax
  LARGE_INTEGER result; // rax
  LARGE_INTEGER v14; // [rsp+40h] [rbp+18h] BYREF

  v3 = a2;
  v14.LowPart = 0;
  v5 = 0;
  if ( a3 )
    v6 = *(_QWORD **)(a3 + 1488);
  else
    v6 = &PspHostSiloGlobals;
  v7 = v6[108];
  if ( v7 )
  {
    v8 = *(_DWORD *)(v7 + 4248);
    for ( i = !_BitScanForward((unsigned int *)&v10, v8); !i; i = !_BitScanForward((unsigned int *)&v10, v8) )
    {
      v8 &= v8 - 1;
      v11 = 32 * v10 + v7 + 4284;
      if ( v11 && ((unsigned int)v3 & *(_DWORD *)(v11 + 4 * (v3 >> 29)) & 0x1FFFFFFF) != 0 )
        v5 |= 1 << *(_BYTE *)(v7 + 2LL * (unsigned int)v10 + 4233);
    }
    if ( (v5 & 2) == 0 )
    {
      PerformanceCounter.QuadPart = 0LL;
      goto LABEL_11;
    }
  }
  else
  {
    LOBYTE(v5) = 30;
  }
  PerformanceCounter = KeQueryPerformanceCounter(0LL);
LABEL_11:
  *a1 = PerformanceCounter;
  if ( (v5 & 4) != 0 )
    result = RtlGetSystemTimePrecise();
  else
    result.QuadPart = 0LL;
  a1[1] = result;
  if ( (v5 & 8) != 0 )
  {
    result.QuadPart = __rdtsc();
    a1[2] = result;
  }
  else
  {
    a1[2].QuadPart = 0LL;
  }
  if ( (v5 & 0x10) != 0 )
  {
    v14.QuadPart = 0LL;
    ((void (__fastcall *)(LARGE_INTEGER *))off_140C01DF0[0])(&v14);
    result = v14;
    a1[3] = v14;
  }
  else
  {
    a1[3].QuadPart = 0LL;
  }
  return result;
}

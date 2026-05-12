/*
 * XREFs of StorpInitializePerfTelemetry @ 0x1C006C180
 * Callers:
 *     StorpRegisterTraceLogging @ 0x1C00AAC7C (StorpRegisterTraceLogging.c)
 * Callees:
 *     RaidAllocatePool @ 0x1C0007B34 (RaidAllocatePool.c)
 *     memset_0 @ 0x1C0023980 (memset_0.c)
 *     StorpUninitializePerfTelemetry @ 0x1C00731C0 (StorpUninitializePerfTelemetry.c)
 */

__int64 StorpInitializePerfTelemetry()
{
  __int64 v0; // rdi
  ULONG v1; // ebx
  ULONG v2; // ebx
  LARGE_INTEGER PerformanceCounter; // rax
  unsigned int v4; // ebx
  __int64 v5; // rcx
  __int64 v6; // rdx
  __int64 v7; // r8
  __int64 v8; // rcx
  __int64 v9; // rdx
  __int64 v10; // r8
  __int64 v11; // rcx
  __int64 v12; // rdx
  ULONG v13; // ebx
  union _LARGE_INTEGER PerformanceFrequency; // [rsp+40h] [rbp+20h] BYREF

  PerformanceFrequency.QuadPart = 0LL;
  memset_0(&TelemetryPerfContext, 0, 0xB8uLL);
  TelemetryPerfContext = 917506LL;
  unk_1C0092508 = 28LL;
  *(_OWORD *)&xmmword_1C0092530 = 0LL;
  *(&xmmword_1C0092530 + 1) = (PVOID)0x1C0000000ALL;
  xmmword_1C0092540 = 0LL;
  qword_1C0092570 = 0xFC00000026LL;
  v0 = 2LL;
  *(_QWORD *)&xmmword_1C0092540 = 0xE00090002LL;
  xmmword_1C0092510 = 0LL;
  *(_QWORD *)&xmmword_1C0092510 = 327682LL;
  *(_OWORD *)&xmmword_1C0092560 = 0LL;
  *(_OWORD *)&P = 0LL;
  *(&xmmword_1C0092560 + 1) = (PVOID)252;
  *(_OWORD *)&xmmword_1C00924F8 = 0LL;
  *(_OWORD *)&xmmword_1C0092520 = 0LL;
  *(_OWORD *)&xmmword_1C0092550 = 0LL;
  v1 = KeGetRecommendedSharedDataAlignment() + 911;
  LODWORD(dword_1C0092578) = v1 & ~(KeGetRecommendedSharedDataAlignment() - 1);
  v2 = KeGetRecommendedSharedDataAlignment() + 16 * HIDWORD(qword_1C0092570) - 1;
  LODWORD(dword_1C009257C) = v2 & ~(KeGetRecommendedSharedDataAlignment() - 1);
  g_RaidNumberProcessors = KeQueryActiveProcessorCountEx(0xFFFFu);
  LODWORD(Size) = dword_1C0092578 * g_RaidNumberProcessors;
  LODWORD(dword_1C0092584) = dword_1C009257C * g_RaidNumberProcessors;
  if ( UseQPCTime )
    PerformanceCounter = KeQueryPerformanceCounter(0LL);
  else
    PerformanceCounter.QuadPart = KeQueryUnbiasedInterruptTime();
  qword_1C0092588 = PerformanceCounter.QuadPart;
  if ( (_WORD)TelemetryPerfContext )
  {
    P = (PVOID)RaidAllocatePool(72LL, 8LL * (unsigned __int16)TelemetryPerfContext, 1700028754LL, 0LL);
    if ( !P )
      goto LABEL_50;
  }
  else
  {
    P = 0LL;
  }
  if ( WORD1(TelemetryPerfContext) )
  {
    *(&P + 1) = (PVOID)RaidAllocatePool(72LL, 8LL * WORD1(TelemetryPerfContext), 1700028754LL, 0LL);
    if ( !*(&P + 1) )
      goto LABEL_50;
  }
  else
  {
    *(&P + 1) = 0LL;
  }
  if ( WORD2(TelemetryPerfContext) )
  {
    xmmword_1C00924F8 = (PVOID)RaidAllocatePool(72LL, 8LL * WORD2(TelemetryPerfContext), 1700028754LL, 0LL);
    if ( !xmmword_1C00924F8 )
      goto LABEL_50;
  }
  else
  {
    xmmword_1C00924F8 = 0LL;
  }
  if ( HIWORD(TelemetryPerfContext) )
  {
    *(&xmmword_1C00924F8 + 1) = (PVOID)RaidAllocatePool(72LL, 8LL * HIWORD(TelemetryPerfContext), 1700028754LL, 0LL);
    if ( !*(&xmmword_1C00924F8 + 1) )
      goto LABEL_50;
  }
  else
  {
    *(&xmmword_1C00924F8 + 1) = 0LL;
  }
  if ( (_WORD)xmmword_1C0092510 )
  {
    *((_QWORD *)&xmmword_1C0092510 + 1) = RaidAllocatePool(
                                            72LL,
                                            8LL * (unsigned __int16)xmmword_1C0092510,
                                            1700028754LL,
                                            0LL);
    if ( !*((_QWORD *)&xmmword_1C0092510 + 1) )
      goto LABEL_50;
  }
  else
  {
    *((_QWORD *)&xmmword_1C0092510 + 1) = 0LL;
  }
  if ( WORD1(xmmword_1C0092510) )
  {
    xmmword_1C0092520 = (PVOID)RaidAllocatePool(72LL, 8LL * WORD1(xmmword_1C0092510), 1700028754LL, 0LL);
    if ( !xmmword_1C0092520 )
      goto LABEL_50;
  }
  else
  {
    xmmword_1C0092520 = 0LL;
  }
  if ( WORD2(xmmword_1C0092510) )
  {
    *(&xmmword_1C0092520 + 1) = (PVOID)RaidAllocatePool(72LL, 8LL * WORD2(xmmword_1C0092510), 1700028754LL, 0LL);
    if ( !*(&xmmword_1C0092520 + 1) )
      goto LABEL_50;
  }
  else
  {
    *(&xmmword_1C0092520 + 1) = 0LL;
  }
  if ( WORD3(xmmword_1C0092510) )
  {
    xmmword_1C0092530 = (PVOID)RaidAllocatePool(72LL, 8LL * WORD3(xmmword_1C0092510), 1700028754LL, 0LL);
    if ( !xmmword_1C0092530 )
      goto LABEL_50;
  }
  else
  {
    xmmword_1C0092530 = 0LL;
  }
  if ( (_WORD)xmmword_1C0092540 )
  {
    *((_QWORD *)&xmmword_1C0092540 + 1) = RaidAllocatePool(
                                            72LL,
                                            8LL * (unsigned __int16)xmmword_1C0092540,
                                            1700028754LL,
                                            0LL);
    if ( !*((_QWORD *)&xmmword_1C0092540 + 1) )
      goto LABEL_50;
  }
  else
  {
    *((_QWORD *)&xmmword_1C0092540 + 1) = 0LL;
  }
  if ( WORD1(xmmword_1C0092540) )
  {
    xmmword_1C0092550 = (PVOID)RaidAllocatePool(72LL, 8LL * WORD1(xmmword_1C0092540), 1700028754LL, 0LL);
    if ( !xmmword_1C0092550 )
      goto LABEL_50;
  }
  else
  {
    xmmword_1C0092550 = 0LL;
  }
  if ( WORD2(xmmword_1C0092540) )
  {
    *(&xmmword_1C0092550 + 1) = (PVOID)RaidAllocatePool(72LL, 8LL * WORD2(xmmword_1C0092540), 1700028754LL, 0LL);
    if ( !*(&xmmword_1C0092550 + 1) )
      goto LABEL_50;
  }
  else
  {
    *(&xmmword_1C0092550 + 1) = 0LL;
  }
  if ( WORD3(xmmword_1C0092540) )
  {
    xmmword_1C0092560 = (PVOID)RaidAllocatePool(72LL, 8LL * WORD3(xmmword_1C0092540), 1700028754LL, 0LL);
    if ( !xmmword_1C0092560 )
    {
LABEL_50:
      v4 = -1073741801;
      StorpUninitializePerfTelemetry();
      g_StorpTraceLoggingPerformanceEnabled = 0;
      return v4;
    }
  }
  else
  {
    xmmword_1C0092560 = 0LL;
  }
  v5 = 0LL;
  v6 = 0LL;
  v7 = 2LL;
  do
  {
    *(_QWORD *)((char *)P + v5) = v6++;
    v5 += 8LL;
    --v7;
  }
  while ( v7 );
  v8 = 0LL;
  v9 = 0LL;
  v10 = 2LL;
  do
  {
    *(_QWORD *)(*((_QWORD *)&xmmword_1C0092510 + 1) + v8) = v9++;
    v8 += 8LL;
    --v10;
  }
  while ( v10 );
  v11 = 0LL;
  v12 = 0LL;
  do
  {
    *(_QWORD *)(*((_QWORD *)&xmmword_1C0092540 + 1) + v11) = v12++;
    v11 += 8LL;
    --v0;
  }
  while ( v0 );
  if ( UseQPCTime && g_StorpTraceLoggingPerformanceHighResolutionTimer )
  {
    KeQueryPerformanceCounter(&PerformanceFrequency);
    *(_QWORD *)*(&P + 1) = (PerformanceFrequency.QuadPart << 7) / 1000000;
    *((_QWORD *)*(&P + 1) + 1) = (PerformanceFrequency.QuadPart << 8) / 1000000;
    *((_QWORD *)*(&P + 1) + 2) = (PerformanceFrequency.QuadPart << 9) / 1000000;
    *((_QWORD *)*(&P + 1) + 3) = PerformanceFrequency.QuadPart / 1000;
    *((_QWORD *)*(&P + 1) + 4) = 4 * PerformanceFrequency.QuadPart / 1000;
    *((_QWORD *)*(&P + 1) + 5) = 16 * PerformanceFrequency.QuadPart / 1000;
    *((_QWORD *)*(&P + 1) + 6) = (PerformanceFrequency.QuadPart << 6) / 1000;
    *((_QWORD *)*(&P + 1) + 7) = (PerformanceFrequency.QuadPart << 7) / 1000;
    *((_QWORD *)*(&P + 1) + 8) = (PerformanceFrequency.QuadPart << 8) / 1000;
    *((_QWORD *)*(&P + 1) + 9) = (PerformanceFrequency.QuadPart << 9) / 1000;
    *((_QWORD *)*(&P + 1) + 10) = 1000 * PerformanceFrequency.QuadPart / 1000;
    *((_QWORD *)*(&P + 1) + 11) = 2000 * PerformanceFrequency.QuadPart / 1000;
    *((_QWORD *)*(&P + 1) + 12) = 10000 * PerformanceFrequency.QuadPart / 1000;
    *((_QWORD *)*(&P + 1) + 13) = 0x7FFFFFFFFFFFFFFFLL;
    *(_QWORD *)xmmword_1C0092520 = (PerformanceFrequency.QuadPart << 6) / 1000;
    *((_QWORD *)xmmword_1C0092520 + 1) = (PerformanceFrequency.QuadPart << 8) / 1000;
    *((_QWORD *)xmmword_1C0092520 + 2) = (PerformanceFrequency.QuadPart << 10) / 1000;
    *((_QWORD *)xmmword_1C0092520 + 3) = 5120 * PerformanceFrequency.QuadPart / 1000;
    *((_QWORD *)xmmword_1C0092520 + 4) = 0x7FFFFFFFFFFFFFFFLL;
    *(_QWORD *)*(&xmmword_1C0092550 + 1) = (PerformanceFrequency.QuadPart << 7) / 1000000;
    *((_QWORD *)*(&xmmword_1C0092550 + 1) + 1) = (PerformanceFrequency.QuadPart << 8) / 1000000;
    *((_QWORD *)*(&xmmword_1C0092550 + 1) + 2) = (PerformanceFrequency.QuadPart << 9) / 1000000;
    *((_QWORD *)*(&xmmword_1C0092550 + 1) + 3) = PerformanceFrequency.QuadPart / 1000;
    *((_QWORD *)*(&xmmword_1C0092550 + 1) + 4) = 4 * PerformanceFrequency.QuadPart / 1000;
    *((_QWORD *)*(&xmmword_1C0092550 + 1) + 5) = 16 * PerformanceFrequency.QuadPart / 1000;
    *((_QWORD *)*(&xmmword_1C0092550 + 1) + 6) = (PerformanceFrequency.QuadPart << 6) / 1000;
    *((_QWORD *)*(&xmmword_1C0092550 + 1) + 7) = (PerformanceFrequency.QuadPart << 7) / 1000;
    *((_QWORD *)*(&xmmword_1C0092550 + 1) + 8) = (PerformanceFrequency.QuadPart << 8) / 1000;
    *((_QWORD *)*(&xmmword_1C0092550 + 1) + 9) = (PerformanceFrequency.QuadPart << 9) / 1000;
    *((_QWORD *)*(&xmmword_1C0092550 + 1) + 10) = 1000 * PerformanceFrequency.QuadPart / 1000;
    *((_QWORD *)*(&xmmword_1C0092550 + 1) + 11) = 2000 * PerformanceFrequency.QuadPart / 1000;
    *((_QWORD *)*(&xmmword_1C0092550 + 1) + 12) = 10000 * PerformanceFrequency.QuadPart / 1000;
  }
  else
  {
    *(_QWORD *)*(&P + 1) = 1280LL;
    *((_QWORD *)*(&P + 1) + 1) = 2560LL;
    *((_QWORD *)*(&P + 1) + 2) = 5120LL;
    *((_QWORD *)*(&P + 1) + 3) = 10000LL;
    *((_QWORD *)*(&P + 1) + 4) = 40000LL;
    *((_QWORD *)*(&P + 1) + 5) = 160000LL;
    *((_QWORD *)*(&P + 1) + 6) = 640000LL;
    *((_QWORD *)*(&P + 1) + 7) = 1280000LL;
    *((_QWORD *)*(&P + 1) + 8) = 2560000LL;
    *((_QWORD *)*(&P + 1) + 9) = 5120000LL;
    *((_QWORD *)*(&P + 1) + 10) = 10000000LL;
    *((_QWORD *)*(&P + 1) + 11) = 20000000LL;
    *((_QWORD *)*(&P + 1) + 12) = 100000000LL;
    *((_QWORD *)*(&P + 1) + 13) = 0x7FFFFFFFFFFFFFFFLL;
    *(_QWORD *)xmmword_1C0092520 = 640000LL;
    *((_QWORD *)xmmword_1C0092520 + 1) = 2560000LL;
    *((_QWORD *)xmmword_1C0092520 + 2) = 10240000LL;
    *((_QWORD *)xmmword_1C0092520 + 3) = 51200000LL;
    *((_QWORD *)xmmword_1C0092520 + 4) = 0x7FFFFFFFFFFFFFFFLL;
    *(_QWORD *)*(&xmmword_1C0092550 + 1) = 1280LL;
    *((_QWORD *)*(&xmmword_1C0092550 + 1) + 1) = 2560LL;
    *((_QWORD *)*(&xmmword_1C0092550 + 1) + 2) = 5120LL;
    *((_QWORD *)*(&xmmword_1C0092550 + 1) + 3) = 10000LL;
    *((_QWORD *)*(&xmmword_1C0092550 + 1) + 4) = 40000LL;
    *((_QWORD *)*(&xmmword_1C0092550 + 1) + 5) = 160000LL;
    *((_QWORD *)*(&xmmword_1C0092550 + 1) + 6) = 640000LL;
    *((_QWORD *)*(&xmmword_1C0092550 + 1) + 7) = 1280000LL;
    *((_QWORD *)*(&xmmword_1C0092550 + 1) + 8) = 2560000LL;
    *((_QWORD *)*(&xmmword_1C0092550 + 1) + 9) = 5120000LL;
    *((_QWORD *)*(&xmmword_1C0092550 + 1) + 10) = 10000000LL;
    *((_QWORD *)*(&xmmword_1C0092550 + 1) + 11) = 20000000LL;
    *((_QWORD *)*(&xmmword_1C0092550 + 1) + 12) = 100000000LL;
  }
  *((_QWORD *)*(&xmmword_1C0092550 + 1) + 13) = 0x7FFFFFFFFFFFFFFFLL;
  *(_QWORD *)xmmword_1C0092550 = 4096LL;
  *((_QWORD *)xmmword_1C0092550 + 1) = 0x2000LL;
  *((_QWORD *)xmmword_1C0092550 + 2) = 0x4000LL;
  *((_QWORD *)xmmword_1C0092550 + 3) = 0x8000LL;
  *((_QWORD *)xmmword_1C0092550 + 4) = 0x10000LL;
  *((_QWORD *)xmmword_1C0092550 + 5) = 0x20000LL;
  *((_QWORD *)xmmword_1C0092550 + 6) = 0x40000LL;
  *((_QWORD *)xmmword_1C0092550 + 7) = 0x100000LL;
  *((_QWORD *)xmmword_1C0092550 + 8) = 0x7FFFFFFFFFFFFFFFLL;
  v13 = ~(KeGetRecommendedSharedDataAlignment() - 1);
  dword_1C0092590 = v13 & (KeGetRecommendedSharedDataAlignment() + 23);
  v4 = 0;
  g_RaidNumaHighestNodeNumber = KeQueryHighestNodeNumber();
  LODWORD(dword_1C0092594) = dword_1C0092590 * ((unsigned __int16)g_RaidNumaHighestNodeNumber + 1);
  return v4;
}

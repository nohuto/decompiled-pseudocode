/*
 * XREFs of StorpInitializePerfTelemetry @ 0x1C005EC20
 * Callers:
 *     StorpRegisterTraceLogging @ 0x1C0090130 (StorpRegisterTraceLogging.c)
 * Callees:
 *     RaidAllocatePool @ 0x1C000F8A0 (RaidAllocatePool.c)
 *     memset @ 0x1C0024340 (memset.c)
 *     StorpUninitializePerfTelemetry @ 0x1C00645E4 (StorpUninitializePerfTelemetry.c)
 */

__int64 StorpInitializePerfTelemetry()
{
  unsigned int v0; // edi
  __int64 v1; // rsi
  ULONG v2; // ebx
  ULONG v3; // ebx
  LARGE_INTEGER PerformanceCounter; // rax
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

  v0 = 0;
  PerformanceFrequency.QuadPart = 0LL;
  memset(&TelemetryPerfContext, 0, 0xB8uLL);
  TelemetryPerfContext = 786434LL;
  unk_1C0079768 = 24LL;
  *(_OWORD *)&xmmword_1C0079790 = 0LL;
  *(&xmmword_1C0079790 + 1) = (PVOID)0x180000000ALL;
  xmmword_1C00797A0 = 0LL;
  qword_1C00797D0 = 0xD800000022LL;
  v1 = 2LL;
  *(_QWORD *)&xmmword_1C00797A0 = 0xC00090002LL;
  xmmword_1C0079770 = 0LL;
  *(_QWORD *)&xmmword_1C0079770 = 327682LL;
  *(_OWORD *)&xmmword_1C00797C0 = 0LL;
  *(_OWORD *)&P = 0LL;
  *(&xmmword_1C00797C0 + 1) = (PVOID)216;
  *(_OWORD *)&xmmword_1C0079758 = 0LL;
  *(_OWORD *)&xmmword_1C0079780 = 0LL;
  *(_OWORD *)&xmmword_1C00797B0 = 0LL;
  v2 = KeGetRecommendedSharedDataAlignment() + 815;
  LODWORD(dword_1C00797D8) = v2 & ~(KeGetRecommendedSharedDataAlignment() - 1);
  v3 = KeGetRecommendedSharedDataAlignment() + 16 * HIDWORD(qword_1C00797D0) - 1;
  LODWORD(dword_1C00797DC) = v3 & ~(KeGetRecommendedSharedDataAlignment() - 1);
  g_RaidNumberProcessors = KeQueryActiveProcessorCountEx(0xFFFFu);
  LODWORD(dword_1C00797E4) = dword_1C00797DC * g_RaidNumberProcessors;
  LODWORD(Size) = dword_1C00797D8 * g_RaidNumberProcessors;
  if ( UseQPCTime )
    PerformanceCounter = KeQueryPerformanceCounter(0LL);
  else
    PerformanceCounter.QuadPart = KeQueryUnbiasedInterruptTime();
  qword_1C00797E8 = PerformanceCounter.QuadPart;
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
    xmmword_1C0079758 = (PVOID)RaidAllocatePool(72LL, 8LL * WORD2(TelemetryPerfContext), 1700028754LL, 0LL);
    if ( !xmmword_1C0079758 )
      goto LABEL_50;
  }
  else
  {
    xmmword_1C0079758 = 0LL;
  }
  if ( HIWORD(TelemetryPerfContext) )
  {
    *(&xmmword_1C0079758 + 1) = (PVOID)RaidAllocatePool(72LL, 8LL * HIWORD(TelemetryPerfContext), 1700028754LL, 0LL);
    if ( !*(&xmmword_1C0079758 + 1) )
      goto LABEL_50;
  }
  else
  {
    *(&xmmword_1C0079758 + 1) = 0LL;
  }
  if ( (_WORD)xmmword_1C0079770 )
  {
    *((_QWORD *)&xmmword_1C0079770 + 1) = RaidAllocatePool(
                                            72LL,
                                            8LL * (unsigned __int16)xmmword_1C0079770,
                                            1700028754LL,
                                            0LL);
    if ( !*((_QWORD *)&xmmword_1C0079770 + 1) )
      goto LABEL_50;
  }
  else
  {
    *((_QWORD *)&xmmword_1C0079770 + 1) = 0LL;
  }
  if ( WORD1(xmmword_1C0079770) )
  {
    xmmword_1C0079780 = (PVOID)RaidAllocatePool(72LL, 8LL * WORD1(xmmword_1C0079770), 1700028754LL, 0LL);
    if ( !xmmword_1C0079780 )
      goto LABEL_50;
  }
  else
  {
    xmmword_1C0079780 = 0LL;
  }
  if ( WORD2(xmmword_1C0079770) )
  {
    *(&xmmword_1C0079780 + 1) = (PVOID)RaidAllocatePool(72LL, 8LL * WORD2(xmmword_1C0079770), 1700028754LL, 0LL);
    if ( !*(&xmmword_1C0079780 + 1) )
      goto LABEL_50;
  }
  else
  {
    *(&xmmword_1C0079780 + 1) = 0LL;
  }
  if ( WORD3(xmmword_1C0079770) )
  {
    xmmword_1C0079790 = (PVOID)RaidAllocatePool(72LL, 8LL * WORD3(xmmword_1C0079770), 1700028754LL, 0LL);
    if ( !xmmword_1C0079790 )
      goto LABEL_50;
  }
  else
  {
    xmmword_1C0079790 = 0LL;
  }
  if ( (_WORD)xmmword_1C00797A0 )
  {
    *((_QWORD *)&xmmword_1C00797A0 + 1) = RaidAllocatePool(
                                            72LL,
                                            8LL * (unsigned __int16)xmmword_1C00797A0,
                                            1700028754LL,
                                            0LL);
    if ( !*((_QWORD *)&xmmword_1C00797A0 + 1) )
      goto LABEL_50;
  }
  else
  {
    *((_QWORD *)&xmmword_1C00797A0 + 1) = 0LL;
  }
  if ( WORD1(xmmword_1C00797A0) )
  {
    xmmword_1C00797B0 = (PVOID)RaidAllocatePool(72LL, 8LL * WORD1(xmmword_1C00797A0), 1700028754LL, 0LL);
    if ( !xmmword_1C00797B0 )
      goto LABEL_50;
  }
  else
  {
    xmmword_1C00797B0 = 0LL;
  }
  if ( WORD2(xmmword_1C00797A0) )
  {
    *(&xmmword_1C00797B0 + 1) = (PVOID)RaidAllocatePool(72LL, 8LL * WORD2(xmmword_1C00797A0), 1700028754LL, 0LL);
    if ( !*(&xmmword_1C00797B0 + 1) )
      goto LABEL_50;
  }
  else
  {
    *(&xmmword_1C00797B0 + 1) = 0LL;
  }
  if ( WORD3(xmmword_1C00797A0) )
  {
    xmmword_1C00797C0 = (PVOID)RaidAllocatePool(72LL, 8LL * WORD3(xmmword_1C00797A0), 1700028754LL, 0LL);
    if ( !xmmword_1C00797C0 )
    {
LABEL_50:
      StorpUninitializePerfTelemetry();
      g_StorpTraceLoggingPerformanceEnabled = 0;
      return (unsigned int)-1073741801;
    }
  }
  else
  {
    xmmword_1C00797C0 = 0LL;
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
    *(_QWORD *)(*((_QWORD *)&xmmword_1C0079770 + 1) + v8) = v9++;
    v8 += 8LL;
    --v10;
  }
  while ( v10 );
  v11 = 0LL;
  v12 = 0LL;
  do
  {
    *(_QWORD *)(*((_QWORD *)&xmmword_1C00797A0 + 1) + v11) = v12++;
    v11 += 8LL;
    --v1;
  }
  while ( v1 );
  if ( UseQPCTime && g_StorpTraceLoggingPerformanceHighResolutionTimer )
  {
    KeQueryPerformanceCounter(&PerformanceFrequency);
    *(_QWORD *)*(&P + 1) = (PerformanceFrequency.QuadPart << 8) / 1000000;
    *((_QWORD *)*(&P + 1) + 1) = PerformanceFrequency.QuadPart / 1000;
    *((_QWORD *)*(&P + 1) + 2) = 4 * PerformanceFrequency.QuadPart / 1000;
    *((_QWORD *)*(&P + 1) + 3) = 16 * PerformanceFrequency.QuadPart / 1000;
    *((_QWORD *)*(&P + 1) + 4) = (PerformanceFrequency.QuadPart << 6) / 1000;
    *((_QWORD *)*(&P + 1) + 5) = (PerformanceFrequency.QuadPart << 7) / 1000;
    *((_QWORD *)*(&P + 1) + 6) = (PerformanceFrequency.QuadPart << 8) / 1000;
    *((_QWORD *)*(&P + 1) + 7) = 2000 * PerformanceFrequency.QuadPart / 1000;
    *((_QWORD *)*(&P + 1) + 8) = 6000 * PerformanceFrequency.QuadPart / 1000;
    *((_QWORD *)*(&P + 1) + 9) = 10000 * PerformanceFrequency.QuadPart / 1000;
    *((_QWORD *)*(&P + 1) + 10) = 20000 * PerformanceFrequency.QuadPart / 1000;
    *((_QWORD *)*(&P + 1) + 11) = 0x7FFFFFFFFFFFFFFFLL;
    *(_QWORD *)xmmword_1C0079780 = (PerformanceFrequency.QuadPart << 6) / 1000;
    *((_QWORD *)xmmword_1C0079780 + 1) = (PerformanceFrequency.QuadPart << 8) / 1000;
    *((_QWORD *)xmmword_1C0079780 + 2) = (PerformanceFrequency.QuadPart << 10) / 1000;
    *((_QWORD *)xmmword_1C0079780 + 3) = 5120 * PerformanceFrequency.QuadPart / 1000;
    *((_QWORD *)xmmword_1C0079780 + 4) = 0x7FFFFFFFFFFFFFFFLL;
    *(_QWORD *)*(&xmmword_1C00797B0 + 1) = (PerformanceFrequency.QuadPart << 8) / 1000000;
    *((_QWORD *)*(&xmmword_1C00797B0 + 1) + 1) = PerformanceFrequency.QuadPart / 1000;
    *((_QWORD *)*(&xmmword_1C00797B0 + 1) + 2) = 4 * PerformanceFrequency.QuadPart / 1000;
    *((_QWORD *)*(&xmmword_1C00797B0 + 1) + 3) = 16 * PerformanceFrequency.QuadPart / 1000;
    *((_QWORD *)*(&xmmword_1C00797B0 + 1) + 4) = (PerformanceFrequency.QuadPart << 6) / 1000;
    *((_QWORD *)*(&xmmword_1C00797B0 + 1) + 5) = (PerformanceFrequency.QuadPart << 7) / 1000;
    *((_QWORD *)*(&xmmword_1C00797B0 + 1) + 6) = (PerformanceFrequency.QuadPart << 8) / 1000;
    *((_QWORD *)*(&xmmword_1C00797B0 + 1) + 7) = 2000 * PerformanceFrequency.QuadPart / 1000;
    *((_QWORD *)*(&xmmword_1C00797B0 + 1) + 8) = 6000 * PerformanceFrequency.QuadPart / 1000;
    *((_QWORD *)*(&xmmword_1C00797B0 + 1) + 9) = 10000 * PerformanceFrequency.QuadPart / 1000;
    *((_QWORD *)*(&xmmword_1C00797B0 + 1) + 10) = 20000 * PerformanceFrequency.QuadPart / 1000;
  }
  else
  {
    *(_QWORD *)*(&P + 1) = 2560LL;
    *((_QWORD *)*(&P + 1) + 1) = 10000LL;
    *((_QWORD *)*(&P + 1) + 2) = 40000LL;
    *((_QWORD *)*(&P + 1) + 3) = 160000LL;
    *((_QWORD *)*(&P + 1) + 4) = 640000LL;
    *((_QWORD *)*(&P + 1) + 5) = 1280000LL;
    *((_QWORD *)*(&P + 1) + 6) = 2560000LL;
    *((_QWORD *)*(&P + 1) + 7) = 20000000LL;
    *((_QWORD *)*(&P + 1) + 8) = 60000000LL;
    *((_QWORD *)*(&P + 1) + 9) = 100000000LL;
    *((_QWORD *)*(&P + 1) + 10) = 200000000LL;
    *((_QWORD *)*(&P + 1) + 11) = 0x7FFFFFFFFFFFFFFFLL;
    *(_QWORD *)xmmword_1C0079780 = 640000LL;
    *((_QWORD *)xmmword_1C0079780 + 1) = 2560000LL;
    *((_QWORD *)xmmword_1C0079780 + 2) = 10240000LL;
    *((_QWORD *)xmmword_1C0079780 + 3) = 51200000LL;
    *((_QWORD *)xmmword_1C0079780 + 4) = 0x7FFFFFFFFFFFFFFFLL;
    *(_QWORD *)*(&xmmword_1C00797B0 + 1) = 2560LL;
    *((_QWORD *)*(&xmmword_1C00797B0 + 1) + 1) = 10000LL;
    *((_QWORD *)*(&xmmword_1C00797B0 + 1) + 2) = 40000LL;
    *((_QWORD *)*(&xmmword_1C00797B0 + 1) + 3) = 160000LL;
    *((_QWORD *)*(&xmmword_1C00797B0 + 1) + 4) = 640000LL;
    *((_QWORD *)*(&xmmword_1C00797B0 + 1) + 5) = 1280000LL;
    *((_QWORD *)*(&xmmword_1C00797B0 + 1) + 6) = 2560000LL;
    *((_QWORD *)*(&xmmword_1C00797B0 + 1) + 7) = 20000000LL;
    *((_QWORD *)*(&xmmword_1C00797B0 + 1) + 8) = 60000000LL;
    *((_QWORD *)*(&xmmword_1C00797B0 + 1) + 9) = 100000000LL;
    *((_QWORD *)*(&xmmword_1C00797B0 + 1) + 10) = 200000000LL;
  }
  *((_QWORD *)*(&xmmword_1C00797B0 + 1) + 11) = 0x7FFFFFFFFFFFFFFFLL;
  *(_QWORD *)xmmword_1C00797B0 = 4096LL;
  *((_QWORD *)xmmword_1C00797B0 + 1) = 0x2000LL;
  *((_QWORD *)xmmword_1C00797B0 + 2) = 0x4000LL;
  *((_QWORD *)xmmword_1C00797B0 + 3) = 0x8000LL;
  *((_QWORD *)xmmword_1C00797B0 + 4) = 0x10000LL;
  *((_QWORD *)xmmword_1C00797B0 + 5) = 0x20000LL;
  *((_QWORD *)xmmword_1C00797B0 + 6) = 0x40000LL;
  *((_QWORD *)xmmword_1C00797B0 + 7) = 0x100000LL;
  *((_QWORD *)xmmword_1C00797B0 + 8) = 0x7FFFFFFFFFFFFFFFLL;
  v13 = ~(KeGetRecommendedSharedDataAlignment() - 1);
  dword_1C00797F0 = v13 & (KeGetRecommendedSharedDataAlignment() + 23);
  g_RaidNumaHighestNodeNumber = KeQueryHighestNodeNumber();
  dword_1C00797F4 = dword_1C00797F0 * ((unsigned __int16)g_RaidNumaHighestNodeNumber + 1);
  return v0;
}

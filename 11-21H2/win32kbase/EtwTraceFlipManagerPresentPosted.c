/*
 * XREFs of EtwTraceFlipManagerPresentPosted @ 0x1C014D880
 * Callers:
 *     <none>
 * Callees:
 *     McTemplateK0qxxxx_EtwWriteTransfer @ 0x1C00D86DC (McTemplateK0qxxxx_EtwWriteTransfer.c)
 *     GetQpcFrequency @ 0x1C014C3C0 (GetQpcFrequency.c)
 */

void __fastcall EtwTraceFlipManagerPresentPosted(int a1, char a2, __int64 a3)
{
  __int64 v6; // rax
  double v7; // xmm0_8
  double v8; // xmm1_8
  unsigned __int64 v9; // rax
  double v10; // xmm0_8
  unsigned __int64 v11; // rbx
  LARGE_INTEGER PerformanceCounter; // rax
  double LowPart; // xmm6_8
  __int64 QpcFrequency; // rax
  __int64 v15; // r8
  double v16; // xmm0_8
  unsigned __int64 v17; // rax
  double v18; // xmm6_8
  union _LARGE_INTEGER v19; // [rsp+88h] [rbp+20h] BYREF

  if ( (W32kEtwEnabledKeyword & 0x8000000000001000uLL) != 0
    && (unsigned __int8)(byte_1C028DB38 - 1) > 2u
    && (qword_1C028DB20 & 0x8000000000001000uLL) != 0
    && (qword_1C028DB28 & 0x8000000000001000uLL) == qword_1C028DB28 )
  {
    v6 = qword_1C029E400;
    if ( !qword_1C029E400 )
    {
      v19.QuadPart = 0LL;
      KeQueryPerformanceCounter(&v19);
      _InterlockedCompareExchange64(&qword_1C029E400, v19.QuadPart, 0LL);
      v6 = qword_1C029E400;
    }
    if ( a3 < 0 )
      v7 = (double)(int)(a3 & 1 | ((unsigned __int64)a3 >> 1)) + (double)(int)(a3 & 1 | ((unsigned __int64)a3 >> 1));
    else
      v7 = (double)(int)a3;
    if ( v6 < 0 )
      v8 = (double)(int)(v6 & 1 | ((unsigned __int64)v6 >> 1)) + (double)(int)(v6 & 1 | ((unsigned __int64)v6 >> 1));
    else
      v8 = (double)(int)v6;
    v9 = 0LL;
    v10 = v7 / v8 * 10000000.0;
    if ( v10 >= 9.223372036854776e18 )
    {
      v10 = v10 - 9.223372036854776e18;
      if ( v10 < 9.223372036854776e18 )
        v9 = 0x8000000000000000uLL;
    }
    v11 = v9 + (unsigned int)(int)v10;
    PerformanceCounter = KeQueryPerformanceCounter(0LL);
    if ( PerformanceCounter.QuadPart < 0 )
      LowPart = (double)(int)(PerformanceCounter.LowPart & 1 | ((unsigned __int64)PerformanceCounter.QuadPart >> 1))
              + (double)(int)(PerformanceCounter.LowPart & 1 | ((unsigned __int64)PerformanceCounter.QuadPart >> 1));
    else
      LowPart = (double)(int)PerformanceCounter.LowPart;
    QpcFrequency = GetQpcFrequency();
    if ( QpcFrequency < 0 )
      v16 = (double)(int)(QpcFrequency & 1 | ((unsigned __int64)QpcFrequency >> 1))
          + (double)(int)(QpcFrequency & 1 | ((unsigned __int64)QpcFrequency >> 1));
    else
      v16 = (double)(int)QpcFrequency;
    v17 = 0LL;
    v18 = LowPart / v16 * 10000000.0;
    if ( v18 >= 9.223372036854776e18 )
    {
      v18 = v18 - 9.223372036854776e18;
      if ( v18 < 9.223372036854776e18 )
        v17 = 0x8000000000000000uLL;
    }
    if ( (Microsoft_Windows_Win32kEnableBits & 1) != 0 )
      McTemplateK0qxxxx_EtwWriteTransfer(
        v11 - (v17 + (unsigned int)(int)v18),
        v17 + (unsigned int)(int)v18,
        v15,
        a1,
        a2,
        v11,
        v17 + (int)v18,
        v11 != 0 ? v11 - (v17 + (int)v18) : 0);
  }
}

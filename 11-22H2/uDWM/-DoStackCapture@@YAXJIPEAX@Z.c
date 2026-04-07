/*
 * XREFs of ?DoStackCapture@@YAXJIPEAX@Z @ 0x18010DD1C
 * Callers:
 *     ?DoStackCaptureDirect@@YAXJI@Z @ 0x1800660FC (-DoStackCaptureDirect@@YAXJI@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18006610C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?MilInstrumentationHandleFailure_MaybeFailFast@@YAXJKIPEAX@Z @ 0x18010DF6C (-MilInstrumentationHandleFailure_MaybeFailFast@@YAXJKIPEAX@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x18005C460 (__security_check_cookie.c)
 *     memcpy_0 @ 0x180066358 (memcpy_0.c)
 *     ?MilWerRegisterMemoryBlock@@YAXPEBXI@Z @ 0x18010DFC8 (-MilWerRegisterMemoryBlock@@YAXPEBXI@Z.c)
 */

void __fastcall DoStackCapture(int a1, int a2, PVOID a3)
{
  volatile int v6; // ecx
  __int64 v7; // rdx
  char *v8; // rbx
  DWORD CurrentThreadId; // eax
  USHORT v10; // ax
  PVOID *v11; // rdx
  PVOID *v12; // rcx
  __int64 v13; // r8
  unsigned __int64 v14; // rcx
  __m128i si128; // xmm0
  PVOID BackTrace[12]; // [rsp+20h] [rbp-88h] BYREF

  if ( !_InterlockedCompareExchange(&dword_180148C58, 1, 0) )
  {
    MilWerRegisterMemoryBlock(&g_StackCaptureFrames, 0x3000u);
    MilWerRegisterMemoryBlock((const void *)&g_nCurrentStackCaptureIndex, 4u);
  }
  do
  {
    v6 = g_nCurrentStackCaptureIndex;
    v7 = (unsigned __int8)(g_nCurrentStackCaptureIndex + 1);
  }
  while ( v6 != _InterlockedCompareExchange(&g_nCurrentStackCaptureIndex, v7, g_nCurrentStackCaptureIndex) );
  v8 = (char *)&g_StackCaptureFrames + 48 * v7;
  *(_DWORD *)v8 = a1;
  CurrentThreadId = GetCurrentThreadId();
  *((_DWORD *)v8 + 2) = a2;
  *((_DWORD *)v8 + 1) = CurrentThreadId;
  QueryPerformanceCounter((LARGE_INTEGER *)v8 + 2);
  *(_OWORD *)(v8 + 24) = 0LL;
  *((_QWORD *)v8 + 5) = 0LL;
  v10 = RtlCaptureStackBackTrace(1u, 0xBu, BackTrace, 0LL);
  v11 = BackTrace;
  v12 = &BackTrace[v10];
  if ( BackTrace != v12 )
  {
    do
    {
      if ( *v11 == a3 )
        break;
      ++v11;
    }
    while ( v11 != v12 );
  }
  v13 = 3LL;
  v14 = v12 - v11;
  if ( v14 > 3 || (v13 = v14) != 0 )
  {
    memcpy_0(v8 + 24, v11, 8 * v13);
  }
  else
  {
    si128 = _mm_load_si128((const __m128i *)&_xmm_e0e0e0e0e0e0e0e0e0e0e0e0e0e0e0e0);
    *(__m128i *)(v8 + 24) = si128;
    *((_QWORD *)v8 + 5) = si128.m128i_i64[0];
  }
}

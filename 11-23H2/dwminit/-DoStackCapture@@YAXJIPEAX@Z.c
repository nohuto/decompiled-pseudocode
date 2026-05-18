/*
 * XREFs of ?DoStackCapture@@YAXJIPEAX@Z @ 0x18000CC34
 * Callers:
 *     ?DoStackCaptureDirect@@YAXJI@Z @ 0x18000CD8C (-DoStackCaptureDirect@@YAXJI@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18000CEAC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?MilInstrumentationHandleFailure_MaybeFailFast@@YAXJKIPEAX@Z @ 0x18000CF28 (-MilInstrumentationHandleFailure_MaybeFailFast@@YAXJKIPEAX@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x180001CB0 (__security_check_cookie.c)
 *     ??$_Copy_memmove@PEAPEAXPEAPEAX@std@@YAPEAPEAXPEAPEAX00@Z @ 0x18000CBFC (--$_Copy_memmove@PEAPEAXPEAPEAX@std@@YAPEAPEAXPEAPEAX00@Z.c)
 *     ?EnsureStackCaptureRegisteredWithWER@@YAXXZ @ 0x18000CD9C (-EnsureStackCaptureRegisteredWithWER@@YAXXZ.c)
 */

void __fastcall DoStackCapture(int a1, int a2, PVOID a3)
{
  volatile int v6; // r9d
  __int64 v7; // r10
  char *v8; // rbx
  DWORD CurrentThreadId; // eax
  unsigned __int64 *v10; // rax
  USHORT v11; // ax
  PVOID *v12; // rcx
  PVOID *v13; // rdx
  __int64 v14; // rax
  unsigned __int64 v15; // rdx
  __m128i si128; // xmm0
  PVOID BackTrace[12]; // [rsp+20h] [rbp-78h] BYREF

  EnsureStackCaptureRegisteredWithWER();
  do
  {
    v6 = g_nCurrentStackCaptureIndex;
    v7 = (unsigned __int8)(g_nCurrentStackCaptureIndex + 1);
  }
  while ( v6 != _InterlockedCompareExchange(&g_nCurrentStackCaptureIndex, v7, g_nCurrentStackCaptureIndex) );
  v8 = (char *)&g_StackCaptureFrames + 56 * v7;
  *(_DWORD *)v8 = a1;
  CurrentThreadId = GetCurrentThreadId();
  *((_DWORD *)v8 + 2) = a2;
  *((_DWORD *)v8 + 1) = CurrentThreadId;
  QueryPerformanceCounter((LARGE_INTEGER *)v8 + 2);
  v10 = g_pFrameId;
  if ( g_pFrameId )
    v10 = (unsigned __int64 *)*g_pFrameId;
  *((_QWORD *)v8 + 6) = v10;
  *(_OWORD *)(v8 + 24) = 0LL;
  *((_QWORD *)v8 + 5) = 0LL;
  v11 = RtlCaptureStackBackTrace(1u, 0xBu, BackTrace, 0LL);
  v12 = BackTrace;
  v13 = &BackTrace[v11];
  if ( BackTrace != v13 )
  {
    do
    {
      if ( *v12 == a3 )
        break;
      ++v12;
    }
    while ( v12 != v13 );
  }
  v14 = 3LL;
  v15 = v13 - v12;
  if ( v15 > 3 || (v14 = v15) != 0 )
  {
    std::_Copy_memmove<void * *,void * *>(v12, (__int64)&v12[v14], v8 + 24);
  }
  else
  {
    si128 = _mm_load_si128((const __m128i *)&_xmm_e0e0e0e0e0e0e0e0e0e0e0e0e0e0e0e0);
    *(__m128i *)(v8 + 24) = si128;
    *((_QWORD *)v8 + 5) = si128.m128i_i64[0];
  }
}

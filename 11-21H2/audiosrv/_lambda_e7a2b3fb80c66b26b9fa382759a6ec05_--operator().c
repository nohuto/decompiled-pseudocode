/*
 * XREFs of _lambda_e7a2b3fb80c66b26b9fa382759a6ec05_::operator() @ 0x1800DF6A0
 * Callers:
 *     ?GetAudioSessions@CAudioSessionManager@@UEAAJPEAUIAudioProcess@@PEAKPEAPEAPEAXPEAPEAPEAG@Z @ 0x1800E0900 (-GetAudioSessions@CAudioSessionManager@@UEAAJPEAUIAudioProcess@@PEAKPEAPEAPEAXPEAPEAPEAG@Z.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x1800084A0 (--3@YAXPEAX@Z.c)
 */

void __fastcall lambda_e7a2b3fb80c66b26b9fa382759a6ec05_::operator()(__int64 a1)
{
  int v1; // ebx
  __int64 v3; // rsi

  v1 = 0;
  if ( **(int **)a1 > 0 )
  {
    v3 = 0LL;
    do
    {
      operator delete(*(void **)(**(_QWORD **)(a1 + 8) + v3));
      v3 += 8LL;
      ++v1;
    }
    while ( v1 < **(_DWORD **)a1 );
  }
  operator delete(**(void ***)(a1 + 8));
}

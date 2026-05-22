/*
 * XREFs of ?CheckForShellGesture@ShellGesturesRecognizer@@AEAAXAEAURecognitionState@1@_N@Z @ 0x18016D2D8
 * Callers:
 *     ?OnInput@ShellGesturesProcessor@@UEAAJPEAUInputInfo@@PEAVInputContext@@PEAUContextualProcessorResponse@@@Z @ 0x18016F090 (-OnInput@ShellGesturesProcessor@@UEAAJPEAUInputInfo@@PEAVInputContext@@PEAUContextualProcessorRe.c)
 * Callees:
 *     <none>
 */

void __fastcall ShellGesturesRecognizer::CheckForShellGesture(
        ShellGesturesRecognizer *this,
        struct ShellGesturesRecognizer::RecognitionState *a2,
        char a3)
{
  __int64 **v6; // r10
  int v7; // esi
  __int64 *i; // r9
  __int64 **v9; // r8
  __int64 *j; // rdx
  __int64 v11; // rax
  int v12; // r8d
  unsigned __int64 v13; // rax
  __int64 v14; // rcx
  unsigned __int64 v15; // rax
  __int64 v16; // rcx
  _QWORD *v17; // r8
  _QWORD *k; // rdx
  __int64 v19; // rax
  _QWORD *v20; // rcx
  __int64 v21; // rax

  if ( *(_DWORD *)a2 == 2 )
  {
    v6 = (__int64 **)*((_QWORD *)this + 16);
    v7 = dword_180268024;
    for ( i = *v6; i != (__int64 *)v6; i = (__int64 *)*i )
    {
      v9 = (__int64 **)*((_QWORD *)this + 16);
      for ( j = *v9; j != (__int64 *)v9; j = (__int64 *)*j )
      {
        if ( *((_DWORD *)i + 4) != *((_DWORD *)j + 4) )
        {
          v11 = j[4];
          if ( (int)((i[4] - v11) * (i[4] - v11) + (HIDWORD(i[4]) - HIDWORD(v11)) * (HIDWORD(i[4]) - HIDWORD(v11))) >= (unsigned __int64)(unsigned int)(v7 * v7) )
          {
            *(_DWORD *)a2 = 1;
            *((_DWORD *)a2 + 1) = 5;
            v7 = dword_180268024;
          }
        }
      }
    }
    v12 = *(_DWORD *)a2;
    if ( *(_DWORD *)a2 == 2 && *((_DWORD *)this + 20) != *((_QWORD *)this + 17) )
    {
      *(_DWORD *)a2 = 1;
      v12 = 1;
      *((_DWORD *)a2 + 1) = 6;
    }
    if ( *((_DWORD *)this + 26) < 2u && *((_DWORD *)this + 20) >= 2u )
    {
      *((_QWORD *)a2 + 1) = (*((_QWORD *)this + 12) - *((_QWORD *)this + 11)) / 1000000LL;
      if ( *((_DWORD *)this + 21) == 1 )
      {
        v13 = 0LL;
      }
      else
      {
        v14 = *((_QWORD *)this + 14) - *((_QWORD *)this + 11);
        v13 = ((__int64)((unsigned __int128)(v14 * (__int128)0x431BDE82D7B634DBLL) >> 64) >> 18)
            + ((unsigned __int64)((unsigned __int128)(v14 * (__int128)0x431BDE82D7B634DBLL) >> 64) >> 63)
            + 1;
      }
      *((_QWORD *)a2 + 3) = v13;
    }
    if ( *((_DWORD *)this + 26) < 3u && *((_DWORD *)this + 20) >= 3u )
    {
      *((_QWORD *)a2 + 2) = (*((_QWORD *)this + 12) - *((_QWORD *)this + 11)) / 1000000LL;
      if ( *((_DWORD *)this + 21) == 1 )
      {
        v15 = 0LL;
      }
      else
      {
        v16 = *((_QWORD *)this + 14) - *((_QWORD *)this + 11);
        v15 = ((__int64)((unsigned __int128)(v16 * (__int128)0x431BDE82D7B634DBLL) >> 64) >> 18)
            + ((unsigned __int64)((unsigned __int128)(v16 * (__int128)0x431BDE82D7B634DBLL) >> 64) >> 63)
            + 1;
      }
      *((_QWORD *)a2 + 4) = v15;
    }
    if ( v12 == 2 )
    {
      if ( *((_DWORD *)this + 20) == 1 )
      {
        if ( a3 )
        {
          v20 = (_QWORD *)**((_QWORD **)this + 16);
          if ( v20[6] - v20[5] >= 1000000 * ShellGesturesRecognizer::s_thresholds )
          {
            *(_DWORD *)a2 = 1;
            *((_DWORD *)a2 + 1) = 1;
          }
          v21 = v20[3];
          if ( (int)((v20[4] - v21) * (v20[4] - v21)
                   + (HIDWORD(v20[4]) - HIDWORD(v21)) * (HIDWORD(v20[4]) - HIDWORD(v21))) >= (unsigned __int64)(unsigned int)(dword_180268010 * dword_180268010) )
          {
            *((_DWORD *)a2 + 1) = 2;
LABEL_43:
            *(_DWORD *)a2 = 1;
          }
        }
      }
      else if ( *((_DWORD *)this + 20) == 2 )
      {
        if ( a3 )
        {
          v17 = (_QWORD *)*((_QWORD *)this + 16);
          for ( k = (_QWORD *)*v17; k != v17; k = (_QWORD *)*k )
          {
            if ( k[6] - k[5] >= 1000000 * qword_180268018 )
            {
              *((_DWORD *)a2 + 1) = 3;
              goto LABEL_43;
            }
            v19 = k[3];
            if ( (int)((k[4] - v19) * (k[4] - v19) + (HIDWORD(k[4]) - HIDWORD(v19)) * (HIDWORD(k[4]) - HIDWORD(v19))) >= (unsigned __int64)(unsigned int)(dword_180268020 * dword_180268020) )
            {
              *((_DWORD *)a2 + 1) = 4;
              goto LABEL_43;
            }
          }
        }
      }
      else
      {
        *(_DWORD *)a2 = 3;
      }
    }
  }
}

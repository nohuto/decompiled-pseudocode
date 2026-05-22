/*
 * XREFs of ?CheckForShellGesture@ShellGesturesRecognizer@@AEAAXAEAURecognitionState@1@_N@Z @ 0x18014EAE8
 * Callers:
 *     ?OnInput@ShellGesturesProcessor@@UEAAJPEAUInputInfo@@PEAVInputContext@@PEAUContextualProcessorResponse@@@Z @ 0x180150C00 (-OnInput@ShellGesturesProcessor@@UEAAJPEAUInputInfo@@PEAVInputContext@@PEAUContextualProcessorRe.c)
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
  unsigned int v13; // eax
  unsigned __int64 v14; // rax
  __int64 v15; // rcx
  unsigned __int64 v16; // rax
  __int64 v17; // rcx
  _QWORD *v18; // r8
  _QWORD *k; // rdx
  __int64 v20; // rax
  _QWORD *v21; // rcx
  __int64 v22; // rax

  if ( *(_DWORD *)a2 )
    return;
  v6 = (__int64 **)*((_QWORD *)this + 16);
  v7 = dword_180241FE4;
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
          *(_DWORD *)a2 = 2;
          *((_DWORD *)a2 + 1) = 5;
          v7 = dword_180241FE4;
        }
      }
    }
  }
  v12 = *(_DWORD *)a2;
  if ( !*(_DWORD *)a2 && *((_DWORD *)this + 20) != *((_QWORD *)this + 17) )
  {
    *(_DWORD *)a2 = 2;
    v12 = 2;
    *((_DWORD *)a2 + 1) = 6;
  }
  v13 = *((_DWORD *)this + 26);
  if ( v13 >= 2 )
  {
LABEL_20:
    if ( v13 >= 3 )
      goto LABEL_26;
    goto LABEL_21;
  }
  if ( *((_DWORD *)this + 20) >= 2u )
  {
    *((_QWORD *)a2 + 1) = (*((_QWORD *)this + 12) - *((_QWORD *)this + 11)) / 1000000LL;
    if ( *((_DWORD *)this + 21) == 1 )
    {
      v14 = 0LL;
    }
    else
    {
      v15 = *((_QWORD *)this + 14) - *((_QWORD *)this + 11);
      v14 = ((__int64)((unsigned __int128)(v15 * (__int128)0x431BDE82D7B634DBLL) >> 64) >> 18)
          + ((unsigned __int64)((unsigned __int128)(v15 * (__int128)0x431BDE82D7B634DBLL) >> 64) >> 63)
          + 1;
    }
    *((_QWORD *)a2 + 3) = v14;
    v13 = *((_DWORD *)this + 26);
    goto LABEL_20;
  }
LABEL_21:
  if ( *((_DWORD *)this + 20) >= 3u )
  {
    *((_QWORD *)a2 + 2) = (*((_QWORD *)this + 12) - *((_QWORD *)this + 11)) / 1000000LL;
    if ( *((_DWORD *)this + 21) == 1 )
    {
      v16 = 0LL;
    }
    else
    {
      v17 = *((_QWORD *)this + 14) - *((_QWORD *)this + 11);
      v16 = ((__int64)((unsigned __int128)(v17 * (__int128)0x431BDE82D7B634DBLL) >> 64) >> 18)
          + ((unsigned __int64)((unsigned __int128)(v17 * (__int128)0x431BDE82D7B634DBLL) >> 64) >> 63)
          + 1;
    }
    *((_QWORD *)a2 + 4) = v16;
  }
LABEL_26:
  if ( !v12 )
  {
    if ( *((_DWORD *)this + 20) == 1 )
    {
      if ( a3 )
      {
        v21 = (_QWORD *)**((_QWORD **)this + 16);
        if ( v21[6] - v21[5] >= 1000000 * ShellGesturesRecognizer::s_thresholds )
        {
          *(_DWORD *)a2 = 2;
          *((_DWORD *)a2 + 1) = 1;
        }
        v22 = v21[3];
        if ( (int)((v21[4] - v22) * (v21[4] - v22) + (HIDWORD(v21[4]) - HIDWORD(v22)) * (HIDWORD(v21[4]) - HIDWORD(v22))) >= (unsigned __int64)(unsigned int)(dword_180241FD0 * dword_180241FD0) )
        {
          *((_DWORD *)a2 + 1) = 2;
LABEL_43:
          *(_DWORD *)a2 = 2;
        }
      }
    }
    else if ( *((_DWORD *)this + 20) == 2 )
    {
      if ( a3 )
      {
        v18 = (_QWORD *)*((_QWORD *)this + 16);
        for ( k = (_QWORD *)*v18; k != v18; k = (_QWORD *)*k )
        {
          if ( k[6] - k[5] >= 1000000 * qword_180241FD8 )
          {
            *((_DWORD *)a2 + 1) = 3;
            goto LABEL_43;
          }
          v20 = k[3];
          if ( (int)((k[4] - v20) * (k[4] - v20) + (HIDWORD(k[4]) - HIDWORD(v20)) * (HIDWORD(k[4]) - HIDWORD(v20))) >= (unsigned __int64)(unsigned int)(dword_180241FE0 * dword_180241FE0) )
          {
            *((_DWORD *)a2 + 1) = 4;
            goto LABEL_43;
          }
        }
      }
    }
    else
    {
      *(_DWORD *)a2 = 1;
    }
  }
}

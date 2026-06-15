/*
 * XREFs of ?Replace@?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@QEAAHPEBG0@Z @ 0x18001E830
 * Callers:
 *     ?ToPersistedString@CAudioSessionInstanceId@@QEBAJAEAV?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@H@Z @ 0x18001DB80 (-ToPersistedString@CAudioSessionInstanceId@@QEBAJAEAV-$CStringT@GV-$StrTraitATL@GV-$ChTraitsCRT@.c)
 *     ?CalculateStaticId@CAppAudioSessionId@@AEAAJXZ @ 0x18001DD20 (-CalculateStaticId@CAppAudioSessionId@@AEAAJXZ.c)
 *     ?CalculateStaticId@CAudioSessionInstanceId@@AEAAJXZ @ 0x18001E150 (-CalculateStaticId@CAudioSessionInstanceId@@AEAAJXZ.c)
 *     ?EscapeIdentifierString@CAudioIdentifier@@SAXAEAV?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@@Z @ 0x1800E63F4 (-EscapeIdentifierString@CAudioIdentifier@@SAXAEAV-$CStringT@GV-$StrTraitATL@GV-$ChTraitsCRT@G@AT.c)
 * Callees:
 *     ?PrepareWrite2@?$CSimpleStringT@G$0A@@ATL@@AEAAXH@Z @ 0x18001C8C0 (-PrepareWrite2@-$CSimpleStringT@G$0A@@ATL@@AEAAXH@Z.c)
 *     _invalid_parameter_noinfo @ 0x18005F922 (_invalid_parameter_noinfo.c)
 *     memset_0 @ 0x18005F9D8 (memset_0.c)
 *     memcpy_0 @ 0x180062529 (memcpy_0.c)
 *     memmove_0 @ 0x18006A67B (memmove_0.c)
 *     ?AtlThrowImpl@ATL@@YAXJ@Z @ 0x1800C3178 (-AtlThrowImpl@ATL@@YAXJ@Z.c)
 */

__int64 ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>::Replace(
        __int64 *a1,
        const wchar_t *a2,
        _WORD *a3,
        ...)
{
  __int64 v4; // rbx
  __int64 v5; // rdi
  const wchar_t *v6; // rsi
  int v7; // r15d
  unsigned __int64 v8; // r12
  wchar_t *v9; // rcx
  __int64 v10; // rax
  unsigned __int64 v12; // r8
  __int64 v13; // r13
  int v14; // r12d
  int v15; // edx
  const wchar_t *v16; // rsi
  wchar_t *v17; // r13
  size_t v18; // rcx
  __int64 v19; // r9
  wchar_t *v20; // rdx
  size_t v21; // r8
  wchar_t *v22; // rax
  __int64 v23; // rax
  __int64 v24; // r13
  __int64 v25; // [rsp+20h] [rbp-68h]
  unsigned __int64 v26; // [rsp+38h] [rbp-50h]
  int v28; // [rsp+98h] [rbp+10h]
  int v30; // [rsp+A8h] [rbp+20h]

  if ( !a2 )
    return 0LL;
  v4 = -1LL;
  do
    ++v4;
  while ( a2[v4] );
  if ( !(_DWORD)v4 )
    return 0LL;
  if ( a3 )
  {
    v5 = -1LL;
    do
      ++v5;
    while ( a3[v5] );
  }
  else
  {
    LODWORD(v5) = 0;
  }
  v6 = (const wchar_t *)*a1;
  v7 = 0;
  v8 = *a1 + 2LL * *(int *)(*a1 - 16);
  if ( *a1 < v8 )
  {
    do
    {
      v9 = wcsstr(v6, a2);
      if ( v9 )
      {
        v24 = (int)v4;
        do
        {
          v6 = &v9[v24];
          ++v7;
          v9 = wcsstr(&v9[v24], a2);
        }
        while ( v9 );
      }
      if ( v6 )
      {
        v10 = -1LL;
        do
          ++v10;
        while ( v6[v10] );
      }
      else
      {
        LODWORD(v10) = 0;
      }
      v6 += (int)v10 + 1;
    }
    while ( (unsigned __int64)v6 < v8 );
    if ( v7 > 0 )
    {
      v12 = *a1;
      v25 = *a1;
      v13 = *(int *)(*a1 - 16);
      v14 = v13 + v7 * (v5 - v4);
      v28 = *(_DWORD *)(*a1 - 16);
      v15 = v28;
      if ( v14 > (int)v13 )
        v15 = v13 + v7 * (v5 - v4);
      if ( ((*(_DWORD *)(*a1 - 12) - v15) | (1 - *(_DWORD *)(v12 - 8))) < 0 )
      {
        ATL::CSimpleStringT<unsigned short,0>::PrepareWrite2(a1, v15);
        v12 = *a1;
        v25 = *a1;
      }
      v16 = (const wchar_t *)v12;
      v26 = v12 + 2 * v13;
      if ( v12 < v26 )
      {
        do
        {
          v17 = wcsstr(v16, a2);
          if ( v17 )
          {
            v18 = (int)v5;
            v19 = (int)v4;
            do
            {
              v16 = &v17[v18];
              v30 = v28 - (((__int64)v17 - v25) >> 1) - v4;
              v20 = &v17[v19];
              v21 = 2LL * v30;
              if ( v21 )
              {
                if ( !v16 || !v20 )
                  goto LABEL_47;
                memmove_0(&v17[v18], v20, v21);
                v18 = (int)v5;
              }
              if ( v18 * 2 )
              {
                if ( !v17 )
                  goto LABEL_47;
                if ( !a3 )
                {
                  memset_0(v17, 0, v18 * 2);
LABEL_47:
                  *(_DWORD *)_o__errno(v18 * 2, v20) = 22;
                  invalid_parameter_noinfo();
                  ATL::AtlThrowImpl(-2147024809);
                }
                memcpy_0(v17, a3, v18 * 2);
              }
              v17[(int)v5 + v30] = 0;
              v28 += v5 - v4;
              v22 = wcsstr(v16, a2);
              v18 = (int)v5;
              v17 = v22;
              v19 = (int)v4;
            }
            while ( v22 );
          }
          if ( v16 )
          {
            v23 = -1LL;
            do
              ++v23;
            while ( v16[v23] );
          }
          else
          {
            LODWORD(v23) = 0;
          }
          v16 += (int)v23 + 1;
        }
        while ( (unsigned __int64)v16 < v26 );
      }
      if ( v14 < 0 || v14 > *(_DWORD *)(*a1 - 12) )
        ATL::AtlThrowImpl(-2147024809);
      *(_DWORD *)(*a1 - 16) = v14;
      *(_WORD *)(*a1 + 2LL * v14) = 0;
    }
  }
  return (unsigned int)v7;
}

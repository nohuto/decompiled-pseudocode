/*
 * XREFs of ?Replace@?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@QEAAHPEBG0@Z @ 0x18001CEE4
 * Callers:
 *     ?EscapeIdentifierString@CAudioIdentifier@@SAXAEAV?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@@Z @ 0x18001CEA4 (-EscapeIdentifierString@CAudioIdentifier@@SAXAEAV-$CStringT@GV-$StrTraitATL@GV-$ChTraitsCRT@G@AT.c)
 * Callees:
 *     memcpy_s @ 0x1800106EC (memcpy_s.c)
 *     ?SafeStringLen@?$ChTraitsCRT@G@ATL@@SAHPEBG@Z @ 0x18001D150 (-SafeStringLen@-$ChTraitsCRT@G@ATL@@SAHPEBG@Z.c)
 *     ?PrepareWrite2@?$CSimpleStringT@G$0A@@ATL@@AEAAXH@Z @ 0x180036700 (-PrepareWrite2@-$CSimpleStringT@G$0A@@ATL@@AEAAXH@Z.c)
 *     ?SetLength@?$CSimpleStringT@G$0A@@ATL@@AEAAXH@Z @ 0x18004237C (-SetLength@-$CSimpleStringT@G$0A@@ATL@@AEAAXH@Z.c)
 *     _invalid_parameter_noinfo @ 0x180067992 (_invalid_parameter_noinfo.c)
 *     memmove_0 @ 0x1800759E8 (memmove_0.c)
 *     ?AtlThrowImpl@ATL@@YAXJ@Z @ 0x1800CE814 (-AtlThrowImpl@ATL@@YAXJ@Z.c)
 */

__int64 ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>::Replace(
        const wchar_t **a1,
        const wchar_t *a2,
        _WORD *a3,
        __int64 a4,
        ...)
{
  __int64 v6; // rdi
  __int64 v7; // rsi
  const wchar_t *v8; // rbx
  int v9; // ebp
  unsigned __int64 v10; // r15
  wchar_t *i; // rax
  __int64 v12; // rax
  __int64 v14; // r15
  __int64 v15; // rdx
  const wchar_t *v16; // r13
  const wchar_t *v17; // rbx
  __int64 v18; // rdx
  __int64 v19; // r8
  __int64 v20; // r9
  wchar_t *v21; // rcx
  rsize_t v22; // r10
  wchar_t *v23; // rdx
  size_t v24; // r8
  errno_t v25; // eax
  wchar_t *v26; // rax
  wchar_t *Destination; // [rsp+20h] [rbp-58h]
  unsigned __int64 v28; // [rsp+38h] [rbp-40h]
  int v29; // [rsp+88h] [rbp+10h]
  unsigned int v31; // [rsp+98h] [rbp+20h]

  if ( !a2 )
    return 0LL;
  v6 = -1LL;
  do
    ++v6;
  while ( a2[v6] );
  if ( !(_DWORD)v6 )
    return 0LL;
  if ( a3 )
  {
    v7 = -1LL;
    do
      ++v7;
    while ( a3[v7] );
  }
  else
  {
    LODWORD(v7) = 0;
  }
  v8 = *a1;
  v9 = 0;
  v10 = (unsigned __int64)&(*a1)[*((int *)*a1 - 4)];
  if ( (unsigned __int64)*a1 < v10 )
  {
    do
    {
      for ( i = wcsstr(v8, a2); i; i = wcsstr(v8, a2) )
      {
        v8 = &i[(int)v6];
        ++v9;
      }
      if ( v8 )
      {
        v12 = -1LL;
        do
          ++v12;
        while ( v8[v12] );
      }
      else
      {
        LODWORD(v12) = 0;
      }
      v8 += (int)v12 + 1;
    }
    while ( (unsigned __int64)v8 < v10 );
    if ( v9 > 0 )
    {
      v14 = *((int *)*a1 - 4);
      v31 = v14 + v9 * (v7 - v6);
      v15 = v31;
      if ( (int)v31 <= (int)v14 )
        v15 = (unsigned int)v14;
      if ( (int)((*((_DWORD *)*a1 - 3) - v15) | (1 - *((_DWORD *)*a1 - 2))) < 0 )
        ATL::CSimpleStringT<unsigned short,0>::PrepareWrite2(a1, v15);
      v16 = *a1;
      v17 = *a1;
      v28 = (unsigned __int64)&(*a1)[v14];
      if ( (unsigned __int64)*a1 < v28 )
      {
        do
        {
          Destination = wcsstr(v17, a2);
          v21 = Destination;
          if ( Destination )
          {
            v20 = (int)v6;
            v22 = (int)v7;
            do
            {
              v17 = &v21[v22];
              v29 = v14 - (v21 - v16) - v6;
              v23 = &v21[v20];
              v24 = 2LL * v29;
              if ( v24 )
              {
                if ( !v17 || !v23 )
                {
                  *(_DWORD *)_o__errno(v21) = 22;
                  invalid_parameter_noinfo();
LABEL_41:
                  ATL::AtlThrowImpl(-2147024809);
                }
                memmove_0(&v21[v22], v23, v24);
                v21 = Destination;
                v22 = (int)v7;
              }
              v25 = memcpy_s(v21, v22 * 2, a3, v22 * 2);
              if ( v25 )
              {
                if ( v25 == 12 )
                  ATL::AtlThrowImpl(-2147024882);
                if ( v25 == 22 || v25 == 34 )
                  goto LABEL_41;
                if ( v25 != 80 )
                  ATL::AtlThrowImpl(-2147467259);
              }
              Destination[(int)v7 + v29] = 0;
              LODWORD(v14) = v7 - v6 + v14;
              v26 = wcsstr(v17, a2);
              v22 = (int)v7;
              v21 = v26;
              v20 = (int)v6;
              Destination = v26;
            }
            while ( v26 );
          }
          v17 += (int)(ATL::ChTraitsCRT<unsigned short>::SafeStringLen(v17, v18, v19, v20) + 1);
        }
        while ( (unsigned __int64)v17 < v28 );
      }
      ATL::CSimpleStringT<unsigned short,0>::SetLength(a1, v31);
    }
  }
  return (unsigned int)v9;
}

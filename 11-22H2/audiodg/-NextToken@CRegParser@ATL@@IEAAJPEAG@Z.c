/*
 * XREFs of ?NextToken@CRegParser@ATL@@IEAAJPEAG@Z @ 0x1400922C4
 * Callers:
 *     ?AddValue@CRegParser@ATL@@IEAAJAEAVCRegKey@2@PEBGPEAG@Z @ 0x140090CF8 (-AddValue@CRegParser@ATL@@IEAAJAEAVCRegKey@2@PEBGPEAG@Z.c)
 *     ?RegisterBuffer@CRegParser@ATL@@QEAAJPEAGH@Z @ 0x1400932A4 (-RegisterBuffer@CRegParser@ATL@@QEAAJPEAGH@Z.c)
 *     ?RegisterSubkeys@CRegParser@ATL@@IEAAJPEAGPEAUHKEY__@@HH@Z @ 0x14009365C (-RegisterSubkeys@CRegParser@ATL@@IEAAJPEAGPEAUHKEY__@@HH@Z.c)
 *     ?SkipAssignment@CRegParser@ATL@@IEAAJPEAG@Z @ 0x140093ED4 (-SkipAssignment@CRegParser@ATL@@IEAAJPEAG@Z.c)
 * Callees:
 *     ?SkipWhiteSpace@CRegParser@ATL@@IEAAXXZ @ 0x140093F70 (-SkipWhiteSpace@CRegParser@ATL@@IEAAXXZ.c)
 */

__int64 __fastcall ATL::CRegParser::NextToken(ATL::CRegParser *this, unsigned __int16 *a2)
{
  const WCHAR *v4; // rsi
  __int16 v5; // ax
  unsigned __int16 *v6; // rbp
  LPWSTR v7; // rax
  WCHAR v8; // cx
  char *v9; // rsi
  LPWSTR v10; // rax
  __int64 v11; // rax
  __int64 v12; // rsi
  __int64 v13; // rcx
  LPWSTR v15; // rax
  __int64 v16; // rax
  signed __int64 v17; // rsi
  __int64 v18; // rcx

  ATL::CRegParser::SkipWhiteSpace(this);
  v4 = *(const WCHAR **)this;
  v5 = **(_WORD **)this;
  if ( !v5 )
    return 2147614729LL;
  v6 = a2 + 4096;
  if ( v5 != 39 )
  {
    do
    {
      if ( v5 == 9 || v5 == 10 || v5 == 13 || v5 == 32 )
        break;
      v15 = CharNextW(v4);
      *(_QWORD *)this = v15;
      v16 = v15 - v4;
      if ( &a2[v16 + 1] >= v6 )
        return 2147614729LL;
      if ( (int)v16 > 0 )
      {
        v17 = (char *)v4 - (char *)a2;
        v18 = (unsigned int)v16;
        do
        {
          *a2 = *(unsigned __int16 *)((char *)a2 + v17);
          ++a2;
          --v18;
        }
        while ( v18 );
      }
      v4 = *(const WCHAR **)this;
      v5 = **(_WORD **)this;
    }
    while ( v5 );
    if ( a2 < v6 )
    {
      *a2 = 0;
      return 0LL;
    }
    return 2147614729LL;
  }
  v7 = CharNextW(*(LPCWSTR *)this);
  *(_QWORD *)this = v7;
  v8 = *v7;
  if ( *v7 )
  {
    while ( v8 != 39 || *CharNextW(v7) == 39 )
    {
      if ( **(_WORD **)this == 39 )
        *(_QWORD *)this = CharNextW(*(LPCWSTR *)this);
      v9 = *(char **)this;
      v10 = CharNextW(*(LPCWSTR *)this);
      *(_QWORD *)this = v10;
      v11 = ((char *)v10 - v9) >> 1;
      if ( &a2[v11 + 1] < v6 )
      {
        if ( (int)v11 > 0 )
        {
          v12 = v9 - (char *)a2;
          v13 = (unsigned int)v11;
          do
          {
            *a2 = *(unsigned __int16 *)((char *)a2 + v12);
            ++a2;
            --v13;
          }
          while ( v13 );
        }
        v7 = *(LPWSTR *)this;
        v8 = **(_WORD **)this;
        if ( v8 )
          continue;
      }
      return 2147614729LL;
    }
  }
  if ( !**(_WORD **)this || a2 >= v6 )
    return 2147614729LL;
  *a2 = 0;
  *(_QWORD *)this = CharNextW(*(LPCWSTR *)this);
  return 0LL;
}

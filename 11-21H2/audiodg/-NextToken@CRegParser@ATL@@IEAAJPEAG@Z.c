/*
 * XREFs of ?NextToken@CRegParser@ATL@@IEAAJPEAG@Z @ 0x1400854A0
 * Callers:
 *     ?AddValue@CRegParser@ATL@@IEAAJAEAVCRegKey@2@PEBGPEAG@Z @ 0x140083EF8 (-AddValue@CRegParser@ATL@@IEAAJAEAVCRegKey@2@PEBGPEAG@Z.c)
 *     ?RegisterBuffer@CRegParser@ATL@@QEAAJPEAGH@Z @ 0x140086454 (-RegisterBuffer@CRegParser@ATL@@QEAAJPEAGH@Z.c)
 *     ?RegisterSubkeys@CRegParser@ATL@@IEAAJPEAGPEAUHKEY__@@HH@Z @ 0x14008680C (-RegisterSubkeys@CRegParser@ATL@@IEAAJPEAGPEAUHKEY__@@HH@Z.c)
 *     ?SkipAssignment@CRegParser@ATL@@IEAAJPEAG@Z @ 0x140086FA4 (-SkipAssignment@CRegParser@ATL@@IEAAJPEAG@Z.c)
 * Callees:
 *     ?IsSpace@CRegParser@ATL@@IEAAHG@Z @ 0x140085474 (-IsSpace@CRegParser@ATL@@IEAAHG@Z.c)
 *     ?SkipWhiteSpace@CRegParser@ATL@@IEAAXXZ @ 0x140087030 (-SkipWhiteSpace@CRegParser@ATL@@IEAAXXZ.c)
 */

__int64 __fastcall ATL::CRegParser::NextToken(ATL::CRegParser *this, unsigned __int16 *a2)
{
  ATL::CRegParser *v4; // rcx
  const WCHAR *v5; // rsi
  unsigned __int16 v6; // dx
  unsigned __int16 *v7; // rbp
  LPWSTR v8; // rcx
  WCHAR i; // ax
  const WCHAR *v10; // rsi
  LPWSTR v11; // rax
  __int64 v12; // rdx
  signed __int64 v13; // rsi
  __int64 v14; // rcx
  LPWSTR v15; // rax
  __int64 v16; // rax
  signed __int64 v17; // rsi

  ATL::CRegParser::SkipWhiteSpace(this);
  v5 = *(const WCHAR **)this;
  v6 = **(_WORD **)this;
  if ( v6 )
  {
    v7 = a2 + 4096;
    if ( v6 == 39 )
    {
      v8 = CharNextW(*(LPCWSTR *)this);
      *(_QWORD *)this = v8;
      for ( i = *v8; i && (i != 39 || *CharNextW(v8) == 39); i = *v8 )
      {
        v10 = *(const WCHAR **)this;
        if ( **(_WORD **)this == 39 )
        {
          v10 = CharNextW(*(LPCWSTR *)this);
          *(_QWORD *)this = v10;
        }
        v11 = CharNextW(v10);
        *(_QWORD *)this = v11;
        v8 = v11;
        v12 = v11 - v10;
        if ( &a2[v12 + 1] >= v7 )
          return 2147614729LL;
        if ( (int)v12 > 0 )
        {
          v13 = (char *)v10 - (char *)a2;
          v14 = (unsigned int)v12;
          do
          {
            *a2 = *(unsigned __int16 *)((char *)a2 + v13);
            ++a2;
            --v14;
          }
          while ( v14 );
          v8 = *(LPWSTR *)this;
        }
      }
      if ( **(_WORD **)this && a2 < v7 )
      {
        *a2 = 0;
        *(_QWORD *)this = CharNextW(*(LPCWSTR *)this);
        return 0LL;
      }
    }
    else
    {
      do
      {
        if ( ATL::CRegParser::IsSpace(v4, v6) )
          break;
        v15 = CharNextW(v5);
        *(_QWORD *)this = v15;
        v16 = v15 - v5;
        v4 = (ATL::CRegParser *)&a2[v16 + 1];
        if ( v4 >= (ATL::CRegParser *)v7 )
          return 2147614729LL;
        if ( (int)v16 > 0 )
        {
          v17 = (char *)v5 - (char *)a2;
          v4 = (ATL::CRegParser *)(unsigned int)v16;
          do
          {
            *a2 = *(unsigned __int16 *)((char *)a2 + v17);
            ++a2;
            v4 = (ATL::CRegParser *)((char *)v4 - 1);
          }
          while ( v4 );
        }
        v5 = *(const WCHAR **)this;
        v6 = **(_WORD **)this;
      }
      while ( v6 );
      if ( a2 < v7 )
      {
        *a2 = 0;
        return 0LL;
      }
    }
  }
  return 2147614729LL;
}

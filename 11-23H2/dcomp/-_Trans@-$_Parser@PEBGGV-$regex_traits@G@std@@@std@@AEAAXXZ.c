/*
 * XREFs of ?_Trans@?$_Parser@PEBGGV?$regex_traits@G@std@@@std@@AEAAXXZ @ 0x18004348C
 * Callers:
 *     ?_CharacterEscape@?$_Parser@PEBGGV?$regex_traits@G@std@@@std@@AEAA_NXZ @ 0x180042EA8 (-_CharacterEscape@-$_Parser@PEBGGV-$regex_traits@G@std@@@std@@AEAA_NXZ.c)
 *     ?_ClassRanges@?$_Parser@PEBGGV?$regex_traits@G@std@@@std@@AEAAXXZ @ 0x180042FE0 (-_ClassRanges@-$_Parser@PEBGGV-$regex_traits@G@std@@@std@@AEAAXXZ.c)
 *     ?_ClassAtom@?$_Parser@PEBGGV?$regex_traits@G@std@@@std@@AEAA?AW4_Prs_ret@2@XZ @ 0x1800430C4 (-_ClassAtom@-$_Parser@PEBGGV-$regex_traits@G@std@@@std@@AEAA-AW4_Prs_ret@2@XZ.c)
 *     ?_Next@?$_Parser@PEBGGV?$regex_traits@G@std@@@std@@AEAAXXZ @ 0x180043158 (-_Next@-$_Parser@PEBGGV-$regex_traits@G@std@@@std@@AEAAXXZ.c)
 *     ?_Alternative@?$_Parser@PEBGGV?$regex_traits@G@std@@@std@@AEAA_NXZ @ 0x18004319C (-_Alternative@-$_Parser@PEBGGV-$regex_traits@G@std@@@std@@AEAA_NXZ.c)
 *     ??0?$_Parser@PEBGGV?$regex_traits@G@std@@@std@@QEAA@AEBV?$regex_traits@G@1@PEBG1W4syntax_option_type@regex_constants@1@@Z @ 0x18007D3BC (--0-$_Parser@PEBGGV-$regex_traits@G@std@@@std@@QEAA@AEBV-$regex_traits@G@1@PEBG1W4syntax_option_.c)
 * Callees:
 *     ?_Is_esc@?$_Parser@PEBGGV?$regex_traits@G@std@@@std@@AEBA_NXZ @ 0x180043594 (-_Is_esc@-$_Parser@PEBGGV-$regex_traits@G@std@@@std@@AEBA_NXZ.c)
 *     ?_Beg_expr@?$_Builder@PEBGGV?$regex_traits@G@std@@@std@@QEBA_NXZ @ 0x18015036C (-_Beg_expr@-$_Builder@PEBGGV-$regex_traits@G@std@@@std@@QEBA_NXZ.c)
 */

__int64 __fastcall std::_Parser<unsigned short const *,unsigned short,std::regex_traits<unsigned short>>::_Trans(
        unsigned __int16 **a1)
{
  int v2; // eax
  __int64 result; // rax
  unsigned __int16 v4; // cx
  int v5; // ecx
  int v6; // ecx
  int v7; // ecx
  int v8; // ecx
  int v9; // ecx
  int v10; // ecx
  int v11; // ecx
  int v12; // ecx
  int v13; // ecx
  bool v14; // zf
  bool v15; // zf
  int v16; // ecx

  if ( *a1 == a1[2] )
  {
    v4 = -1;
    result = 0xFFFFFFFFLL;
    *((_WORD *)a1 + 60) = -1;
  }
  else
  {
    v2 = **a1;
    *((_WORD *)a1 + 60) = v2;
    result = (__int64)strchr("()$^.*+?[]|\\-{},:=!\n\r\b", v2);
    v4 = *((_WORD *)a1 + 60);
    if ( result )
      result = *((unsigned __int16 *)a1 + 60);
  }
  *((_DWORD *)a1 + 31) = result;
  if ( v4 > 0x3Fu )
  {
    v5 = v4 - 92;
    if ( !v5 )
    {
      result = std::_Parser<unsigned short const *,unsigned short,std::regex_traits<unsigned short>>::_Is_esc(a1);
      if ( (_BYTE)result )
      {
        result = (__int64)*a1;
        v16 = (*a1)[1];
        *((_WORD *)a1 + 60) = v16;
        *((_DWORD *)a1 + 31) = v16;
      }
      return result;
    }
    v6 = v5 - 2;
    if ( !v6 )
    {
      if ( ((_DWORD)a1[16] & 0x2000000) == 0 )
        return result;
      result = std::_Builder<unsigned short const *,unsigned short,std::regex_traits<unsigned short>>::_Beg_expr(a1 + 8);
      v14 = (_BYTE)result == 0;
      goto LABEL_20;
    }
    v7 = v6 - 29;
    if ( v7 )
    {
      v8 = v7 - 1;
      if ( !v8 )
      {
        v14 = ((_BYTE)a1[16] & 2) == 0;
        goto LABEL_20;
      }
      if ( v8 != 1 )
        return result;
    }
    v14 = ((_BYTE)a1[16] & 0x10) == 0;
LABEL_20:
    if ( v14 )
      goto LABEL_32;
    return result;
  }
  if ( v4 == 63 )
  {
LABEL_18:
    v14 = ((_BYTE)a1[16] & 1) == 0;
    goto LABEL_20;
  }
  v9 = v4 - 10;
  if ( !v9 )
  {
    if ( ((_BYTE)a1[16] & 4) != 0 && !*((_DWORD *)a1 + 7) )
      *((_DWORD *)a1 + 31) = 124;
    return result;
  }
  v10 = v9 - 26;
  if ( v10 )
  {
    v11 = v10 - 4;
    if ( !v11 || (v12 = v11 - 1) == 0 )
    {
      v14 = ((_BYTE)a1[16] & 8) == 0;
      goto LABEL_20;
    }
    v13 = v12 - 1;
    if ( v13 )
    {
      if ( v13 != 1 )
        return result;
      goto LABEL_18;
    }
    if ( ((_DWORD)a1[16] & 0x4000000) == 0 )
      return result;
    result = std::_Builder<unsigned short const *,unsigned short,std::regex_traits<unsigned short>>::_Beg_expr(a1 + 8);
    v15 = (_BYTE)result == 0;
  }
  else
  {
    if ( ((_DWORD)a1[16] & 0x2000000) == 0 )
      return result;
    result = (__int64)(*a1 + 1);
    if ( (unsigned __int16 *)result == a1[2] )
      return result;
    v15 = *(_WORD *)result == 10;
  }
  if ( !v15 )
LABEL_32:
    *((_DWORD *)a1 + 31) = 0;
  return result;
}

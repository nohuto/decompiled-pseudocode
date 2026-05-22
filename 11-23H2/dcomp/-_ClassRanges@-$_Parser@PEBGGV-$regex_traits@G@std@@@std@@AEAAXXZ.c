/*
 * XREFs of ?_ClassRanges@?$_Parser@PEBGGV?$regex_traits@G@std@@@std@@AEAAXXZ @ 0x180042FE0
 * Callers:
 *     ?_CharacterClass@?$_Parser@PEBGGV?$regex_traits@G@std@@@std@@AEAAXXZ @ 0x180041910 (-_CharacterClass@-$_Parser@PEBGGV-$regex_traits@G@std@@@std@@AEAAXXZ.c)
 * Callees:
 *     ?_ClassAtom@?$_Parser@PEBGGV?$regex_traits@G@std@@@std@@AEAA?AW4_Prs_ret@2@XZ @ 0x1800430C4 (-_ClassAtom@-$_Parser@PEBGGV-$regex_traits@G@std@@@std@@AEAA-AW4_Prs_ret@2@XZ.c)
 *     ?_Trans@?$_Parser@PEBGGV?$regex_traits@G@std@@@std@@AEAAXXZ @ 0x18004348C (-_Trans@-$_Parser@PEBGGV-$regex_traits@G@std@@@std@@AEAAXXZ.c)
 *     ?_Is_esc@?$_Parser@PEBGGV?$regex_traits@G@std@@@std@@AEBA_NXZ @ 0x180043594 (-_Is_esc@-$_Parser@PEBGGV-$regex_traits@G@std@@@std@@AEBA_NXZ.c)
 *     ?_Add_char_to_bitmap@?$_Builder@PEBGGV?$regex_traits@G@std@@@std@@AEAAXG@Z @ 0x1800435CC (-_Add_char_to_bitmap@-$_Builder@PEBGGV-$regex_traits@G@std@@@std@@AEAAXG@Z.c)
 *     ?_Add_range@?$_Builder@PEBGGV?$regex_traits@G@std@@@std@@QEAAXGG@Z @ 0x180043638 (-_Add_range@-$_Builder@PEBGGV-$regex_traits@G@std@@@std@@QEAAXGG@Z.c)
 *     ?_Dwm_Xregex_error@std@@YAXW4error_type@regex_constants@1@@Z @ 0x1801004C8 (-_Dwm_Xregex_error@std@@YAXW4error_type@regex_constants@1@@Z.c)
 *     ?_Add_char_to_array@?$_Builder@PEBGGV?$regex_traits@G@std@@@std@@AEAAXG@Z @ 0x1801500A8 (-_Add_char_to_array@-$_Builder@PEBGGV-$regex_traits@G@std@@@std@@AEAAXG@Z.c)
 *     ?translate@?$_Regex_traits@G@std@@QEBAGG@Z @ 0x180150D2C (-translate@-$_Regex_traits@G@std@@QEBAGG@Z.c)
 */

__int64 __fastcall std::_Parser<unsigned short const *,unsigned short,std::regex_traits<unsigned short>>::_ClassRanges(
        __int64 a1)
{
  __int64 result; // rax
  _WORD *v3; // r10
  unsigned __int16 v4; // di
  int v5; // eax
  __int64 v6; // rcx
  __int64 v7; // r9
  unsigned __int16 v8; // ax
  __int64 v9; // rcx
  __int64 v10; // rcx

  while ( 1 )
  {
    result = std::_Parser<unsigned short const *,unsigned short,std::regex_traits<unsigned short>>::_ClassAtom(a1);
    if ( !(_DWORD)result )
      break;
    if ( (_DWORD)result != 2 )
    {
      if ( !*(_DWORD *)(a1 + 116) && (*(_DWORD *)(a1 + 128) & 0x100000) == 0 )
        std::_Dwm_Xregex_error();
      if ( *(_DWORD *)(a1 + 124) == 45 )
      {
        if ( *(_QWORD *)a1 != *(_QWORD *)(a1 + 16) )
        {
          v3 = *(_WORD **)a1;
          if ( **(_WORD **)a1 == 92
            && (unsigned __int8)std::_Parser<unsigned short const *,unsigned short,std::regex_traits<unsigned short>>::_Is_esc(a1) )
          {
            v3 = (_WORD *)(v7 + 2);
          }
          *(_QWORD *)a1 = v3 + 1;
        }
        std::_Parser<unsigned short const *,unsigned short,std::regex_traits<unsigned short>>::_Trans(a1);
        v4 = *(_WORD *)(a1 + 116);
        v5 = std::_Parser<unsigned short const *,unsigned short,std::regex_traits<unsigned short>>::_ClassAtom(a1);
        if ( !v5 )
        {
          v10 = a1 + 64;
          if ( *(_WORD *)(a1 + 116) >= 0x100u )
            std::_Builder<unsigned short const *,unsigned short,std::regex_traits<unsigned short>>::_Add_char_to_array(v10);
          else
            std::_Builder<unsigned short const *,unsigned short,std::regex_traits<unsigned short>>::_Add_char_to_bitmap(v10);
          return std::_Builder<unsigned short const *,unsigned short,std::regex_traits<unsigned short>>::_Add_char_to_bitmap(a1 + 64);
        }
        if ( v5 == 2 )
          std::_Dwm_Xregex_error();
        if ( (*(_DWORD *)(a1 + 112) & 0x800) != 0 )
        {
          v8 = std::_Regex_traits<unsigned short>::translate(*(_QWORD *)(a1 + 104), *(unsigned __int16 *)(a1 + 116));
          v9 = *(_QWORD *)(a1 + 104);
          *(_DWORD *)(a1 + 116) = v8;
          v4 = std::_Regex_traits<unsigned short>::translate(v9, v4);
        }
        if ( *(_WORD *)(a1 + 116) < v4 )
          std::_Dwm_Xregex_error();
        std::_Builder<unsigned short const *,unsigned short,std::regex_traits<unsigned short>>::_Add_range(a1 + 64, v4);
      }
      else
      {
        v6 = a1 + 64;
        if ( *(_WORD *)(a1 + 116) >= 0x100u )
          std::_Builder<unsigned short const *,unsigned short,std::regex_traits<unsigned short>>::_Add_char_to_array(v6);
        else
          std::_Builder<unsigned short const *,unsigned short,std::regex_traits<unsigned short>>::_Add_char_to_bitmap(v6);
      }
    }
  }
  return result;
}

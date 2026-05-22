/*
 * XREFs of ?_Do_ex_class@?$_Parser@PEBGGV?$regex_traits@G@std@@@std@@AEAAXW4_Meta_type@2@@Z @ 0x1801505B8
 * Callers:
 *     ?_ClassAtom@?$_Parser@PEBGGV?$regex_traits@G@std@@@std@@AEAA?AW4_Prs_ret@2@XZ @ 0x1800430C4 (-_ClassAtom@-$_Parser@PEBGGV-$regex_traits@G@std@@@std@@AEAA-AW4_Prs_ret@2@XZ.c)
 * Callees:
 *     ?_Next@?$_Parser@PEBGGV?$regex_traits@G@std@@@std@@AEAAXXZ @ 0x180043158 (-_Next@-$_Parser@PEBGGV-$regex_traits@G@std@@@std@@AEAAXXZ.c)
 *     ??$lookup_classname@PEBG@?$_Regex_traits@G@std@@QEBAFPEBG0_N@Z @ 0x180043AAC (--$lookup_classname@PEBG@-$_Regex_traits@G@std@@QEBAFPEBG0_N@Z.c)
 *     ?_Dwm_Xregex_error@std@@YAXW4error_type@regex_constants@1@@Z @ 0x1801004C8 (-_Dwm_Xregex_error@std@@YAXW4error_type@regex_constants@1@@Z.c)
 *     ?_Add_elts@?$_Builder@PEBGGV?$regex_traits@G@std@@@std@@AEAAXPEAV?$_Node_class@GV?$regex_traits@G@std@@@2@F_N@Z @ 0x180150120 (-_Add_elts@-$_Builder@PEBGGV-$regex_traits@G@std@@@std@@AEAAXPEAV-$_Node_class@GV-$regex_traits@.c)
 *     ?_Add_equiv@?$_Builder@PEBGGV?$regex_traits@G@std@@@std@@QEAAXPEBG0_J@Z @ 0x1801501D0 (-_Add_equiv@-$_Builder@PEBGGV-$regex_traits@G@std@@@std@@QEAAXPEBG0_J@Z.c)
 *     ?_Char_to_elts@?$_Builder@PEBGGV?$regex_traits@G@std@@@std@@AEAAXPEBG0_JPEAPEAU?$_Sequence@G@2@@Z @ 0x1801504B8 (-_Char_to_elts@-$_Builder@PEBGGV-$regex_traits@G@std@@@std@@AEAAXPEBG0_JPEAPEAU-$_Sequence@G@2@@.c)
 */

__int64 __fastcall std::_Parser<unsigned short const *,unsigned short,std::regex_traits<unsigned short>>::_Do_ex_class(
        __int64 a1,
        int a2)
{
  unsigned int v2; // eax
  unsigned __int16 *v3; // rbx
  __int64 v5; // rdi
  __int64 v6; // rbp
  unsigned __int16 v7; // ax
  unsigned __int16 v8; // si
  __int64 v9; // rbx

  v2 = *(_DWORD *)(a1 + 124);
  v3 = *(unsigned __int16 **)a1;
  v5 = a1;
  v6 = 0LL;
  if ( v2 != 58 )
  {
    a1 = v2;
    do
    {
      v2 = a1;
      if ( (_DWORD)a1 == 61 )
        break;
      if ( (_DWORD)a1 == 46 )
        break;
      if ( (_DWORD)a1 == -1 )
        break;
      std::_Parser<unsigned short const *,unsigned short,std::regex_traits<unsigned short>>::_Next((_QWORD *)v5);
      v2 = *(_DWORD *)(v5 + 124);
      ++v6;
      a1 = v2;
    }
    while ( v2 != 58 );
  }
  if ( v2 != a2 )
    std::_Dwm_Xregex_error();
  switch ( a2 )
  {
    case ':':
      v7 = std::_Regex_traits<unsigned short>::lookup_classname<unsigned short const *>(
             *(_QWORD *)(v5 + 104),
             v3,
             *(unsigned __int16 **)v5,
             BYTE1(*(_DWORD *)(v5 + 112)) & 1);
      v8 = v7;
      if ( !v7 )
        std::_Dwm_Xregex_error();
      v9 = *(_QWORD *)(v5 + 72);
      std::_Builder<unsigned short const *,unsigned short,std::regex_traits<unsigned short>>::_Add_elts(
        v5 + 64,
        v9,
        v7,
        0);
      *(_WORD *)(v9 + 64) |= v8;
      break;
    case '=':
      if ( v3 == *(unsigned __int16 **)v5 )
        std::_Dwm_Xregex_error();
      std::_Builder<unsigned short const *,unsigned short,std::regex_traits<unsigned short>>::_Add_equiv(
        v5 + 64,
        v3,
        *(_QWORD *)v5,
        v6);
      break;
    case '.':
      if ( v3 == *(unsigned __int16 **)v5 )
        std::_Dwm_Xregex_error();
      std::_Builder<unsigned short const *,unsigned short,std::regex_traits<unsigned short>>::_Char_to_elts(
        a1,
        (__int16 *)v3,
        *(__int16 **)v5,
        v6,
        (__int64 *)(*(_QWORD *)(v5 + 72) + 32LL));
      break;
  }
  std::_Parser<unsigned short const *,unsigned short,std::regex_traits<unsigned short>>::_Next((_QWORD *)v5);
  if ( *(_DWORD *)(v5 + 124) != 93 )
    std::_Dwm_Xregex_error();
  return std::_Parser<unsigned short const *,unsigned short,std::regex_traits<unsigned short>>::_Next((_QWORD *)v5);
}

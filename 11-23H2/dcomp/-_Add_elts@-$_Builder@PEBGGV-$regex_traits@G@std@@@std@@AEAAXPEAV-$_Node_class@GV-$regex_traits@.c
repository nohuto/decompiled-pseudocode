/*
 * XREFs of ?_Add_elts@?$_Builder@PEBGGV?$regex_traits@G@std@@@std@@AEAAXPEAV?$_Node_class@GV?$regex_traits@G@std@@@2@F_N@Z @ 0x180150120
 * Callers:
 *     ?_CharacterClassEscape@?$_Parser@PEBGGV?$regex_traits@G@std@@@std@@AEAA_N_N@Z @ 0x180043A44 (-_CharacterClassEscape@-$_Parser@PEBGGV-$regex_traits@G@std@@@std@@AEAA_N_N@Z.c)
 *     ?_Do_ex_class@?$_Parser@PEBGGV?$regex_traits@G@std@@@std@@AEAAXW4_Meta_type@2@@Z @ 0x1801505B8 (-_Do_ex_class@-$_Parser@PEBGGV-$regex_traits@G@std@@@std@@AEAAXW4_Meta_type@2@@Z.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x180043FCC (--2@YAPEAX_K@Z.c)
 *     ?isctype@?$_Regex_traits@G@std@@QEBA_NGF@Z @ 0x180150CD0 (-isctype@-$_Regex_traits@G@std@@QEBA_NGF@Z.c)
 */

__int64 __fastcall std::_Builder<unsigned short const *,unsigned short,std::regex_traits<unsigned short>>::_Add_elts(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        char a4)
{
  unsigned int v4; // ebx
  unsigned __int64 v6; // rdi
  __int64 result; // rax
  _OWORD *v10; // r8
  _OWORD *v11; // rax

  v4 = 0;
  v6 = 0LL;
  do
  {
    result = std::_Regex_traits<unsigned short>::isctype(*(_QWORD *)(a1 + 24), (unsigned __int16)v4);
    if ( (_BYTE)result != a4 )
    {
      v10 = *(_OWORD **)(a2 + 40);
      if ( !v10 )
      {
        v11 = operator new(0x20uLL);
        v10 = v11;
        if ( v11 )
        {
          *v11 = 0LL;
          v11[1] = 0LL;
        }
        else
        {
          v10 = 0LL;
        }
        *(_QWORD *)(a2 + 40) = v10;
      }
      result = v4 & 7;
      *((_BYTE *)v10 + (v6 >> 3)) |= 1 << result;
    }
    ++v4;
    ++v6;
  }
  while ( v4 < 0x100 );
  return result;
}

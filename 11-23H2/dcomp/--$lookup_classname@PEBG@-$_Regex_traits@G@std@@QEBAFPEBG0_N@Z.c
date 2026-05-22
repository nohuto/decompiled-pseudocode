/*
 * XREFs of ??$lookup_classname@PEBG@?$_Regex_traits@G@std@@QEBAFPEBG0_N@Z @ 0x180043AAC
 * Callers:
 *     ?_CharacterClassEscape@?$_Parser@PEBGGV?$regex_traits@G@std@@@std@@AEAA_N_N@Z @ 0x180043A44 (-_CharacterClassEscape@-$_Parser@PEBGGV-$regex_traits@G@std@@@std@@AEAA_N_N@Z.c)
 *     ?_Do_ex_class@?$_Parser@PEBGGV?$regex_traits@G@std@@@std@@AEAAXW4_Meta_type@2@@Z @ 0x1801505B8 (-_Do_ex_class@-$_Parser@PEBGGV-$regex_traits@G@std@@@std@@AEAAXW4_Meta_type@2@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall std::_Regex_traits<unsigned short>::lookup_classname<unsigned short const *>(
        __int64 a1,
        unsigned __int16 *a2,
        unsigned __int16 *a3,
        char a4)
{
  __int64 v6; // r8
  __int64 v7; // rbp
  __int64 v8; // rcx
  __int64 v9; // rsi
  unsigned __int16 v10; // cx
  char *v12; // r13
  unsigned __int16 *v13; // r14
  unsigned __int16 v14; // di
  __int16 v15; // bx
  char v17; // [rsp+78h] [rbp+20h]

  v17 = a4;
  v6 = a1;
  LODWORD(v7) = 0;
  if ( L"alnum" )
  {
    v8 = 0LL;
    v9 = a3 - a2;
    while ( 1 )
    {
      if ( v9 == LODWORD((&`std::_Regex_traits<unsigned short>::lookup_classname<unsigned short const *>'::`2'::_Names)[v8 + 2]) )
      {
        v12 = (&`std::_Regex_traits<unsigned short>::lookup_classname<unsigned short const *>'::`2'::_Names)[v8 + 1];
        v13 = a2;
        if ( a2 == a3 )
        {
LABEL_5:
          a4 = v17;
          break;
        }
        while ( 1 )
        {
          v14 = *v13;
          v15 = std::ctype<unsigned short>::tolower(*(_QWORD *)(v6 + 8), *(unsigned __int16 *)v12);
          if ( (unsigned __int16)std::ctype<unsigned short>::tolower(*(_QWORD *)(a1 + 8), v14) != v15 )
            break;
          ++v13;
          v12 += 2;
          if ( v13 == a3 )
            goto LABEL_5;
          v6 = a1;
        }
        v6 = a1;
      }
      v7 = (unsigned int)(v7 + 1);
      v8 = 3 * v7;
      if ( !(&`std::_Regex_traits<unsigned short>::lookup_classname<unsigned short const *>'::`2'::_Names)[3 * v7 + 1] )
        goto LABEL_5;
    }
  }
  v10 = 0;
  if ( (&`std::_Regex_traits<unsigned short>::lookup_classname<unsigned short const *>'::`2'::_Names)[3 * (unsigned int)v7 + 1] )
    v10 = *((_WORD *)&`std::_Regex_traits<unsigned short>::lookup_classname<unsigned short const *>'::`2'::_Names
          + 12 * (unsigned int)v7
          + 10);
  if ( a4 && (v10 & 3) != 0 )
    v10 |= 3u;
  return v10;
}

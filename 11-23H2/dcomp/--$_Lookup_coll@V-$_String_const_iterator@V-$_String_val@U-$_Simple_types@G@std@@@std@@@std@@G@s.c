/*
 * XREFs of ??$_Lookup_coll@V?$_String_const_iterator@V?$_String_val@U?$_Simple_types@G@std@@@std@@@std@@G@std@@YA?AV?$_String_const_iterator@V?$_String_val@U?$_Simple_types@G@std@@@std@@@0@V10@0PEBU?$_Sequence@G@0@@Z @ 0x18014E5E0
 * Callers:
 *     ?_Skip@?$_Matcher@V?$_String_const_iterator@V?$_String_val@U?$_Simple_types@G@std@@@std@@@std@@GV?$regex_traits@G@2@V12@@std@@QEAA?AV?$_String_const_iterator@V?$_String_val@U?$_Simple_types@G@std@@@std@@@2@V32@0PEAV_Node_base@2@@Z @ 0x180042200 (-_Skip@-$_Matcher@V-$_String_const_iterator@V-$_String_val@U-$_Simple_types@G@std@@@std@@@std@@G.c)
 *     ?_Match_pat@?$_Matcher@V?$_String_const_iterator@V?$_String_val@U?$_Simple_types@G@std@@@std@@@std@@GV?$regex_traits@G@2@V12@@std@@AEAA_NPEAV_Node_base@2@@Z @ 0x1800538E0 (-_Match_pat@-$_Matcher@V-$_String_const_iterator@V-$_String_val@U-$_Simple_types@G@std@@@std@@@s.c)
 * Callees:
 *     <none>
 */

_QWORD *__fastcall std::_Lookup_coll<std::_String_const_iterator<std::_String_val<std::_Simple_types<unsigned short>>>,unsigned short>(
        _QWORD *a1,
        _WORD *a2,
        _WORD *a3,
        unsigned int *a4)
{
  unsigned int *v4; // r10
  __int64 v6; // rbx
  unsigned __int64 v7; // rdi
  unsigned __int64 v8; // rsi
  _WORD *v9; // rcx
  _WORD *v10; // r14
  _WORD *v11; // rax

  v4 = a4;
  if ( a4 )
  {
    while ( 1 )
    {
      v6 = 0LL;
      if ( v4[3] )
        break;
LABEL_10:
      v4 = (unsigned int *)*((_QWORD *)v4 + 3);
      if ( !v4 )
        goto LABEL_11;
    }
    v7 = *v4;
    while ( 1 )
    {
      v8 = 0LL;
      v9 = a2;
      if ( *v4 )
      {
        v10 = (_WORD *)(*((_QWORD *)v4 + 2) + 2 * v6);
        do
        {
          v11 = v9++;
          if ( *v11 != *v10 )
            break;
          ++v8;
          ++v10;
        }
        while ( v8 < v7 );
      }
      if ( v9 == a3 )
        break;
      v6 = (unsigned int)(v7 + v6);
      if ( (unsigned int)v6 >= v4[3] )
        goto LABEL_10;
    }
    *a1 = a3;
  }
  else
  {
LABEL_11:
    *a1 = a2;
  }
  return a1;
}

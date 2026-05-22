/*
 * XREFs of ??E?$regex_iterator@V?$_String_const_iterator@V?$_String_val@U?$_Simple_types@G@std@@@std@@@std@@GV?$regex_traits@G@2@@std@@QEAAAEAV01@XZ @ 0x18001E660
 * Callers:
 *     ?GetReferencedPropertiesFromExpression@CompositionAnimation@Composition@UI@Windows@@IEAAXPEBG0PEAV?$vector@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$allocator@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@@std@@@Z @ 0x180021934 (-GetReferencedPropertiesFromExpression@CompositionAnimation@Composition@UI@Windows@@IEAAXPEBG0PE.c)
 * Callees:
 *     ??$_Regex_search2@V?$_String_const_iterator@V?$_String_val@U?$_Simple_types@G@std@@@std@@@std@@V?$allocator@V?$sub_match@V?$_String_const_iterator@V?$_String_val@U?$_Simple_types@G@std@@@std@@@std@@@std@@@2@GV?$regex_traits@G@2@V12@@std@@YA_NV?$_String_const_iterator@V?$_String_val@U?$_Simple_types@G@std@@@std@@@0@0PEAV?$match_results@V?$_String_const_iterator@V?$_String_val@U?$_Simple_types@G@std@@@std@@@std@@V?$allocator@V?$sub_match@V?$_String_const_iterator@V?$_String_val@U?$_Simple_types@G@std@@@std@@@std@@@std@@@2@@0@AEBV?$basic_regex@GV?$regex_traits@G@std@@@0@W4match_flag_type@regex_constants@0@0@Z @ 0x1800420A0 (--$_Regex_search2@V-$_String_const_iterator@V-$_String_val@U-$_Simple_types@G@std@@@std@@@std@@V.c)
 */

__int64 __fastcall std::regex_iterator<std::_String_const_iterator<std::_String_val<std::_Simple_types<unsigned short>>>,unsigned short,std::regex_traits<unsigned short>>::operator++(
        __int64 a1)
{
  _QWORD *v1; // rax
  _QWORD *v2; // rsi
  char v3; // dl
  _QWORD *v4; // r14
  __int64 v6; // rbx
  int v7; // ebp
  int v8; // ecx

  v1 = *(_QWORD **)(a1 + 48);
  v2 = (_QWORD *)(a1 + 16);
  v3 = 0;
  v4 = (_QWORD *)(a1 + 8);
  v6 = v1[1];
  if ( *v1 == v6 )
  {
    if ( v6 == *v4 )
    {
LABEL_6:
      *v2 = 0LL;
      return a1;
    }
    v7 = a1 + 32;
    if ( (unsigned __int8)std::_Regex_search2<std::_String_const_iterator<std::_String_val<std::_Simple_types<unsigned short>>>,std::allocator<std::sub_match<std::_String_const_iterator<std::_String_val<std::_Simple_types<unsigned short>>>>>,unsigned short,std::regex_traits<unsigned short>,std::_String_const_iterator<std::_String_val<std::_Simple_types<unsigned short>>>>(
                            v6,
                            *v4,
                            (int)a1 + 32,
                            *v2,
                            *(_DWORD *)(a1 + 24) | 0x60u,
                            *(_QWORD *)a1) )
      return a1;
    v3 = 1;
  }
  else
  {
    v7 = a1 + 32;
  }
  *(_DWORD *)(a1 + 24) |= 0x100u;
  v8 = *(_DWORD *)(a1 + 24) | 0x4000;
  if ( !v3 )
    v8 = *(_DWORD *)(a1 + 24);
  if ( !(unsigned __int8)std::_Regex_search2<std::_String_const_iterator<std::_String_val<std::_Simple_types<unsigned short>>>,std::allocator<std::sub_match<std::_String_const_iterator<std::_String_val<std::_Simple_types<unsigned short>>>>>,unsigned short,std::regex_traits<unsigned short>,std::_String_const_iterator<std::_String_val<std::_Simple_types<unsigned short>>>>(
                           v6,
                           *v4,
                           v7,
                           *v2,
                           v8,
                           *(_QWORD *)a1) )
    goto LABEL_6;
  return a1;
}

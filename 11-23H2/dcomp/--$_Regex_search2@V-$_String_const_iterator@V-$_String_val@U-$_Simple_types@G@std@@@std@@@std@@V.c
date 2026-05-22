/*
 * XREFs of ??$_Regex_search2@V?$_String_const_iterator@V?$_String_val@U?$_Simple_types@G@std@@@std@@@std@@V?$allocator@V?$sub_match@V?$_String_const_iterator@V?$_String_val@U?$_Simple_types@G@std@@@std@@@std@@@std@@@2@GV?$regex_traits@G@2@V12@@std@@YA_NV?$_String_const_iterator@V?$_String_val@U?$_Simple_types@G@std@@@std@@@0@0PEAV?$match_results@V?$_String_const_iterator@V?$_String_val@U?$_Simple_types@G@std@@@std@@@std@@V?$allocator@V?$sub_match@V?$_String_const_iterator@V?$_String_val@U?$_Simple_types@G@std@@@std@@@std@@@std@@@2@@0@AEBV?$basic_regex@GV?$regex_traits@G@std@@@0@W4match_flag_type@regex_constants@0@0@Z @ 0x1800420A0
 * Callers:
 *     ??E?$regex_iterator@V?$_String_const_iterator@V?$_String_val@U?$_Simple_types@G@std@@@std@@@std@@GV?$regex_traits@G@2@@std@@QEAAAEAV01@XZ @ 0x18001E660 (--E-$regex_iterator@V-$_String_const_iterator@V-$_String_val@U-$_Simple_types@G@std@@@std@@@std@.c)
 *     ?GetReferencedPropertiesFromExpression@CompositionAnimation@Composition@UI@Windows@@IEAAXPEBG0PEAV?$vector@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$allocator@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@@std@@@Z @ 0x180021934 (-GetReferencedPropertiesFromExpression@CompositionAnimation@Composition@UI@Windows@@IEAAXPEBG0PE.c)
 * Callees:
 *     ?_Skip@?$_Matcher@V?$_String_const_iterator@V?$_String_val@U?$_Simple_types@G@std@@@std@@@std@@GV?$regex_traits@G@2@V12@@std@@QEAA?AV?$_String_const_iterator@V?$_String_val@U?$_Simple_types@G@std@@@std@@@2@V32@0PEAV_Node_base@2@@Z @ 0x180042200 (-_Skip@-$_Matcher@V-$_String_const_iterator@V-$_String_val@U-$_Simple_types@G@std@@@std@@@std@@G.c)
 *     ??0?$_Matcher@V?$_String_const_iterator@V?$_String_val@U?$_Simple_types@G@std@@@std@@@std@@GV?$regex_traits@G@2@V12@@std@@QEAA@V?$_String_const_iterator@V?$_String_val@U?$_Simple_types@G@std@@@std@@@1@0AEBV?$regex_traits@G@1@PEAV_Root_node@1@IW4syntax_option_type@regex_constants@1@W4match_flag_type@61@@Z @ 0x18004241C (--0-$_Matcher@V-$_String_const_iterator@V-$_String_val@U-$_Simple_types@G@std@@@std@@@std@@GV-$r.c)
 *     ??1?$_Matcher@V?$_String_const_iterator@V?$_String_val@U?$_Simple_types@G@std@@@std@@@std@@GV?$regex_traits@G@2@V12@@std@@QEAA@XZ @ 0x180042524 (--1-$_Matcher@V-$_String_const_iterator@V-$_String_val@U-$_Simple_types@G@std@@@std@@@std@@GV-$r.c)
 *     ??$_Match@V?$allocator@V?$sub_match@V?$_String_const_iterator@V?$_String_val@U?$_Simple_types@G@std@@@std@@@std@@@std@@@std@@@?$_Matcher@V?$_String_const_iterator@V?$_String_val@U?$_Simple_types@G@std@@@std@@@std@@GV?$regex_traits@G@2@V12@@std@@QEAA_NPEAV?$match_results@V?$_String_const_iterator@V?$_String_val@U?$_Simple_types@G@std@@@std@@@std@@V?$allocator@V?$sub_match@V?$_String_const_iterator@V?$_String_val@U?$_Simple_types@G@std@@@std@@@std@@@std@@@2@@1@_N@Z @ 0x180042594 (--$_Match@V-$allocator@V-$sub_match@V-$_String_const_iterator@V-$_String_val@U-$_Simple_types@G@.c)
 */

char __fastcall std::_Regex_search2<std::_String_const_iterator<std::_String_val<std::_Simple_types<unsigned short>>>,std::allocator<std::sub_match<std::_String_const_iterator<std::_String_val<std::_Simple_types<unsigned short>>>>>,unsigned short,std::regex_traits<unsigned short>,std::_String_const_iterator<std::_String_val<std::_Simple_types<unsigned short>>>>(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 *a4,
        int a5,
        __int64 a6)
{
  __int64 v8; // rbx
  char v10; // r15
  char v11; // bp
  __int64 *v13; // rax
  _BYTE v15[168]; // [rsp+40h] [rbp-118h] BYREF
  __int64 v16; // [rsp+E8h] [rbp-70h]
  unsigned int v17; // [rsp+FCh] [rbp-5Ch]
  char v18; // [rsp+178h] [rbp+20h] BYREF

  v8 = a1;
  if ( !*a4 )
    return 0;
  v10 = a5;
  v11 = 0;
  if ( (a5 & 0x4000) != 0 && a1 != a2 )
    v8 = a1 + 2;
  std::_Matcher<std::_String_const_iterator<std::_String_val<std::_Simple_types<unsigned short>>>,unsigned short,std::regex_traits<unsigned short>,std::_String_const_iterator<std::_String_val<std::_Simple_types<unsigned short>>>>::_Matcher<std::_String_const_iterator<std::_String_val<std::_Simple_types<unsigned short>>>,unsigned short,std::regex_traits<unsigned short>,std::_String_const_iterator<std::_String_val<std::_Simple_types<unsigned short>>>>(
    (unsigned int)v15,
    v8,
    a2,
    (_DWORD)a4 + 8,
    *a4,
    *(_DWORD *)(*a4 + 40),
    *(_DWORD *)(*a4 + 32),
    a5);
  if ( (unsigned __int8)std::_Matcher<std::_String_const_iterator<std::_String_val<std::_Simple_types<unsigned short>>>,unsigned short,std::regex_traits<unsigned short>,std::_String_const_iterator<std::_String_val<std::_Simple_types<unsigned short>>>>::_Match<std::allocator<std::sub_match<std::_String_const_iterator<std::_String_val<std::_Simple_types<unsigned short>>>>>>(
                          v15,
                          a3) )
    goto LABEL_9;
  if ( v8 != a2 && (v10 & 0x40) == 0 )
  {
    v17 = v17 & 0xFFFFDEFF | 0x100;
    while ( 1 )
    {
      v13 = (__int64 *)std::_Matcher<std::_String_const_iterator<std::_String_val<std::_Simple_types<unsigned short>>>,unsigned short,std::regex_traits<unsigned short>,std::_String_const_iterator<std::_String_val<std::_Simple_types<unsigned short>>>>::_Skip(
                         (unsigned int)v15,
                         (unsigned int)&v18,
                         (int)v8 + 2,
                         a2,
                         0LL);
      v8 = *v13;
      if ( *v13 == a2 )
        break;
      v16 = *v13;
      if ( (unsigned __int8)std::_Matcher<std::_String_const_iterator<std::_String_val<std::_Simple_types<unsigned short>>>,unsigned short,std::regex_traits<unsigned short>,std::_String_const_iterator<std::_String_val<std::_Simple_types<unsigned short>>>>::_Match<std::allocator<std::sub_match<std::_String_const_iterator<std::_String_val<std::_Simple_types<unsigned short>>>>>>(
                              v15,
                              a3) )
        goto LABEL_9;
    }
    v16 = a2;
    if ( (unsigned __int8)std::_Matcher<std::_String_const_iterator<std::_String_val<std::_Simple_types<unsigned short>>>,unsigned short,std::regex_traits<unsigned short>,std::_String_const_iterator<std::_String_val<std::_Simple_types<unsigned short>>>>::_Match<std::allocator<std::sub_match<std::_String_const_iterator<std::_String_val<std::_Simple_types<unsigned short>>>>>>(
                            v15,
                            a3) )
    {
LABEL_9:
      v11 = 1;
      if ( a3 )
      {
        *(_QWORD *)a3 = a6;
        *(_QWORD *)(a3 + 40) = a1;
        *(_BYTE *)(a3 + 56) = a1 != *(_QWORD *)(a3 + 48);
      }
    }
  }
  std::_Matcher<std::_String_const_iterator<std::_String_val<std::_Simple_types<unsigned short>>>,unsigned short,std::regex_traits<unsigned short>,std::_String_const_iterator<std::_String_val<std::_Simple_types<unsigned short>>>>::~_Matcher<std::_String_const_iterator<std::_String_val<std::_Simple_types<unsigned short>>>,unsigned short,std::regex_traits<unsigned short>,std::_String_const_iterator<std::_String_val<std::_Simple_types<unsigned short>>>>(v15);
  return v11;
}

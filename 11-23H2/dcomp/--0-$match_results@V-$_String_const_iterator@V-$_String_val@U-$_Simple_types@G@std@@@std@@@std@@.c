/*
 * XREFs of ??0?$match_results@V?$_String_const_iterator@V?$_String_val@U?$_Simple_types@G@std@@@std@@@std@@V?$allocator@V?$sub_match@V?$_String_const_iterator@V?$_String_val@U?$_Simple_types@G@std@@@std@@@std@@@std@@@2@@std@@QEAA@AEBV01@@Z @ 0x18001E5B8
 * Callers:
 *     ?GetReferencedPropertiesFromExpression@CompositionAnimation@Composition@UI@Windows@@IEAAXPEBG0PEAV?$vector@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$allocator@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@@std@@@Z @ 0x180021934 (-GetReferencedPropertiesFromExpression@CompositionAnimation@Composition@UI@Windows@@IEAAXPEBG0PE.c)
 * Callees:
 *     ??$_Construct_n@AEBQEAV?$sub_match@V?$_String_const_iterator@V?$_String_val@U?$_Simple_types@G@std@@@std@@@std@@@std@@AEBQEAV12@@?$vector@V?$sub_match@V?$_String_const_iterator@V?$_String_val@U?$_Simple_types@G@std@@@std@@@std@@@std@@V?$allocator@V?$sub_match@V?$_String_const_iterator@V?$_String_val@U?$_Simple_types@G@std@@@std@@@std@@@std@@@2@@std@@AEAAX_KAEBQEAV?$sub_match@V?$_String_const_iterator@V?$_String_val@U?$_Simple_types@G@std@@@std@@@std@@@1@1@Z @ 0x18001E510 (--$_Construct_n@AEBQEAV-$sub_match@V-$_String_const_iterator@V-$_String_val@U-$_Simple_types@G@s.c)
 */

__int64 __fastcall std::match_results<std::_String_const_iterator<std::_String_val<std::_Simple_types<unsigned short>>>>::match_results<std::_String_const_iterator<std::_String_val<std::_Simple_types<unsigned short>>>>(
        __int64 a1,
        __int64 a2)
{
  __int64 *v2; // r8
  __int64 *v3; // r9
  _QWORD *v6; // rcx
  unsigned __int64 v7; // rdx
  __int64 result; // rax

  v2 = (__int64 *)(a2 + 16);
  *(_QWORD *)a1 = *(_QWORD *)a2;
  v3 = (__int64 *)(a2 + 24);
  *(_BYTE *)(a1 + 8) = *(_BYTE *)(a2 + 8);
  v6 = (_QWORD *)(a1 + 16);
  *v6 = 0LL;
  v6[1] = 0LL;
  v6[2] = 0LL;
  v7 = (__int64)((unsigned __int128)((__int64)(*(_QWORD *)(a2 + 24) - *(_QWORD *)(a2 + 16))
                                   * (__int128)0x2AAAAAAAAAAAAAABLL) >> 64) >> 2;
  std::vector<std::sub_match<std::_String_const_iterator<std::_String_val<std::_Simple_types<unsigned short>>>>>::_Construct_n<std::sub_match<std::_String_const_iterator<std::_String_val<std::_Simple_types<unsigned short>>>> * const &,std::sub_match<std::_String_const_iterator<std::_String_val<std::_Simple_types<unsigned short>>>> * const &>(
    (__int64)v6,
    (v7 >> 63) + v7,
    v2,
    v3);
  result = a1;
  *(_OWORD *)(a1 + 40) = *(_OWORD *)(a2 + 40);
  *(_QWORD *)(a1 + 56) = *(_QWORD *)(a2 + 56);
  *(_OWORD *)(a1 + 64) = *(_OWORD *)(a2 + 64);
  *(_QWORD *)(a1 + 80) = *(_QWORD *)(a2 + 80);
  *(_OWORD *)(a1 + 88) = *(_OWORD *)(a2 + 88);
  *(_QWORD *)(a1 + 104) = *(_QWORD *)(a2 + 104);
  return result;
}

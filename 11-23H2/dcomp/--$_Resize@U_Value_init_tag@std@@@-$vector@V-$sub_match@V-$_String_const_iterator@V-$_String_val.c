/*
 * XREFs of ??$_Resize@U_Value_init_tag@std@@@?$vector@V?$sub_match@V?$_String_const_iterator@V?$_String_val@U?$_Simple_types@G@std@@@std@@@std@@@std@@V?$allocator@V?$sub_match@V?$_String_const_iterator@V?$_String_val@U?$_Simple_types@G@std@@@std@@@std@@@std@@@2@@std@@AEAAX_KAEBU_Value_init_tag@1@@Z @ 0x18001CCE0
 * Callers:
 *     ??$_Match@V?$allocator@V?$sub_match@V?$_String_const_iterator@V?$_String_val@U?$_Simple_types@G@std@@@std@@@std@@@std@@@std@@@?$_Matcher@V?$_String_const_iterator@V?$_String_val@U?$_Simple_types@G@std@@@std@@@std@@GV?$regex_traits@G@2@V12@@std@@QEAA_NPEAV?$match_results@V?$_String_const_iterator@V?$_String_val@U?$_Simple_types@G@std@@@std@@@std@@V?$allocator@V?$sub_match@V?$_String_const_iterator@V?$_String_val@U?$_Simple_types@G@std@@@std@@@std@@@std@@@2@@1@_N@Z @ 0x180042594 (--$_Match@V-$allocator@V-$sub_match@V-$_String_const_iterator@V-$_String_val@U-$_Simple_types@G@.c)
 * Callees:
 *     ??$_Resize_reallocate@U_Value_init_tag@std@@@?$vector@V?$sub_match@V?$_String_const_iterator@V?$_String_val@U?$_Simple_types@G@std@@@std@@@std@@@std@@V?$allocator@V?$sub_match@V?$_String_const_iterator@V?$_String_val@U?$_Simple_types@G@std@@@std@@@std@@@std@@@2@@std@@AEAAX_KAEBU_Value_init_tag@1@@Z @ 0x18001CD94 (--$_Resize_reallocate@U_Value_init_tag@std@@@-$vector@V-$sub_match@V-$_String_const_iterator@V-$.c)
 */

unsigned __int64 __fastcall std::vector<std::sub_match<std::_String_const_iterator<std::_String_val<std::_Simple_types<unsigned short>>>>>::_Resize<std::_Value_init_tag>(
        __int64 *a1,
        unsigned __int64 a2)
{
  __int64 v2; // r9
  __int64 v3; // rbx
  unsigned __int64 result; // rax
  unsigned __int64 v6; // r11
  __int64 v7; // rcx
  unsigned __int64 v8; // r8

  v2 = a1[1];
  v3 = *a1;
  result = (unsigned __int64)((unsigned __int128)((v2 - *a1) * (__int128)0x2AAAAAAAAAAAAAABLL) >> 64) >> 63;
  v6 = (v2 - *a1) / 24;
  if ( a2 < v6 )
  {
    result = 3 * a2;
    a1[1] = v3 + 24 * a2;
  }
  else if ( a2 > v6 )
  {
    v7 = a1[2] - v3;
    result = (unsigned __int64)((unsigned __int128)(v7 * (__int128)0x2AAAAAAAAAAAAAABLL) >> 64) >> 63;
    if ( a2 <= v7 / 24 )
    {
      v8 = a2 - v6;
      if ( a2 != v6 )
      {
        result = 0LL;
        do
        {
          *(_QWORD *)v2 = 0LL;
          *(_QWORD *)(v2 + 8) = 0LL;
          *(_BYTE *)(v2 + 16) = 0;
          v2 += 24LL;
          --v8;
        }
        while ( v8 );
      }
      a1[1] = v2;
    }
    else
    {
      return std::vector<std::sub_match<std::_String_const_iterator<std::_String_val<std::_Simple_types<unsigned short>>>>>::_Resize_reallocate<std::_Value_init_tag>(
               a1,
               a2);
    }
  }
  return result;
}

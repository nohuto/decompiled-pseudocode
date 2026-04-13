/*
 * XREFs of ??$fill@PEAV?$_List_unchecked_const_iterator@V?$_List_val@U?$_List_simple_types@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@@std@@@std@@U_Iterator_base0@2@@std@@V12@@std@@YAXPEAV?$_List_unchecked_const_iterator@V?$_List_val@U?$_List_simple_types@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@@std@@@std@@U_Iterator_base0@2@@0@0AEBV10@@Z @ 0x1800AC084
 * Callers:
 *     ?_Insert_n@?$vector@V?$_List_unchecked_const_iterator@V?$_List_val@U?$_List_simple_types@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@@std@@@std@@U_Iterator_base0@2@@std@@U?$_Wrap_alloc@V?$allocator@V?$_List_unchecked_const_iterator@V?$_List_val@U?$_List_simple_types@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@@std@@@std@@U_Iterator_base0@2@@std@@@std@@@2@@std@@IEAA?AV?$_Vector_iterator@V?$_Vector_val@U?$_Simple_types@V?$_List_unchecked_const_iterator@V?$_List_val@U?$_List_simple_types@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@@std@@@std@@U_Iterator_base0@2@@std@@@std@@@std@@@2@V?$_Vector_const_iterator@V?$_Vector_val@U?$_Simple_types@V?$_List_unchecked_const_iterator@V?$_List_val@U?$_List_simple_types@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@@std@@@std@@U_Iterator_base0@2@@std@@@std@@@std@@@2@_KAEBV?$_List_unchecked_const_iterator@V?$_List_val@U?$_List_simple_types@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@@std@@@std@@U_Iterator_base0@2@@2@@Z @ 0x1800AFE84 (-_Insert_n@-$vector@V-$_List_unchecked_const_iterator@V-$_List_val@U-$_List_simple_types@V-$basi.c)
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall std::fill<std::_List_unchecked_const_iterator<std::_List_val<std::_List_simple_types<std::wstring>>,std::_Iterator_base0> *,std::_List_unchecked_const_iterator<std::_List_val<std::_List_simple_types<std::wstring>>,std::_Iterator_base0>>(
        unsigned __int64 *a1,
        unsigned __int64 *a2,
        unsigned __int64 *a3)
{
  unsigned __int64 result; // rax
  unsigned __int64 *v5; // r9
  unsigned __int64 v6; // rdx
  unsigned __int64 v7; // rcx
  unsigned __int64 v8; // rdx

  result = 0LL;
  v5 = a1;
  v6 = (unsigned __int64)((char *)a2 - (char *)a1 + 7) >> 3;
  if ( a1 > a2 )
    v6 = 0LL;
  if ( v6 >= 2 )
  {
    result = *a3;
    v7 = (unsigned __int64)&a1[v6 - 1];
    if ( v5 > a3 || v7 < (unsigned __int64)a3 )
    {
      v8 = 8 * (v6 & 0xFFFFFFFFFFFFFFFEuLL);
      memset64(v5, result, v8 >> 3);
      v5 = (unsigned __int64 *)((char *)v5 + v8);
    }
  }
  while ( v5 != a2 )
  {
    result = *a3;
    *v5++ = *a3;
  }
  return result;
}

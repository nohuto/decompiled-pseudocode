/*
 * XREFs of ??$_Emplace_reallocate@AEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@?$vector@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$allocator@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@@std@@QEAAPEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@1@QEAV21@AEBV21@@Z @ 0x18007FD7C
 * Callers:
 *     ?GetReferencedPropertiesFromExpression@CompositionAnimation@Composition@UI@Windows@@IEAAXPEBG0PEAV?$vector@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$allocator@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@@std@@@Z @ 0x180021934 (-GetReferencedPropertiesFromExpression@CompositionAnimation@Composition@UI@Windows@@IEAAXPEBG0PE.c)
 * Callees:
 *     ?_Construct_lv_contents@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEAAXAEBV12@@Z @ 0x180045C14 (-_Construct_lv_contents@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@AEAAXAEBV12.c)
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x180046CF8 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     ??$_Get_size_of_n@$0CA@@std@@YA_K_K@Z @ 0x18007FE7C (--$_Get_size_of_n@$0CA@@std@@YA_K_K@Z.c)
 *     ??$_Uninitialized_move@PEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$allocator@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@@std@@YAPEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@0@QEAV10@0PEAV10@AEAV?$allocator@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@0@@Z @ 0x18007FEA8 (--$_Uninitialized_move@PEAV-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@V-$alloc.c)
 *     ?_Change_array@?$vector@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$allocator@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@@std@@AEAAXQEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@2@_K1@Z @ 0x18007FF1C (-_Change_array@-$vector@V-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@V-$allocat.c)
 *     ?_Dwm_Xlength_error@std@@YAXPEBD@Z @ 0x1801004AC (-_Dwm_Xlength_error@std@@YAXPEBD@Z.c)
 */

_QWORD *__fastcall std::vector<std::wstring>::_Emplace_reallocate<std::wstring const &>(
        const char *a1,
        __int64 a2,
        __int64 a3)
{
  __int64 v3; // rbx
  __int64 v4; // rsi
  __int64 v6; // rax
  unsigned __int64 v9; // r14
  unsigned __int64 v10; // rcx
  unsigned __int64 v11; // rdx
  SIZE_T size_of; // rax
  __int64 v13; // rbp
  _QWORD *v14; // rsi
  __int64 v15; // rdx
  _QWORD *v16; // r8
  __int64 v17; // rcx

  v3 = 0x7FFFFFFFFFFFFFFLL;
  v4 = a2 - *(_QWORD *)a1;
  v6 = (__int64)(*((_QWORD *)a1 + 1) - *(_QWORD *)a1) >> 5;
  if ( v6 == 0x7FFFFFFFFFFFFFFLL )
    std::_Dwm_Xlength_error(a1);
  v9 = v6 + 1;
  v10 = (__int64)(*((_QWORD *)a1 + 2) - *(_QWORD *)a1) >> 5;
  v11 = v10 >> 1;
  if ( v10 <= 0x7FFFFFFFFFFFFFFLL - (v10 >> 1) )
  {
    v3 = v11 + v10;
    if ( v11 + v10 < v9 )
      v3 = v6 + 1;
  }
  size_of = std::_Get_size_of_n<32>(v3);
  v13 = std::_Allocate<16,std::_Default_allocate_traits,0>(size_of);
  v14 = (_QWORD *)(v13 + (v4 & 0xFFFFFFFFFFFFFFE0uLL));
  *v14 = 0LL;
  v14[2] = 0LL;
  v14[3] = 0LL;
  std::wstring::_Construct_lv_contents((__int64)v14, a3);
  v15 = *((_QWORD *)a1 + 1);
  v16 = (_QWORD *)v13;
  v17 = *(_QWORD *)a1;
  if ( a2 != v15 )
  {
    std::_Uninitialized_move<std::wstring *>(v17, a2, v13);
    v15 = *((_QWORD *)a1 + 1);
    v16 = v14 + 4;
    v17 = a2;
  }
  std::_Uninitialized_move<std::wstring *>(v17, v15, v16);
  std::vector<std::wstring>::_Change_array(a1, v13, v9, v3);
  return v14;
}

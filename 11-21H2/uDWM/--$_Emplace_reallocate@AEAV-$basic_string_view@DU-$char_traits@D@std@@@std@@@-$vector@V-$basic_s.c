/*
 * XREFs of ??$_Emplace_reallocate@AEAV?$basic_string_view@DU?$char_traits@D@std@@@std@@@?$vector@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$allocator@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@@std@@QEAAPEAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@1@QEAV21@AEAV?$basic_string_view@DU?$char_traits@D@std@@@1@@Z @ 0x1800F1D44
 * Callers:
 *     ??$emplace_back@AEAV?$basic_string_view@DU?$char_traits@D@std@@@std@@@?$vector@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$allocator@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@@std@@QEAAAEAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@1@AEAV?$basic_string_view@DU?$char_traits@D@std@@@1@@Z @ 0x1800F2728 (--$emplace_back@AEAV-$basic_string_view@DU-$char_traits@D@std@@@std@@@-$vector@V-$basic_string@D.c)
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x180037FCC (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     ??$_Get_size_of_n@$0CA@@std@@YA_K_K@Z @ 0x18003800C (--$_Get_size_of_n@$0CA@@std@@YA_K_K@Z.c)
 *     ?assign@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAAAEAV12@QEBD_K@Z @ 0x180042A60 (-assign@-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEAAAEAV12@QEBD_K@Z.c)
 *     ??$_Uninitialized_move@PEAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$allocator@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@@std@@YAPEAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@0@QEAV10@0PEAV10@AEAV?$allocator@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@0@@Z @ 0x1800F24FC (--$_Uninitialized_move@PEAV-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@V-$alloc.c)
 *     ?_Calculate_growth@?$vector@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$allocator@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@@std@@AEBA_K_K@Z @ 0x1800F5C54 (-_Calculate_growth@-$vector@V-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@V-$all.c)
 *     ?_Change_array@?$vector@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$allocator@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@@std@@AEAAXQEAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@2@_K1@Z @ 0x1800F5D20 (-_Change_array@-$vector@V-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@V-$allocat.c)
 *     ?_Dwm_Xlength_error@std@@YAXPEBD@Z @ 0x180107A14 (-_Dwm_Xlength_error@std@@YAXPEBD@Z.c)
 */

// Hidden C++ exception states: #wind=1
unsigned __int64 __fastcall std::vector<std::string>::_Emplace_reallocate<std::string_view &>(
        __int64 *a1,
        __int64 a2,
        const void **a3)
{
  __int64 v6; // rdi
  __int64 v7; // rax
  __int64 v8; // r14
  unsigned __int64 v9; // r15
  unsigned __int64 size_of; // rax
  __int64 v11; // rbp
  unsigned __int64 v12; // rdi
  __int64 v13; // rdx
  __int64 v14; // r8
  __int64 v15; // rcx

  v6 = a2 - *a1;
  v7 = (a1[1] - *a1) >> 5;
  if ( v7 == 0x7FFFFFFFFFFFFFFLL )
    std::_Dwm_Xlength_error((const char *)0x7FFFFFFFFFFFFFFLL);
  v8 = v7 + 1;
  v9 = std::vector<std::string>::_Calculate_growth(a1, v7 + 1);
  size_of = std::_Get_size_of_n<32>(v9);
  v11 = std::_Allocate<16,std::_Default_allocate_traits,0>(size_of);
  v12 = v11 + (v6 & 0xFFFFFFFFFFFFFFE0uLL);
  *(_QWORD *)(v12 + 16) = 0LL;
  *(_QWORD *)(v12 + 24) = 15LL;
  *(_BYTE *)v12 = 0;
  std::string::assign((void **)v12, *a3, _mm_srli_si128(*(__m128i *)a3, 8).m128i_u64[0]);
  v13 = a1[1];
  v14 = v11;
  v15 = *a1;
  if ( a2 != v13 )
  {
    std::_Uninitialized_move<std::string *>(v15, a2, v11);
    v14 = v12 + 32;
    v13 = a1[1];
    v15 = a2;
  }
  std::_Uninitialized_move<std::string *>(v15, v13, v14);
  std::vector<std::string>::_Change_array(a1, v11, v8, v9);
  return v12;
}

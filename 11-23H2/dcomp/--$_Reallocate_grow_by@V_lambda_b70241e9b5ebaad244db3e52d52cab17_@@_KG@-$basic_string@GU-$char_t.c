/*
 * XREFs of ??$_Reallocate_grow_by@V_lambda_b70241e9b5ebaad244db3e52d52cab17_@@_KG@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEAAAEAV01@_KV_lambda_b70241e9b5ebaad244db3e52d52cab17_@@_KG@Z @ 0x18014E970
 * Callers:
 *     ?do_transform@?$collate@G@std@@MEBA?AV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@2@PEBG0@Z @ 0x180150920 (-do_transform@-$collate@G@std@@MEBA-AV-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@2@.c)
 * Callees:
 *     ??$_Get_size_of_n@$01@std@@YA_K_K@Z @ 0x180043FA0 (--$_Get_size_of_n@$01@std@@YA_K_K@Z.c)
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x180046CF8 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x180080EBC (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ?_Dwm_Xlength_error@std@@YAXPEBD@Z @ 0x1801004AC (-_Dwm_Xlength_error@std@@YAXPEBD@Z.c)
 *     ?_Calculate_growth@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEBA_K_K@Z @ 0x180109D54 (-_Calculate_growth@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@AEBA_K_K@Z.c)
 *     ??R_lambda_b70241e9b5ebaad244db3e52d52cab17_@@QEBA@QEAGQEBG_K2G@Z @ 0x18014EF1C (--R_lambda_b70241e9b5ebaad244db3e52d52cab17_@@QEBA@QEAGQEBG_K2G@Z.c)
 */

char *__fastcall std::wstring::_Reallocate_grow_by<_lambda_b70241e9b5ebaad244db3e52d52cab17_,unsigned __int64,unsigned short>(
        char *a1,
        unsigned __int64 a2,
        __int64 a3,
        __int64 a4)
{
  __int64 v4; // r14
  unsigned __int64 v7; // r12
  __int64 v8; // rdi
  unsigned __int64 v9; // rbx
  SIZE_T size_of; // rax
  __int64 v11; // rax
  __int64 v12; // rcx
  __int64 v13; // rbp
  void *v14; // rbx

  v4 = *((_QWORD *)a1 + 2);
  if ( 0x7FFFFFFFFFFFFFFELL - v4 < a2 )
    std::_Dwm_Xlength_error(a1);
  v7 = *((_QWORD *)a1 + 3);
  v8 = v4 + a2;
  v9 = std::wstring::_Calculate_growth((__int64)a1, v4 + a2);
  size_of = std::_Get_size_of_n<2>(v9 + 1);
  v11 = std::_Allocate<16,std::_Default_allocate_traits,0>(size_of);
  *((_QWORD *)a1 + 2) = v8;
  v13 = v11;
  *((_QWORD *)a1 + 3) = v9;
  if ( v7 < 8 )
  {
    _lambda_b70241e9b5ebaad244db3e52d52cab17_::operator()(v12, v11, a1, v4, a4);
  }
  else
  {
    v14 = *(void **)a1;
    _lambda_b70241e9b5ebaad244db3e52d52cab17_::operator()(v12, v11, *(_QWORD *)a1, v4, a4);
    std::_Deallocate<16,0>(v14, 2 * v7 + 2);
  }
  *(_QWORD *)a1 = v13;
  return a1;
}

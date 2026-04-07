/*
 * XREFs of ??$_Reallocate_grow_by@V_lambda_b70241e9b5ebaad244db3e52d52cab17_@@_KG@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEAAAEAV01@_KV_lambda_b70241e9b5ebaad244db3e52d52cab17_@@_KG@Z @ 0x1800192A8
 * Callers:
 *     ?CreateTextFormat@CDWriteText@@AEAAJXZ @ 0x180018B74 (-CreateTextFormat@CDWriteText@@AEAAJXZ.c)
 * Callees:
 *     ??R_lambda_b70241e9b5ebaad244db3e52d52cab17_@@QEBA@QEAGQEBG_K2G@Z @ 0x180017D18 (--R_lambda_b70241e9b5ebaad244db3e52d52cab17_@@QEBA@QEAGQEBG_K2G@Z.c)
 *     ?_Calculate_growth@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEBA_K_K@Z @ 0x180019264 (-_Calculate_growth@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@AEBA_K_K@Z.c)
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x18001BD70 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x1800558D4 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ?_Throw_bad_array_new_length@std@@YAXXZ @ 0x1800B8D34 (-_Throw_bad_array_new_length@std@@YAXXZ.c)
 *     ?_Dwm_Xlength_error@std@@YAXPEBD@Z @ 0x18010E050 (-_Dwm_Xlength_error@std@@YAXPEBD@Z.c)
 */

__int64 __fastcall std::wstring::_Reallocate_grow_by<_lambda_b70241e9b5ebaad244db3e52d52cab17_,unsigned __int64,unsigned short>(
        __int64 a1,
        unsigned __int64 a2,
        __int64 a3,
        __int64 a4)
{
  __int64 v4; // r14
  unsigned __int64 v7; // r15
  unsigned __int64 v8; // rbx
  unsigned __int64 v9; // r13
  char *v10; // rax
  __int64 v11; // rcx
  char *v12; // rsi
  const void *v14; // rbx

  v4 = *(_QWORD *)(a1 + 16);
  if ( 0x7FFFFFFFFFFFFFFELL - v4 < a2 )
    std::_Dwm_Xlength_error((const char *)a1);
  v7 = *(_QWORD *)(a1 + 24);
  v8 = v4 + a2;
  v9 = std::wstring::_Calculate_growth(a1, v4 + a2);
  if ( v9 + 1 > 0x7FFFFFFFFFFFFFFFLL )
    std::_Throw_bad_array_new_length();
  v10 = (char *)std::_Allocate<16,std::_Default_allocate_traits,0>(2 * (v9 + 1));
  *(_QWORD *)(a1 + 16) = v8;
  v12 = v10;
  *(_QWORD *)(a1 + 24) = v9;
  if ( v7 >= 8 )
  {
    v14 = *(const void **)a1;
    _lambda_b70241e9b5ebaad244db3e52d52cab17_::operator()(v11, v10, *(const void **)a1, v4, a4);
    std::_Deallocate<16,0>(v14, 2 * v7 + 2);
  }
  else
  {
    _lambda_b70241e9b5ebaad244db3e52d52cab17_::operator()(v11, v10, (const void *)a1, v4, a4);
  }
  *(_QWORD *)a1 = v12;
  return a1;
}

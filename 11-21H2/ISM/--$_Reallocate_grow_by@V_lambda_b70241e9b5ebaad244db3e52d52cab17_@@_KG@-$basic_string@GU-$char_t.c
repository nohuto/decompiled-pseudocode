/*
 * XREFs of ??$_Reallocate_grow_by@V_lambda_b70241e9b5ebaad244db3e52d52cab17_@@_KG@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEAAAEAV01@_KV_lambda_b70241e9b5ebaad244db3e52d52cab17_@@_KG@Z @ 0x1800811F0
 * Callers:
 *     ?append@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAAAEAV12@_KG@Z @ 0x180082DC0 (-append@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAAAEAV12@_KG@Z.c)
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x1800044C8 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x18000E6AC (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ?_Throw_bad_array_new_length@std@@YAXXZ @ 0x180080E10 (-_Throw_bad_array_new_length@std@@YAXXZ.c)
 *     ??R_lambda_b70241e9b5ebaad244db3e52d52cab17_@@QEBAXQEAGQEBG_K2G@Z @ 0x180081B00 (--R_lambda_b70241e9b5ebaad244db3e52d52cab17_@@QEBAXQEAGQEBG_K2G@Z.c)
 *     ?_Calculate_growth@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@CA_K_K00@Z @ 0x180082804 (-_Calculate_growth@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@CA_K_K00@Z.c)
 *     ?_Xlen_string@std@@YAXXZ @ 0x180082D28 (-_Xlen_string@std@@YAXXZ.c)
 */

_QWORD *__fastcall std::wstring::_Reallocate_grow_by<_lambda_b70241e9b5ebaad244db3e52d52cab17_,unsigned __int64,unsigned short>(
        _QWORD *a1,
        unsigned __int64 a2,
        __int64 a3,
        __int64 a4)
{
  __int64 v4; // r14
  unsigned __int64 v7; // r15
  __int64 v8; // rbx
  __int64 v9; // r13
  void *v10; // rax
  __int64 v11; // rcx
  void *v12; // rsi
  void *v13; // rbx

  v4 = a1[2];
  if ( 0x7FFFFFFFFFFFFFFELL - v4 < a2 )
    std::_Xlen_string();
  v7 = a1[3];
  v8 = v4 + a2;
  v9 = std::wstring::_Calculate_growth(v4 + a2, v7);
  if ( (unsigned __int64)(v9 + 1) > 0x7FFFFFFFFFFFFFFFLL )
    std::_Throw_bad_array_new_length();
  v10 = std::_Allocate<16,std::_Default_allocate_traits,0>(2 * (v9 + 1));
  a1[2] = v8;
  v12 = v10;
  a1[3] = v9;
  if ( v7 < 8 )
  {
    _lambda_b70241e9b5ebaad244db3e52d52cab17_::operator()(v11, v10, a1, v4, a4);
  }
  else
  {
    v13 = (void *)*a1;
    _lambda_b70241e9b5ebaad244db3e52d52cab17_::operator()(v11, v10, *a1, v4, a4);
    std::_Deallocate<16,0>(v13, 2 * v7 + 2);
  }
  *a1 = v12;
  return a1;
}

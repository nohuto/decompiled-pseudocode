/*
 * XREFs of ??$_Reallocate_grow_by@V_lambda_b70241e9b5ebaad244db3e52d52cab17_@@_KG@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEAAAEAV01@_KV_lambda_b70241e9b5ebaad244db3e52d52cab17_@@_KG@Z @ 0x18032902C
 * Callers:
 *     ?append@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAAAEAV12@_KG@Z @ 0x18033CC7C (-append@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAAAEAV12@_KG@Z.c)
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x180087484 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     ??$_Get_size_of_n@$01@std@@YA_K_K@Z @ 0x18008964C (--$_Get_size_of_n@$01@std@@YA_K_K@Z.c)
 *     ?_Calculate_growth@?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@AEBA_K_K@Z @ 0x180089678 (-_Calculate_growth@-$basic_string@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@std@@AEBA_K_K@Z.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x18013E4BC (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ?_Xlen_string@std@@YAXXZ @ 0x1802EBAEC (-_Xlen_string@std@@YAXXZ.c)
 *     ??R_lambda_b70241e9b5ebaad244db3e52d52cab17_@@QEBAXQEAGQEBG_K2G@Z @ 0x18032CE34 (--R_lambda_b70241e9b5ebaad244db3e52d52cab17_@@QEBAXQEAGQEBG_K2G@Z.c)
 */

_QWORD *__fastcall std::wstring::_Reallocate_grow_by<_lambda_b70241e9b5ebaad244db3e52d52cab17_,unsigned __int64,unsigned short>(
        _QWORD *a1,
        unsigned __int64 a2,
        __int64 a3,
        __int64 a4,
        __int16 a5)
{
  __int64 v5; // r14
  unsigned __int64 v8; // r12
  __int64 v9; // rdi
  unsigned __int64 v10; // rbx
  size_t size_of; // rax
  void *v12; // rax
  __int64 v13; // rcx
  void *v14; // rbp
  void *v15; // rbx

  v5 = a1[2];
  if ( 0x7FFFFFFFFFFFFFFELL - v5 < a2 )
    std::_Xlen_string();
  v8 = a1[3];
  v9 = v5 + a2;
  v10 = std::wstring::_Calculate_growth((__int64)a1, v5 + a2);
  size_of = std::_Get_size_of_n<2>(v10 + 1);
  v12 = std::_Allocate<16,std::_Default_allocate_traits,0>(size_of);
  a1[2] = v9;
  v14 = v12;
  a1[3] = v10;
  if ( v8 < 8 )
  {
    _lambda_b70241e9b5ebaad244db3e52d52cab17_::operator()(v13, v12, a1, v5, a4, a5);
  }
  else
  {
    v15 = (void *)*a1;
    _lambda_b70241e9b5ebaad244db3e52d52cab17_::operator()(v13, v12, *a1, v5, a4, a5);
    std::_Deallocate<16,0>(v15, 2 * v8 + 2);
  }
  *a1 = v14;
  return a1;
}

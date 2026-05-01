/*
 * XREFs of ??$_Reallocate_grow_by@V_lambda_b70241e9b5ebaad244db3e52d52cab17_@@_KG@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEAAAEAV01@_KV_lambda_b70241e9b5ebaad244db3e52d52cab17_@@_KG@Z @ 0x180391334
 * Callers:
 *     ?append@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAAAEAV12@_KG@Z @ 0x1802CED4A (-append@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAAAEAV12@_KG@Z.c)
 * Callees:
 *     ??$_Get_size_of_n@$01@std@@YA_K_K@Z @ 0x180093044 (--$_Get_size_of_n@$01@std@@YA_K_K@Z.c)
 *     ?_Calculate_growth@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@CA_K_K00@Z @ 0x1800C3DC4 (-_Calculate_growth@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@CA_K_K00@Z.c)
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x1800C4204 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x180168F3C (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ??R_lambda_b70241e9b5ebaad244db3e52d52cab17_@@QEBA@QEAGQEBG_K2G@Z @ 0x1803918C4 (--R_lambda_b70241e9b5ebaad244db3e52d52cab17_@@QEBA@QEAGQEBG_K2G@Z.c)
 *     ?_Xlen_string@std@@YAXXZ @ 0x180392130 (-_Xlen_string@std@@YAXXZ.c)
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
  v10 = std::wstring::_Calculate_growth(v5 + a2, v8, 0x7FFFFFFFFFFFFFFEuLL);
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

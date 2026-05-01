/*
 * XREFs of ??$_Reallocate_for@V_lambda_8317d86ccc4fc543e8e6132f798c706e_@@G@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEAAAEAV01@_KV_lambda_8317d86ccc4fc543e8e6132f798c706e_@@G@Z @ 0x1800AF8E8
 * Callers:
 *     ??0?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAA@_KG@Z @ 0x1800B08A8 (--0-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAA@_KG@Z.c)
 *     ?clear_name@reg_iterator_details@reg@wil@@YAXAEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@_K@Z @ 0x1801F07F0 (-clear_name@reg_iterator_details@reg@wil@@YAXAEAV-$basic_string@GU-$char_traits@G@std@@V-$alloca.c)
 * Callees:
 *     ??$_Get_size_of_n@$01@std@@YA_K_K@Z @ 0x180093044 (--$_Get_size_of_n@$01@std@@YA_K_K@Z.c)
 *     ?_Calculate_growth@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@CA_K_K00@Z @ 0x1800C3DC4 (-_Calculate_growth@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@CA_K_K00@Z.c)
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x1800C4204 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x180168F3C (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     wmemset @ 0x1801AE20C (wmemset.c)
 *     ?_Xlen_string@std@@YAXXZ @ 0x180392130 (-_Xlen_string@std@@YAXXZ.c)
 */

wchar_t **__fastcall std::wstring::_Reallocate_for<_lambda_8317d86ccc4fc543e8e6132f798c706e_,unsigned short>(
        wchar_t **a1,
        size_t a2,
        __int64 a3,
        wchar_t a4)
{
  unsigned __int64 v7; // rbp
  __int64 v8; // rbx
  __int64 size_of; // rax
  wchar_t *v10; // rax
  wchar_t *v11; // r14

  if ( a2 > 0x7FFFFFFFFFFFFFFELL )
    std::_Xlen_string();
  v7 = (unsigned __int64)a1[3];
  v8 = std::wstring::_Calculate_growth(a2, v7);
  size_of = std::_Get_size_of_n<2>(v8 + 1);
  v10 = (wchar_t *)std::_Allocate<16,std::_Default_allocate_traits,0>(size_of);
  a1[2] = (wchar_t *)a2;
  a1[3] = (wchar_t *)v8;
  v11 = v10;
  wmemset(v10, a4, a2);
  v11[a2] = 0;
  if ( v7 >= 8 )
    std::_Deallocate<16,0>(*a1, 2 * v7 + 2);
  *a1 = v11;
  return a1;
}

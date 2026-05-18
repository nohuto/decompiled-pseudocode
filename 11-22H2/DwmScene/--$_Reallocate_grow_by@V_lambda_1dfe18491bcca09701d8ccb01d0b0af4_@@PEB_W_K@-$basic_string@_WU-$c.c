/*
 * XREFs of ??$_Reallocate_grow_by@V_lambda_1dfe18491bcca09701d8ccb01d0b0af4_@@PEB_W_K@?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@AEAAAEAV01@_KV_lambda_1dfe18491bcca09701d8ccb01d0b0af4_@@PEB_W_K@Z @ 0x18001E9C8
 * Callers:
 *     ?append@?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@QEAAAEAV12@QEB_W_K@Z @ 0x18001F718 (-append@-$basic_string@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@std@@QEAAAEAV12@QEB_W_K@Z.c)
 * Callees:
 *     memcpy_0 @ 0x18000CA61 (memcpy_0.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x1800100E8 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x18001090C (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     ?_Xlen_string@std@@YAXXZ @ 0x180011B60 (-_Xlen_string@std@@YAXXZ.c)
 *     ??$_Get_size_of_n@$01@std@@YA_K_K@Z @ 0x18001217C (--$_Get_size_of_n@$01@std@@YA_K_K@Z.c)
 *     ?_Calculate_growth@?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@CA_K_K00@Z @ 0x18001E5D0 (-_Calculate_growth@-$basic_string@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@std@@CA_K_K00@Z.c)
 */

void **__fastcall std::wstring::_Reallocate_grow_by<_lambda_1dfe18491bcca09701d8ccb01d0b0af4_,wchar_t const *,unsigned __int64>(
        void **Src,
        unsigned __int64 a2,
        __int64 a3,
        const void *a4,
        __int64 a5)
{
  void *v5; // r15
  unsigned __int64 v8; // r13
  char *v9; // rdi
  unsigned __int64 v10; // rbx
  unsigned __int64 size_of; // rax
  char *v12; // rax
  size_t v13; // r8
  __int64 v14; // r15
  char *v15; // r14
  char *v16; // r12
  size_t v17; // rdi
  void *v18; // rbx

  v5 = Src[2];
  if ( 0x7FFFFFFFFFFFFFFELL - (__int64)v5 < a2 )
    std::_Xlen_string();
  v8 = (unsigned __int64)Src[3];
  v9 = (char *)v5 + a2;
  v10 = std::wstring::_Calculate_growth((__int64)v5 + a2, v8, 0x7FFFFFFFFFFFFFFEuLL);
  size_of = std::_Get_size_of_n<2>(v10 + 1);
  v12 = (char *)std::_Allocate<16,std::_Default_allocate_traits,0>(size_of);
  v13 = 2LL * (_QWORD)v5;
  v14 = (__int64)v5 + a5;
  Src[2] = v9;
  Src[3] = (void *)v10;
  v15 = v12;
  v16 = &v12[v13];
  v17 = 2 * a5;
  if ( v8 < 8 )
  {
    memcpy_0(v12, Src, v13);
    memcpy_0(v16, a4, v17);
    *(_WORD *)&v15[2 * v14] = 0;
  }
  else
  {
    v18 = *Src;
    memcpy_0(v12, *Src, v13);
    memcpy_0(v16, a4, v17);
    *(_WORD *)&v15[2 * v14] = 0;
    std::_Deallocate<16,0>(v18, 2 * v8 + 2);
  }
  *Src = v15;
  return Src;
}

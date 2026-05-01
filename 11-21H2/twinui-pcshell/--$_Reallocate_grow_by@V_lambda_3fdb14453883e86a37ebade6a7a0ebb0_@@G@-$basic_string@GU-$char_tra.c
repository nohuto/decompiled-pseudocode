/*
 * XREFs of ??$_Reallocate_grow_by@V_lambda_3fdb14453883e86a37ebade6a7a0ebb0_@@G@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEAAAEAV01@_KV_lambda_3fdb14453883e86a37ebade6a7a0ebb0_@@G@Z @ 0x180582F5C
 * Callers:
 *     ?push_back@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAAXG@Z @ 0x180587C48 (-push_back@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAAXG@Z.c)
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x180087484 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     ??$_Get_size_of_n@$01@std@@YA_K_K@Z @ 0x18008964C (--$_Get_size_of_n@$01@std@@YA_K_K@Z.c)
 *     ?_Calculate_growth@?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@AEBA_K_K@Z @ 0x180089678 (-_Calculate_growth@-$basic_string@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@std@@AEBA_K_K@Z.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x18013E4BC (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     memcpy_0 @ 0x1801EACEF (memcpy_0.c)
 *     ?_Xlen_string@std@@YAXXZ @ 0x1802EBAEC (-_Xlen_string@std@@YAXXZ.c)
 */

void **__fastcall std::wstring::_Reallocate_grow_by<_lambda_3fdb14453883e86a37ebade6a7a0ebb0_,unsigned short>(
        void **Src,
        __int64 a2,
        __int64 a3,
        __int16 a4)
{
  void *v4; // r14
  unsigned __int64 v7; // r12
  unsigned __int64 v8; // rbx
  size_t size_of; // rax
  char *v10; // rax
  __int64 v11; // rdi
  size_t v12; // r8
  char *v13; // rbp
  void *v14; // rbx

  v4 = Src[2];
  if ( v4 == (void *)0x7FFFFFFFFFFFFFFELL )
    std::_Xlen_string();
  v7 = (unsigned __int64)Src[3];
  v8 = std::wstring::_Calculate_growth((__int64)Src, (__int64)v4 + 1);
  size_of = std::_Get_size_of_n<2>(v8 + 1);
  v10 = (char *)std::_Allocate<16,std::_Default_allocate_traits,0>(size_of);
  Src[2] = (char *)v4 + 1;
  v11 = 2LL * (_QWORD)v4;
  Src[3] = (void *)v8;
  v12 = 2LL * (_QWORD)v4;
  v13 = v10;
  if ( v7 < 8 )
  {
    memcpy_0(v10, Src, v12);
    *(_WORD *)&v13[v11] = a4;
    *(_WORD *)&v13[v11 + 2] = 0;
  }
  else
  {
    v14 = *Src;
    memcpy_0(v10, *Src, v12);
    *(_WORD *)&v13[v11] = a4;
    *(_WORD *)&v13[v11 + 2] = 0;
    std::_Deallocate<16,0>(v14, 2 * v7 + 2);
  }
  *Src = v13;
  return Src;
}

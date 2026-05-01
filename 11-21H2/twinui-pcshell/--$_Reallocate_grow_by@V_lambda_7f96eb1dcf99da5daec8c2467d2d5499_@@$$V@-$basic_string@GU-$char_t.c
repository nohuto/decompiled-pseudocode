/*
 * XREFs of ??$_Reallocate_grow_by@V_lambda_7f96eb1dcf99da5daec8c2467d2d5499_@@$$V@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEAAAEAV01@_KV_lambda_7f96eb1dcf99da5daec8c2467d2d5499_@@@Z @ 0x1803711D8
 * Callers:
 *     ?reserve@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAAX_K@Z @ 0x180374980 (-reserve@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAAX_K@Z.c)
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x180087484 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     ??$_Get_size_of_n@$01@std@@YA_K_K@Z @ 0x18008964C (--$_Get_size_of_n@$01@std@@YA_K_K@Z.c)
 *     ?_Calculate_growth@?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@AEBA_K_K@Z @ 0x180089678 (-_Calculate_growth@-$basic_string@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@std@@AEBA_K_K@Z.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x18013E4BC (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     memcpy_0 @ 0x1801EACEF (memcpy_0.c)
 *     ?_Xlen_string@std@@YAXXZ @ 0x1802EBAEC (-_Xlen_string@std@@YAXXZ.c)
 */

void **__fastcall std::wstring::_Reallocate_grow_by<_lambda_7f96eb1dcf99da5daec8c2467d2d5499_,>(
        void **Src,
        unsigned __int64 a2)
{
  void *v2; // r14
  unsigned __int64 v4; // r15
  char *v5; // rdi
  unsigned __int64 v6; // rbx
  size_t size_of; // rax
  void *v8; // rax
  void *v9; // rbp
  size_t v10; // r8
  void *v11; // rbx

  v2 = Src[2];
  if ( 0x7FFFFFFFFFFFFFFELL - (__int64)v2 < a2 )
    std::_Xlen_string();
  v4 = (unsigned __int64)Src[3];
  v5 = (char *)v2 + a2;
  v6 = std::wstring::_Calculate_growth((__int64)Src, (__int64)v2 + a2);
  size_of = std::_Get_size_of_n<2>(v6 + 1);
  v8 = std::_Allocate<16,std::_Default_allocate_traits,0>(size_of);
  Src[2] = v5;
  v9 = v8;
  Src[3] = (void *)v6;
  v10 = 2LL * (_QWORD)v2 + 2;
  if ( v4 < 8 )
  {
    memcpy_0(v8, Src, v10);
  }
  else
  {
    v11 = *Src;
    memcpy_0(v8, *Src, v10);
    std::_Deallocate<16,0>(v11, 2 * v4 + 2);
  }
  *Src = v9;
  return Src;
}

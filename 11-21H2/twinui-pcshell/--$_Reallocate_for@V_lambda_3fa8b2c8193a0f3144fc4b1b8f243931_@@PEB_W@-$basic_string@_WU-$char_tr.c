/*
 * XREFs of ??$_Reallocate_for@V_lambda_3fa8b2c8193a0f3144fc4b1b8f243931_@@PEB_W@?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@AEAAAEAV01@_KV_lambda_3fa8b2c8193a0f3144fc4b1b8f243931_@@PEB_W@Z @ 0x18041F83C
 * Callers:
 *     ?assign@?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@QEAAAEAV12@QEB_W_K@Z @ 0x180421750 (-assign@-$basic_string@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@std@@QEAAAEAV12@QEB_W_K@Z.c)
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x180087484 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     ??$_Get_size_of_n@$01@std@@YA_K_K@Z @ 0x18008964C (--$_Get_size_of_n@$01@std@@YA_K_K@Z.c)
 *     ?_Calculate_growth@?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@AEBA_K_K@Z @ 0x180089678 (-_Calculate_growth@-$basic_string@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@std@@AEBA_K_K@Z.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x18013E4BC (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     memcpy_0 @ 0x1801EACEF (memcpy_0.c)
 *     ?_Xlen_string@std@@YAXXZ @ 0x1802EBAEC (-_Xlen_string@std@@YAXXZ.c)
 */

__int64 __fastcall std::wstring::_Reallocate_for<_lambda_3fa8b2c8193a0f3144fc4b1b8f243931_,wchar_t const *>(
        __int64 a1,
        unsigned __int64 a2,
        __int64 a3,
        const void *a4)
{
  unsigned __int64 v7; // r14
  unsigned __int64 v8; // rbx
  size_t size_of; // rax
  _WORD *v10; // rax
  _WORD *v11; // rbp

  if ( a2 > 0x7FFFFFFFFFFFFFFELL )
    std::_Xlen_string();
  v7 = *(_QWORD *)(a1 + 24);
  v8 = std::wstring::_Calculate_growth(a1, a2);
  size_of = std::_Get_size_of_n<2>(v8 + 1);
  v10 = std::_Allocate<16,std::_Default_allocate_traits,0>(size_of);
  *(_QWORD *)(a1 + 24) = v8;
  *(_QWORD *)(a1 + 16) = a2;
  v11 = v10;
  memcpy_0(v10, a4, 2 * a2);
  v11[a2] = 0;
  if ( v7 >= 8 )
    std::_Deallocate<16,0>(*(void **)a1, 2 * v7 + 2);
  *(_QWORD *)a1 = v11;
  return a1;
}

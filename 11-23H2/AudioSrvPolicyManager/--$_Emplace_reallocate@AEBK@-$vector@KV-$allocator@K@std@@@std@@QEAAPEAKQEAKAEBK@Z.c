/*
 * XREFs of ??$_Emplace_reallocate@AEBK@?$vector@KV?$allocator@K@std@@@std@@QEAAPEAKQEAKAEBK@Z @ 0x180024274
 * Callers:
 *     ?RuntimeClassInitialize@CProcess@@QEAAJPEAXKKPEBG1_K1H1HHHHHHHH_NHH@Z @ 0x18002975C (-RuntimeClassInitialize@CProcess@@QEAAJPEAXKKPEBG1_K1H1HHHHHHHH_NHH@Z.c)
 *     _lambda_3e5545835e9bff8590988e372067e9cf_::operator() @ 0x180034378 (_lambda_3e5545835e9bff8590988e372067e9cf_--operator().c)
 *     ?AddRelatedProcess@ApplicationSpecificEndpointInfo@@UEAAJK@Z @ 0x180041010 (-AddRelatedProcess@ApplicationSpecificEndpointInfo@@UEAAJK@Z.c)
 * Callees:
 *     ?_Calculate_growth@?$vector@KV?$allocator@K@std@@@std@@AEBA_K_K@Z @ 0x18002AE58 (-_Calculate_growth@-$vector@KV-$allocator@K@std@@@std@@AEBA_K_K@Z.c)
 *     ?_Change_array@?$vector@KV?$allocator@K@std@@@std@@AEAAXQEAK_K1@Z @ 0x18002AE94 (-_Change_array@-$vector@KV-$allocator@K@std@@@std@@AEAAXQEAK_K1@Z.c)
 *     ?allocate@?$allocator@K@std@@QEAAPEAK_K@Z @ 0x18002B744 (-allocate@-$allocator@K@std@@QEAAPEAK_K@Z.c)
 *     memmove_0 @ 0x180047698 (memmove_0.c)
 */

char *__fastcall std::vector<unsigned long>::_Emplace_reallocate<unsigned long const &>(
        const void **a1,
        _BYTE *a2,
        _DWORD *a3)
{
  __int64 v6; // rsi
  __int64 v7; // rax
  __int64 v8; // r12
  __int64 v9; // r15
  __int64 v10; // rcx
  char *v11; // rax
  char *v12; // rdi
  char *v13; // rsi
  _BYTE *v14; // r8
  _BYTE *v15; // rdx
  void *v16; // rcx
  size_t v17; // r8
  char *result; // rax
  void *v19; // [rsp+58h] [rbp+10h]

  v6 = (a2 - (_BYTE *)*a1) >> 2;
  v7 = ((_BYTE *)a1[1] - (_BYTE *)*a1) >> 2;
  if ( v7 == 0x3FFFFFFFFFFFFFFFLL )
    std::_Xlength_error("vector too long");
  v8 = v7 + 1;
  v9 = std::vector<unsigned long>::_Calculate_growth(a1, v7 + 1);
  v11 = (char *)std::allocator<unsigned long>::allocate(v10, v9);
  v12 = v11;
  v19 = v11;
  try
  {
    v13 = &v11[4 * v6];
    *(_DWORD *)v13 = *a3;
    v14 = a1[1];
    v15 = *a1;
    v16 = v11;
    if ( a2 == v14 )
    {
      v17 = v14 - v15;
    }
    else
    {
      memmove_0(v11, v15, a2 - (_BYTE *)*a1);
      v16 = v13 + 4;
      v17 = (_BYTE *)a1[1] - a2;
      v15 = a2;
    }
    memmove_0(v16, v15, v17);
    std::vector<unsigned long>::_Change_array(a1, v12, v8, v9);
    result = v13;
  }
  catch ( ... )
  {
    std::_Deallocate<16,0>(v19, 4 * v9);
    throw;
  }
  return result;
}

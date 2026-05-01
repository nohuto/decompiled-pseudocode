/*
 * XREFs of ?_Reallocate_exactly@?$vector@USnapAssistRegion@WindowSnapping@Shell@Internal@Windows@ABI@@V?$allocator@USnapAssistRegion@WindowSnapping@Shell@Internal@Windows@ABI@@@std@@@std@@AEAAX_K@Z @ 0x1806046D0
 * Callers:
 *     ?SetRegions@XamlSnapAssistViewHost@@UEAAJIPEAUSnapAssistRegion@WindowSnapping@Shell@Internal@Windows@ABI@@@Z @ 0x1806030E0 (-SetRegions@XamlSnapAssistViewHost@@UEAAJIPEAUSnapAssistRegion@WindowSnapping@Shell@Internal@Win.c)
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x180087484 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     ??$_Get_size_of_n@$0CA@@std@@YA_K_K@Z @ 0x18009D65C (--$_Get_size_of_n@$0CA@@std@@YA_K_K@Z.c)
 *     memmove_0 @ 0x1801EACFB (memmove_0.c)
 */

void __fastcall std::vector<ABI::Windows::Internal::Shell::WindowSnapping::SnapAssistRegion>::_Reallocate_exactly(
        __int64 a1,
        unsigned __int64 a2)
{
  __int64 v4; // rdi
  size_t size_of; // rax
  void *v6; // rax
  __int64 v7; // rsi
  __int64 v8; // r9
  __int64 v9; // r8
  __int64 v10; // rdx
  __int64 v11; // rcx
  void *v12; // [rsp+40h] [rbp+8h]

  v4 = (__int64)(*(_QWORD *)(a1 + 8) - *(_QWORD *)a1) >> 5;
  size_of = std::_Get_size_of_n<32>(a2);
  v6 = std::_Allocate<16,std::_Default_allocate_traits,0>(size_of);
  v7 = (__int64)v6;
  v12 = v6;
  try
  {
    memmove_0(v6, *(const void **)a1, *(_QWORD *)(a1 + 8) - *(_QWORD *)a1);
    v8 = a2;
    v9 = v4;
    v10 = v7;
    v11 = a1;
  }
  catch ( ... )
  {
    std::_Deallocate<16,0>(v12, 32 * a2);
    throw;
  }
  std::vector<ABI::Windows::Internal::Shell::WindowSnapping::SnapAssistRegion>::_Change_array(v11, v10, v9, v8);
}

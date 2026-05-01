/*
 * XREFs of ??$_Emplace_reallocate@AEBUhstring@winrt@@@?$vector@Uhstring@winrt@@V?$allocator@Uhstring@winrt@@@std@@@std@@QEAAPEAUhstring@winrt@@QEAU23@AEBU23@@Z @ 0x1806F78EC
 * Callers:
 *     ??$emplace@AEBUhstring@winrt@@@?$vector@Uhstring@winrt@@V?$allocator@Uhstring@winrt@@@std@@@std@@QEAA?AV?$_Vector_iterator@V?$_Vector_val@U?$_Simple_types@Uhstring@winrt@@@std@@@std@@@1@V?$_Vector_const_iterator@V?$_Vector_val@U?$_Simple_types@Uhstring@winrt@@@std@@@std@@@1@AEBUhstring@winrt@@@Z @ 0x1806F7DCC (--$emplace@AEBUhstring@winrt@@@-$vector@Uhstring@winrt@@V-$allocator@Uhstring@winrt@@@std@@@std@.c)
 *     ?Append@?$produce@U?$vector_impl@Uhstring@winrt@@V?$vector@Uhstring@winrt@@V?$allocator@Uhstring@winrt@@@std@@@std@@Usingle_threaded_collection_base@impl@2@@impl@winrt@@U?$IVector@Uhstring@winrt@@@Collections@Foundation@Windows@3@@impl@winrt@@UEAAHPEAX@Z @ 0x1806F9DC0 (-Append@-$produce@U-$vector_impl@Uhstring@winrt@@V-$vector@Uhstring@winrt@@V-$allocator@Uhstring.c)
 * Callees:
 *     ??$_Get_size_of_n@$07@std@@YA_K_K@Z @ 0x1800BDA2C (--$_Get_size_of_n@$07@std@@YA_K_K@Z.c)
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x1800C4204 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     ?duplicate_hstring@impl@winrt@@YAPEAUhstring_header@12@PEAU312@@Z @ 0x1800DBAC0 (-duplicate_hstring@impl@winrt@@YAPEAUhstring_header@12@PEAU312@@Z.c)
 *     ?_Calculate_growth@?$vector@UCompositionAnimationTriggerValuePartner@Internal@Composition@UI@Windows@winrt@@V?$allocator@UCompositionAnimationTriggerValuePartner@Internal@Composition@UI@Windows@winrt@@@std@@@std@@AEBA_K_K@Z @ 0x180247DC4 (-_Calculate_growth@-$vector@UCompositionAnimationTriggerValuePartner@Internal@Composition@UI@Win.c)
 *     ??$_Uninitialized_move@PEAUhstring@winrt@@V?$allocator@Uhstring@winrt@@@std@@@std@@YAPEAUhstring@winrt@@QEAU12@0PEAU12@AEAV?$allocator@Uhstring@winrt@@@0@@Z @ 0x1806F7B1C (--$_Uninitialized_move@PEAUhstring@winrt@@V-$allocator@Uhstring@winrt@@@std@@@std@@YAPEAUhstring.c)
 *     ?_Change_array@?$vector@Uhstring@winrt@@V?$allocator@Uhstring@winrt@@@std@@@std@@AEAAXQEAUhstring@winrt@@_K1@Z @ 0x1806FC4D8 (-_Change_array@-$vector@Uhstring@winrt@@V-$allocator@Uhstring@winrt@@@std@@@std@@AEAAXQEAUhstrin.c)
 */

volatile signed __int32 **__fastcall std::vector<winrt::hstring>::_Emplace_reallocate<winrt::hstring const &>(
        __int64 *a1,
        __int64 a2,
        winrt::impl **a3)
{
  __int64 v6; // rsi
  __int64 v7; // rax
  unsigned __int64 v8; // r15
  size_t size_of; // rax
  struct winrt::impl::hstring_header *v10; // rdx
  volatile signed __int32 **v11; // rdi
  unsigned int v12; // r8d
  volatile signed __int32 **v13; // rsi
  __int64 v14; // rdx
  volatile signed __int32 **v15; // r8
  __int64 v16; // rcx
  volatile signed __int32 **v18; // [rsp+70h] [rbp+8h]
  __int64 v19; // [rsp+78h] [rbp+10h]

  v6 = (a2 - *a1) >> 3;
  v7 = (a1[1] - *a1) >> 3;
  if ( v7 == 0x1FFFFFFFFFFFFFFFLL )
    std::_Xlength_error("vector too long");
  v19 = v7 + 1;
  v8 = std::vector<winrt::Windows::UI::Composition::Internal::CompositionAnimationTriggerValuePartner>::_Calculate_growth(
         a1,
         v7 + 1);
  size_of = std::_Get_size_of_n<8>(v8);
  v11 = (volatile signed __int32 **)std::_Allocate<16,std::_Default_allocate_traits,0>(size_of);
  v13 = &v11[v6];
  try
  {
    *v13 = (volatile signed __int32 *)winrt::impl::duplicate_hstring(*a3, v10, v12);
    v18 = v13;
    v14 = a1[1];
    v15 = v11;
    v16 = *a1;
    if ( a2 != v14 )
    {
      std::_Uninitialized_move<winrt::hstring *>(v16, a2, v11);
      v18 = v11;
      v15 = v13 + 1;
      v14 = a1[1];
      v16 = a2;
    }
    std::_Uninitialized_move<winrt::hstring *>(v16, v14, v15);
  }
  catch ( ... )
  {
    std::_Destroy_range<std::allocator<winrt::hstring>>(v18, v13 + 1);
    std::_Deallocate<16,0>(v11, 8 * v8);
    throw;
  }
  std::vector<winrt::hstring>::_Change_array(a1, v11, v19, v8, v8, v11);
  return v13;
}

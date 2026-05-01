/*
 * XREFs of ??$_Emplace_reallocate@AEBUMenuItem@UI@WindowsUdk@winrt@@@?$vector@UMenuItem@UI@WindowsUdk@winrt@@V?$allocator@UMenuItem@UI@WindowsUdk@winrt@@@std@@@std@@QEAAPEAUMenuItem@UI@WindowsUdk@winrt@@QEAU2345@AEBU2345@@Z @ 0x1806C9C30
 * Callers:
 *     ??$emplace@AEBUMenuItem@UI@WindowsUdk@winrt@@@?$vector@UMenuItem@UI@WindowsUdk@winrt@@V?$allocator@UMenuItem@UI@WindowsUdk@winrt@@@std@@@std@@QEAA?AV?$_Vector_iterator@V?$_Vector_val@U?$_Simple_types@UMenuItem@UI@WindowsUdk@winrt@@@std@@@std@@@1@V?$_Vector_const_iterator@V?$_Vector_val@U?$_Simple_types@UMenuItem@UI@WindowsUdk@winrt@@@std@@@std@@@1@AEBUMenuItem@UI@WindowsUdk@winrt@@@Z @ 0x1806CA688 (--$emplace@AEBUMenuItem@UI@WindowsUdk@winrt@@@-$vector@UMenuItem@UI@WindowsUdk@winrt@@V-$allocat.c)
 *     ?Append@?$produce@U?$vector_impl@UMenuItem@UI@WindowsUdk@winrt@@V?$vector@UMenuItem@UI@WindowsUdk@winrt@@V?$allocator@UMenuItem@UI@WindowsUdk@winrt@@@std@@@std@@Usingle_threaded_collection_base@impl@4@@impl@winrt@@U?$IVector@UMenuItem@UI@WindowsUdk@winrt@@@Collections@Foundation@Windows@3@@impl@winrt@@UEAAHPEAX@Z @ 0x1806CC620 (-Append@-$produce@U-$vector_impl@UMenuItem@UI@WindowsUdk@winrt@@V-$vector@UMenuItem@UI@WindowsUd.c)
 * Callees:
 *     ??$_Get_size_of_n@$07@std@@YA_K_K@Z @ 0x1800BDA2C (--$_Get_size_of_n@$07@std@@YA_K_K@Z.c)
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x1800C4204 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     ?add_ref@IUnknown@Foundation@Windows@winrt@@AEBAXXZ @ 0x180176DC4 (-add_ref@IUnknown@Foundation@Windows@winrt@@AEBAXXZ.c)
 *     ?_Xlength@?$vector@U?$com_ptr@UIApplicationView@@@winrt@@V?$allocator@U?$com_ptr@UIApplicationView@@@winrt@@@std@@@std@@CAXXZ @ 0x18022B2D4 (-_Xlength@-$vector@U-$com_ptr@UIApplicationView@@@winrt@@V-$allocator@U-$com_ptr@UIApplicationVi.c)
 *     ?_Calculate_growth@?$vector@UCompositionAnimationTriggerValuePartner@Internal@Composition@UI@Windows@winrt@@V?$allocator@UCompositionAnimationTriggerValuePartner@Internal@Composition@UI@Windows@winrt@@@std@@@std@@AEBA_K_K@Z @ 0x180247DC4 (-_Calculate_growth@-$vector@UCompositionAnimationTriggerValuePartner@Internal@Composition@UI@Win.c)
 *     ??$_Uninitialized_move@PEAUMenuItem@UI@WindowsUdk@winrt@@V?$allocator@UMenuItem@UI@WindowsUdk@winrt@@@std@@@std@@YAPEAUMenuItem@UI@WindowsUdk@winrt@@QEAU1234@0PEAU1234@AEAV?$allocator@UMenuItem@UI@WindowsUdk@winrt@@@0@@Z @ 0x1806CA23C (--$_Uninitialized_move@PEAUMenuItem@UI@WindowsUdk@winrt@@V-$allocator@UMenuItem@UI@WindowsUdk@wi.c)
 *     ?_Change_array@?$vector@UMenuItem@UI@WindowsUdk@winrt@@V?$allocator@UMenuItem@UI@WindowsUdk@winrt@@@std@@@std@@AEAAXQEAUMenuItem@UI@WindowsUdk@winrt@@_K1@Z @ 0x1806DDFE8 (-_Change_array@-$vector@UMenuItem@UI@WindowsUdk@winrt@@V-$allocator@UMenuItem@UI@WindowsUdk@winr.c)
 */

char *__fastcall std::vector<winrt::WindowsUdk::UI::MenuItem>::_Emplace_reallocate<winrt::WindowsUdk::UI::MenuItem const &>(
        __int64 *a1,
        __int64 a2,
        _QWORD *a3)
{
  __int64 v6; // rsi
  __int64 v7; // rax
  __int64 v8; // r12
  unsigned __int64 v9; // r15
  size_t size_of; // rax
  winrt::Windows::Internal::Shell::RegistrationData *v11; // rax
  winrt::Windows::Internal::Shell::RegistrationData *v12; // rdi
  char *v13; // rsi
  __int64 v14; // rdx
  winrt::Windows::Internal::Shell::RegistrationData *v15; // r8
  __int64 v16; // rcx
  char *result; // rax
  winrt::Windows::Internal::Shell::RegistrationData *v18; // [rsp+20h] [rbp-48h]
  void *v19; // [rsp+20h] [rbp-48h]
  winrt::Windows::Internal::Shell::RegistrationData *v20; // [rsp+70h] [rbp+8h]

  v6 = (a2 - *a1) >> 3;
  v7 = (a1[1] - *a1) >> 3;
  if ( v7 == 0x1FFFFFFFFFFFFFFFLL )
    std::vector<winrt::com_ptr<IApplicationView>>::_Xlength();
  v8 = v7 + 1;
  v9 = std::vector<winrt::Windows::UI::Composition::Internal::CompositionAnimationTriggerValuePartner>::_Calculate_growth(
         a1,
         v7 + 1);
  size_of = std::_Get_size_of_n<8>(v9);
  v11 = (winrt::Windows::Internal::Shell::RegistrationData *)std::_Allocate<16,std::_Default_allocate_traits,0>(size_of);
  v12 = v11;
  v18 = v11;
  v13 = (char *)v11 + 8 * v6;
  try
  {
    *(_QWORD *)v13 = *a3;
    winrt::Windows::Foundation::IUnknown::add_ref((winrt::Windows::Foundation::IUnknown *)v13);
    v20 = (winrt::Windows::Internal::Shell::RegistrationData *)v13;
    v14 = a1[1];
    v15 = v12;
    v16 = *a1;
    if ( a2 != v14 )
    {
      std::_Uninitialized_move<winrt::WindowsUdk::UI::MenuItem *>(v16, a2, v12);
      v20 = v12;
      v15 = (winrt::Windows::Internal::Shell::RegistrationData *)(v13 + 8);
      v14 = a1[1];
      v16 = a2;
    }
    std::_Uninitialized_move<winrt::WindowsUdk::UI::MenuItem *>(v16, v14, v15);
    std::vector<winrt::WindowsUdk::UI::MenuItem>::_Change_array(a1, v12, v8, v9, v18);
    result = v13;
  }
  catch ( ... )
  {
    std::_Destroy_range<std::allocator<winrt::WindowsUdk::UI::MenuItem>>(
      v20,
      (winrt::Windows::Internal::Shell::RegistrationData *)(v13 + 8));
    std::_Deallocate<16,0>(v19, 8 * v9);
    throw;
  }
  return result;
}

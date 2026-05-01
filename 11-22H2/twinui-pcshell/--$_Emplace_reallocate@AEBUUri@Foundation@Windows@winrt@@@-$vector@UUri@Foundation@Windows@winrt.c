/*
 * XREFs of ??$_Emplace_reallocate@AEBUUri@Foundation@Windows@winrt@@@?$vector@UUri@Foundation@Windows@winrt@@V?$allocator@UUri@Foundation@Windows@winrt@@@std@@@std@@QEAAPEAUUri@Foundation@Windows@winrt@@QEAU2345@AEBU2345@@Z @ 0x18022F3AC
 * Callers:
 *     ??$emplace@AEBUUri@Foundation@Windows@winrt@@@?$vector@UUri@Foundation@Windows@winrt@@V?$allocator@UUri@Foundation@Windows@winrt@@@std@@@std@@QEAA?AV?$_Vector_iterator@V?$_Vector_val@U?$_Simple_types@UUri@Foundation@Windows@winrt@@@std@@@std@@@1@V?$_Vector_const_iterator@V?$_Vector_val@U?$_Simple_types@UUri@Foundation@Windows@winrt@@@std@@@std@@@1@AEBUUri@Foundation@Windows@winrt@@@Z @ 0x18022FF64 (--$emplace@AEBUUri@Foundation@Windows@winrt@@@-$vector@UUri@Foundation@Windows@winrt@@V-$allocat.c)
 *     ?Append@?$produce@U?$vector_impl@UUri@Foundation@Windows@winrt@@V?$vector@UUri@Foundation@Windows@winrt@@V?$allocator@UUri@Foundation@Windows@winrt@@@std@@@std@@Usingle_threaded_collection_base@impl@4@@impl@winrt@@U?$IVector@UUri@Foundation@Windows@winrt@@@Collections@Foundation@Windows@3@@impl@winrt@@UEAAHPEAX@Z @ 0x1802381D0 (-Append@-$produce@U-$vector_impl@UUri@Foundation@Windows@winrt@@V-$vector@UUri@Foundation@Window.c)
 * Callees:
 *     ??$_Get_size_of_n@$07@std@@YA_K_K@Z @ 0x1800BDA2C (--$_Get_size_of_n@$07@std@@YA_K_K@Z.c)
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x1800C4204 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     ??0?$AsyncOperationCompletedHandler@URect@Foundation@Windows@winrt@@@Foundation@Windows@winrt@@QEAA@AEBU0123@@Z @ 0x180190BA0 (--0-$AsyncOperationCompletedHandler@URect@Foundation@Windows@winrt@@@Foundation@Windows@winrt@@Q.c)
 *     ?_Xlength@?$vector@U?$com_ptr@UIApplicationView@@@winrt@@V?$allocator@U?$com_ptr@UIApplicationView@@@winrt@@@std@@@std@@CAXXZ @ 0x18022B2D4 (-_Xlength@-$vector@U-$com_ptr@UIApplicationView@@@winrt@@V-$allocator@U-$com_ptr@UIApplicationVi.c)
 *     ??$_Uninitialized_move@PEAUUri@Foundation@Windows@winrt@@V?$allocator@UUri@Foundation@Windows@winrt@@@std@@@std@@YAPEAUUri@Foundation@Windows@winrt@@QEAU1234@0PEAU1234@AEAV?$allocator@UUri@Foundation@Windows@winrt@@@0@@Z @ 0x18022F7E4 (--$_Uninitialized_move@PEAUUri@Foundation@Windows@winrt@@V-$allocator@UUri@Foundation@Windows@wi.c)
 *     ?_Calculate_growth@?$vector@UCompositionAnimationTriggerValuePartner@Internal@Composition@UI@Windows@winrt@@V?$allocator@UCompositionAnimationTriggerValuePartner@Internal@Composition@UI@Windows@winrt@@@std@@@std@@AEBA_K_K@Z @ 0x180247DC4 (-_Calculate_growth@-$vector@UCompositionAnimationTriggerValuePartner@Internal@Composition@UI@Win.c)
 *     ?_Change_array@?$vector@UUri@Foundation@Windows@winrt@@V?$allocator@UUri@Foundation@Windows@winrt@@@std@@@std@@AEAAXQEAUUri@Foundation@Windows@winrt@@_K1@Z @ 0x180247E00 (-_Change_array@-$vector@UUri@Foundation@Windows@winrt@@V-$allocator@UUri@Foundation@Windows@winr.c)
 */

char *__fastcall std::vector<winrt::Windows::Foundation::Uri>::_Emplace_reallocate<winrt::Windows::Foundation::Uri const &>(
        __int64 *a1,
        __int64 a2,
        _QWORD *a3)
{
  __int64 v5; // rsi
  __int64 v6; // rax
  __int64 v7; // r12
  unsigned __int64 v8; // r15
  size_t size_of; // rax
  winrt::Windows::Foundation::IUnknown *v10; // rax
  winrt::Windows::Foundation::IUnknown *v11; // rdi
  char *v12; // rsi
  __int64 v13; // rdx
  winrt::Windows::Foundation::IUnknown *v14; // r8
  __int64 v15; // rcx
  char *result; // rax
  __int64 v17; // rcx
  winrt::Windows::Foundation::IUnknown *v18; // [rsp+20h] [rbp-48h]
  __int64 v19; // [rsp+20h] [rbp-48h]
  winrt::Windows::Foundation::IUnknown *v20; // [rsp+70h] [rbp+8h]

  v5 = (a2 - *a1) >> 3;
  v6 = (a1[1] - *a1) >> 3;
  if ( v6 == 0x1FFFFFFFFFFFFFFFLL )
    std::vector<winrt::com_ptr<IApplicationView>>::_Xlength();
  v7 = v6 + 1;
  v8 = std::vector<winrt::Windows::UI::Composition::Internal::CompositionAnimationTriggerValuePartner>::_Calculate_growth(
         a1,
         v6 + 1);
  size_of = std::_Get_size_of_n<8>(v8);
  v10 = (winrt::Windows::Foundation::IUnknown *)std::_Allocate<16,std::_Default_allocate_traits,0>(size_of);
  v11 = v10;
  v18 = v10;
  v12 = (char *)v10 + 8 * v5;
  try
  {
    winrt::Windows::Foundation::AsyncOperationCompletedHandler<winrt::Windows::Foundation::Rect>::AsyncOperationCompletedHandler<winrt::Windows::Foundation::Rect>(
      (winrt::Windows::Foundation::IUnknown *)v12,
      a3);
    v20 = (winrt::Windows::Foundation::IUnknown *)v12;
    v13 = a1[1];
    v14 = v11;
    v15 = *a1;
    if ( a2 != v13 )
    {
      std::_Uninitialized_move<winrt::Windows::Foundation::Uri *>(v15, a2, v11);
      v20 = v11;
      v14 = (winrt::Windows::Foundation::IUnknown *)(v12 + 8);
      v13 = a1[1];
      v15 = a2;
    }
    std::_Uninitialized_move<winrt::Windows::Foundation::Uri *>(v15, v13, v14);
    std::vector<winrt::Windows::Foundation::Uri>::_Change_array(a1, v11, v7, v8, v18);
    result = v12;
  }
  catch ( ... )
  {
    std::_Destroy_range<std::allocator<winrt::Windows::Foundation::Uri>>(
      v20,
      (winrt::Windows::Foundation::IUnknown *)(v12 + 8));
    std::allocator<winrt::Windows::Foundation::Uri>::deallocate(v17, v19, v8);
    throw;
  }
  return result;
}

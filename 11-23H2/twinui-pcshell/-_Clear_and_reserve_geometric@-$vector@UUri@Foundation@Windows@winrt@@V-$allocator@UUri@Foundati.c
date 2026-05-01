/*
 * XREFs of ?_Clear_and_reserve_geometric@?$vector@UUri@Foundation@Windows@winrt@@V?$allocator@UUri@Foundation@Windows@winrt@@@std@@@std@@AEAAX_K@Z @ 0x180247E74
 * Callers:
 *     ??$_Assign_range@PEBUUri@Foundation@Windows@winrt@@@?$vector@UUri@Foundation@Windows@winrt@@V?$allocator@UUri@Foundation@Windows@winrt@@@std@@@std@@AEAAXPEBUUri@Foundation@Windows@winrt@@0Uforward_iterator_tag@1@@Z @ 0x18022F224 (--$_Assign_range@PEBUUri@Foundation@Windows@winrt@@@-$vector@UUri@Foundation@Windows@winrt@@V-$a.c)
 * Callees:
 *     ??$_Get_size_of_n@$07@std@@YA_K_K@Z @ 0x1800BDA2C (--$_Get_size_of_n@$07@std@@YA_K_K@Z.c)
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x1800C4204 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x180168F3C (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ?_Xlength@?$vector@U?$com_ptr@UIApplicationView@@@winrt@@V?$allocator@U?$com_ptr@UIApplicationView@@@winrt@@@std@@@std@@CAXXZ @ 0x18022B2D4 (-_Xlength@-$vector@U-$com_ptr@UIApplicationView@@@winrt@@V-$allocator@U-$com_ptr@UIApplicationVi.c)
 *     ??$_Destroy_range@V?$allocator@UUri@Foundation@Windows@winrt@@@std@@@std@@YAXPEAUUri@Foundation@Windows@winrt@@QEAU1234@AEAV?$allocator@UUri@Foundation@Windows@winrt@@@0@@Z @ 0x18022F348 (--$_Destroy_range@V-$allocator@UUri@Foundation@Windows@winrt@@@std@@@std@@YAXPEAUUri@Foundation@.c)
 *     ?_Calculate_growth@?$vector@UCompositionAnimationTriggerValuePartner@Internal@Composition@UI@Windows@winrt@@V?$allocator@UCompositionAnimationTriggerValuePartner@Internal@Composition@UI@Windows@winrt@@@std@@@std@@AEBA_K_K@Z @ 0x180247DC4 (-_Calculate_growth@-$vector@UCompositionAnimationTriggerValuePartner@Internal@Composition@UI@Win.c)
 */

char *__fastcall std::vector<winrt::Windows::Foundation::Uri>::_Clear_and_reserve_geometric(
        __int64 a1,
        unsigned __int64 a2)
{
  unsigned __int64 v3; // rdi
  size_t size_of; // rax
  char *v5; // rax
  char *result; // rax

  if ( a2 > 0x1FFFFFFFFFFFFFFFLL )
    std::vector<winrt::com_ptr<IApplicationView>>::_Xlength();
  v3 = std::vector<winrt::Windows::UI::Composition::Internal::CompositionAnimationTriggerValuePartner>::_Calculate_growth(
         (_QWORD *)a1,
         a2);
  if ( *(_QWORD *)a1 )
  {
    std::_Destroy_range<std::allocator<winrt::Windows::Foundation::Uri>>(
      *(winrt::Windows::Foundation::IUnknown **)a1,
      *(winrt::Windows::Foundation::IUnknown **)(a1 + 8));
    std::_Deallocate<16,0>(*(void **)a1, (*(_QWORD *)(a1 + 16) - *(_QWORD *)a1) & 0xFFFFFFFFFFFFFFF8uLL);
    *(_QWORD *)a1 = 0LL;
    *(_QWORD *)(a1 + 8) = 0LL;
    *(_QWORD *)(a1 + 16) = 0LL;
  }
  size_of = std::_Get_size_of_n<8>(v3);
  v5 = (char *)std::_Allocate<16,std::_Default_allocate_traits,0>(size_of);
  *(_QWORD *)a1 = v5;
  *(_QWORD *)(a1 + 8) = v5;
  result = &v5[8 * v3];
  *(_QWORD *)(a1 + 16) = result;
  return result;
}

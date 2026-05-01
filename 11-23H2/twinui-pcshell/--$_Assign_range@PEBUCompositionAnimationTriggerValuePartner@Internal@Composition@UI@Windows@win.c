/*
 * XREFs of ??$_Assign_range@PEBUCompositionAnimationTriggerValuePartner@Internal@Composition@UI@Windows@winrt@@@?$vector@UCompositionAnimationTriggerValuePartner@Internal@Composition@UI@Windows@winrt@@V?$allocator@UCompositionAnimationTriggerValuePartner@Internal@Composition@UI@Windows@winrt@@@std@@@std@@AEAAXPEBUCompositionAnimationTriggerValuePartner@Internal@Composition@UI@Windows@winrt@@0Uforward_iterator_tag@1@@Z @ 0x18054B668
 * Callers:
 *     ?ReplaceAll@?$vector_base@U?$vector_impl@UCompositionAnimationTriggerValuePartner@Internal@Composition@UI@Windows@winrt@@V?$vector@UCompositionAnimationTriggerValuePartner@Internal@Composition@UI@Windows@winrt@@V?$allocator@UCompositionAnimationTriggerValuePartner@Internal@Composition@UI@Windows@winrt@@@std@@@std@@Usingle_threaded_collection_base@impl@6@@impl@winrt@@UCompositionAnimationTriggerValuePartner@Internal@Composition@UI@Windows@3@@winrt@@QEAAXU?$array_view@$$CBUCompositionAnimationTriggerValuePartner@Internal@Composition@UI@Windows@winrt@@@2@@Z @ 0x18054FC48 (-ReplaceAll@-$vector_base@U-$vector_impl@UCompositionAnimationTriggerValuePartner@Internal@Compo.c)
 * Callees:
 *     ?add_ref@IUnknown@Foundation@Windows@winrt@@AEBAXXZ @ 0x180176DC4 (-add_ref@IUnknown@Foundation@Windows@winrt@@AEBAXXZ.c)
 *     ??$_Copy_unchecked@PEBUCompositionAnimationTriggerValuePartner@Internal@Composition@UI@Windows@winrt@@PEAU123456@@std@@YAPEAUCompositionAnimationTriggerValuePartner@Internal@Composition@UI@Windows@winrt@@PEBU123456@0PEAU123456@@Z @ 0x18054B740 (--$_Copy_unchecked@PEBUCompositionAnimationTriggerValuePartner@Internal@Composition@UI@Windows@w.c)
 *     ??$_Destroy_range@V?$allocator@UCompositionAnimationTriggerValuePartner@Internal@Composition@UI@Windows@winrt@@@std@@@std@@YAXPEAUCompositionAnimationTriggerValuePartner@Internal@Composition@UI@Windows@winrt@@QEAU123456@AEAV?$allocator@UCompositionAnimationTriggerValuePartner@Internal@Composition@UI@Windows@winrt@@@0@@Z @ 0x18054B790 (--$_Destroy_range@V-$allocator@UCompositionAnimationTriggerValuePartner@Internal@Composition@UI@.c)
 *     ?_Clear_and_reserve_geometric@?$vector@UCompositionAnimationTriggerValuePartner@Internal@Composition@UI@Windows@winrt@@V?$allocator@UCompositionAnimationTriggerValuePartner@Internal@Composition@UI@Windows@winrt@@@std@@@std@@AEAAX_K@Z @ 0x1805507A8 (-_Clear_and_reserve_geometric@-$vector@UCompositionAnimationTriggerValuePartner@Internal@Composi.c)
 */

__int64 __fastcall std::vector<winrt::Windows::UI::Composition::Internal::CompositionAnimationTriggerValuePartner>::_Assign_range<winrt::Windows::UI::Composition::Internal::CompositionAnimationTriggerValuePartner const *>(
        __int64 *a1,
        __int64 a2,
        _QWORD *a3)
{
  unsigned __int64 v6; // rcx
  __int64 v7; // r8
  unsigned __int64 v8; // r9
  _QWORD *v9; // rdi
  winrt::Windows::Foundation::IUnknown *i; // rbx
  winrt::Windows::Internal::Shell::RegistrationData *v11; // rcx
  __int64 result; // rax

  v6 = ((__int64)a3 - a2) >> 3;
  v7 = *a1;
  v8 = (a1[1] - *a1) >> 3;
  if ( v6 <= v8 )
  {
    i = (winrt::Windows::Foundation::IUnknown *)(v7 + 8 * v6);
    std::_Copy_unchecked<winrt::Windows::UI::Composition::Internal::CompositionAnimationTriggerValuePartner const *,winrt::Windows::UI::Composition::Internal::CompositionAnimationTriggerValuePartner *>(
      a2,
      a3);
    v11 = i;
  }
  else
  {
    if ( v6 > (a1[2] - v7) >> 3 )
    {
      std::vector<winrt::Windows::UI::Composition::Internal::CompositionAnimationTriggerValuePartner>::_Clear_and_reserve_geometric(
        a1,
        v6);
      v8 = 0LL;
    }
    v9 = (_QWORD *)(a2 + 8 * v8);
    std::_Copy_unchecked<winrt::Windows::UI::Composition::Internal::CompositionAnimationTriggerValuePartner const *,winrt::Windows::UI::Composition::Internal::CompositionAnimationTriggerValuePartner *>(
      a2,
      v9);
    for ( i = (winrt::Windows::Foundation::IUnknown *)a1[1]; ; i = (winrt::Windows::Foundation::IUnknown *)((char *)i + 8) )
    {
      v11 = i;
      if ( v9 == a3 )
        break;
      *(_QWORD *)i = *v9;
      winrt::Windows::Foundation::IUnknown::add_ref(i);
      ++v9;
    }
  }
  result = std::_Destroy_range<std::allocator<winrt::Windows::UI::Composition::Internal::CompositionAnimationTriggerValuePartner>>(v11);
  a1[1] = (__int64)i;
  return result;
}

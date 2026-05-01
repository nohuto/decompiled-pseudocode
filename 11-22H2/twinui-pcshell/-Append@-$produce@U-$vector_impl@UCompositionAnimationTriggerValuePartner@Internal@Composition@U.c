/*
 * XREFs of ?Append@?$produce@U?$vector_impl@UCompositionAnimationTriggerValuePartner@Internal@Composition@UI@Windows@winrt@@V?$vector@UCompositionAnimationTriggerValuePartner@Internal@Composition@UI@Windows@winrt@@V?$allocator@UCompositionAnimationTriggerValuePartner@Internal@Composition@UI@Windows@winrt@@@std@@@std@@Usingle_threaded_collection_base@impl@6@@impl@winrt@@U?$IVector@UCompositionAnimationTriggerValuePartner@Internal@Composition@UI@Windows@winrt@@@Collections@Foundation@Windows@3@@impl@winrt@@UEAAHPEAX@Z @ 0x18054D750
 * Callers:
 *     <none>
 * Callees:
 *     ?add_ref@IUnknown@Foundation@Windows@winrt@@AEBAXXZ @ 0x180176DC4 (-add_ref@IUnknown@Foundation@Windows@winrt@@AEBAXXZ.c)
 *     ??$_Emplace_reallocate@AEBUCompositionAnimationTriggerValuePartner@Internal@Composition@UI@Windows@winrt@@@?$vector@UCompositionAnimationTriggerValuePartner@Internal@Composition@UI@Windows@winrt@@V?$allocator@UCompositionAnimationTriggerValuePartner@Internal@Composition@UI@Windows@winrt@@@std@@@std@@QEAAPEAUCompositionAnimationTriggerValuePartner@Internal@Composition@UI@Windows@winrt@@QEAU234567@AEBU234567@@Z @ 0x18054B7C8 (--$_Emplace_reallocate@AEBUCompositionAnimationTriggerValuePartner@Internal@Composition@UI@Windo.c)
 */

__int64 __fastcall winrt::impl::produce<winrt::impl::vector_impl<winrt::Windows::UI::Composition::Internal::CompositionAnimationTriggerValuePartner,std::vector<winrt::Windows::UI::Composition::Internal::CompositionAnimationTriggerValuePartner>,winrt::impl::single_threaded_collection_base>,winrt::Windows::Foundation::Collections::IVector<winrt::Windows::UI::Composition::Internal::CompositionAnimationTriggerValuePartner>>::Append(
        __int64 a1,
        __int64 a2)
{
  __int64 v2; // rcx
  __int64 *v3; // rbx
  winrt::Windows::Foundation::IUnknown *v4; // rdx
  int v6; // [rsp+30h] [rbp+8h] BYREF
  __int64 v7; // [rsp+38h] [rbp+10h] BYREF

  v7 = a2;
  v2 = (a1 - 16) & -(__int64)(a1 != 0);
  _InterlockedIncrement((volatile signed __int32 *)(v2 + 40));
  v3 = (__int64 *)(v2 & -(__int64)(v2 != -40));
  v4 = (winrt::Windows::Foundation::IUnknown *)v3[7];
  if ( v4 == (winrt::Windows::Foundation::IUnknown *)v3[8] )
  {
    try
    {
      std::vector<winrt::Windows::UI::Composition::Internal::CompositionAnimationTriggerValuePartner>::_Emplace_reallocate<winrt::Windows::UI::Composition::Internal::CompositionAnimationTriggerValuePartner const &>(
        v3 + 6,
        (__int64)v4,
        &v7);
    }
    catch ( ... )
    {
      return (unsigned int)*winrt::to_hresult(&v6);
    }
  }
  else
  {
    *(_QWORD *)v4 = v7;
    winrt::Windows::Foundation::IUnknown::add_ref(v4);
    v3[7] += 8LL;
  }
  return 0LL;
}

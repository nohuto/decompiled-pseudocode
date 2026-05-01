/*
 * XREFs of ?Clear@?$produce@U?$vector_impl@UCompositionAnimationTriggerValuePartner@Internal@Composition@UI@Windows@winrt@@V?$vector@UCompositionAnimationTriggerValuePartner@Internal@Composition@UI@Windows@winrt@@V?$allocator@UCompositionAnimationTriggerValuePartner@Internal@Composition@UI@Windows@winrt@@@std@@@std@@Usingle_threaded_collection_base@impl@6@@impl@winrt@@U?$IVector@UCompositionAnimationTriggerValuePartner@Internal@Composition@UI@Windows@winrt@@@Collections@Foundation@Windows@3@@impl@winrt@@UEAAHXZ @ 0x18054D970
 * Callers:
 *     <none>
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x180168F3C (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ??$_Destroy_range@V?$allocator@UCompositionAnimationTriggerValuePartner@Internal@Composition@UI@Windows@winrt@@@std@@@std@@YAXPEAUCompositionAnimationTriggerValuePartner@Internal@Composition@UI@Windows@winrt@@QEAU123456@AEAV?$allocator@UCompositionAnimationTriggerValuePartner@Internal@Composition@UI@Windows@winrt@@@0@@Z @ 0x18054B790 (--$_Destroy_range@V-$allocator@UCompositionAnimationTriggerValuePartner@Internal@Composition@UI@.c)
 */

__int64 __fastcall winrt::impl::produce<winrt::impl::vector_impl<winrt::Windows::UI::Composition::Internal::CompositionAnimationTriggerValuePartner,std::vector<winrt::Windows::UI::Composition::Internal::CompositionAnimationTriggerValuePartner>,winrt::impl::single_threaded_collection_base>,winrt::Windows::Foundation::Collections::IVector<winrt::Windows::UI::Composition::Internal::CompositionAnimationTriggerValuePartner>>::Clear(
        __int64 a1)
{
  __int64 v1; // rcx
  winrt::Windows::Internal::Shell::RegistrationData *v2; // rdi
  winrt::Windows::Internal::Shell::RegistrationData *v3; // rdx
  __int64 v4; // rbx
  char v6; // [rsp+20h] [rbp-28h] BYREF

  v1 = (a1 - 16) & -(__int64)(a1 != 0);
  _InterlockedIncrement((volatile signed __int32 *)(v1 + 40));
  if ( &v6 != (char *)((v1 & -(__int64)(v1 != -40)) + 48) )
  {
    v2 = *(winrt::Windows::Internal::Shell::RegistrationData **)((v1 & -(__int64)(v1 != -40)) + 0x30);
    *(_QWORD *)((v1 & -(__int64)(v1 != -40)) + 0x30) = 0LL;
    v3 = *(winrt::Windows::Internal::Shell::RegistrationData **)((v1 & -(__int64)(v1 != -40)) + 0x38);
    *(_QWORD *)((v1 & -(__int64)(v1 != -40)) + 0x38) = 0LL;
    v4 = *(_QWORD *)((v1 & -(__int64)(v1 != -40)) + 0x40);
    *(_QWORD *)((v1 & -(__int64)(v1 != -40)) + 0x40) = 0LL;
    if ( v2 )
    {
      std::_Destroy_range<std::allocator<winrt::Windows::UI::Composition::Internal::CompositionAnimationTriggerValuePartner>>(
        v2,
        v3);
      std::_Deallocate<16,0>(v2, 8 * ((v4 - (__int64)v2) >> 3));
    }
  }
  return 0LL;
}

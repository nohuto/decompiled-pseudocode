/*
 * XREFs of ??1?$AutoValue@V?$GitStorageType@UIChainLink@Chaining@Shell@Internal@Windows@@@detail@XWinRT@@U?$DefaultLifetimeTraits@PEAUIChainLink@Chaining@Shell@Internal@Windows@@@Internal@Collections@Foundation@Windows@@@XWinRT@@QEAA@XZ @ 0x180396300
 * Callers:
 *     _Windows::Foundation::Collections::Internal::Vector_Windows::Internal::Data::Activities::GetCurrentActivityForViewOperationResults___Windows::Foundation::Collections::Internal::DefaultEqualityPredicate_Windows::Internal::Data::Activities::GetCurrentActivityForViewOperationResults____Windows::Foundation::Collections::Internal::DefaultLifetimeTraits_Windows::Internal::Data::Activities::GetCurrentActivityForViewOperationResults____Windows::Foundation::Collections::Internal::VectorOptions_Windows::Internal::Data::Activities::GetCurrentActivityForViewOperationResults___0_1_0___::RemoveAtInternal_::_1_::dtor$0 @ 0x18039F0F5 (_Windows--Foundation--Collections--Internal--Vector_Windows--Internal--Data--Activi_ea_18039F0F5.c)
 *     _Windows::Foundation::Collections::Internal::Vector_Windows::Internal::Shell::ViewManagerInterop::IViewWrapper___Windows::Foundation::Collections::Internal::DefaultEqualityPredicate_Windows::Internal::Shell::ViewManagerInterop::IViewWrapper____Windows::Foundation::Collections::Internal::DefaultLifetimeTraits_Windows::Internal::Shell::ViewManagerInterop::IViewWrapper____Windows::Foundation::Collections::Internal::VectorOptions_Windows::Internal::Shell::ViewManagerInterop::IViewWrapper___0_1_0___::SetAt_::_1_::dtor$0 @ 0x1803A02BE (_Windows--Foundation--Collections--Internal--Vector_Windows--Internal--Shell--ViewM_ea_1803A02BE.c)
 *     _Windows::Foundation::Collections::Internal::Vector_Windows::Internal::Shell::ViewManagerInterop::IViewWrapper___Windows::Foundation::Collections::Internal::DefaultEqualityPredicate_Windows::Internal::Shell::ViewManagerInterop::IViewWrapper____Windows::Foundation::Collections::Internal::DefaultLifetimeTraits_Windows::Internal::Shell::ViewManagerInterop::IViewWrapper____Windows::Foundation::Collections::Internal::VectorOptions_Windows::Internal::Shell::ViewManagerInterop::IViewWrapper___0_1_0___::SetAt_::_1_::dtor$1 @ 0x1803A02CA (_Windows--Foundation--Collections--Internal--Vector_Windows--Internal--Shell--ViewM_ea_1803A02CA.c)
 *     _Windows::Foundation::Collections::Internal::Vector_Windows::Internal::Shell::Chaining::IChainLink___Windows::Foundation::Collections::Internal::DefaultEqualityPredicate_Windows::Internal::Shell::Chaining::IChainLink____Windows::Foundation::Collections::Internal::DefaultLifetimeTraits_Windows::Internal::Shell::Chaining::IChainLink____Windows::Foundation::Collections::Internal::VectorOptions_Windows::Internal::Shell::Chaining::IChainLink___0_1_0___::SetAt_::_1_::dtor$0 @ 0x1803C437E (_Windows--Foundation--Collections--Internal--Vector_Windows--Internal--Shell--Chain_ea_1803C437E.c)
 *     _Windows::Foundation::Collections::Internal::Vector_Windows::Internal::Shell::Chaining::IChainLink___Windows::Foundation::Collections::Internal::DefaultEqualityPredicate_Windows::Internal::Shell::Chaining::IChainLink____Windows::Foundation::Collections::Internal::DefaultLifetimeTraits_Windows::Internal::Shell::Chaining::IChainLink____Windows::Foundation::Collections::Internal::VectorOptions_Windows::Internal::Shell::Chaining::IChainLink___0_1_0___::SetAt_::_1_::dtor$1 @ 0x1803C438A (_Windows--Foundation--Collections--Internal--Vector_Windows--Internal--Shell--Chain_ea_1803C438A.c)
 *     _Windows::Foundation::Collections::Internal::Vector_Windows::Internal::Data::Activities::GetCurrentActivityForViewOperationResults___Windows::Foundation::Collections::Internal::DefaultEqualityPredicate_Windows::Internal::Data::Activities::GetCurrentActivityForViewOperationResults____Windows::Foundation::Collections::Internal::DefaultLifetimeTraits_Windows::Internal::Data::Activities::GetCurrentActivityForViewOperationResults____Windows::Foundation::Collections::Internal::VectorOptions_Windows::Internal::Data::Activities::GetCurrentActivityForViewOperationResults___0_1_0___::SetAt_::_1_::dtor$0 @ 0x1804A0FBE (_Windows--Foundation--Collections--Internal--Vector_Windows--Internal--Data--Activi_ea_1804A0FBE.c)
 *     _Windows::Foundation::Collections::Internal::Vector_Windows::Internal::Data::Activities::GetCurrentActivityForViewOperationResults___Windows::Foundation::Collections::Internal::DefaultEqualityPredicate_Windows::Internal::Data::Activities::GetCurrentActivityForViewOperationResults____Windows::Foundation::Collections::Internal::DefaultLifetimeTraits_Windows::Internal::Data::Activities::GetCurrentActivityForViewOperationResults____Windows::Foundation::Collections::Internal::VectorOptions_Windows::Internal::Data::Activities::GetCurrentActivityForViewOperationResults___0_1_0___::SetAt_::_1_::dtor$1 @ 0x1804A0FCA (_Windows--Foundation--Collections--Internal--Vector_Windows--Internal--Data--Activi_ea_1804A0FCA.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?Release@ReferencedGitCookie@?$GitStorageType@UIGetCurrentActivityForViewOperationResults@Activities@Data@Internal@Windows@@@detail@XWinRT@@QEAAKXZ @ 0x18039EDDC (-Release@ReferencedGitCookie@-$GitStorageType@UIGetCurrentActivityForViewOperationResults@Activi.c)
 */

__int64 __fastcall XWinRT::AutoValue<XWinRT::detail::GitStorageType<Windows::Internal::Shell::Chaining::IChainLink>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<Windows::Internal::Shell::Chaining::IChainLink *>>::~AutoValue<XWinRT::detail::GitStorageType<Windows::Internal::Shell::Chaining::IChainLink>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<Windows::Internal::Shell::Chaining::IChainLink *>>(
        __int64 a1)
{
  bool v2; // zf
  void *v3; // rcx
  __int64 result; // rax

  v2 = *(_BYTE *)(a1 + 8) == 0;
  v3 = *(void **)a1;
  if ( v2 )
  {
    if ( v3 )
      result = (*(__int64 (__fastcall **)(void *))(*(_QWORD *)v3 + 16LL))(v3);
  }
  else
  {
    result = XWinRT::detail::GitStorageType<Windows::Internal::Data::Activities::IGetCurrentActivityForViewOperationResults>::ReferencedGitCookie::Release(v3);
  }
  *(_BYTE *)(a1 + 8) = 0;
  *(_QWORD *)a1 = 0LL;
  return result;
}

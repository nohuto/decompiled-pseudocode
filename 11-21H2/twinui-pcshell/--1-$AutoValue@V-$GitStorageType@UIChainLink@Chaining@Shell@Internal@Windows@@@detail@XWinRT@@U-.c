/*
 * XREFs of ??1?$AutoValue@V?$GitStorageType@UIChainLink@Chaining@Shell@Internal@Windows@@@detail@XWinRT@@U?$DefaultLifetimeTraits@PEAUIChainLink@Chaining@Shell@Internal@Windows@@@Internal@Collections@Foundation@Windows@@@XWinRT@@QEAA@XZ @ 0x1802DF5B0
 * Callers:
 *     _Windows::Foundation::Collections::Internal::Vector_Windows::Internal::Data::Activities::GetCurrentActivityForViewOperationResults___Windows::Foundation::Collections::Internal::DefaultEqualityPredicate_Windows::Internal::Data::Activities::GetCurrentActivityForViewOperationResults____Windows::Foundation::Collections::Internal::DefaultLifetimeTraits_Windows::Internal::Data::Activities::GetCurrentActivityForViewOperationResults____Windows::Foundation::Collections::Internal::VectorOptions_Windows::Internal::Data::Activities::GetCurrentActivityForViewOperationResults___0_1_0___::RemoveAtInternal_::_1_::dtor$0 @ 0x1802E70D3 (_Windows--Foundation--Collections--Internal--Vector_Windows--Internal--Data--Activi_ea_1802E70D3.c)
 *     _Windows::Foundation::Collections::Internal::Vector_Windows::Internal::Shell::ViewManagerInterop::IViewWrapper___Windows::Foundation::Collections::Internal::DefaultEqualityPredicate_Windows::Internal::Shell::ViewManagerInterop::IViewWrapper____Windows::Foundation::Collections::Internal::DefaultLifetimeTraits_Windows::Internal::Shell::ViewManagerInterop::IViewWrapper____Windows::Foundation::Collections::Internal::VectorOptions_Windows::Internal::Shell::ViewManagerInterop::IViewWrapper___0_1_0___::SetAt_::_1_::dtor$0 @ 0x1802E7CBE (_Windows--Foundation--Collections--Internal--Vector_Windows--Internal--Shell--ViewM_ea_1802E7CBE.c)
 *     _Windows::Foundation::Collections::Internal::Vector_Windows::Internal::Shell::ViewManagerInterop::IViewWrapper___Windows::Foundation::Collections::Internal::DefaultEqualityPredicate_Windows::Internal::Shell::ViewManagerInterop::IViewWrapper____Windows::Foundation::Collections::Internal::DefaultLifetimeTraits_Windows::Internal::Shell::ViewManagerInterop::IViewWrapper____Windows::Foundation::Collections::Internal::VectorOptions_Windows::Internal::Shell::ViewManagerInterop::IViewWrapper___0_1_0___::SetAt_::_1_::dtor$1 @ 0x1802E7CCA (_Windows--Foundation--Collections--Internal--Vector_Windows--Internal--Shell--ViewM_ea_1802E7CCA.c)
 *     _Windows::Foundation::Collections::Internal::Vector_Windows::Internal::Shell::Chaining::IChainLink___Windows::Foundation::Collections::Internal::DefaultEqualityPredicate_Windows::Internal::Shell::Chaining::IChainLink____Windows::Foundation::Collections::Internal::DefaultLifetimeTraits_Windows::Internal::Shell::Chaining::IChainLink____Windows::Foundation::Collections::Internal::VectorOptions_Windows::Internal::Shell::Chaining::IChainLink___0_1_0___::SetAt_::_1_::dtor$0 @ 0x180307E2E (_Windows--Foundation--Collections--Internal--Vector_Windows--Internal--Shell--Chain_ea_180307E2E.c)
 *     _Windows::Foundation::Collections::Internal::Vector_Windows::Internal::Shell::Chaining::IChainLink___Windows::Foundation::Collections::Internal::DefaultEqualityPredicate_Windows::Internal::Shell::Chaining::IChainLink____Windows::Foundation::Collections::Internal::DefaultLifetimeTraits_Windows::Internal::Shell::Chaining::IChainLink____Windows::Foundation::Collections::Internal::VectorOptions_Windows::Internal::Shell::Chaining::IChainLink___0_1_0___::SetAt_::_1_::dtor$1 @ 0x180307E3A (_Windows--Foundation--Collections--Internal--Vector_Windows--Internal--Shell--Chain_ea_180307E3A.c)
 *     _Windows::Foundation::Collections::Internal::Vector_Windows::Internal::Data::Activities::GetCurrentActivityForViewOperationResults___Windows::Foundation::Collections::Internal::DefaultEqualityPredicate_Windows::Internal::Data::Activities::GetCurrentActivityForViewOperationResults____Windows::Foundation::Collections::Internal::DefaultLifetimeTraits_Windows::Internal::Data::Activities::GetCurrentActivityForViewOperationResults____Windows::Foundation::Collections::Internal::VectorOptions_Windows::Internal::Data::Activities::GetCurrentActivityForViewOperationResults___0_1_0___::SetAt_::_1_::dtor$0 @ 0x1803C775E (_Windows--Foundation--Collections--Internal--Vector_Windows--Internal--Data--Activi_ea_1803C775E.c)
 *     _Windows::Foundation::Collections::Internal::Vector_Windows::Internal::Data::Activities::GetCurrentActivityForViewOperationResults___Windows::Foundation::Collections::Internal::DefaultEqualityPredicate_Windows::Internal::Data::Activities::GetCurrentActivityForViewOperationResults____Windows::Foundation::Collections::Internal::DefaultLifetimeTraits_Windows::Internal::Data::Activities::GetCurrentActivityForViewOperationResults____Windows::Foundation::Collections::Internal::VectorOptions_Windows::Internal::Data::Activities::GetCurrentActivityForViewOperationResults___0_1_0___::SetAt_::_1_::dtor$1 @ 0x1803C776A (_Windows--Foundation--Collections--Internal--Vector_Windows--Internal--Data--Activi_ea_1803C776A.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 *     ?Release@ReferencedGitCookie@?$GitStorageType@UIGetCurrentActivityForViewOperationResults@Activities@Data@Internal@Windows@@@detail@XWinRT@@QEAAKXZ @ 0x1802E6DEC (-Release@ReferencedGitCookie@-$GitStorageType@UIGetCurrentActivityForViewOperationResults@Activi.c)
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

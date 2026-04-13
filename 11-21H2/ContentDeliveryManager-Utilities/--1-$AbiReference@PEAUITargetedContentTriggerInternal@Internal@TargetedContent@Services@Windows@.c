/*
 * XREFs of ??1?$AbiReference@PEAUITargetedContentTriggerInternal@Internal@TargetedContent@Services@Windows@@V?$GitStorageType@UITargetedContentTriggerInternal@Internal@TargetedContent@Services@Windows@@@detail@XWinRT@@U?$DefaultLifetimeTraits@PEAVTargetedContentTriggerInternal@Internal@TargetedContent@Services@Windows@@@2Collections@Foundation@5@@detail@XWinRT@@QEAA@XZ @ 0x180086314
 * Callers:
 *     _Windows::Foundation::Collections::Internal::Vector_ContentManagement::AppInstallInfoRecord___Windows::Foundation::Collections::Internal::DefaultEqualityPredicate_ContentManagement::AppInstallInfoRecord____Windows::Foundation::Collections::Internal::DefaultLifetimeTraits_ContentManagement::AppInstallInfoRecord____Windows::Foundation::Collections::Internal::VectorOptions_ContentManagement::AppInstallInfoRecord___0_1_0___::IndexOfInternal_::_1_::dtor$0 @ 0x1800F1D2B (_Windows--Foundation--Collections--Internal--Vector_ContentManagement--AppInstallIn_ea_1800F1D2B.c)
 *     _Windows::Foundation::Collections::Internal::Vector_Windows::Services::TargetedContent::Internal::TargetedContentTriggerStateTransition___Windows::Foundation::Collections::Internal::DefaultEqualityPredicate_Windows::Services::TargetedContent::Internal::TargetedContentTriggerStateTransition____Windows::Foundation::Collections::Internal::DefaultLifetimeTraits_Windows::Services::TargetedContent::Internal::TargetedContentTriggerStateTransition____Windows::Foundation::Collections::Internal::VectorOptions_Windows::Services::TargetedContent::Internal::TargetedContentTriggerStateTransition___0_1_0___::IndexOfInternal_::_1_::dtor$0 @ 0x1800F1EED (_Windows--Foundation--Collections--Internal--Vector_Windows--Services--TargetedCont_ea_1800F1EED.c)
 *     _Windows::Foundation::Collections::Internal::Vector_Windows::Services::TargetedContent::Internal::TargetedContentTriggerInternal___Windows::Foundation::Collections::Internal::DefaultEqualityPredicate_Windows::Services::TargetedContent::Internal::TargetedContentTriggerInternal____Windows::Foundation::Collections::Internal::DefaultLifetimeTraits_Windows::Services::TargetedContent::Internal::TargetedContentTriggerInternal____Windows::Foundation::Collections::Internal::VectorOptions_Windows::Services::TargetedContent::Internal::TargetedContentTriggerInternal___0_1_0___::IndexOfInternal_::_1_::dtor$0 @ 0x1800F2434 (_Windows--Foundation--Collections--Internal--Vector_Windows--Services--TargetedCont_ea_1800F2434.c)
 *     _Windows::Foundation::Collections::Internal::Vector_IInspectable___Windows::Foundation::Collections::Internal::DefaultEqualityPredicate_IInspectable____Windows::Foundation::Collections::Internal::DefaultLifetimeTraits_IInspectable____Windows::Foundation::Collections::Internal::VectorOptions_IInspectable___0_1_0___::IndexOfInternal_::_1_::dtor$0 @ 0x1800F6ADF (_Windows--Foundation--Collections--Internal--Vector_IInspectable___Windows--Foundat_ea_1800F6ADF.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x1800ED700 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall XWinRT::detail::AbiReference<Windows::Services::TargetedContent::Internal::ITargetedContentTriggerInternal *,XWinRT::detail::GitStorageType<Windows::Services::TargetedContent::Internal::ITargetedContentTriggerInternal>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<Windows::Services::TargetedContent::Internal::TargetedContentTriggerInternal *>>::~AbiReference<Windows::Services::TargetedContent::Internal::ITargetedContentTriggerInternal *,XWinRT::detail::GitStorageType<Windows::Services::TargetedContent::Internal::ITargetedContentTriggerInternal>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<Windows::Services::TargetedContent::Internal::TargetedContentTriggerInternal *>>(
        __int64 *a1)
{
  __int64 v2; // rcx
  __int64 result; // rax

  v2 = *a1;
  if ( v2 )
  {
    result = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v2 + 16LL))(v2);
    *a1 = 0LL;
  }
  return result;
}

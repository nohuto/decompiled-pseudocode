/*
 * XREFs of ??1?$LockHolder@VComLock@XWinRT@@UAcquireRead@detail@2@@detail@XWinRT@@QEAA@XZ @ 0x180028A04
 * Callers:
 *     _Windows::Foundation::Collections::Internal::Vector_IInspectable___Windows::Foundation::Collections::Internal::DefaultEqualityPredicate_IInspectable____Windows::Foundation::Collections::Internal::DefaultLifetimeTraits_IInspectable____Windows::Foundation::Collections::Internal::VectorOptions_IInspectable___0_1_0___::GetMany_::_1_::dtor$0 @ 0x1800EEB4F (_Windows--Foundation--Collections--Internal--Vector_IInspectable___Windows--Foundat_ea_1800EEB4F.c)
 *     _Windows::Foundation::Collections::Internal::Vector_Windows::Services::TargetedContent::Internal::TargetedContentTriggerStateTransition___Windows::Foundation::Collections::Internal::DefaultEqualityPredicate_Windows::Services::TargetedContent::Internal::TargetedContentTriggerStateTransition____Windows::Foundation::Collections::Internal::DefaultLifetimeTraits_Windows::Services::TargetedContent::Internal::TargetedContentTriggerStateTransition____Windows::Foundation::Collections::Internal::DefaultVectorOptions_Windows::Services::TargetedContent::Internal::TargetedContentTriggerStateTransition_____::GetMany_::_1_::dtor$0 @ 0x1800EEBF1 (_Windows--Foundation--Collections--Internal--Vector_Windows--Services--TargetedContent--Internal.c)
 *     _Windows::Foundation::Collections::Internal::Vector_Windows::Services::TargetedContent::Internal::TargetedContentTriggerStateTransition___Windows::Foundation::Collections::Internal::DefaultEqualityPredicate_Windows::Services::TargetedContent::Internal::TargetedContentTriggerStateTransition____Windows::Foundation::Collections::Internal::DefaultLifetimeTraits_Windows::Services::TargetedContent::Internal::TargetedContentTriggerStateTransition____Windows::Foundation::Collections::Internal::DefaultVectorOptions_Windows::Services::TargetedContent::Internal::TargetedContentTriggerStateTransition_____::IndexOf_::_1_::dtor$0 @ 0x1800EEC15 (_Windows--Foundation--Collections--Internal--Vector_Windows--Services--TargetedCont_ea_1800EEC15.c)
 *     _Windows::Foundation::Collections::Internal::Vector_IInspectable___Windows::Foundation::Collections::Internal::DefaultEqualityPredicate_IInspectable____Windows::Foundation::Collections::Internal::DefaultLifetimeTraits_IInspectable____Windows::Foundation::Collections::Internal::VectorOptions_IInspectable___0_1_0___::GetAt_::_1_::dtor$0 @ 0x1800F1C73 (_Windows--Foundation--Collections--Internal--Vector_IInspectable___Windows--Foundat_ea_1800F1C73.c)
 *     _Windows::Foundation::Collections::Internal::Vector_IInspectable___Windows::Foundation::Collections::Internal::DefaultEqualityPredicate_IInspectable____Windows::Foundation::Collections::Internal::DefaultLifetimeTraits_IInspectable____Windows::Foundation::Collections::Internal::VectorOptions_IInspectable___0_1_0___::IndexOf_::_1_::dtor$0 @ 0x1800F1CF3 (_Windows--Foundation--Collections--Internal--Vector_IInspectable___Windows--Foundat_ea_1800F1CF3.c)
 * Callees:
 *     <none>
 */

void __fastcall XWinRT::detail::LockHolder<XWinRT::ComLock,XWinRT::detail::AcquireRead>::~LockHolder<XWinRT::ComLock,XWinRT::detail::AcquireRead>(
        RTL_SRWLOCK **a1)
{
  RTL_SRWLOCK *v1; // rax
  RTL_SRWLOCK *v3; // rcx

  v1 = *a1;
  if ( *a1 )
  {
    v3 = v1 + 1;
    if ( LODWORD(v1->Ptr) == 1 )
      --LODWORD(v3->Ptr);
    else
      ReleaseSRWLockShared(v3);
    *a1 = 0LL;
  }
}

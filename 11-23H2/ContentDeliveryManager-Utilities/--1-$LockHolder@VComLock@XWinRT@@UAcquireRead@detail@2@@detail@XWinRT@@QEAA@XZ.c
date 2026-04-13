/*
 * XREFs of ??1?$LockHolder@VComLock@XWinRT@@UAcquireRead@detail@2@@detail@XWinRT@@QEAA@XZ @ 0x18002BBB0
 * Callers:
 *     _Windows::Foundation::Collections::Internal::Vector_Windows::Services::TargetedContent::Internal::TargetedContentTriggerStateTransition___Windows::Foundation::Collections::Internal::DefaultEqualityPredicate_Windows::Services::TargetedContent::Internal::TargetedContentTriggerStateTransition____Windows::Foundation::Collections::Internal::DefaultLifetimeTraits_Windows::Services::TargetedContent::Internal::TargetedContentTriggerStateTransition____Windows::Foundation::Collections::Internal::DefaultVectorOptions_Windows::Services::TargetedContent::Internal::TargetedContentTriggerStateTransition_____::GetAt_::_1_::dtor$0 @ 0x1800D58D8 (_Windows--Foundation--Collections--Internal--Vector_Windows--Services--TargetedContent--Internal.c)
 *     _Windows::Foundation::Collections::Internal::Vector_Windows::Services::TargetedContent::Internal::TargetedContentTriggerStateTransition___Windows::Foundation::Collections::Internal::DefaultEqualityPredicate_Windows::Services::TargetedContent::Internal::TargetedContentTriggerStateTransition____Windows::Foundation::Collections::Internal::DefaultLifetimeTraits_Windows::Services::TargetedContent::Internal::TargetedContentTriggerStateTransition____Windows::Foundation::Collections::Internal::DefaultVectorOptions_Windows::Services::TargetedContent::Internal::TargetedContentTriggerStateTransition_____::GetMany_::_1_::dtor$0 @ 0x1800D598C (_Windows--Foundation--Collections--Internal--Vector_Windows--Services--TargetedCont_ea_1800D598C.c)
 *     _Windows::Foundation::Collections::Internal::Vector_IInspectable___Windows::Foundation::Collections::Internal::DefaultEqualityPredicate_IInspectable____Windows::Foundation::Collections::Internal::DefaultLifetimeTraits_IInspectable____Windows::Foundation::Collections::Internal::VectorOptions_IInspectable___0_1_0___::GetAt_::_1_::dtor$0 @ 0x1800D59D4 (_Windows--Foundation--Collections--Internal--Vector_IInspectable___Windows--Foundat_ea_1800D59D4.c)
 *     _Windows::Foundation::Collections::Internal::Vector_IInspectable___Windows::Foundation::Collections::Internal::DefaultEqualityPredicate_IInspectable____Windows::Foundation::Collections::Internal::DefaultLifetimeTraits_IInspectable____Windows::Foundation::Collections::Internal::VectorOptions_IInspectable___0_1_0___::GetMany_::_1_::dtor$0 @ 0x1800D85F8 (_Windows--Foundation--Collections--Internal--Vector_IInspectable___Windows--Foundat_ea_1800D85F8.c)
 *     _Windows::Foundation::Collections::Internal::Vector_IInspectable___Windows::Foundation::Collections::Internal::DefaultEqualityPredicate_IInspectable____Windows::Foundation::Collections::Internal::DefaultLifetimeTraits_IInspectable____Windows::Foundation::Collections::Internal::VectorOptions_IInspectable___0_1_0___::IndexOf_::_1_::dtor$0 @ 0x1800D8630 (_Windows--Foundation--Collections--Internal--Vector_IInspectable___Windows--Foundat_ea_1800D8630.c)
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

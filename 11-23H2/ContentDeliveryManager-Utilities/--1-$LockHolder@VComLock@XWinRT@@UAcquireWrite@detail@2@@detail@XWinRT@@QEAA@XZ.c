/*
 * XREFs of ??1?$LockHolder@VComLock@XWinRT@@UAcquireWrite@detail@2@@detail@XWinRT@@QEAA@XZ @ 0x18002BBEC
 * Callers:
 *     _Windows::Foundation::Collections::Internal::Vector_IInspectable___Windows::Foundation::Collections::Internal::DefaultEqualityPredicate_IInspectable____Windows::Foundation::Collections::Internal::DefaultLifetimeTraits_IInspectable____Windows::Foundation::Collections::Internal::VectorOptions_IInspectable___0_1_0___::Clear_::_1_::dtor$0 @ 0x1800D566D (_Windows--Foundation--Collections--Internal--Vector_IInspectable___Windows--Foundation--Collecti.c)
 *     _Windows::Foundation::Collections::Internal::Vector_IInspectable___Windows::Foundation::Collections::Internal::DefaultEqualityPredicate_IInspectable____Windows::Foundation::Collections::Internal::DefaultLifetimeTraits_IInspectable____Windows::Foundation::Collections::Internal::VectorOptions_IInspectable___0_1_0___::SetAt_::_1_::dtor$2 @ 0x1800D5BA5 (_Windows--Foundation--Collections--Internal--Vector_IInspectable___Windows--Foundat_ea_1800D5BA5.c)
 *     _Windows::Foundation::Collections::Internal::Vector_Windows::Services::TargetedContent::Internal::TargetedContentTriggerStateTransition___Windows::Foundation::Collections::Internal::DefaultEqualityPredicate_Windows::Services::TargetedContent::Internal::TargetedContentTriggerStateTransition____Windows::Foundation::Collections::Internal::DefaultLifetimeTraits_Windows::Services::TargetedContent::Internal::TargetedContentTriggerStateTransition____Windows::Foundation::Collections::Internal::DefaultVectorOptions_Windows::Services::TargetedContent::Internal::TargetedContentTriggerStateTransition_____::SetAt_::_1_::dtor$2 @ 0x1800D5E58 (_Windows--Foundation--Collections--Internal--Vector_Windows--Services--TargetedCont_ea_1800D5E58.c)
 *     _Windows::Foundation::Collections::Internal::Vector_IInspectable___Windows::Foundation::Collections::Internal::DefaultEqualityPredicate_IInspectable____Windows::Foundation::Collections::Internal::DefaultLifetimeTraits_IInspectable____Windows::Foundation::Collections::Internal::VectorOptions_IInspectable___0_1_0___::RemoveAtInternal_::_1_::dtor$1 @ 0x1800D86D7 (_Windows--Foundation--Collections--Internal--Vector_IInspectable___Windows--Foundat_ea_1800D86D7.c)
 * Callees:
 *     <none>
 */

void __fastcall XWinRT::detail::LockHolder<XWinRT::ComLock,XWinRT::detail::AcquireWrite>::~LockHolder<XWinRT::ComLock,XWinRT::detail::AcquireWrite>(
        RTL_SRWLOCK **a1)
{
  RTL_SRWLOCK *v1; // rax
  RTL_SRWLOCK *v3; // rcx

  v1 = *a1;
  if ( *a1 )
  {
    v3 = v1 + 1;
    if ( LODWORD(v1->Ptr) == 1 )
      LODWORD(v3->Ptr) += 0x10000000;
    else
      ReleaseSRWLockExclusive(v3);
    *a1 = 0LL;
  }
}

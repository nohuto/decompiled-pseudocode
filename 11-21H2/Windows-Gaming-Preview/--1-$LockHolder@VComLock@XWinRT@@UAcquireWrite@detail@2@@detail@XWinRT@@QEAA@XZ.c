/*
 * XREFs of ??1?$LockHolder@VComLock@XWinRT@@UAcquireWrite@detail@2@@detail@XWinRT@@QEAA@XZ @ 0x1800135B0
 * Callers:
 *     _Windows::Foundation::Collections::Internal::Vector_Windows::Gaming::Preview::GamesEnumeration::GameListEntry___Windows::Foundation::Collections::Internal::DefaultEqualityPredicate_Windows::Gaming::Preview::GamesEnumeration::GameListEntry____Windows::Foundation::Collections::Internal::DefaultLifetimeTraits_Windows::Gaming::Preview::GamesEnumeration::GameListEntry____Windows::Foundation::Collections::Internal::VectorOptions_Windows::Gaming::Preview::GamesEnumeration::GameListEntry___0_1_0___::SetAt_::_1_::dtor$2 @ 0x18004C651 (_Windows--Foundation--Collections--Internal--Vector_Windows--Gaming--Preview--Games_ea_18004C651.c)
 *     _Windows::Foundation::Collections::Internal::Vector_Windows::Gaming::Preview::GamesEnumeration::GameListEntry___Windows::Foundation::Collections::Internal::DefaultEqualityPredicate_Windows::Gaming::Preview::GamesEnumeration::GameListEntry____Windows::Foundation::Collections::Internal::DefaultLifetimeTraits_Windows::Gaming::Preview::GamesEnumeration::GameListEntry____Windows::Foundation::Collections::Internal::VectorOptions_Windows::Gaming::Preview::GamesEnumeration::GameListEntry___0_1_0___::RemoveAtInternal_::_1_::dtor$1 @ 0x18004C754 (_Windows--Foundation--Collections--Internal--Vector_Windows--Gaming--Preview--Games_ea_18004C754.c)
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

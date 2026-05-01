/*
 * XREFs of ?EnsureSubscribedToFeatureConfigurationChangesImpl@EnabledStateManager@details@wil@@AEAAIXZ @ 0x18000DA1C
 * Callers:
 *     ?EnsureSubscribedToFeatureConfigurationChanges@details@wil@@YAIXZ @ 0x18000D9F4 (-EnsureSubscribedToFeatureConfigurationChanges@details@wil@@YAIXZ.c)
 * Callees:
 *     ??1?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@IEAA@XZ @ 0x18000CE0C (--1-$unique_storage@U-$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1-ReleaseSRWLockExclusive@.c)
 *     ?WilApi_SubscribeFeatureStateChangeNotification@details@wil@@YAXPEAPEAUFEATURE_STATE_CHANGE_SUBSCRIPTION__@@P6AXPEAX@Z1@Z @ 0x180011B58 (-WilApi_SubscribeFeatureStateChangeNotification@details@wil@@YAXPEAPEAUFEATURE_STATE_CHANGE_SUBS.c)
 */

__int64 __fastcall wil::details::EnabledStateManager::EnsureSubscribedToFeatureConfigurationChangesImpl(
        RTL_SRWLOCK *this)
{
  unsigned int Ptr_high; // edi
  RTL_SRWLOCK *v3; // rbx
  void *v4; // r9
  RTL_SRWLOCK *v5; // rbx
  RTL_SRWLOCK *v7; // [rsp+30h] [rbp+8h] BYREF

  Ptr_high = 0;
  if ( !LOBYTE(this->Ptr) )
    return 0LL;
  v3 = this + 1;
  AcquireSRWLockExclusive(this + 1);
  v7 = v3;
  v5 = this + 4;
  if ( this[4].Ptr )
  {
    Ptr_high = HIDWORD(this[3].Ptr);
  }
  else
  {
    v5->Ptr = 0LL;
    wil::details::WilApi_SubscribeFeatureStateChangeNotification(
      (wil::details *)&this[4],
      (struct FEATURE_STATE_CHANGE_SUBSCRIPTION__ **)_lambda_fee8cea507d2413a58be13acfb66740a_::_lambda_invoker_cdecl_,
      (void (*)(void *))this,
      v4);
    if ( v5->Ptr )
    {
      HIDWORD(this[3].Ptr) = 1;
      Ptr_high = 1;
    }
  }
  wil::details::unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockExclusive(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockExclusive(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>((__int64 *)&v7);
  return Ptr_high;
}

/*
 * XREFs of ?EnsureSubscribedToFeatureConfigurationChanges@EnabledStateManager@details@wil@@QEAAIXZ @ 0x1800355AC
 * Callers:
 *     ?GetCachedFeatureEnabledState@?$FeatureImpl@U__WilFeatureTraits_Feature_Servicing_MutedListenTo@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@XZ @ 0x180035A60 (-GetCachedFeatureEnabledState@-$FeatureImpl@U__WilFeatureTraits_Feature_Servicing_MutedListenTo@.c)
 *     ?IsFeatureConfigured@details@wil@@YA_NPEAUwil_FeatureState@@I_NW4wil_FeatureStore@@PEAH@Z @ 0x180035D60 (-IsFeatureConfigured@details@wil@@YA_NPEAUwil_FeatureState@@I_NW4wil_FeatureStore@@PEAH@Z.c)
 * Callees:
 *     ??1?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@IEAA@XZ @ 0x180034164 (--1-$unique_storage@U-$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1-ReleaseSRWLockExclusive@.c)
 *     ?WilApi_SubscribeFeatureStateChangeNotification@details@wil@@YAXPEAPEAUFEATURE_STATE_CHANGE_SUBSCRIPTION__@@P6AXPEAX@Z1@Z @ 0x18003A924 (-WilApi_SubscribeFeatureStateChangeNotification@details@wil@@YAXPEAPEAUFEATURE_STATE_CHANGE_SUBS.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall wil::details::EnabledStateManager::EnsureSubscribedToFeatureConfigurationChanges(RTL_SRWLOCK *this)
{
  __int64 result; // rax
  unsigned int Ptr_high; // edi
  RTL_SRWLOCK *v4; // rbx
  void *v5; // r9
  RTL_SRWLOCK *v6; // rbx
  RTL_SRWLOCK *v7; // [rsp+30h] [rbp+8h] BYREF

  result = HIDWORD(this[3].Ptr);
  Ptr_high = 0;
  if ( !(_DWORD)result )
  {
    if ( LOBYTE(this->Ptr) )
    {
      v4 = this + 1;
      AcquireSRWLockExclusive(this + 1);
      v7 = v4;
      v6 = this + 4;
      if ( this[4].Ptr )
      {
        Ptr_high = HIDWORD(this[3].Ptr);
      }
      else
      {
        v6->Ptr = 0LL;
        wil::details::WilApi_SubscribeFeatureStateChangeNotification(
          (wil::details *)&this[4],
          (struct FEATURE_STATE_CHANGE_SUBSCRIPTION__ **)_lambda_fee8cea507d2413a58be13acfb66740a_::_lambda_invoker_cdecl_,
          (void (*)(void *))this,
          v5);
        if ( v6->Ptr )
        {
          HIDWORD(this[3].Ptr) = 1;
          wil::details::unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockExclusive(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockExclusive(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>(&v7);
          return 1;
        }
      }
      wil::details::unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockExclusive(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockExclusive(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>(&v7);
    }
    return Ptr_high;
  }
  return result;
}

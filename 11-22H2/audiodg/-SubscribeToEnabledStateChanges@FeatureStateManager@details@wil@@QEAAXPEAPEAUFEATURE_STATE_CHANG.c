/*
 * XREFs of ?SubscribeToEnabledStateChanges@FeatureStateManager@details@wil@@QEAAXPEAPEAUFEATURE_STATE_CHANGE_SUBSCRIPTION__@@P6AXPEAX@Z1@Z @ 0x14008CD70
 * Callers:
 *     ?WilApiImpl_SubscribeFeatureStateChangeNotification@details@wil@@YAXPEAPEAUFEATURE_STATE_CHANGE_SUBSCRIPTION__@@P6AXPEAX@Z1@Z @ 0x14008D770 (-WilApiImpl_SubscribeFeatureStateChangeNotification@details@wil@@YAXPEAPEAUFEATURE_STATE_CHANGE_.c)
 * Callees:
 *     wil_details_RtlRegisterFeatureConfigurationChangeNotification @ 0x14002EF80 (wil_details_RtlRegisterFeatureConfigurationChangeNotification.c)
 *     ?SubscribeUnderLock@SubscriptionList@details_abi@wil@@QEAAXPEAPEAUFEATURE_STATE_CHANGE_SUBSCRIPTION__@@P6AXPEAX@Z1@Z @ 0x14008CEE0 (-SubscribeUnderLock@SubscriptionList@details_abi@wil@@QEAAXPEAPEAUFEATURE_STATE_CHANGE_SUBSCRIPT.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall wil::details::FeatureStateManager::SubscribeToEnabledStateChanges(
        RTL_SRWLOCK *this,
        struct FEATURE_STATE_CHANGE_SUBSCRIPTION__ **a2,
        void (*a3)(void *),
        void *a4)
{
  RTL_SRWLOCK *v8; // rbx
  __int64 v9; // r8
  RTL_SRWLOCK *v10; // r9

  *a2 = 0LL;
  if ( LOBYTE(this->Ptr) )
  {
    v8 = this + 4;
    AcquireSRWLockExclusive(this + 4);
    v10 = this + 18;
    if ( this[18].Ptr
      || (v10->Ptr = 0LL,
          !(unsigned int)wil_details_RtlRegisterFeatureConfigurationChangeNotification(
                           (__int64)_lambda_1ad7ecfab602a777ecf020873216a663_::_lambda_invoker_cdecl_,
                           (__int64)this,
                           v9,
                           (__int64)v10)) )
    {
      wil::details_abi::SubscriptionList::SubscribeUnderLock((wil::details_abi::SubscriptionList *)&this[9], a2, a3, a4);
    }
    if ( v8 )
      ReleaseSRWLockExclusive(v8);
  }
}

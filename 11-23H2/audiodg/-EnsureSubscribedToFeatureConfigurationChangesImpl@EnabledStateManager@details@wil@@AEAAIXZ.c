/*
 * XREFs of ?EnsureSubscribedToFeatureConfigurationChangesImpl@EnabledStateManager@details@wil@@AEAAIXZ @ 0x140058CA8
 * Callers:
 *     ?EnsureSubscribedToFeatureConfigurationChanges@details@wil@@YAIXZ @ 0x140058C80 (-EnsureSubscribedToFeatureConfigurationChanges@details@wil@@YAIXZ.c)
 *     ?IsFeatureConfigured@details@wil@@YA_NPEAUwil_FeatureState@@I_NW4wil_FeatureStore@@PEAH@Z @ 0x1400880EC (-IsFeatureConfigured@details@wil@@YA_NPEAUwil_FeatureState@@I_NW4wil_FeatureStore@@PEAH@Z.c)
 * Callees:
 *     ?WilApi_SubscribeFeatureStateChangeNotification@details@wil@@YAXPEAPEAUFEATURE_STATE_CHANGE_SUBSCRIPTION__@@P6AXPEAX@Z1@Z @ 0x140059E4C (-WilApi_SubscribeFeatureStateChangeNotification@details@wil@@YAXPEAPEAUFEATURE_STATE_CHANGE_SUBS.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall wil::details::EnabledStateManager::EnsureSubscribedToFeatureConfigurationChangesImpl(
        RTL_SRWLOCK *this)
{
  RTL_SRWLOCK *v2; // rbx
  void *v3; // r9
  RTL_SRWLOCK *v4; // rsi
  unsigned int Ptr_high; // edi

  if ( !LOBYTE(this->Ptr) )
    return 0LL;
  v2 = this + 1;
  AcquireSRWLockExclusive(this + 1);
  v4 = this + 4;
  if ( this[4].Ptr )
  {
    Ptr_high = HIDWORD(this[3].Ptr);
    if ( v2 )
      ReleaseSRWLockExclusive(v2);
    return Ptr_high;
  }
  v4->Ptr = 0LL;
  wil::details::WilApi_SubscribeFeatureStateChangeNotification(
    (wil::details *)&this[4],
    (struct FEATURE_STATE_CHANGE_SUBSCRIPTION__ **)_lambda_fee8cea507d2413a58be13acfb66740a_::_lambda_invoker_cdecl_,
    (void (*)(void *))this,
    v3);
  if ( !v4->Ptr )
  {
    if ( v2 )
      ReleaseSRWLockExclusive(v2);
    return 0LL;
  }
  HIDWORD(this[3].Ptr) = 1;
  if ( v2 )
    ReleaseSRWLockExclusive(v2);
  return 1LL;
}

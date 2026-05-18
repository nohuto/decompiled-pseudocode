/*
 * XREFs of ?EnsureSubscribedToFeatureConfigurationChangesImpl@EnabledStateManager@details@wil@@AEAAIXZ @ 0x180005674
 * Callers:
 *     ?IsFeatureConfigured@details@wil@@YA_NPEAUwil_FeatureState@@I_NW4wil_FeatureStore@@PEAH@Z @ 0x1800066C0 (-IsFeatureConfigured@details@wil@@YA_NPEAUwil_FeatureState@@I_NW4wil_FeatureStore@@PEAH@Z.c)
 *     ?GetCachedFeatureEnabledState@?$FeatureImpl@U__WilFeatureTraits_Feature_2163525945@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@XZ @ 0x18000D6D8 (-GetCachedFeatureEnabledState@-$FeatureImpl@U__WilFeatureTraits_Feature_2163525945@@@details@wil.c)
 * Callees:
 *     ??I?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAUFEATURE_STATE_CHANGE_SUBSCRIPTION__@@P6AXPEAU1@@Z$1?WilApi_UnsubscribeFeatureStateChangeNotification@details@wil@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@QEAAPEAPEAUFEATURE_STATE_CHANGE_SUBSCRIPTION__@@XZ @ 0x180004918 (--I-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAUFEATURE_STATE_CHANGE_SUBSCRIPTION__@@.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18000F9E0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall wil::details::EnabledStateManager::EnsureSubscribedToFeatureConfigurationChangesImpl(
        wil::details::EnabledStateManager *this)
{
  RTL_SRWLOCK *v2; // rbx
  unsigned int v3; // edi
  __int64 *v5; // rax
  void (__fastcall *v6)(__int64 *, void (__fastcall *)(wil::details::EnabledStateManager *), wil::details::EnabledStateManager *); // r9

  if ( !*(_BYTE *)this )
    return 0LL;
  v2 = (RTL_SRWLOCK *)((char *)this + 8);
  AcquireSRWLockExclusive((PSRWLOCK)this + 1);
  if ( *((_QWORD *)this + 4) )
  {
    v3 = *((_DWORD *)this + 7);
    if ( v2 )
      ReleaseSRWLockExclusive(v2);
    return v3;
  }
  v5 = wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<FEATURE_STATE_CHANGE_SUBSCRIPTION__ *,void (*)(FEATURE_STATE_CHANGE_SUBSCRIPTION__ *),&void wil::details::WilApi_UnsubscribeFeatureStateChangeNotification(FEATURE_STATE_CHANGE_SUBSCRIPTION__ *),wistd::integral_constant<unsigned __int64,0>,FEATURE_STATE_CHANGE_SUBSCRIPTION__ *,FEATURE_STATE_CHANGE_SUBSCRIPTION__ *,0,std::nullptr_t>>>::operator&((__int64 *)this + 4);
  v6 = (void (__fastcall *)(__int64 *, void (__fastcall *)(wil::details::EnabledStateManager *), wil::details::EnabledStateManager *))g_wil_details_internalSubscribeFeatureStateChangeNotification;
  if ( g_wil_details_internalSubscribeFeatureStateChangeNotification
    || (v6 = (void (__fastcall *)(__int64 *, void (__fastcall *)(wil::details::EnabledStateManager *), wil::details::EnabledStateManager *))g_wil_details_apiSubscribeFeatureStateChangeNotification) != 0LL )
  {
    v6(v5, _lambda_fee8cea507d2413a58be13acfb66740a_::_lambda_invoker_cdecl_, this);
  }
  else
  {
    *v5 = 0LL;
  }
  if ( !*((_QWORD *)this + 4) )
  {
    if ( v2 )
      ReleaseSRWLockExclusive(v2);
    return 0LL;
  }
  *((_DWORD *)this + 7) = 1;
  if ( v2 )
    ReleaseSRWLockExclusive(v2);
  return 1LL;
}

/*
 * XREFs of ?IsFeatureConfigured@details@wil@@YA_NPEAUwil_FeatureState@@I_NW4wil_FeatureStore@@PEAH@Z @ 0x18000F2D0
 * Callers:
 *     ?WilApiImpl_GetFeatureVariant@details@wil@@YAIIW4FEATURE_CHANGE_TIME@@PEAIPEAH2@Z @ 0x18000F1E0 (-WilApiImpl_GetFeatureVariant@details@wil@@YAIIW4FEATURE_CHANGE_TIME@@PEAIPEAH2@Z.c)
 *     ?WilApiImpl_GetFeatureEnabledState@details@wil@@YA?AW4FEATURE_ENABLED_STATE@@IW4FEATURE_CHANGE_TIME@@PEAH@Z @ 0x18000F260 (-WilApiImpl_GetFeatureEnabledState@details@wil@@YA-AW4FEATURE_ENABLED_STATE@@IW4FEATURE_CHANGE_T.c)
 * Callees:
 *     ?wil_RtlStagingConfig_QueryFeatureState@@YAHPEAUwil_FeatureState@@IHPEAH@Z @ 0x18000F3A8 (-wil_RtlStagingConfig_QueryFeatureState@@YAHPEAUwil_FeatureState@@IHPEAH@Z.c)
 *     ?AcquireSRWLockExclusive@wil@@YA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@1@PEAU_RTL_SRWLOCK@@@Z @ 0x180041324 (-AcquireSRWLockExclusive@wil@@YA-AV-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL_.c)
 *     ??1?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@IEAA@XZ @ 0x18004135C (--1-$unique_storage@U-$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1-ReleaseSRWLockExclusive@.c)
 *     ?push_back@heap_buffer@details_abi@wil@@QEAA_NPEBX_K@Z @ 0x180041D6C (-push_back@heap_buffer@details_abi@wil@@QEAA_NPEBX_K@Z.c)
 *     ?EnsureSubscribedToFeatureConfigurationChangesImpl@EnabledStateManager@details@wil@@AEAAIXZ @ 0x18005C5EC (-EnsureSubscribedToFeatureConfigurationChangesImpl@EnabledStateManager@details@wil@@AEAAIXZ.c)
 */

// Hidden C++ exception states: #wind=1
bool __fastcall wil::details::IsFeatureConfigured(
        struct wil_FeatureState *a1,
        unsigned int a2,
        unsigned __int8 a3,
        int a4,
        _DWORD *a5)
{
  int v5; // esi
  volatile __int32 *v8; // rbx
  unsigned int v10; // edi
  bool v11; // si
  char v12; // al
  _BYTE v13[8]; // [rsp+20h] [rbp-38h] BYREF
  int v14; // [rsp+28h] [rbp-30h] BYREF
  volatile __int32 *v15; // [rsp+30h] [rbp-28h]
  int v16; // [rsp+78h] [rbp+20h] BYREF

  v5 = a3;
  v8 = (volatile __int32 *)&`wil::details::IsFeatureConfigured'::`2'::machineStoreProbe;
  if ( a4 )
    v8 = (volatile __int32 *)&`wil::details::IsFeatureConfigured'::`2'::userStoreProbe;
  if ( (*v8 & 9) == 1 )
    return 0;
  if ( (*v8 & 1) != 0 )
  {
    *a5 = 1;
    return (unsigned int)wil_RtlStagingConfig_QueryFeatureState(a1, a2, a3, 0LL) != 0;
  }
  else
  {
    v10 = dword_180142E84;
    if ( !dword_180142E84 )
      v10 = wil::details::EnabledStateManager::EnsureSubscribedToFeatureConfigurationChangesImpl((wil::details::EnabledStateManager *)&wil::details::g_enabledStateManager);
    v16 = 0;
    *a5 = 1;
    v11 = (unsigned int)wil_RtlStagingConfig_QueryFeatureState(a1, a2, v5, &v16) != 0;
    v12 = _InterlockedExchange(v8, v16 != 0 ? 11 : 3);
    if ( !v16 && (v12 & 2) == 0 && wil::details::g_enabledStateManager )
    {
      wil::AcquireSRWLockExclusive(v13, &qword_180142E70);
      if ( !v10
        || v10 != dword_180142E84
        || (v14 = 0,
            v15 = v8,
            !wil::details_abi::heap_buffer::push_back(
               (wil::details_abi::heap_buffer *)&xmmword_180142EB8,
               &v14,
               0x10uLL)) )
      {
        _InterlockedAnd(v8, 0xFFFFFDF8);
      }
      wil::details::unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockExclusive(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockExclusive(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>(v13);
    }
    return v11;
  }
}

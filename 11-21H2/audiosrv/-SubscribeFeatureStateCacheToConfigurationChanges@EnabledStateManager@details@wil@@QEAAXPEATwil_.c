/*
 * XREFs of ?SubscribeFeatureStateCacheToConfigurationChanges@EnabledStateManager@details@wil@@QEAAXPEATwil_details_FeatureStateCache@@W4wil_FeatureChangeTime@@I@Z @ 0x180025838
 * Callers:
 *     ?GetCachedFeatureEnabledState@?$FeatureImpl@U__WilFeatureTraits_Feature_Audio_MultiChannelRenderAttempted@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@XZ @ 0x180025708 (-GetCachedFeatureEnabledState@-$FeatureImpl@U__WilFeatureTraits_Feature_Audio_MultiChannelRender.c)
 *     ?GetCachedFeatureEnabledState@?$FeatureImpl@U__WilFeatureTraits_Feature_DtsxHdmiEnabled@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@XZ @ 0x18004F7D0 (-GetCachedFeatureEnabledState@-$FeatureImpl@U__WilFeatureTraits_Feature_DtsxHdmiEnabled@@@detail.c)
 *     ?GetCachedFeatureEnabledState@?$FeatureImpl@U__WilFeatureTraits_Feature_HangDetectionThresholdTweaking@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@XZ @ 0x1800507F8 (-GetCachedFeatureEnabledState@-$FeatureImpl@U__WilFeatureTraits_Feature_HangDetectionThresholdTw.c)
 *     ?GetCachedFeatureEnabledState@?$FeatureImpl@U__WilFeatureTraits_Feature_DisableAtmosLicenseCheckAllowed@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@XZ @ 0x180056228 (-GetCachedFeatureEnabledState@-$FeatureImpl@U__WilFeatureTraits_Feature_DisableAtmosLicenseCheck.c)
 *     ?GetCachedVariantState@?$FeatureImpl@U__WilFeatureTraits_Feature_HangDetectionThresholdTweaking@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@XZ @ 0x18005BD7C (-GetCachedVariantState@-$FeatureImpl@U__WilFeatureTraits_Feature_HangDetectionThresholdTweaking@.c)
 *     ?GetCachedFeatureEnabledState@?$FeatureImpl@U__WilFeatureTraits_Feature_CAMNotification@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@XZ @ 0x1800EE864 (-GetCachedFeatureEnabledState@-$FeatureImpl@U__WilFeatureTraits_Feature_CAMNotification@@@detail.c)
 *     ?GetCachedFeatureEnabledState@?$FeatureImpl@U__WilFeatureTraits_Feature_GetMixFormatForThirdPartyVSS@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@XZ @ 0x1800EE944 (-GetCachedFeatureEnabledState@-$FeatureImpl@U__WilFeatureTraits_Feature_GetMixFormatForThirdPart.c)
 *     ?GetCachedFeatureEnabledState@?$FeatureImpl@U__WilFeatureTraits_Feature_AllowSpatialLicenseSideLoad@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@XZ @ 0x180153F14 (-GetCachedFeatureEnabledState@-$FeatureImpl@U__WilFeatureTraits_Feature_AllowSpatialLicenseSideL.c)
 * Callees:
 *     ?reserve@heap_buffer@details_abi@wil@@QEAA_N_K@Z @ 0x180025920 (-reserve@heap_buffer@details_abi@wil@@QEAA_N_K@Z.c)
 *     memcpy_s @ 0x180025BEC (memcpy_s.c)
 *     ??1?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@IEAA@XZ @ 0x180025C8C (--1-$unique_storage@U-$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1-ReleaseSRWLockExclusive@.c)
 */

void __fastcall wil::details::EnabledStateManager::SubscribeFeatureStateCacheToConfigurationChanges(
        __int64 a1,
        volatile signed __int32 *a2,
        int a3,
        int a4)
{
  __int64 v8; // rbx
  unsigned __int64 v9; // rcx
  unsigned __int64 v10; // rdx
  int Source; // [rsp+20h] [rbp-28h] BYREF
  volatile signed __int32 *v12; // [rsp+28h] [rbp-20h]
  __int64 v13; // [rsp+50h] [rbp+8h] BYREF

  if ( *(_BYTE *)a1 )
  {
    v8 = a1 + 8;
    AcquireSRWLockExclusive((PSRWLOCK)(a1 + 8));
    v13 = v8;
    if ( !a4 || a4 != *(_DWORD *)(a1 + 28) )
      goto LABEL_11;
    Source = a3;
    v12 = a2;
    v9 = *(_QWORD *)(a1 + 96) - *(_QWORD *)(a1 + 80);
    if ( *(_QWORD *)(a1 + 88) - *(_QWORD *)(a1 + 80) + 16LL < v9 )
      goto LABEL_5;
    v10 = 16LL;
    if ( 2 * v9 > 0x10 )
      v10 = 2 * v9;
    if ( wil::details_abi::heap_buffer::reserve((wil::details_abi::heap_buffer *)(a1 + 80), v10) )
    {
LABEL_5:
      memcpy_s(
        *(void *const *)(a1 + 88),
        (*(_QWORD *)(a1 + 96) - *(_QWORD *)(a1 + 88)) & -(__int64)(*(_QWORD *)(a1 + 88) < *(_QWORD *)(a1 + 96)),
        &Source,
        0x10uLL);
      *(_QWORD *)(a1 + 88) += 16LL;
    }
    else
    {
LABEL_11:
      _InterlockedAnd(a2, a3 != 0 ? -3 : -520);
    }
    wil::details::unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockExclusive(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockExclusive(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>(&v13);
  }
}

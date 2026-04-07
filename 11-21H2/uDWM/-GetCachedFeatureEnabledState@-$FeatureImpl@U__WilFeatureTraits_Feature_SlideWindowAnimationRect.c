/*
 * XREFs of ?GetCachedFeatureEnabledState@?$FeatureImpl@U__WilFeatureTraits_Feature_SlideWindowAnimationRectCheck@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@XZ @ 0x1800D5FC0
 * Callers:
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_SlideWindowAnimationRectCheck@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x1800D86C8 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_SlideWindowAnimationRectCheck@@@details@w.c)
 * Callees:
 *     ?AcquireSRWLockExclusive@wil@@YA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@1@PEAU_RTL_SRWLOCK@@@Z @ 0x180041324 (-AcquireSRWLockExclusive@wil@@YA-AV-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL_.c)
 *     ??1?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@IEAA@XZ @ 0x18004135C (--1-$unique_storage@U-$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1-ReleaseSRWLockExclusive@.c)
 *     ?push_back@heap_buffer@details_abi@wil@@QEAA_NPEBX_K@Z @ 0x180041D6C (-push_back@heap_buffer@details_abi@wil@@QEAA_NPEBX_K@Z.c)
 *     ?EnsureSubscribedToFeatureConfigurationChangesImpl@EnabledStateManager@details@wil@@AEAAIXZ @ 0x18005C5EC (-EnsureSubscribedToFeatureConfigurationChangesImpl@EnabledStateManager@details@wil@@AEAAIXZ.c)
 *     ?GetCurrentFeatureEnabledState@?$FeatureImpl@U__WilFeatureTraits_Feature_SlideWindowAnimationRectCheck@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@PEAH@Z @ 0x1800D60D8 (-GetCurrentFeatureEnabledState@-$FeatureImpl@U__WilFeatureTraits_Feature_SlideWindowAnimationRec.c)
 */

signed __int32 *__fastcall wil::details::FeatureImpl<__WilFeatureTraits_Feature_SlideWindowAnimationRectCheck>::GetCachedFeatureEnabledState(
        volatile signed __int32 *a1,
        signed __int32 *a2)
{
  volatile signed __int32 v4; // eax
  int v5; // esi
  signed __int32 v6; // eax
  signed __int32 v7; // r9d
  signed __int32 v8; // edx
  int v9; // r8d
  int v11; // [rsp+20h] [rbp-28h] BYREF
  volatile signed __int32 *v12; // [rsp+28h] [rbp-20h]
  int v13; // [rsp+50h] [rbp+8h] BYREF
  int v14; // [rsp+58h] [rbp+10h] BYREF
  RTL_SRWLOCK *v15; // [rsp+60h] [rbp+18h] BYREF

  v4 = *a1;
  *a2 = *a1;
  if ( (v4 & 3) != 3 )
  {
    v5 = dword_180142E84;
    if ( !dword_180142E84 )
      v5 = wil::details::EnabledStateManager::EnsureSubscribedToFeatureConfigurationChangesImpl((wil::details::EnabledStateManager *)&wil::details::g_enabledStateManager);
    wil::details::FeatureImpl<__WilFeatureTraits_Feature_SlideWindowAnimationRectCheck>::GetCurrentFeatureEnabledState(
      a1,
      &v14,
      &v13);
    v6 = *a2;
    do
    {
      v7 = v6;
      *a2 = v6;
      v8 = v6;
      if ( v13 && (v6 & 1) == 0 )
      {
        v8 = v6 ^ ((unsigned __int16)v14 ^ (unsigned __int16)v6) & 0x278 | 1;
        *a2 = v8;
      }
      v9 = v6 & 2;
      if ( (v6 & 2) == 0 )
      {
        v8 = ((unsigned __int16)v14 ^ (unsigned __int16)v8) & 0x100 ^ v8 | 2;
        *a2 = v8;
      }
      v6 = _InterlockedCompareExchange(a1, v8, v6);
    }
    while ( v7 != v6 );
    if ( !v9 && wil::details::g_enabledStateManager )
    {
      wil::AcquireSRWLockExclusive(&v15, (RTL_SRWLOCK *)&qword_180142E70);
      if ( !v5
        || v5 != dword_180142E84
        || (v11 = 3, v12 = a1, !wil::details_abi::heap_buffer::push_back((void **)&xmmword_180142EB8, &v11, 0x10uLL)) )
      {
        _InterlockedAnd(a1, 0xFFFFFFFD);
      }
      wil::details::unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockExclusive(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockExclusive(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>(&v15);
    }
    if ( (*(_BYTE *)a2 & 1) == 0 )
      *a2 ^= ((unsigned __int16)v14 ^ (unsigned __int16)*a2) & 0x278;
  }
  return a2;
}

/*
 * XREFs of ?GetCachedFeatureEnabledState@?$FeatureImpl@U__WilFeatureTraits_Feature_TabThumbnailsRefreshedOnDemand@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@XZ @ 0x18004A4F0
 * Callers:
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_TabThumbnailsRefreshedOnDemand@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x18004B95C (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_TabThumbnailsRefreshedOnDemand@@@details@.c)
 * Callees:
 *     ?AcquireSRWLockExclusive@wil@@YA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@1@PEAU_RTL_SRWLOCK@@@Z @ 0x180041324 (-AcquireSRWLockExclusive@wil@@YA-AV-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL_.c)
 *     ??1?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@IEAA@XZ @ 0x18004135C (--1-$unique_storage@U-$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1-ReleaseSRWLockExclusive@.c)
 *     ?push_back@heap_buffer@details_abi@wil@@QEAA_NPEBX_K@Z @ 0x180041D6C (-push_back@heap_buffer@details_abi@wil@@QEAA_NPEBX_K@Z.c)
 *     ?GetCurrentFeatureEnabledState@?$FeatureImpl@U__WilFeatureTraits_Feature_TabThumbnailsRefreshedOnDemand@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@PEAH@Z @ 0x18004A60C (-GetCurrentFeatureEnabledState@-$FeatureImpl@U__WilFeatureTraits_Feature_TabThumbnailsRefreshedO.c)
 *     ?EnsureSubscribedToFeatureConfigurationChangesImpl@EnabledStateManager@details@wil@@AEAAIXZ @ 0x18005C5EC (-EnsureSubscribedToFeatureConfigurationChangesImpl@EnabledStateManager@details@wil@@AEAAIXZ.c)
 */

// Hidden C++ exception states: #wind=1
signed __int32 *__fastcall wil::details::FeatureImpl<__WilFeatureTraits_Feature_TabThumbnailsRefreshedOnDemand>::GetCachedFeatureEnabledState(
        volatile signed __int32 *a1,
        signed __int32 *a2)
{
  volatile signed __int32 v4; // eax
  unsigned int v6; // esi
  int v7; // r8d
  signed __int32 v8; // eax
  signed __int32 v9; // r9d
  signed __int32 v10; // edx
  int v11; // r8d
  int v12; // [rsp+20h] [rbp-10h] BYREF
  volatile signed __int32 *v13; // [rsp+28h] [rbp-8h]
  int v14; // [rsp+50h] [rbp+20h] BYREF
  int v15; // [rsp+58h] [rbp+28h] BYREF
  RTL_SRWLOCK *v16; // [rsp+60h] [rbp+30h] BYREF

  v4 = *a1;
  *a2 = *a1;
  if ( (v4 & 3) != 3 )
  {
    v6 = dword_180142E84;
    if ( !dword_180142E84 )
      v6 = wil::details::EnabledStateManager::EnsureSubscribedToFeatureConfigurationChangesImpl((wil::details::EnabledStateManager *)&wil::details::g_enabledStateManager);
    wil::details::FeatureImpl<__WilFeatureTraits_Feature_TabThumbnailsRefreshedOnDemand>::GetCurrentFeatureEnabledState(
      a1,
      &v15,
      &v14);
    v7 = v6 != 0 ? v14 : 0;
    v14 = v7;
    v8 = *a2;
    while ( 1 )
    {
      v9 = v8;
      *a2 = v8;
      v10 = v8;
      if ( v7 && (v8 & 1) == 0 )
      {
        v10 = v8 ^ ((unsigned __int16)v15 ^ (unsigned __int16)v8) & 0x278 | 1;
        *a2 = v10;
      }
      v11 = v8 & 2;
      if ( (v8 & 2) == 0 )
      {
        v10 = ((unsigned __int16)v15 ^ (unsigned __int16)v10) & 0x100 ^ v10 | 2;
        *a2 = v10;
      }
      v8 = _InterlockedCompareExchange(a1, v10, v8);
      if ( v9 == v8 )
        break;
      v7 = v14;
    }
    if ( !v11 && wil::details::g_enabledStateManager )
    {
      wil::AcquireSRWLockExclusive(&v16, (RTL_SRWLOCK *)&qword_180142E70);
      if ( !v6
        || v6 != dword_180142E84
        || (v12 = 0, v13 = a1, !wil::details_abi::heap_buffer::push_back((void **)&xmmword_180142EB8, &v12, 0x10uLL)) )
      {
        _InterlockedAnd(a1, 0xFFFFFDF8);
      }
      wil::details::unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockExclusive(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockExclusive(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>(&v16);
    }
    if ( (*(_BYTE *)a2 & 1) == 0 )
      *a2 ^= ((unsigned __int16)v15 ^ (unsigned __int16)*a2) & 0x278;
  }
  return a2;
}

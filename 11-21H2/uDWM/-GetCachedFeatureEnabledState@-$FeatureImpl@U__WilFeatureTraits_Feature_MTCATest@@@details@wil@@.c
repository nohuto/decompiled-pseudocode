/*
 * XREFs of ?GetCachedFeatureEnabledState@?$FeatureImpl@U__WilFeatureTraits_Feature_MTCATest@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@XZ @ 0x18003EC8C
 * Callers:
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_MTCATest@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x18003EA28 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_MTCATest@@@details@wil@@QEAAX_NW4Reportin.c)
 * Callees:
 *     ?GetCurrentFeatureEnabledState@?$FeatureImpl@U__WilFeatureTraits_Feature_MTCATest@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@PEAH@Z @ 0x18003EB1C (-GetCurrentFeatureEnabledState@-$FeatureImpl@U__WilFeatureTraits_Feature_MTCATest@@@details@wil@.c)
 *     ?AcquireSRWLockExclusive@wil@@YA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@1@PEAU_RTL_SRWLOCK@@@Z @ 0x180041324 (-AcquireSRWLockExclusive@wil@@YA-AV-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL_.c)
 *     ??1?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@IEAA@XZ @ 0x18004135C (--1-$unique_storage@U-$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1-ReleaseSRWLockExclusive@.c)
 *     ?push_back@heap_buffer@details_abi@wil@@QEAA_NPEBX_K@Z @ 0x180041D6C (-push_back@heap_buffer@details_abi@wil@@QEAA_NPEBX_K@Z.c)
 *     ?EnsureSubscribedToFeatureConfigurationChangesImpl@EnabledStateManager@details@wil@@AEAAIXZ @ 0x18005C5EC (-EnsureSubscribedToFeatureConfigurationChangesImpl@EnabledStateManager@details@wil@@AEAAIXZ.c)
 */

// Hidden C++ exception states: #wind=1
signed __int32 *__fastcall wil::details::FeatureImpl<__WilFeatureTraits_Feature_MTCATest>::GetCachedFeatureEnabledState(
        volatile signed __int32 *a1,
        signed __int32 *a2,
        __int64 a3,
        int *a4)
{
  volatile signed __int32 v6; // eax
  unsigned int v8; // esi
  signed __int32 v9; // eax
  signed __int32 v10; // r9d
  signed __int32 v11; // edx
  int v12; // r8d
  int v13; // [rsp+20h] [rbp-28h] BYREF
  volatile signed __int32 *v14; // [rsp+28h] [rbp-20h]
  int v15; // [rsp+50h] [rbp+8h] BYREF
  __int64 v16; // [rsp+58h] [rbp+10h] BYREF
  char v17; // [rsp+60h] [rbp+18h] BYREF

  v6 = *a1;
  *a2 = *a1;
  if ( (v6 & 3) != 3 )
  {
    v8 = dword_180142E84;
    if ( !dword_180142E84 )
      v8 = wil::details::EnabledStateManager::EnsureSubscribedToFeatureConfigurationChangesImpl((wil::details::EnabledStateManager *)&wil::details::g_enabledStateManager);
    wil::details::FeatureImpl<__WilFeatureTraits_Feature_MTCATest>::GetCurrentFeatureEnabledState(
      (__int64)a1,
      &v16,
      (enum FEATURE_CHANGE_TIME)&v15,
      a4);
    v9 = *a2;
    do
    {
      v10 = v9;
      *a2 = v9;
      v11 = v9;
      if ( v15 && (v9 & 1) == 0 )
      {
        v11 = v9 ^ ((unsigned __int16)v16 ^ (unsigned __int16)v9) & 0x278 | 1;
        *a2 = v11;
      }
      v12 = v9 & 2;
      if ( (v9 & 2) == 0 )
      {
        v11 = ((unsigned __int16)v16 ^ (unsigned __int16)v11) & 0x100 ^ v11 | 2;
        *a2 = v11;
      }
      v9 = _InterlockedCompareExchange(a1, v11, v9);
    }
    while ( v10 != v9 );
    if ( !v12 && wil::details::g_enabledStateManager )
    {
      wil::AcquireSRWLockExclusive(&v17, &qword_180142E70);
      if ( !v8
        || v8 != dword_180142E84
        || (v13 = 3,
            v14 = a1,
            !wil::details_abi::heap_buffer::push_back(
               (wil::details_abi::heap_buffer *)&xmmword_180142EB8,
               &v13,
               0x10uLL)) )
      {
        _InterlockedAnd(a1, 0xFFFFFFFD);
      }
      wil::details::unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockExclusive(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockExclusive(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>(&v17);
    }
    if ( (*(_BYTE *)a2 & 1) == 0 )
      *a2 ^= ((unsigned __int16)v16 ^ (unsigned __int16)*a2) & 0x278;
  }
  return a2;
}

/*
 * XREFs of ?GetCachedFeatureEnabledState@?$FeatureImpl@U__WilFeatureTraits_Feature_AutomaticBoundsToLocalSpace@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@XZ @ 0x1800F3364
 * Callers:
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_AutomaticBoundsToLocalSpace@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x1800F32DC (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_AutomaticBoundsToLocalSpace@@@details@wil.c)
 * Callees:
 *     ?EnsureSubscribedToFeatureConfigurationChangesImpl@EnabledStateManager@details@wil@@AEAAIXZ @ 0x180028470 (-EnsureSubscribedToFeatureConfigurationChangesImpl@EnabledStateManager@details@wil@@AEAAIXZ.c)
 *     ??1?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@IEAA@XZ @ 0x18002890C (--1-$unique_storage@U-$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1-ReleaseSRWLockExclusive@.c)
 *     ?push_back@heap_buffer@details_abi@wil@@QEAA_NPEBX_K@Z @ 0x1800294C4 (-push_back@heap_buffer@details_abi@wil@@QEAA_NPEBX_K@Z.c)
 *     ?GetCurrentFeatureEnabledState@?$FeatureImpl@U__WilFeatureTraits_Feature_AutomaticBoundsToLocalSpace@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@PEAH@Z @ 0x18002A1FC (-GetCurrentFeatureEnabledState@-$FeatureImpl@U__WilFeatureTraits_Feature_AutomaticBoundsToLocalS.c)
 */

signed __int32 *__fastcall wil::details::FeatureImpl<__WilFeatureTraits_Feature_AutomaticBoundsToLocalSpace>::GetCachedFeatureEnabledState(
        volatile signed __int32 *a1,
        signed __int32 *a2,
        __int64 a3,
        int *a4)
{
  volatile signed __int32 v4; // eax
  int v8; // esi
  signed __int32 v9; // eax
  int v10; // r8d
  signed __int32 v11; // r9d
  signed __int32 v12; // edx
  int v13; // r8d
  int v14; // [rsp+20h] [rbp-10h] BYREF
  volatile signed __int32 *v15; // [rsp+28h] [rbp-8h]
  int i; // [rsp+60h] [rbp+30h] BYREF
  __int64 v17; // [rsp+68h] [rbp+38h] BYREF
  RTL_SRWLOCK *v18; // [rsp+70h] [rbp+40h] BYREF

  v4 = *a1;
  *a2 = *a1;
  if ( (v4 & 3) != 3 )
  {
    v8 = dword_1803D3544;
    if ( !dword_1803D3544 )
      v8 = wil::details::EnabledStateManager::EnsureSubscribedToFeatureConfigurationChangesImpl((wil::details::EnabledStateManager *)&wil::details::g_enabledStateManager);
    wil::details::FeatureImpl<__WilFeatureTraits_Feature_AutomaticBoundsToLocalSpace>::GetCurrentFeatureEnabledState(
      (__int64)a1,
      &v17,
      (__int64)&i,
      a4);
    v9 = *a2;
    v10 = v8 != 0 ? i : 0;
    for ( i = v10; ; v10 = i )
    {
      *a2 = v9;
      v11 = v9;
      v12 = v9;
      if ( v10 && (v9 & 1) == 0 )
      {
        v12 = v9 ^ ((unsigned __int16)v17 ^ (unsigned __int16)v9) & 0x278 | 1;
        *a2 = v12;
      }
      v13 = v9 & 2;
      if ( (v9 & 2) == 0 )
      {
        v12 = ((unsigned __int16)v17 ^ (unsigned __int16)v12) & 0x100 ^ v12 | 2;
        *a2 = v12;
      }
      v9 = _InterlockedCompareExchange(a1, v12, v9);
      if ( v11 == v9 )
        break;
    }
    if ( !v13 && wil::details::g_enabledStateManager )
    {
      AcquireSRWLockExclusive(&SRWLock);
      v18 = &SRWLock;
      if ( !v8
        || v8 != dword_1803D3544
        || (v14 = 0, v15 = a1, !wil::details_abi::heap_buffer::push_back((void **)&xmmword_1803D3578, &v14, 0x10uLL)) )
      {
        _InterlockedAnd(a1, 0xFFFFFDF8);
      }
      wil::details::unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockExclusive(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockExclusive(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>(&v18);
    }
    if ( (*(_BYTE *)a2 & 1) == 0 )
      *a2 ^= ((unsigned __int16)v17 ^ (unsigned __int16)*a2) & 0x278;
  }
  return a2;
}

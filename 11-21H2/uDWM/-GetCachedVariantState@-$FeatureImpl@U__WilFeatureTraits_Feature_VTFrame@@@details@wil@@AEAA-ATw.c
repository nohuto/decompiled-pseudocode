/*
 * XREFs of ?GetCachedVariantState@?$FeatureImpl@U__WilFeatureTraits_Feature_VTFrame@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@XZ @ 0x18000E838
 * Callers:
 *     ?GetRadiusFromCornerStyle@CTopLevelWindow@@AEAAMXZ @ 0x1800067AC (-GetRadiusFromCornerStyle@CTopLevelWindow@@AEAAMXZ.c)
 *     ?__private_GetVariant@?$FeatureImpl@U__WilFeatureTraits_Feature_VTFrame@@@details@wil@@QEAA?AW4Variant_VTFrame@@W4VariantReportingKind@3@_N@Z @ 0x18000E7FC (-__private_GetVariant@-$FeatureImpl@U__WilFeatureTraits_Feature_VTFrame@@@details@wil@@QEAA-AW4V.c)
 *     ?UpdateWindowVisuals@CTopLevelWindow@@AEAAJXZ @ 0x180033080 (-UpdateWindowVisuals@CTopLevelWindow@@AEAAJXZ.c)
 *     ?EnsureBackgroundEffects@CAcrylicSheet@@AEAAJXZ @ 0x18009A1C4 (-EnsureBackgroundEffects@CAcrylicSheet@@AEAAJXZ.c)
 *     ?ReportVariantUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_VTFrame@@@details@wil@@QEAAX_NW4Variant_VTFrame@@W4VariantReportingKind@3@_K@Z @ 0x1800E5D80 (-ReportVariantUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_VTFrame@@@details@wil@@QEAAX_NW4Va.c)
 * Callees:
 *     ?AcquireSRWLockExclusive@wil@@YA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@1@PEAU_RTL_SRWLOCK@@@Z @ 0x180041324 (-AcquireSRWLockExclusive@wil@@YA-AV-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL_.c)
 *     ??1?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@IEAA@XZ @ 0x18004135C (--1-$unique_storage@U-$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1-ReleaseSRWLockExclusive@.c)
 *     ?push_back@heap_buffer@details_abi@wil@@QEAA_NPEBX_K@Z @ 0x180041D6C (-push_back@heap_buffer@details_abi@wil@@QEAA_NPEBX_K@Z.c)
 *     ?GetCurrentVariantState@?$FeatureImpl@U__WilFeatureTraits_Feature_VTFrame@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@PEAH@Z @ 0x180057FD4 (-GetCurrentVariantState@-$FeatureImpl@U__WilFeatureTraits_Feature_VTFrame@@@details@wil@@AEAA-AT.c)
 *     ?EnsureSubscribedToFeatureConfigurationChangesImpl@EnabledStateManager@details@wil@@AEAAIXZ @ 0x18005C5EC (-EnsureSubscribedToFeatureConfigurationChangesImpl@EnabledStateManager@details@wil@@AEAAIXZ.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall wil::details::FeatureImpl<__WilFeatureTraits_Feature_VTFrame>::GetCachedVariantState(
        volatile signed __int64 *a1,
        __int64 a2)
{
  volatile signed __int64 v4; // rax
  unsigned int v5; // esi
  signed __int64 v6; // rax
  unsigned int v7; // r10d
  unsigned __int16 v8; // cx
  int v9; // r9d
  unsigned int v10; // r8d
  signed __int64 v11; // rtt
  int v13; // [rsp+20h] [rbp-28h] BYREF
  volatile signed __int64 *v14; // [rsp+28h] [rbp-20h]
  int v15; // [rsp+50h] [rbp+8h] BYREF
  unsigned __int16 v16; // [rsp+58h] [rbp+10h] BYREF
  int v17; // [rsp+5Ch] [rbp+14h]
  char v18; // [rsp+60h] [rbp+18h] BYREF

  v4 = *a1;
  *(_QWORD *)a2 = *a1;
  if ( (v4 & 6) != 6 )
  {
    v15 = 0;
    v5 = dword_180142E84;
    if ( !dword_180142E84 )
      v5 = wil::details::EnabledStateManager::EnsureSubscribedToFeatureConfigurationChangesImpl((wil::details::EnabledStateManager *)&wil::details::g_enabledStateManager);
    wil::details::FeatureImpl<__WilFeatureTraits_Feature_VTFrame>::GetCurrentVariantState(a1, &v16, &v15);
    v6 = *(_QWORD *)a2;
    do
    {
      *(_QWORD *)a2 = v6;
      v7 = v6;
      v8 = v16;
      if ( (v6 & 4) == 0 )
      {
        v9 = v6 ^ (v16 ^ (unsigned __int16)v6) & 0xFC00;
        *(_DWORD *)(a2 + 4) = v17;
        v7 = ((v15 != 0 ? 4 : 0) | v9 & 0xFFFFFFFB) ^ (v8 ^ (unsigned __int16)(v9 | (v15 != 0 ? 4 : 0))) & 0x200;
        *(_DWORD *)a2 = v7;
      }
      v10 = ((unsigned int)v6 >> 1) & 1;
      if ( !v10 )
        *(_DWORD *)a2 = v7 ^ (v8 ^ (unsigned __int16)v7) & 0x100 | 2;
      v11 = v6;
      v6 = _InterlockedCompareExchange64(a1, *(_QWORD *)a2, v6);
    }
    while ( v11 != v6 );
    if ( !v10 && wil::details::g_enabledStateManager )
    {
      wil::AcquireSRWLockExclusive(&v18, &qword_180142E70);
      if ( !v5
        || v5 != dword_180142E84
        || (v13 = 1,
            v14 = a1,
            !wil::details_abi::heap_buffer::push_back(
               (wil::details_abi::heap_buffer *)&xmmword_180142EB8,
               &v13,
               0x10uLL)) )
      {
        _InterlockedAnd((volatile signed __int32 *)a1, 0xFFFFFFFD);
      }
      wil::details::unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockExclusive(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockExclusive(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>(&v18);
    }
  }
  return a2;
}

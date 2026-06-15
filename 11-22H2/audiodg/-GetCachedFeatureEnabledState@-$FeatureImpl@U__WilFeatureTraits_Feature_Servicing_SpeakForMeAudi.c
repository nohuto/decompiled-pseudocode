/*
 * XREFs of ?GetCachedFeatureEnabledState@?$FeatureImpl@U__WilFeatureTraits_Feature_Servicing_SpeakForMeAudioStreams@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@XZ @ 0x14002A6D4
 * Callers:
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_Servicing_SpeakForMeAudioStreams@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x14002AA80 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_Servicing_SpeakForMeAudioStreams@@@detail.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_Servicing_SpeakForMeAudioStreams@@@details@wil@@QEAA_NXZ @ 0x14002AC80 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_Servicing_SpeakForMeAudioStreams@.c)
 * Callees:
 *     ?GetCurrentFeatureEnabledState@?$FeatureImpl@U__WilFeatureTraits_Feature_Servicing_SpeakForMeAudioStreams@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@PEAH@Z @ 0x14002A7D8 (-GetCurrentFeatureEnabledState@-$FeatureImpl@U__WilFeatureTraits_Feature_Servicing_SpeakForMeAud.c)
 *     ??1?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@QEAA@XZ @ 0x140058538 (--1-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1-ReleaseS.c)
 *     ?EnsureSubscribedToFeatureConfigurationChanges@details@wil@@YAIXZ @ 0x140058CC0 (-EnsureSubscribedToFeatureConfigurationChanges@details@wil@@YAIXZ.c)
 *     ?lock_exclusive@srwlock@wil@@QEAA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@2@XZ @ 0x140059F44 (-lock_exclusive@srwlock@wil@@QEAA-AV-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL.c)
 *     ?push_back@heap_buffer@details_abi@wil@@QEAA_NPEBX_K@Z @ 0x140059F78 (-push_back@heap_buffer@details_abi@wil@@QEAA_NPEBX_K@Z.c)
 */

// Hidden C++ exception states: #wind=1
signed __int32 *__fastcall wil::details::FeatureImpl<__WilFeatureTraits_Feature_Servicing_SpeakForMeAudioStreams>::GetCachedFeatureEnabledState(
        wil::details *a1,
        signed __int32 *a2)
{
  signed __int32 v4; // eax
  unsigned int v5; // esi
  __int64 v6; // rcx
  signed __int32 i; // edx
  signed __int32 v8; // ecx
  signed __int32 v9; // eax
  int v11; // [rsp+20h] [rbp-28h] BYREF
  wil::details *v12; // [rsp+28h] [rbp-20h]
  int v13; // [rsp+50h] [rbp+8h] BYREF
  int v14; // [rsp+58h] [rbp+10h] BYREF
  char v15; // [rsp+60h] [rbp+18h] BYREF

  v4 = *(_DWORD *)a1;
  *a2 = *(_DWORD *)a1;
  if ( (v4 & 6) != 6 )
  {
    v5 = wil::details::EnsureSubscribedToFeatureConfigurationChanges(a1);
    wil::details::FeatureImpl<__WilFeatureTraits_Feature_Servicing_SpeakForMeAudioStreams>::GetCurrentFeatureEnabledState(
      v6,
      &v14,
      &v13);
    for ( i = *a2; ; i = v9 )
    {
      *a2 = i;
      v8 = i;
      if ( v13 && (i & 2) == 0 )
      {
        v8 = i ^ ((unsigned __int16)v14 ^ (unsigned __int16)i) & 0x9C1 | 2;
        *a2 = v8;
      }
      if ( (i & 4) == 0 )
      {
        v8 = ((unsigned __int16)v14 ^ (unsigned __int16)v8) & 0x400 ^ v8 | 4;
        *a2 = v8;
      }
      v9 = _InterlockedCompareExchange((volatile signed __int32 *)a1, v8, i);
      if ( i == v9 )
        break;
    }
    if ( (i & 4) == 0 && wil::details::g_enabledStateManager )
    {
      wil::srwlock::lock_exclusive(&qword_1400CF4F0, &v15);
      if ( !v5
        || v5 != dword_1400CF504
        || (v11 = 3,
            v12 = a1,
            !wil::details_abi::heap_buffer::push_back(
               (wil::details_abi::heap_buffer *)&xmmword_1400CF538,
               &v11,
               0x10uLL)) )
      {
        _InterlockedAnd((volatile signed __int32 *)a1, 0xFFFFFFFB);
      }
      wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockExclusive(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockExclusive(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>>(&v15);
    }
    if ( (*(_BYTE *)a2 & 2) == 0 )
      *a2 ^= ((unsigned __int16)v14 ^ (unsigned __int16)*a2) & 0x9C1;
  }
  return a2;
}

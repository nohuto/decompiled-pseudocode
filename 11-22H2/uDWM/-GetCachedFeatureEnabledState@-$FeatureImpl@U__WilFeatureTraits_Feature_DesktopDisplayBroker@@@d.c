/*
 * XREFs of ?GetCachedFeatureEnabledState@?$FeatureImpl@U__WilFeatureTraits_Feature_DesktopDisplayBroker@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@XZ @ 0x18004B95C
 * Callers:
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_DesktopDisplayBroker@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x18004B8D8 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_DesktopDisplayBroker@@@details@wil@@QEAAX.c)
 * Callees:
 *     ?push_back@heap_buffer@details_abi@wil@@QEAA_NPEBX_K@Z @ 0x180016A8C (-push_back@heap_buffer@details_abi@wil@@QEAA_NPEBX_K@Z.c)
 *     ?GetCurrentFeatureEnabledState@?$FeatureImpl@U__WilFeatureTraits_Feature_DesktopDisplayBroker@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@PEAH@Z @ 0x18004BA7C (-GetCurrentFeatureEnabledState@-$FeatureImpl@U__WilFeatureTraits_Feature_DesktopDisplayBroker@@@.c)
 *     ?EnsureSubscribedToFeatureConfigurationChangesImpl@EnabledStateManager@details@wil@@AEAAIXZ @ 0x18004CA9C (-EnsureSubscribedToFeatureConfigurationChangesImpl@EnabledStateManager@details@wil@@AEAAIXZ.c)
 */

// Hidden C++ exception states: #wind=1
signed __int32 *__fastcall wil::details::FeatureImpl<__WilFeatureTraits_Feature_DesktopDisplayBroker>::GetCachedFeatureEnabledState(
        volatile signed __int32 *a1,
        signed __int32 *a2)
{
  volatile signed __int32 v4; // eax
  unsigned int v6; // esi
  signed __int32 i; // edx
  signed __int32 v8; // ecx
  signed __int32 v9; // eax
  int v10; // [rsp+20h] [rbp-18h] BYREF
  volatile signed __int32 *v11; // [rsp+28h] [rbp-10h]
  int v12; // [rsp+40h] [rbp+8h] BYREF
  int v13; // [rsp+48h] [rbp+10h] BYREF

  v4 = *a1;
  *a2 = *a1;
  if ( (v4 & 6) != 6 )
  {
    v6 = dword_1801485FC;
    if ( !dword_1801485FC )
      v6 = wil::details::EnabledStateManager::EnsureSubscribedToFeatureConfigurationChangesImpl((wil::details::EnabledStateManager *)&wil::details::g_enabledStateManager);
    wil::details::FeatureImpl<__WilFeatureTraits_Feature_DesktopDisplayBroker>::GetCurrentFeatureEnabledState(
      a1,
      &v13,
      &v12);
    for ( i = *a2; ; i = v9 )
    {
      *a2 = i;
      v8 = i;
      if ( v12 && (i & 2) == 0 )
      {
        v8 = i ^ ((unsigned __int16)v13 ^ (unsigned __int16)i) & 0x9C1 | 2;
        *a2 = v8;
      }
      if ( (i & 4) == 0 )
      {
        v8 = ((unsigned __int16)v13 ^ (unsigned __int16)v8) & 0x400 ^ v8 | 4;
        *a2 = v8;
      }
      v9 = _InterlockedCompareExchange(a1, v8, i);
      if ( i == v9 )
        break;
    }
    if ( (i & 4) == 0 && wil::details::g_enabledStateManager )
    {
      AcquireSRWLockExclusive(&SRWLock);
      if ( !v6
        || v6 != dword_1801485FC
        || (v10 = 3, v11 = a1, !wil::details_abi::heap_buffer::push_back((void **)&xmmword_180148630, &v10, 0x10uLL)) )
      {
        _InterlockedAnd(a1, 0xFFFFFFFB);
      }
      ReleaseSRWLockExclusive(&SRWLock);
    }
    if ( (*(_BYTE *)a2 & 2) == 0 )
      *a2 ^= ((unsigned __int16)v13 ^ (unsigned __int16)*a2) & 0x9C1;
  }
  return a2;
}

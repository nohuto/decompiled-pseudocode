/*
 * XREFs of ?WindowSnapStateChanged@DiscoverabilityManager@implementation@Shell@Internal@Windows@winrt@@UEAAJPEAUIApplicationView@@W4WINDOW_SNAP_STATE@@@Z @ 0x1806FC390
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$test_watcher@U_tip_DiscoverabilityManagerTipTest@@@tip@@QEAA@XZ @ 0x180072254 (--1-$test_watcher@U_tip_DiscoverabilityManagerTipTest@@@tip@@QEAA@XZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131A24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_CastDiscoverability_Bugfix@@@details@wil@@QEAA_NXZ @ 0x18025D628 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_CastDiscoverability_Bugfix@@@deta.c)
 *     ??1?$test_data_control@U_tip_VDSlideAnimationPerfTest@@@tip@@QEAA@XZ @ 0x180276C00 (--1-$test_data_control@U_tip_VDSlideAnimationPerfTest@@@tip@@QEAA@XZ.c)
 *     ?complete@?$test_watcher@U_tip_DiscoverabilityManagerTipTest@@@tip@@QEAAXXZ @ 0x1802788A4 (-complete@-$test_watcher@U_tip_DiscoverabilityManagerTipTest@@@tip@@QEAAXXZ.c)
 *     ??B?$test_watcher@U_tip_RemoteSessionOnStateChangedTipTest@@@tip@@QEBA_NXZ @ 0x1806006B8 (--B-$test_watcher@U_tip_RemoteSessionOnStateChangedTipTest@@@tip@@QEBA_NXZ.c)
 *     ??C?$test_watcher@U_tip_VDSlideAnimationPerfTest@@@tip@@QEAA?AV?$test_data_control@U_tip_VDSlideAnimationPerfTest@@@1@XZ @ 0x1806006DC (--C-$test_watcher@U_tip_VDSlideAnimationPerfTest@@@tip@@QEAA-AV-$test_data_control@U_tip_VDSlide.c)
 *     ??$FallbackTriggerConditionMet@W4InvokeType@@@DiscoverablityManagerTelemetry@@SAX$$QEAW4InvokeType@@@Z @ 0x1806F744C (--$FallbackTriggerConditionMet@W4InvokeType@@@DiscoverablityManagerTelemetry@@SAX$$QEAW4InvokeTy.c)
 *     ??$start_and_watch_errors@V?$tip_test@U_tip_DiscoverabilityManagerTipTest@@@tip@@@tip@@YA?A_PXZ @ 0x1806F958C (--$start_and_watch_errors@V-$tip_test@U_tip_DiscoverabilityManagerTipTest@@@tip@@@tip@@YA-A_PXZ.c)
 *     ??C?$test_data_control@U_tip_DiscoverabilityManagerTipTest@@@tip@@QEBAPEAU_tip_DiscoverabilityManagerTipTest@@XZ @ 0x1806F9B6C (--C-$test_data_control@U_tip_DiscoverabilityManagerTipTest@@@tip@@QEBAPEAU_tip_DiscoverabilityMa.c)
 *     ?InitializeDeviceLoading@DiscoverabilityManager@implementation@Shell@Internal@Windows@winrt@@AEAAXXZ @ 0x1806FAFC4 (-InitializeDeviceLoading@DiscoverabilityManager@implementation@Shell@Internal@Windows@winrt@@AEA.c)
 *     ?IsMiracastSupported@DiscoverabilityManager@implementation@Shell@Internal@Windows@winrt@@AEAA_NXZ @ 0x1806FB448 (-IsMiracastSupported@DiscoverabilityManager@implementation@Shell@Internal@Windows@winrt@@AEAA_NX.c)
 *     ?LaunchActionCenterNotification@DiscoverabilityManager@implementation@Shell@Internal@Windows@winrt@@AEAAJXZ @ 0x1806FB5C8 (-LaunchActionCenterNotification@DiscoverabilityManager@implementation@Shell@Internal@Windows@win.c)
 *     ?SnappedChangedConditionMet@DiscoverablityManagerTelemetry@@SAXXZ @ 0x1806FC2E8 (-SnappedChangedConditionMet@DiscoverablityManagerTelemetry@@SAXXZ.c)
 */

__int64 __fastcall winrt::Windows::Internal::Shell::implementation::DiscoverabilityManager::WindowSnapStateChanged(
        __int64 a1,
        __int64 a2,
        int a3)
{
  winrt::Windows::Internal::Shell::implementation::DiscoverabilityManager *v5; // rcx
  _QWORD *v6; // rax
  _QWORD *v7; // rax
  int v8; // eax
  __int64 v9; // rcx
  unsigned int v10; // ebx
  _QWORD *v11; // rax
  __int64 v13[2]; // [rsp+20h] [rbp-50h] BYREF
  _BYTE v14[64]; // [rsp+30h] [rbp-40h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+8h]
  int v16; // [rsp+98h] [rbp+28h] BYREF

  tip::start_and_watch_errors<tip::tip_test<_tip_DiscoverabilityManagerTipTest>>((struct wil::details::IFailureCallback *)v14);
  if ( wil::details::FeatureImpl<__WilFeatureTraits_Feature_CastDiscoverability_Bugfix>::__private_IsEnabled(`wil::Feature<__WilFeatureTraits_Feature_CastDiscoverability_Bugfix>::GetImpl'::`2'::impl)
    && !winrt::Windows::Internal::Shell::implementation::DiscoverabilityManager::IsMiracastSupported(v5) )
  {
    if ( tip::test_watcher<_tip_RemoteSessionOnStateChangedTipTest>::operator bool((__int64)v14) )
    {
      v6 = tip::test_watcher<_tip_VDSlideAnimationPerfTest>::operator->((__int64)v14, v13);
      *(_BYTE *)(tip::test_data_control<_tip_DiscoverabilityManagerTipTest>::operator->(v6) + 13) = 1;
LABEL_13:
      tip::test_data_control<_tip_VDSlideAnimationPerfTest>::~test_data_control<_tip_VDSlideAnimationPerfTest>(v13);
      tip::test_watcher<_tip_DiscoverabilityManagerTipTest>::complete((__int64)v14);
    }
LABEL_14:
    v10 = 0;
    goto LABEL_15;
  }
  if ( a3 != 1 )
    goto LABEL_14;
  v7 = tip::test_watcher<_tip_VDSlideAnimationPerfTest>::operator->((__int64)v14, v13);
  *(_DWORD *)(tip::test_data_control<_tip_DiscoverabilityManagerTipTest>::operator->(v7) + 56) = 2;
  tip::test_data_control<_tip_VDSlideAnimationPerfTest>::~test_data_control<_tip_VDSlideAnimationPerfTest>(v13);
  winrt::Windows::Internal::Shell::implementation::DiscoverabilityManager::InitializeDeviceLoading((winrt::Windows::Internal::Shell::implementation::DiscoverabilityManager *)(a1 - 8));
  v8 = winrt::Windows::Internal::Shell::implementation::DiscoverabilityManager::LaunchActionCenterNotification((winrt::Windows::Internal::Shell::implementation::DiscoverabilityManager *)(a1 - 8));
  v10 = v8;
  if ( v8 >= 0 )
  {
    if ( *(_BYTE *)(a1 + 528) )
    {
      v16 = 2;
      DiscoverablityManagerTelemetry::FallbackTriggerConditionMet<enum InvokeType>(&v16);
    }
    else
    {
      DiscoverablityManagerTelemetry::SnappedChangedConditionMet(v9);
    }
    if ( !tip::test_watcher<_tip_RemoteSessionOnStateChangedTipTest>::operator bool((__int64)v14) )
      goto LABEL_14;
    v11 = tip::test_watcher<_tip_VDSlideAnimationPerfTest>::operator->((__int64)v14, v13);
    *(_BYTE *)(tip::test_data_control<_tip_DiscoverabilityManagerTipTest>::operator->(v11) + 14) = 1;
    goto LABEL_13;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0xBA,
    (int)"pcshell\\twinui\\discoverabilitymanager\\lib\\discoverabilitymanager.cpp",
    (const char *)(unsigned int)v8);
LABEL_15:
  tip::test_watcher<_tip_DiscoverabilityManagerTipTest>::~test_watcher<_tip_DiscoverabilityManagerTipTest>((__int64)v14);
  return v10;
}

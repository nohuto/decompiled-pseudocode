/*
 * XREFs of ?OnApplicationViewChanged@DiscoverabilityManager@implementation@Shell@Internal@Windows@winrt@@UEAAJPEAUIApplicationView@@W4APPLICATION_VIEW_CHANGE@@PEAUIUnknown@@@Z @ 0x1806FB770
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$test_watcher@U_tip_DiscoverabilityManagerTipTest@@@tip@@QEAA@XZ @ 0x180072254 (--1-$test_watcher@U_tip_DiscoverabilityManagerTipTest@@@tip@@QEAA@XZ.c)
 *     ??8Foundation@Windows@winrt@@YA_NAEBUIUnknown@012@0@Z @ 0x1800D5B1C (--8Foundation@Windows@winrt@@YA_NAEBUIUnknown@012@0@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131A24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_CastDiscoverability_Bugfix@@@details@wil@@QEAA_NXZ @ 0x18025D628 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_CastDiscoverability_Bugfix@@@deta.c)
 *     ??1?$test_data_control@U_tip_VDSlideAnimationPerfTest@@@tip@@QEAA@XZ @ 0x180276C00 (--1-$test_data_control@U_tip_VDSlideAnimationPerfTest@@@tip@@QEAA@XZ.c)
 *     ?complete@?$test_watcher@U_tip_DiscoverabilityManagerTipTest@@@tip@@QEAAXXZ @ 0x1802788A4 (-complete@-$test_watcher@U_tip_DiscoverabilityManagerTipTest@@@tip@@QEAAXXZ.c)
 *     ??B?$test_watcher@U_tip_RemoteSessionOnStateChangedTipTest@@@tip@@QEBA_NXZ @ 0x1806006B8 (--B-$test_watcher@U_tip_RemoteSessionOnStateChangedTipTest@@@tip@@QEBA_NXZ.c)
 *     ??C?$test_watcher@U_tip_VDSlideAnimationPerfTest@@@tip@@QEAA?AV?$test_data_control@U_tip_VDSlideAnimationPerfTest@@@1@XZ @ 0x1806006DC (--C-$test_watcher@U_tip_VDSlideAnimationPerfTest@@@tip@@QEAA-AV-$test_data_control@U_tip_VDSlide.c)
 *     ??$FallbackTriggerConditionMet@W4InvokeType@@@DiscoverablityManagerTelemetry@@SAX$$QEAW4InvokeType@@@Z @ 0x1806F744C (--$FallbackTriggerConditionMet@W4InvokeType@@@DiscoverablityManagerTelemetry@@SAX$$QEAW4InvokeTy.c)
 *     ??$_Emplace_back_internal@AEBI@?$deque@IV?$allocator@I@std@@@std@@AEAAXAEBI@Z @ 0x1806F7838 (--$_Emplace_back_internal@AEBI@-$deque@IV-$allocator@I@std@@@std@@AEAAXAEBI@Z.c)
 *     ??$start_and_watch_errors@V?$tip_test@U_tip_DiscoverabilityManagerTipTest@@@tip@@@tip@@YA?A_PXZ @ 0x1806F958C (--$start_and_watch_errors@V-$tip_test@U_tip_DiscoverabilityManagerTipTest@@@tip@@@tip@@YA-A_PXZ.c)
 *     ??C?$test_data_control@U_tip_DiscoverabilityManagerTipTest@@@tip@@QEBAPEAU_tip_DiscoverabilityManagerTipTest@@XZ @ 0x1806F9B6C (--C-$test_data_control@U_tip_DiscoverabilityManagerTipTest@@@tip@@QEBAPEAU_tip_DiscoverabilityMa.c)
 *     ?FocusChangedConditionMet@DiscoverablityManagerTelemetry@@SAXXZ @ 0x1806FA414 (-FocusChangedConditionMet@DiscoverablityManagerTelemetry@@SAXXZ.c)
 *     ?InitializeDeviceLoading@DiscoverabilityManager@implementation@Shell@Internal@Windows@winrt@@AEAAXXZ @ 0x1806FAFC4 (-InitializeDeviceLoading@DiscoverabilityManager@implementation@Shell@Internal@Windows@winrt@@AEA.c)
 *     ?IsMiracastSupported@DiscoverabilityManager@implementation@Shell@Internal@Windows@winrt@@AEAA_NXZ @ 0x1806FB448 (-IsMiracastSupported@DiscoverabilityManager@implementation@Shell@Internal@Windows@winrt@@AEAA_NX.c)
 *     ?LaunchActionCenterNotification@DiscoverabilityManager@implementation@Shell@Internal@Windows@winrt@@AEAAJXZ @ 0x1806FB5C8 (-LaunchActionCenterNotification@DiscoverabilityManager@implementation@Shell@Internal@Windows@win.c)
 */

__int64 __fastcall winrt::Windows::Internal::Shell::implementation::DiscoverabilityManager::OnApplicationViewChanged(
        __int64 a1,
        __int64 a2,
        int a3)
{
  winrt::Windows::Internal::Shell::implementation::DiscoverabilityManager *v5; // rcx
  unsigned int v6; // ebx
  _QWORD *v7; // rax
  bool v8; // al
  bool v9; // zf
  _QWORD *v10; // rax
  int v11; // eax
  __int64 v12; // rcx
  int v13; // r14d
  _QWORD *v14; // rax
  __int64 v16[2]; // [rsp+20h] [rbp-50h] BYREF
  _BYTE v17[64]; // [rsp+30h] [rbp-40h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+8h]

  tip::start_and_watch_errors<tip::tip_test<_tip_DiscoverabilityManagerTipTest>>((struct wil::details::IFailureCallback *)v17);
  v6 = 0;
  if ( !wil::details::FeatureImpl<__WilFeatureTraits_Feature_CastDiscoverability_Bugfix>::__private_IsEnabled(`wil::Feature<__WilFeatureTraits_Feature_CastDiscoverability_Bugfix>::GetImpl'::`2'::impl)
    || winrt::Windows::Internal::Shell::implementation::DiscoverabilityManager::IsMiracastSupported(v5) )
  {
    if ( a3 == 7 )
    {
      if ( (LODWORD(v16[0]) = (int)_Xtime_get_ticks() / 10000000,
            std::deque<unsigned int>::_Emplace_back_internal<unsigned int const &>(a1 + 472, (unsigned int *)v16),
            *(_QWORD *)(a1 + 504) >= 0xAuLL)
        && ((v8 = _o__difftime64(
                    LODWORD(v16[0]),
                    *(unsigned int *)(*(_QWORD *)(*(_QWORD *)(a1 + 480)
                                                + 8 * ((*(_QWORD *)(a1 + 496) >> 2) & (*(_QWORD *)(a1 + 488) - 1LL)))
                                    + 4 * (*(_QWORD *)(a1 + 496) & 3LL))) <= 300.0,
             v9 = *(_QWORD *)(a1 + 504) == 1LL,
             --*(_QWORD *)(a1 + 504),
             !v9)
          ? ++*(_QWORD *)(a1 + 496)
          : (*(_QWORD *)(a1 + 496) = 0LL),
            v8)
        || *(_BYTE *)(a1 + 536) )
      {
        v16[0] = 0LL;
        if ( winrt::Windows::Foundation::operator==(
               (void (__fastcall ****)(_QWORD, __int64 *, __int64 *))(a1 + 456),
               v16) )
        {
          winrt::Windows::Internal::Shell::implementation::DiscoverabilityManager::InitializeDeviceLoading((winrt::Windows::Internal::Shell::implementation::DiscoverabilityManager *)a1);
        }
        else
        {
          v10 = tip::test_watcher<_tip_VDSlideAnimationPerfTest>::operator->((__int64)v17, v16);
          *(_DWORD *)(tip::test_data_control<_tip_DiscoverabilityManagerTipTest>::operator->(v10) + 56) = 1;
          tip::test_data_control<_tip_VDSlideAnimationPerfTest>::~test_data_control<_tip_VDSlideAnimationPerfTest>(v16);
          v11 = winrt::Windows::Internal::Shell::implementation::DiscoverabilityManager::LaunchActionCenterNotification((winrt::Windows::Internal::Shell::implementation::DiscoverabilityManager *)a1);
          v13 = v11;
          if ( v11 >= 0 )
          {
            if ( *(_BYTE *)(a1 + 536) )
            {
              LODWORD(v16[0]) = 1;
              DiscoverablityManagerTelemetry::FallbackTriggerConditionMet<enum InvokeType>((int *)v16);
            }
            else
            {
              DiscoverablityManagerTelemetry::FocusChangedConditionMet(v12);
            }
            if ( tip::test_watcher<_tip_RemoteSessionOnStateChangedTipTest>::operator bool((__int64)v17) )
            {
              v14 = tip::test_watcher<_tip_VDSlideAnimationPerfTest>::operator->((__int64)v17, v16);
              *(_BYTE *)(tip::test_data_control<_tip_DiscoverabilityManagerTipTest>::operator->(v14) + 14) = 1;
              goto LABEL_21;
            }
          }
          else
          {
            wil::details::in1diag3::Return_Hr(
              retaddr,
              (void *)0xFE,
              (int)"pcshell\\twinui\\discoverabilitymanager\\lib\\discoverabilitymanager.cpp",
              (const char *)(unsigned int)v11);
            v6 = v13;
          }
        }
      }
    }
  }
  else if ( tip::test_watcher<_tip_RemoteSessionOnStateChangedTipTest>::operator bool((__int64)v17) )
  {
    v7 = tip::test_watcher<_tip_VDSlideAnimationPerfTest>::operator->((__int64)v17, v16);
    *(_BYTE *)(tip::test_data_control<_tip_DiscoverabilityManagerTipTest>::operator->(v7) + 13) = 1;
LABEL_21:
    tip::test_data_control<_tip_VDSlideAnimationPerfTest>::~test_data_control<_tip_VDSlideAnimationPerfTest>(v16);
    tip::test_watcher<_tip_DiscoverabilityManagerTipTest>::complete((__int64)v17);
  }
  tip::test_watcher<_tip_DiscoverabilityManagerTipTest>::~test_watcher<_tip_DiscoverabilityManagerTipTest>((__int64)v17);
  return v6;
}

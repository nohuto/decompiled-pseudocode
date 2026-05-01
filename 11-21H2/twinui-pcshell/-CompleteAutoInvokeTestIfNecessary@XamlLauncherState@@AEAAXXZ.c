/*
 * XREFs of ?CompleteAutoInvokeTestIfNecessary@XamlLauncherState@@AEAAXXZ @ 0x1800454F4
 * Callers:
 *     ?OnStartHidden@XamlLauncherState@@QEAAJPEAUIStartExperienceManager@Experience@Shell@Internal@Windows@@PEAUIInspectable@@@Z @ 0x180045350 (-OnStartHidden@XamlLauncherState@@QEAAJPEAUIStartExperienceManager@Experience@Shell@Internal@Win.c)
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_374c1b9b8407f7b8f2f8359d1bb33f54___::Run @ 0x180451AE0 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_374c1b9b8407f7b8f2f8359d1bb33f54___--Run.c)
 * Callees:
 *     ?reset@?$shared_ptr@UPeoplePaneViewInfo@@@std@@QEAAXXZ @ 0x180016F04 (-reset@-$shared_ptr@UPeoplePaneViewInfo@@@std@@QEAAXXZ.c)
 *     ?is_running@?$test_common_data@$00@details@tip@@QEAA_NXZ @ 0x180030534 (-is_running@-$test_common_data@$00@details@tip@@QEAA_NXZ.c)
 *     ?complete@?$tip_test@U_tip_DesktopTouchKeyboardShowOnTryShowV1@TouchKeyboardExperienceTip@@@tip@@QEAAXXZ @ 0x180045564 (-complete@-$tip_test@U_tip_DesktopTouchKeyboardShowOnTryShowV1@TouchKeyboardExperienceTip@@@tip@.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_StartAutoShowNewDevices@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x1800653A8 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_StartAutoShowNewDevices@@@details@wil@@QE.c)
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180097BDC (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ?end_update@?$test_common_data@$00@details@tip@@QEAAXXZ @ 0x180120A64 (-end_update@-$test_common_data@$00@details@tip@@QEAAXXZ.c)
 *     ?begin_update@?$test_common_data@$00@details@tip@@QEAA_NXZ @ 0x180120B54 (-begin_update@-$test_common_data@$00@details@tip@@QEAA_NXZ.c)
 *     ?ensure_data@?$tip_test@U_tip_StartMenuAutomaticInvokeDuringLogonTest@@@tip@@AEBAAEAV?$shared_ptr@V?$test_merged_data@U_tip_StartMenuAutomaticInvokeDuringLogonTest@@@details@tip@@@std@@XZ @ 0x18044C4E4 (-ensure_data@-$tip_test@U_tip_StartMenuAutomaticInvokeDuringLogonTest@@@tip@@AEBAAEAV-$shared_pt.c)
 *     ?now@steady_clock@chrono@std@@SA?AV?$time_point@Usteady_clock@chrono@std@@V?$duration@_JU?$ratio@$00$0DLJKMKAA@@std@@@23@@23@XZ @ 0x180452808 (-now@steady_clock@chrono@std@@SA-AV-$time_point@Usteady_clock@chrono@std@@V-$duration@_JU-$ratio.c)
 */

void __fastcall XamlLauncherState::CompleteAutoInvokeTestIfNecessary(XamlLauncherState *this, __int64 a2, __int64 a3)
{
  __int64 v4; // rcx
  __int64 v5; // r15
  __int64 *v6; // rax
  volatile signed __int32 *v7; // rdi
  __int64 v8; // rbx
  __int64 v9; // rax
  __int64 v10; // [rsp+20h] [rbp-28h] BYREF
  volatile signed __int32 *v11; // [rsp+28h] [rbp-20h]
  __int64 v12; // [rsp+58h] [rbp+10h] BYREF

  LOBYTE(a3) = 3;
  LOBYTE(a2) = 1;
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_StartAutoShowNewDevices>::ReportUsage(
    &`wil::Feature<__WilFeatureTraits_Feature_StartAutoShowNewDevices>::GetImpl'::`2'::impl,
    a2,
    a3);
  v4 = *((_QWORD *)this + 120);
  if ( v4 && tip::details::test_common_data<1>::is_running(v4 + 8) )
  {
    std::chrono::steady_clock::now(&v12);
    v5 = (v12 - *((_QWORD *)this + 124)) / 1000000;
    v6 = (__int64 *)tip::tip_test<_tip_StartMenuAutomaticInvokeDuringLogonTest>::ensure_data((char *)this + 960);
    v7 = (volatile signed __int32 *)v6[1];
    if ( v7 )
    {
      _InterlockedIncrement(v7 + 2);
      v7 = (volatile signed __int32 *)v6[1];
    }
    v8 = *v6;
    v10 = v8;
    v11 = v7;
    tip::details::test_common_data<1>::begin_update(v8 + 8);
    v9 = v8 + 160;
    if ( !v8 )
      v9 = 16LL;
    *(_QWORD *)v9 = v5;
    if ( v8 )
    {
      tip::details::test_common_data<1>::end_update(v8 + 8);
      std::shared_ptr<PeoplePaneViewInfo>::reset(&v10);
      v7 = v11;
    }
    if ( v7 )
      std::_Ref_count_base::_Decref((std::_Ref_count_base *)v7);
    tip::tip_test<TouchKeyboardExperienceTip::_tip_DesktopTouchKeyboardShowOnTryShowV1>::complete((char *)this + 960);
    *((GUID *)this + 61) = GUID_NULL;
  }
}

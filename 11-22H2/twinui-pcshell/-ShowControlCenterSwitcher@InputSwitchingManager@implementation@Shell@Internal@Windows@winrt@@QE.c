/*
 * XREFs of ?ShowControlCenterSwitcher@InputSwitchingManager@implementation@Shell@Internal@Windows@winrt@@QEAA_NXZ @ 0x1807003EC
 * Callers:
 *     ??R_lambda_711bfd1af15e27d1f27b55343e53885b_@@QEBA@XZ @ 0x1806FF72C (--R_lambda_711bfd1af15e27d1f27b55343e53885b_@@QEBA@XZ.c)
 * Callees:
 *     ?end_update@?$test_common_data@$00@details@tip@@QEAAXXZ @ 0x1800404E8 (-end_update@-$test_common_data@$00@details@tip@@QEAAXXZ.c)
 *     ?begin_update@?$test_common_data@$00@details@tip@@QEAA_NXZ @ 0x1800405EC (-begin_update@-$test_common_data@$00@details@tip@@QEAA_NXZ.c)
 *     ??0?$shared_ptr@V?$test_merged_data@U_tip_DeactivateRemoteDesktopTipTest@@@details@tip@@@std@@QEAA@AEBV01@@Z @ 0x18008D2F8 (--0-$shared_ptr@V-$test_merged_data@U_tip_DeactivateRemoteDesktopTipTest@@@details@tip@@@std@@QE.c)
 *     ?reset@?$shared_ptr@UPeoplePaneViewInfo@@@std@@QEAAXXZ @ 0x180098ACC (-reset@-$shared_ptr@UPeoplePaneViewInfo@@@std@@QEAAXXZ.c)
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x18009CE58 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131870 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?complete@?$tip_test@U_tip_NotificationCenterShowTest@@@tip@@QEAAXXZ @ 0x1802D442C (-complete@-$tip_test@U_tip_NotificationCenterShowTest@@@tip@@QEAAXXZ.c)
 *     ??$InputSwitchTrace@AEAY0M@$$CBG@InputSwitchingManagerTelemetry@@SAXAEAY0M@$$CBG@Z @ 0x1802EAD56 (--$InputSwitchTrace@AEAY0M@$$CBG@InputSwitchingManagerTelemetry@@SAXAEAY0M@$$CBG@Z.c)
 *     ?CanShowControlCenterSwitcher@InputSwitchingManager@implementation@Shell@Internal@Windows@winrt@@QEAA_NXZ @ 0x1802EB0D0 (-CanShowControlCenterSwitcher@InputSwitchingManager@implementation@Shell@Internal@Windows@winrt@.c)
 *     ??$InputSwitchTrace@AEAY0BB@$$CBG@InputSwitchingManagerTelemetry@@SAXAEAY0BB@$$CBG@Z @ 0x1806FE714 (--$InputSwitchTrace@AEAY0BB@$$CBG@InputSwitchingManagerTelemetry@@SAXAEAY0BB@$$CBG@Z.c)
 *     ??$InputSwitchTrace@AEAY0BD@$$CBG@InputSwitchingManagerTelemetry@@SAXAEAY0BD@$$CBG@Z @ 0x1806FE760 (--$InputSwitchTrace@AEAY0BD@$$CBG@InputSwitchingManagerTelemetry@@SAXAEAY0BD@$$CBG@Z.c)
 *     ?ensure_data@?$tip_test@U_tip_InputSwitcherShowTest@@@tip@@AEBAAEAV?$shared_ptr@V?$test_merged_data@U_tip_InputSwitcherShowTest@@@details@tip@@@std@@XZ @ 0x180700778 (-ensure_data@-$tip_test@U_tip_InputSwitcherShowTest@@@tip@@AEBAAEAV-$shared_ptr@V-$test_merged_d.c)
 */

char __fastcall winrt::Windows::Internal::Shell::implementation::InputSwitchingManager::ShowControlCenterSwitcher(
        winrt::Windows::Internal::Shell::implementation::InputSwitchingManager *this)
{
  _DWORD *v2; // rdx
  __int64 *v3; // rdi
  _QWORD *v4; // rax
  __int64 v5; // rbx
  __int64 v6; // rax
  int v7; // r14d
  _DWORD *v8; // rdx
  _DWORD *v9; // r15
  _QWORD *v10; // rax
  __int64 v11; // rbx
  __int64 v12; // rax
  _QWORD *v13; // rax
  __int64 v14; // rbx
  __int64 v15; // rax
  int v16; // eax
  __int64 v18; // [rsp+50h] [rbp-10h] BYREF
  std::_Ref_count_base *v19; // [rsp+58h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+18h]

  InputSwitchingManagerTelemetry::InputSwitchTrace<unsigned short const (&)[12]>((__int64)L"Trying Show");
  if ( !*((_QWORD *)this + 22) )
  {
    InputSwitchingManagerTelemetry::InputSwitchTrace<unsigned short const (&)[19]>((__int64)L"ControlCenter null");
    return 0;
  }
  if ( !winrt::Windows::Internal::Shell::implementation::InputSwitchingManager::CanShowControlCenterSwitcher(this) )
  {
    InputSwitchingManagerTelemetry::InputSwitchTrace<unsigned short const (&)[17]>((__int64)L"No ControlCenter");
    if ( *((_QWORD *)this + 21) )
    {
      v2 = *(_DWORD **)(*((_QWORD *)this + 18) + 8 * (*((_QWORD *)this + 20) & (*((_QWORD *)this + 19) - 1LL)));
      if ( !*v2 )
      {
        v3 = (__int64 *)(v2 + 4);
        v4 = (_QWORD *)tip::tip_test<_tip_InputSwitcherShowTest>::ensure_data(v2 + 4);
        std::shared_ptr<tip::details::test_merged_data<_tip_DeactivateRemoteDesktopTipTest>>::shared_ptr<tip::details::test_merged_data<_tip_DeactivateRemoteDesktopTipTest>>(
          &v18,
          v4);
        v5 = v18;
        tip::details::test_common_data<1>::begin_update(v18 + 8);
        v6 = v5 + 186;
        if ( !v5 )
          v6 = 10LL;
        *(_BYTE *)v6 = 0;
        if ( v5 )
        {
          tip::details::test_common_data<1>::end_update(v5 + 8);
          std::shared_ptr<PeoplePaneViewInfo>::reset(&v18);
        }
        if ( v19 )
          std::_Ref_count_base::_Decref(v19);
        tip::tip_test<_tip_NotificationCenterShowTest>::complete(v3);
      }
    }
    return 0;
  }
  v7 = *((_DWORD *)this + 63);
  if ( *((_QWORD *)this + 21) )
  {
    v8 = *(_DWORD **)(*((_QWORD *)this + 18) + 8 * (*((_QWORD *)this + 20) & (*((_QWORD *)this + 19) - 1LL)));
    v7 = v8[12];
    if ( !*v8 )
    {
      v9 = v8 + 4;
      v10 = (_QWORD *)tip::tip_test<_tip_InputSwitcherShowTest>::ensure_data(v8 + 4);
      std::shared_ptr<tip::details::test_merged_data<_tip_DeactivateRemoteDesktopTipTest>>::shared_ptr<tip::details::test_merged_data<_tip_DeactivateRemoteDesktopTipTest>>(
        &v18,
        v10);
      v11 = v18;
      tip::details::test_common_data<1>::begin_update(v18 + 8);
      v12 = v11 + 185;
      if ( !v11 )
        v12 = 9LL;
      *(_BYTE *)v12 = 1;
      if ( v11 )
      {
        tip::details::test_common_data<1>::end_update(v11 + 8);
        std::shared_ptr<PeoplePaneViewInfo>::reset(&v18);
      }
      if ( v19 )
        std::_Ref_count_base::_Decref(v19);
      v13 = (_QWORD *)tip::tip_test<_tip_InputSwitcherShowTest>::ensure_data(v9);
      std::shared_ptr<tip::details::test_merged_data<_tip_DeactivateRemoteDesktopTipTest>>::shared_ptr<tip::details::test_merged_data<_tip_DeactivateRemoteDesktopTipTest>>(
        &v18,
        v13);
      v14 = v18;
      tip::details::test_common_data<1>::begin_update(v18 + 8);
      v15 = v14 + 186;
      if ( !v14 )
        v15 = 10LL;
      *(_BYTE *)v15 = 1;
      if ( v14 )
      {
        tip::details::test_common_data<1>::end_update(v14 + 8);
        std::shared_ptr<PeoplePaneViewInfo>::reset(&v18);
      }
      if ( v19 )
        std::_Ref_count_base::_Decref(v19);
    }
  }
  v16 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, _QWORD, bool, _BYTE, _QWORD, _QWORD, _QWORD))(**((_QWORD **)this + 22) + 56LL))(
          *((_QWORD *)this + 22),
          *((_QWORD *)this + 34),
          0LL,
          0LL,
          v7 == 4,
          0,
          0LL,
          0LL,
          0LL);
  if ( v16 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x222,
      (int)"pcshell\\twinui\\inputswitchingmanager\\lib\\inputswitchingmanager.cpp",
      (const char *)(unsigned int)v16);
  InputSwitchingManagerTelemetry::InputSwitchTrace<unsigned short const (&)[12]>((__int64)L"Called Show");
  return 1;
}

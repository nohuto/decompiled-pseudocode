/*
 * XREFs of ?HideControlCenterSwitcher@InputSwitchingManager@implementation@Shell@Internal@Windows@winrt@@QEAA_NXZ @ 0x1806FFAFC
 * Callers:
 *     ??R_lambda_711bfd1af15e27d1f27b55343e53885b_@@QEBA@XZ @ 0x1806FF72C (--R_lambda_711bfd1af15e27d1f27b55343e53885b_@@QEBA@XZ.c)
 * Callees:
 *     ?end_update@?$test_common_data@$00@details@tip@@QEAAXXZ @ 0x1800404E8 (-end_update@-$test_common_data@$00@details@tip@@QEAAXXZ.c)
 *     ?begin_update@?$test_common_data@$00@details@tip@@QEAA_NXZ @ 0x1800405EC (-begin_update@-$test_common_data@$00@details@tip@@QEAA_NXZ.c)
 *     ??0?$shared_ptr@V?$test_merged_data@U_tip_DeactivateRemoteDesktopTipTest@@@details@tip@@@std@@QEAA@AEBV01@@Z @ 0x18008D2F8 (--0-$shared_ptr@V-$test_merged_data@U_tip_DeactivateRemoteDesktopTipTest@@@details@tip@@@std@@QE.c)
 *     ?reset@?$shared_ptr@UPeoplePaneViewInfo@@@std@@QEAAXXZ @ 0x180098ACC (-reset@-$shared_ptr@UPeoplePaneViewInfo@@@std@@QEAAXXZ.c)
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x18009CE58 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ??$Write@U?$_tlgWrapSz@G@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@G@@@Z @ 0x1800B49D8 (--$Write@U-$_tlgWrapSz@G@@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_E.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131870 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1801CF85C (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ??$InputSwitchTrace@AEAY0M@$$CBG@InputSwitchingManagerTelemetry@@SAXAEAY0M@$$CBG@Z @ 0x1802EAD56 (--$InputSwitchTrace@AEAY0M@$$CBG@InputSwitchingManagerTelemetry@@SAXAEAY0M@$$CBG@Z.c)
 *     ?ensure_data@?$tip_test@U_tip_InputSwitcherHideTest@@@tip@@AEBAAEAV?$shared_ptr@V?$test_merged_data@U_tip_InputSwitcherHideTest@@@details@tip@@@std@@XZ @ 0x1802EB356 (-ensure_data@-$tip_test@U_tip_InputSwitcherHideTest@@@tip@@AEBAAEAV-$shared_ptr@V-$test_merged_d.c)
 *     ?get@?$static_lazy@VInputSwitchingManagerTelemetry@@@details@wil@@QEAAPEAVInputSwitchingManagerTelemetry@@P6AXXZ@Z @ 0x1802EB490 (-get@-$static_lazy@VInputSwitchingManagerTelemetry@@@details@wil@@QEAAPEAVInputSwitchingManagerT.c)
 *     ??$InputSwitchTrace@AEAY0BD@$$CBG@InputSwitchingManagerTelemetry@@SAXAEAY0BD@$$CBG@Z @ 0x1806FE760 (--$InputSwitchTrace@AEAY0BD@$$CBG@InputSwitchingManagerTelemetry@@SAXAEAY0BD@$$CBG@Z.c)
 */

char __fastcall winrt::Windows::Internal::Shell::implementation::InputSwitchingManager::HideControlCenterSwitcher(
        winrt::Windows::Internal::Shell::implementation::InputSwitchingManager *this)
{
  __int64 v2; // rcx
  int v3; // eax
  __int64 v4; // rcx
  __int64 v5; // rdx
  _QWORD *v6; // r14
  _QWORD *v7; // rax
  __int64 v8; // rbx
  __int64 v9; // rax
  bool v10; // di
  _QWORD *v11; // rax
  __int64 v12; // rbx
  __int64 v13; // rax
  int v14; // eax
  _DWORD *v16; // rcx
  __int64 v17; // r9
  __int64 v18; // rcx
  _QWORD *v19; // rax
  __int64 v20; // rbx
  __int64 v21; // rax
  int v22; // [rsp+20h] [rbp-20h]
  __int64 v23; // [rsp+30h] [rbp-10h] BYREF
  std::_Ref_count_base *v24; // [rsp+38h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+18h]
  char v26; // [rsp+60h] [rbp+20h] BYREF
  __int64 v27; // [rsp+68h] [rbp+28h] BYREF

  InputSwitchingManagerTelemetry::InputSwitchTrace<unsigned short const (&)[12]>((__int64)L"Trying Hide");
  v2 = *((_QWORD *)this + 23);
  if ( !v2 || !*((_QWORD *)this + 22) )
  {
    if ( *((_QWORD *)this + 21) )
    {
      v18 = *(_QWORD *)(*((_QWORD *)this + 18) + 8 * (*((_QWORD *)this + 20) & (*((_QWORD *)this + 19) - 1LL)));
      if ( *(_DWORD *)v18 == 1 )
      {
        v19 = tip::tip_test<_tip_InputSwitcherHideTest>::ensure_data((_QWORD *)(v18 + 32));
        std::shared_ptr<tip::details::test_merged_data<_tip_DeactivateRemoteDesktopTipTest>>::shared_ptr<tip::details::test_merged_data<_tip_DeactivateRemoteDesktopTipTest>>(
          &v23,
          v19);
        v20 = v23;
        tip::details::test_common_data<1>::begin_update(v23 + 8);
        v21 = v20 + 186;
        if ( !v20 )
          v21 = 10LL;
        *(_BYTE *)v21 = 0;
        if ( v20 )
        {
          tip::details::test_common_data<1>::end_update(v20 + 8);
          std::shared_ptr<PeoplePaneViewInfo>::reset(&v23);
        }
        if ( v24 )
          std::_Ref_count_base::_Decref(v24);
      }
    }
    InputSwitchingManagerTelemetry::InputSwitchTrace<unsigned short const (&)[19]>((__int64)L"ControlCenter null");
    return 0;
  }
  v26 = 0;
  v3 = (*(__int64 (__fastcall **)(__int64, char *))(*(_QWORD *)v2 + 48LL))(v2, &v26);
  if ( v3 < 0 )
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      (void *)0x235,
      (int)"pcshell\\twinui\\inputswitchingmanager\\lib\\inputswitchingmanager.cpp",
      (const char *)(unsigned int)v3,
      v22);
  if ( *((_QWORD *)this + 21) )
  {
    v4 = *((_QWORD *)this + 20) & (*((_QWORD *)this + 19) - 1LL);
    v5 = *(_QWORD *)(*((_QWORD *)this + 18) + 8 * v4);
    if ( *(_DWORD *)v5 == 1 )
    {
      v6 = (_QWORD *)(v5 + 32);
      v7 = tip::tip_test<_tip_InputSwitcherHideTest>::ensure_data((_QWORD *)(v5 + 32));
      std::shared_ptr<tip::details::test_merged_data<_tip_DeactivateRemoteDesktopTipTest>>::shared_ptr<tip::details::test_merged_data<_tip_DeactivateRemoteDesktopTipTest>>(
        &v23,
        v7);
      v8 = v23;
      tip::details::test_common_data<1>::begin_update(v23 + 8);
      v9 = v8 + 186;
      if ( !v8 )
        v9 = 10LL;
      *(_BYTE *)v9 = 1;
      if ( v8 )
      {
        tip::details::test_common_data<1>::end_update(v8 + 8);
        std::shared_ptr<PeoplePaneViewInfo>::reset(&v23);
      }
      if ( v24 )
        std::_Ref_count_base::_Decref(v24);
      v10 = v26 != 0;
      v11 = tip::tip_test<_tip_InputSwitcherHideTest>::ensure_data(v6);
      std::shared_ptr<tip::details::test_merged_data<_tip_DeactivateRemoteDesktopTipTest>>::shared_ptr<tip::details::test_merged_data<_tip_DeactivateRemoteDesktopTipTest>>(
        &v23,
        v11);
      v12 = v23;
      tip::details::test_common_data<1>::begin_update(v23 + 8);
      v13 = v12 + 185;
      if ( !v12 )
        v13 = 9LL;
      *(_BYTE *)v13 = v10;
      if ( v12 )
      {
        tip::details::test_common_data<1>::end_update(v12 + 8);
        std::shared_ptr<PeoplePaneViewInfo>::reset(&v23);
      }
      v4 = (__int64)v24;
      if ( v24 )
        std::_Ref_count_base::_Decref(v24);
    }
  }
  if ( !v26 )
  {
    v16 = (_DWORD *)wil::details::static_lazy<InputSwitchingManagerTelemetry>::get(
                      v4,
                      (void (__cdecl *)())_lambda_e96d1fd5a37f2796eeb5af7e615ffb83_::_lambda_invoker_cdecl_)[1];
    if ( *v16 > 5u )
    {
      v27 = (__int64)L"Failed Hide - not visible";
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<unsigned short>>(
        (int)v16,
        (int)&dword_18087BE46,
        0,
        v17,
        (const WCHAR **)&v27);
    }
    return 0;
  }
  v14 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD))(**((_QWORD **)this + 22) + 64LL))(
          *((_QWORD *)this + 22),
          *((_QWORD *)this + 34),
          0LL);
  if ( v14 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x245,
      (int)"pcshell\\twinui\\inputswitchingmanager\\lib\\inputswitchingmanager.cpp",
      (const char *)(unsigned int)v14);
  InputSwitchingManagerTelemetry::InputSwitchTrace<unsigned short const (&)[12]>((__int64)L"Called Hide");
  return 1;
}

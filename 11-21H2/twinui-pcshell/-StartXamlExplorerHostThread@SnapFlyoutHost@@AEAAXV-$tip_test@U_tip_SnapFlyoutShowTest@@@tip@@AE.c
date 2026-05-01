/*
 * XREFs of ?StartXamlExplorerHostThread@SnapFlyoutHost@@AEAAXV?$tip_test@U_tip_SnapFlyoutShowTest@@@tip@@AEBV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@@Z @ 0x1805B0DF0
 * Callers:
 *     ?InternalShow@SnapFlyoutHost@@AEAAXPEAUHWND__@@W4ShowFlags@1@AEBV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@@Z @ 0x1805AF4BC (-InternalShow@SnapFlyoutHost@@AEAAXPEAUHWND__@@W4ShowFlags@1@AEBV-$unique_any_t@V-$unique_storag.c)
 * Callees:
 *     ??0?$shared_ptr@V?$test_merged_data@U_tip_SmartFillTest@@@details@tip@@@std@@QEAA@AEBV01@@Z @ 0x180016DE4 (--0-$shared_ptr@V-$test_merged_data@U_tip_SmartFillTest@@@details@tip@@@std@@QEAA@AEBV01@@Z.c)
 *     ?reset@?$shared_ptr@UPeoplePaneViewInfo@@@std@@QEAAXXZ @ 0x180016F04 (-reset@-$shared_ptr@UPeoplePaneViewInfo@@@std@@QEAAXXZ.c)
 *     _tlgWriteTransfer_EventWriteTransfer @ 0x180090C50 (_tlgWriteTransfer_EventWriteTransfer.c)
 *     ?get@?$static_lazy@VWindowManagementLogging@@@details@wil@@QEAAPEAVWindowManagementLogging@@P6AXXZ@Z @ 0x180091D44 (-get@-$static_lazy@VWindowManagementLogging@@@details@wil@@QEAAPEAVWindowManagementLogging@@P6AX.c)
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180097BDC (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ?reset@?$unique_storage@U?$handle_null_resource_policy@P6AHPEAX@Z$1?CloseHandle@@YAH0@Z@details@wil@@@details@wil@@QEAAXPEAX@Z @ 0x1800C8D08 (-reset@-$unique_storage@U-$handle_null_resource_policy@P6AHPEAX@Z$1-CloseHandle@@YAH0@Z@details@.c)
 *     ?end_update@?$test_common_data@$00@details@tip@@QEAAXXZ @ 0x180120A64 (-end_update@-$test_common_data@$00@details@tip@@QEAAXXZ.c)
 *     ?begin_update@?$test_common_data@$00@details@tip@@QEAA_NXZ @ 0x180120B54 (-begin_update@-$test_common_data@$00@details@tip@@QEAA_NXZ.c)
 *     __security_check_cookie @ 0x1801881F0 (__security_check_cookie.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x18018F71C (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?throw_last_error@winrt@@YAXXZ @ 0x18033DC7C (-throw_last_error@winrt@@YAXXZ.c)
 *     ?ensure_data@?$tip_test@U_tip_SnapFlyoutShowTest@@@tip@@AEBAAEAV?$shared_ptr@V?$test_merged_data@U_tip_SnapFlyoutShowTest@@@details@tip@@@std@@XZ @ 0x1805B1964 (-ensure_data@-$tip_test@U_tip_SnapFlyoutShowTest@@@tip@@AEBAAEAV-$shared_ptr@V-$test_merged_data.c)
 */

// Hidden C++ exception states: #wind=2
void __fastcall SnapFlyoutHost::StartXamlExplorerHostThread(__int64 a1, __int64 *a2)
{
  __int64 *v2; // rsi
  _DWORD *v4; // rcx
  const char *v5; // r9
  _QWORD *v6; // rax
  __int64 v7; // rbx
  __int64 v8; // rax
  signed __int64 v9; // rax
  signed __int64 v10; // rtt
  BOOL v11; // eax
  winrt *v12; // rcx
  const char *v13; // r9
  std::_Ref_count_base *v14; // rcx
  _QWORD *v15; // rax
  __int64 v16; // rbx
  __int64 v17; // rax
  int v18; // [rsp+30h] [rbp-88h] BYREF
  __int64 *v19; // [rsp+38h] [rbp-80h]
  __int64 v20; // [rsp+40h] [rbp-78h] BYREF
  std::_Ref_count_base *v21; // [rsp+48h] [rbp-70h]
  void *pData; // [rsp+50h] [rbp-68h]
  HANDLE pHandle; // [rsp+58h] [rbp-60h] BYREF
  __int64 v24; // [rsp+60h] [rbp-58h]
  struct _EVENT_DATA_DESCRIPTOR v25; // [rsp+68h] [rbp-50h] BYREF
  int *v26; // [rsp+88h] [rbp-30h]
  int v27; // [rsp+90h] [rbp-28h]
  int v28; // [rsp+94h] [rbp-24h]
  wil::details::in1diag3 *retaddr; // [rsp+B8h] [rbp+0h]

  v2 = a2;
  v24 = a1;
  v19 = a2;
  v4 = (_DWORD *)wil::details::static_lazy<WindowManagementLogging>::get(
                   a1,
                   _lambda_f79d5b8d2c405e687024ad1f66b4c06d_::_lambda_invoker_cdecl_)[1];
  if ( *v4 > 5u )
  {
    v18 = *(_DWORD *)(a1 + 136);
    v26 = &v18;
    v27 = 4;
    v28 = 0;
    tlgWriteTransfer_EventWriteTransfer((__int64)v4, (unsigned __int8 *)dword_1806CB418, 0LL, 0LL, 3u, &v25);
  }
  if ( *(_DWORD *)(a1 + 136) )
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      (void *)0x15C,
      (int)"pcshell\\twinui\\snapcomponent\\lib\\snapflyouthost.cpp",
      v5);
  *(_DWORD *)(a1 + 136) = 1;
  v6 = (_QWORD *)tip::tip_test<_tip_SnapFlyoutShowTest>::ensure_data(v2);
  std::shared_ptr<tip::details::test_merged_data<_tip_SmartFillTest>>::shared_ptr<tip::details::test_merged_data<_tip_SmartFillTest>>(
    &v20,
    v6);
  v7 = v20;
  tip::details::test_common_data<1>::begin_update(v20 + 8);
  v8 = v7 + 159;
  if ( !v7 )
    v8 = 15LL;
  *(_BYTE *)v8 = 1;
  if ( v7 )
  {
    tip::details::test_common_data<1>::end_update(v7 + 8);
    std::shared_ptr<PeoplePaneViewInfo>::reset(&v20);
  }
  if ( v21 )
    std::_Ref_count_base::_Decref(v21);
  pHandle = 0LL;
  pData = 0LL;
  if ( a1 )
  {
    pData = (void *)a1;
    v9 = *(_QWORD *)(a1 + 8);
    while ( v9 >= 0 )
    {
      v10 = v9;
      v9 = _InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 8), v9 + 1, v9);
      if ( v10 == v9 )
        goto LABEL_17;
    }
    _InterlockedExchangeAdd((volatile signed __int32 *)(2 * v9 + 24), 1u);
  }
LABEL_17:
  v11 = SHCreateThreadWithHandle(
          (LPTHREAD_START_ROUTINE)lambda_bf52ea5dd6a3ace185866e96e136c162_::_lambda_invoker_cdecl_,
          pData,
          0xC000u,
          (LPTHREAD_START_ROUTINE)lambda_65c1233ad5fff8c312cfb0c5e5e2c0df_::_lambda_invoker_cdecl_,
          &pHandle);
  try
  {
    if ( !v11 )
      winrt::throw_last_error(v12);
    wil::details::unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>::reset(
      (void **)(a1 + 88),
      pHandle);
  }
  catch ( ... )
  {
    wil::details::in1diag3::Log_CaughtException(
      retaddr,
      (void *)0x17A,
      (int)"pcshell\\twinui\\snapcomponent\\lib\\snapflyouthost.cpp",
      v13);
    *(_DWORD *)(v24 + 136) = 0;
    v15 = (_QWORD *)tip::tip_test<_tip_SnapFlyoutShowTest>::ensure_data(v19);
    std::shared_ptr<tip::details::test_merged_data<_tip_SmartFillTest>>::shared_ptr<tip::details::test_merged_data<_tip_SmartFillTest>>(
      &v20,
      v15);
    v16 = v20;
    tip::details::test_common_data<1>::begin_update(v20 + 8);
    if ( v16 )
      v17 = v16 + 144;
    else
      v17 = 0LL;
    *(_BYTE *)(v17 + 12) = 1;
    if ( v16 )
    {
      tip::details::test_common_data<1>::end_update(v16 + 8);
      std::shared_ptr<PeoplePaneViewInfo>::reset(&v20);
    }
    if ( v21 )
      std::_Ref_count_base::_Decref(v21);
    tip::tip_test<TouchKeyboardExperienceTip::_tip_DesktopTouchKeyboardShowOnTryShowV1>::complete(v19);
    v2 = v19;
  }
  v14 = (std::_Ref_count_base *)v2[1];
  if ( v14 )
    std::_Ref_count_base::_Decref(v14);
}

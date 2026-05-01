/*
 * XREFs of _lambda_10bf9b125e13aae7bcc0e2adfb9217c3_::operator() @ 0x1805B860C
 * Callers:
 *     wil::details::lambda_call__lambda_10bf9b125e13aae7bcc0e2adfb9217c3___::_lambda_call__lambda_10bf9b125e13aae7bcc0e2adfb9217c3___ @ 0x1805B8324 (wil--details--lambda_call__lambda_10bf9b125e13aae7bcc0e2adfb9217c3___--_lambda_call__lambda_10bf.c)
 *     ?Initialize@SnapFlyoutInstance@implementation@SnapComponent@Shell@Internal@Windows@winrt@@QEAA_NIPEAUHWND__@@_N1AEBUIInspectable@Foundation@67@@Z @ 0x1805B8EB4 (-Initialize@SnapFlyoutInstance@implementation@SnapComponent@Shell@Internal@Windows@winrt@@QEAA_N.c)
 * Callees:
 *     ??0?$shared_ptr@V?$test_merged_data@U_tip_SmartFillTest@@@details@tip@@@std@@QEAA@AEBV01@@Z @ 0x180016DE4 (--0-$shared_ptr@V-$test_merged_data@U_tip_SmartFillTest@@@details@tip@@@std@@QEAA@AEBV01@@Z.c)
 *     ?reset@?$shared_ptr@UPeoplePaneViewInfo@@@std@@QEAAXXZ @ 0x180016F04 (-reset@-$shared_ptr@UPeoplePaneViewInfo@@@std@@QEAAXXZ.c)
 *     _tlgWriteTransfer_EventWriteTransfer @ 0x180090C50 (_tlgWriteTransfer_EventWriteTransfer.c)
 *     ?get@?$static_lazy@VWindowManagementLogging@@@details@wil@@QEAAPEAVWindowManagementLogging@@P6AXXZ@Z @ 0x180091D44 (-get@-$static_lazy@VWindowManagementLogging@@@details@wil@@QEAAPEAVWindowManagementLogging@@P6AX.c)
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180097BDC (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ?complete@?$test_common_data@$00@details@tip@@QEAAXXZ @ 0x18011FB18 (-complete@-$test_common_data@$00@details@tip@@QEAAXXZ.c)
 *     ?end_update@?$test_common_data@$00@details@tip@@QEAAXXZ @ 0x180120A64 (-end_update@-$test_common_data@$00@details@tip@@QEAAXXZ.c)
 *     ?begin_update@?$test_common_data@$00@details@tip@@QEAA_NXZ @ 0x180120B54 (-begin_update@-$test_common_data@$00@details@tip@@QEAA_NXZ.c)
 *     __security_check_cookie @ 0x1801881F0 (__security_check_cookie.c)
 */

void __fastcall lambda_10bf9b125e13aae7bcc0e2adfb9217c3_::operator()(__int64 *a1)
{
  __int64 v1; // rbx
  _DWORD *v3; // rcx
  int v4; // eax
  __int64 v5; // rdi
  __int64 v6; // rbx
  __int64 v7; // rax
  int v8; // [rsp+30h] [rbp-58h] BYREF
  __int64 v9; // [rsp+38h] [rbp-50h] BYREF
  std::_Ref_count_base *v10; // [rsp+40h] [rbp-48h]
  struct _EVENT_DATA_DESCRIPTOR v11; // [rsp+48h] [rbp-40h] BYREF
  int *v12; // [rsp+68h] [rbp-20h]
  int v13; // [rsp+70h] [rbp-18h]
  int v14; // [rsp+74h] [rbp-14h]

  v1 = *a1;
  v3 = (_DWORD *)wil::details::static_lazy<WindowManagementLogging>::get(
                   (__int64)a1,
                   _lambda_f79d5b8d2c405e687024ad1f66b4c06d_::_lambda_invoker_cdecl_)[1];
  if ( *v3 > 5u )
  {
    v4 = *(_DWORD *)(v1 + 280);
    v14 = 0;
    v8 = v4;
    v13 = 4;
    v12 = &v8;
    tlgWriteTransfer_EventWriteTransfer((__int64)v3, (unsigned __int8 *)dword_1806CB82A, 0LL, 0LL, 3u, &v11);
  }
  v5 = a1[1];
  std::shared_ptr<tip::details::test_merged_data<_tip_SmartFillTest>>::shared_ptr<tip::details::test_merged_data<_tip_SmartFillTest>>(
    &v9,
    (_QWORD *)(v5 + 48));
  v6 = v9;
  tip::details::test_common_data<1>::begin_update(v9 + 8);
  v7 = v6 + 155;
  if ( !v6 )
    v7 = 11LL;
  *(_BYTE *)v7 = 1;
  if ( v6 )
  {
    tip::details::test_common_data<1>::end_update(v6 + 8);
    std::shared_ptr<PeoplePaneViewInfo>::reset(&v9);
  }
  if ( v10 )
    std::_Ref_count_base::_Decref(v10);
  tip::details::test_common_data<1>::complete(*(_QWORD *)(v5 + 48) + 8LL);
}

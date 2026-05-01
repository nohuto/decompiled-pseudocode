/*
 * XREFs of _lambda_4be18ebf708cd778800d3ace51194f58_::operator() @ 0x18022C428
 * Callers:
 *     wil::details::lambda_call__lambda_4be18ebf708cd778800d3ace51194f58___::_lambda_call__lambda_4be18ebf708cd778800d3ace51194f58___ @ 0x18022C3E0 (wil--details--lambda_call__lambda_4be18ebf708cd778800d3ace51194f58___--_lambda_call__lambda_4be1.c)
 * Callees:
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1801CF85C (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??0?$test_data_control@V?$merged_data@U_tip_SnapFlyoutShowTest@@U1@@details@tip2@@@tip2@@IEAA@AEBV?$com_ptr_t@V?$merged_data@U_tip_SnapFlyoutShowTest@@U1@@details@tip2@@Uerr_returncode_policy@wil@@@wil@@@Z @ 0x180225814 (--0-$test_data_control@V-$merged_data@U_tip_SnapFlyoutShowTest@@U1@@details@tip2@@@tip2@@IEAA@AE.c)
 *     ??1?$test_data_control@V?$merged_data@U_tip_SnapFlyoutShowTest@@U1@@details@tip2@@@tip2@@QEAA@XZ @ 0x1802259C8 (--1-$test_data_control@V-$merged_data@U_tip_SnapFlyoutShowTest@@U1@@details@tip2@@@tip2@@QEAA@XZ.c)
 *     ??$verify_hresult@J@wil@@YAJJ@Z @ 0x18038CA80 (--$verify_hresult@J@wil@@YAJJ@Z.c)
 *     ??$SnapFlyoutInstance_LoadSnapBarControlFailed@AEAI@SnapFlyoutTelemetry@@SAXAEAI@Z @ 0x18068D36C (--$SnapFlyoutInstance_LoadSnapBarControlFailed@AEAI@SnapFlyoutTelemetry@@SAXAEAI@Z.c)
 *     ??$SnapFlyoutInstance_LoadSnapLayoutPickerFailed@AEAI@SnapFlyoutTelemetry@@SAXAEAI@Z @ 0x18068D3F4 (--$SnapFlyoutInstance_LoadSnapLayoutPickerFailed@AEAI@SnapFlyoutTelemetry@@SAXAEAI@Z.c)
 */

__int64 __fastcall lambda_4be18ebf708cd778800d3ace51194f58_::operator()(int **a1)
{
  int v2; // ecx
  unsigned int v4; // eax
  int v5; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  _BYTE *v7; // [rsp+30h] [rbp+8h] BYREF

  v2 = **a1;
  if ( v2 == 1 )
  {
    SnapFlyoutTelemetry::SnapFlyoutInstance_LoadSnapLayoutPickerFailed<unsigned int &>(a1[1] + 80);
  }
  else
  {
    if ( v2 != 2 )
    {
      v4 = wil::verify_hresult<long>(2147942487LL);
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        (void *)0x3C,
        (int)"pcshell\\twinui\\snapcomponent\\lib\\snapflyoutinstance.cpp",
        (const char *)v4,
        v5);
    }
    SnapFlyoutTelemetry::SnapFlyoutInstance_LoadSnapBarControlFailed<unsigned int &>(a1[1] + 80);
  }
  tip2::test_data_control<tip2::details::merged_data<_tip_SnapFlyoutShowTest,_tip_SnapFlyoutShowTest>>::test_data_control<tip2::details::merged_data<_tip_SnapFlyoutShowTest,_tip_SnapFlyoutShowTest>>(
    (__int64 *)&v7,
    (__int64 *)a1[2] + 6);
  v7[269] = 1;
  tip2::test_data_control<tip2::details::merged_data<_tip_SnapFlyoutShowTest,_tip_SnapFlyoutShowTest>>::~test_data_control<tip2::details::merged_data<_tip_SnapFlyoutShowTest,_tip_SnapFlyoutShowTest>>((void **)&v7);
  return tip2::details::shared_data<1,0,0>::complete_without_lock(*((_QWORD *)a1[2] + 6) + 8LL);
}

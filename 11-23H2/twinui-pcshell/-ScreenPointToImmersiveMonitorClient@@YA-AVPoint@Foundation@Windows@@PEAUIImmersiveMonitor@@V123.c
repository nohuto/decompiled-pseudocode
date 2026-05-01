/*
 * XREFs of ?ScreenPointToImmersiveMonitorClient@@YA?AVPoint@Foundation@Windows@@PEAUIImmersiveMonitor@@V123@@Z @ 0x18006D3E8
 * Callers:
 *     _lambda_5b1893e84c025059ea9350e935de1321_::operator()_winrt::WindowsUdk::UI::Shell::DisplayMonitorInfoCollection_const_&_winrt::WindowsUdk::UI::Shell::DisplayMonitorInfoChangedEventArgs_const_&_ @ 0x18028CE68 (_lambda_5b1893e84c025059ea9350e935de1321_--operator()_winrt--WindowsUdk--UI--Shell--DisplayMonit.c)
 *     TaskViewFrame::UpdateWorkAreaAsync$_ResumeCoro$1 @ 0x18028D880 (TaskViewFrame--UpdateWorkAreaAsync$_ResumeCoro$1.c)
 * Callees:
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131870 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

float *__fastcall ScreenPointToImmersiveMonitorClient(float *a1, __int64 *a2, __int64 a3)
{
  __int64 v3; // rax
  int v5; // eax
  int v6; // eax
  float v7; // xmm2_4
  float *result; // rax
  float v9; // xmm2_4
  float v10; // xmm1_4
  int v11; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  int v13; // [rsp+30h] [rbp+8h] BYREF
  char v14; // [rsp+38h] [rbp+10h] BYREF
  __int64 v15; // [rsp+48h] [rbp+20h]

  v3 = *a2;
  v15 = a3;
  v5 = (*(__int64 (__fastcall **)(__int64 *, char *, int *))(v3 + 112))(a2, &v14, &v13);
  if ( v5 < 0 )
  {
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0xD2,
      (unsigned int)"pcshell\\twinui\\xamlmultitaskingview\\lib\\utils.h",
      (const char *)(unsigned int)v5,
      v11);
    v6 = 96;
  }
  else
  {
    v6 = v13;
  }
  v7 = (float)v6;
  result = a1;
  v9 = v7 / 96.0;
  v10 = *((float *)&v15 + 1) / v9;
  *a1 = *(float *)&v15 / v9;
  a1[1] = v10;
  return result;
}

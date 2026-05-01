/*
 * XREFs of ?IsBottomGesture@TouchEdgeGestureProcessor@@AEBA_NAEBUPoint@Foundation@Windows@winrt@@@Z @ 0x180655074
 * Callers:
 *     ?ReportViewDragGesture@TouchEdgeGestureProcessor@@QEAAXAEBW4ShellView@Shell@UI@WindowsUdk@winrt@@AEBUShellViewGestureReportedArgs@3456@@Z @ 0x180655930 (-ReportViewDragGesture@TouchEdgeGestureProcessor@@QEAAXAEBW4ShellView@Shell@UI@WindowsUdk@winrt@.c)
 *     ?UpdateTouchEdgeGestureType@TouchEdgeGestureProcessor@@AEAAXW4InputGestureSourceType@Input@Internal@UI@Windows@winrt@@@Z @ 0x180655BE0 (-UpdateTouchEdgeGestureType@TouchEdgeGestureProcessor@@AEAAXW4InputGestureSourceType@Input@Inter.c)
 * Callees:
 *     ?unconditional_release_ref@?$com_ptr@UISnapComponent@@@winrt@@AEAAXXZ @ 0x180085068 (-unconditional_release_ref@-$com_ptr@UISnapComponent@@@winrt@@AEAAXXZ.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18013240C (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?IsBiDiLocale@@YAHK@Z @ 0x180186D9C (-IsBiDiLocale@@YAHK@Z.c)
 *     __security_check_cookie @ 0x1801C6750 (__security_check_cookie.c)
 *     GetThreadUILanguage_0 @ 0x1801C8376 (GetThreadUILanguage_0.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?GetCurrentImmersiveMonitor@TouchGestureHelper@@SA?AU?$com_ptr@UIImmersiveMonitor@@@winrt@@PEAUIImmersiveMonitorManager@@AEBUPoint@Foundation@Windows@3@@Z @ 0x180650644 (-GetCurrentImmersiveMonitor@TouchGestureHelper@@SA-AU-$com_ptr@UIImmersiveMonitor@@@winrt@@PEAUI.c)
 */

// Hidden C++ exception states: #wind=1
bool __fastcall TouchEdgeGestureProcessor::IsBottomGesture(
        TouchEdgeGestureProcessor *this,
        const struct winrt::Windows::Foundation::Point *a2)
{
  int v3; // eax
  int v4; // eax
  int v5; // ebx
  LANGID ThreadUILanguage_0; // ax
  int v7; // eax
  float v8; // xmm1_4
  float v9; // xmm2_4
  float v10; // xmm1_4
  bool v11; // cf
  bool v12; // zf
  float v13; // xmm0_4
  bool v14; // bl
  int v16[2]; // [rsp+20h] [rbp-30h] BYREF
  int nNumerator; // [rsp+28h] [rbp-28h] BYREF
  _BYTE v18[4]; // [rsp+2Ch] [rbp-24h] BYREF
  __int128 v19; // [rsp+30h] [rbp-20h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+8h]

  TouchGestureHelper::GetCurrentImmersiveMonitor(v16, *(_QWORD *)this, (float *)a2);
  v19 = 0LL;
  v3 = (*(__int64 (__fastcall **)(_QWORD, __int128 *))(**(_QWORD **)v16 + 88LL))(*(_QWORD *)v16, &v19);
  if ( v3 < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x161,
      (int)"pcshell\\twinui\\touchgestures\\lib\\touchedgegestureprocessor.cpp",
      (const char *)(unsigned int)v3,
      v16[0]);
  v4 = (*(__int64 (__fastcall **)(_QWORD, int *, _BYTE *))(**(_QWORD **)v16 + 112LL))(*(_QWORD *)v16, &nNumerator, v18);
  if ( v4 < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x163,
      (int)"pcshell\\twinui\\touchgestures\\lib\\touchedgegestureprocessor.cpp",
      (const char *)(unsigned int)v4,
      v16[0]);
  v5 = MulDiv(240, nNumerator, 96);
  ThreadUILanguage_0 = GetThreadUILanguage_0();
  v7 = IsBiDiLocale(ThreadUILanguage_0);
  v8 = *(float *)a2;
  v9 = (float)v5;
  if ( v7 )
  {
    v10 = v8 - (float)(int)v19;
    v11 = v10 < v9;
    v12 = v10 == v9;
  }
  else
  {
    v13 = (float)SDWORD2(v19) - v8;
    v11 = v13 < v9;
    v12 = v13 == v9;
  }
  v14 = !v11 && !v12;
  if ( *(_QWORD *)v16 )
    winrt::com_ptr<ISnapComponent>::unconditional_release_ref((__int64 *)v16);
  return v14;
}

/*
 * XREFs of ?GetWindow@MonitorFrame@@QEAAPEAUHWND__@@XZ @ 0x18043473C
 * Callers:
 *     ?Cloak@MonitorFrame@@QEAAJ_N@Z @ 0x180432230 (-Cloak@MonitorFrame@@QEAAJ_N@Z.c)
 *     ?GetMonitorForHWND@XamlAllUpViewHost@@AEAAJPEAUHWND__@@PEAPEAUIImmersiveMonitor@@@Z @ 0x180434300 (-GetMonitorForHWND@XamlAllUpViewHost@@AEAAJPEAUHWND__@@PEAPEAUIImmersiveMonitor@@@Z.c)
 * Callees:
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800B7A84 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall MonitorFrame::GetWindow(MonitorFrame *this)
{
  __int64 v1; // rcx
  int v2; // eax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  __int64 v5; // [rsp+30h] [rbp+8h] BYREF

  v1 = *((_QWORD *)this + 6);
  v5 = 0LL;
  v2 = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v1 + 40LL))(v1, &v5);
  if ( v2 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x91,
      (__int64)"pcshell\\twinui\\xamlmultitaskingview\\lib\\MonitorFrame.h",
      (const char *)(unsigned int)v2);
  return v5;
}

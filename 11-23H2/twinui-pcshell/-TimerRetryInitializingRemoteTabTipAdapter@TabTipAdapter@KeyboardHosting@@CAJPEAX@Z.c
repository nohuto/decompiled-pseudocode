/*
 * XREFs of ?TimerRetryInitializingRemoteTabTipAdapter@TabTipAdapter@KeyboardHosting@@CAJPEAX@Z @ 0x18052E060
 * Callers:
 *     <none>
 * Callees:
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131870 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InitializeRemoteTabTipAdapter@TabTipAdapter@KeyboardHosting@@AEAAJXZ @ 0x180166DD4 (-InitializeRemoteTabTipAdapter@TabTipAdapter@KeyboardHosting@@AEAAJXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall KeyboardHosting::TabTipAdapter::TimerRetryInitializingRemoteTabTipAdapter(
        KeyboardHosting::TabTipAdapter *this)
{
  int v2; // eax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  if ( this )
    (*(void (__fastcall **)(KeyboardHosting::TabTipAdapter *))(*(_QWORD *)this + 8LL))(this);
  v2 = KeyboardHosting::TabTipAdapter::InitializeRemoteTabTipAdapter(this);
  if ( v2 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x68D,
      (int)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\tabtipadapter.cpp",
      (const char *)(unsigned int)v2);
  if ( this )
    (*(void (__fastcall **)(KeyboardHosting::TabTipAdapter *))(*(_QWORD *)this + 16LL))(this);
  return 0LL;
}

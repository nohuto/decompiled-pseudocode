/*
 * XREFs of ?HandleFrameWindowChange@UwpWindowEventDispatcher@@UEAAJPEAUIUwpWindowWrapperInternal@@@Z @ 0x1803EE930
 * Callers:
 *     <none>
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 *     ?HandleForegroundWindow@UwpWindowEventDispatcher@@AEAAXPEAUHWND__@@@Z @ 0x1803EE7D0 (-HandleForegroundWindow@UwpWindowEventDispatcher@@AEAAXPEAUHWND__@@@Z.c)
 */

__int64 __fastcall UwpWindowEventDispatcher::HandleFrameWindowChange(
        UwpWindowEventDispatcher *this,
        struct IUwpWindowWrapperInternal *a2)
{
  HWND v3; // rdi
  __int64 v4; // r8
  const char *v5; // r9
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v3 = (HWND)*((_QWORD *)this + 54);
  if ( v3 == (HWND)(*(__int64 (__fastcall **)(struct IUwpWindowWrapperInternal *))(*(_QWORD *)a2 + 352LL))(a2) )
  {
    try
    {
      UwpWindowEventDispatcher::HandleForegroundWindow((UwpWindowEventDispatcher *)((char *)this - 16), v3, v4);
    }
    catch ( ... )
    {
      wil::details::in1diag3::Log_CaughtException(
        retaddr,
        (void *)0x7EC,
        (int)"pcshell\\twinui\\viewmanagerinterop\\lib\\uwpwindoweventdispatcher.cpp",
        v5);
    }
  }
  return 0LL;
}

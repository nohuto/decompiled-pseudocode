/*
 * XREFs of ?HandleFrameWindowChange@UwpWindowEventDispatcher@@UEAAJPEAUIUwpWindowWrapperInternal@@@Z @ 0x180057F20
 * Callers:
 *     <none>
 * Callees:
 *     ?HandleForegroundWindow@UwpWindowEventDispatcher@@AEAAXPEAUHWND__@@@Z @ 0x18009B6C4 (-HandleForegroundWindow@UwpWindowEventDispatcher@@AEAAXPEAUHWND__@@@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall UwpWindowEventDispatcher::HandleFrameWindowChange(
        UwpWindowEventDispatcher *this,
        struct IUwpWindowWrapperInternal *a2)
{
  HWND v3; // rdi
  const char *v4; // r9
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v3 = (HWND)*((_QWORD *)this + 56);
  if ( v3 == (HWND)(*(__int64 (__fastcall **)(struct IUwpWindowWrapperInternal *))(*(_QWORD *)a2 + 352LL))(a2) )
  {
    try
    {
      UwpWindowEventDispatcher::HandleForegroundWindow((UwpWindowEventDispatcher *)((char *)this - 16), v3);
    }
    catch ( ... )
    {
      wil::details::in1diag3::Log_CaughtException(
        retaddr,
        (void *)0x823,
        (unsigned int)"pcshell\\twinui\\viewmanagerinterop\\lib\\uwpwindoweventdispatcher.cpp",
        v4);
    }
  }
  return 0LL;
}

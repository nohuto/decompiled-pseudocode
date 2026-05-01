/*
 * XREFs of ?HandleFrameWindowChange@WindowEventDispatcher@@UEAAJPEAUIWindowWrapperInternal@@@Z @ 0x18009A420
 * Callers:
 *     <none>
 * Callees:
 *     ?HandleForegroundWindow@WindowEventDispatcher@@AEAAXPEAUHWND__@@@Z @ 0x18009AB50 (-HandleForegroundWindow@WindowEventDispatcher@@AEAAXPEAUHWND__@@@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall WindowEventDispatcher::HandleFrameWindowChange(
        WindowEventDispatcher *this,
        struct IWindowWrapperInternal *a2)
{
  HWND v3; // rdi
  const char *v5; // r9
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v3 = (HWND)*((_QWORD *)this + 54);
  if ( v3 == (HWND)(*(__int64 (__fastcall **)(struct IWindowWrapperInternal *))(*(_QWORD *)a2 + 352LL))(a2) )
  {
    try
    {
      WindowEventDispatcher::HandleForegroundWindow((WindowEventDispatcher *)((char *)this - 16), v3);
    }
    catch ( ... )
    {
      wil::details::in1diag3::Log_CaughtException(
        retaddr,
        (void *)0x714,
        (unsigned int)"pcshell\\twinui\\viewmanagerinterop\\lib\\windoweventdispatcher.cpp",
        v5);
    }
  }
  return 0LL;
}

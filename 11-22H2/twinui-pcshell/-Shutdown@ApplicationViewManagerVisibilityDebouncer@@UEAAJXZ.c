/*
 * XREFs of ?Shutdown@ApplicationViewManagerVisibilityDebouncer@@UEAAJXZ @ 0x1801BC240
 * Callers:
 *     <none>
 * Callees:
 *     ?Shutdown@NotificationDispatcher@@QEAAXXZ @ 0x18012F2FC (-Shutdown@NotificationDispatcher@@QEAAXXZ.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131870 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall ApplicationViewManagerVisibilityDebouncer::Shutdown(RTL_SRWLOCK **this)
{
  int v2; // eax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  NotificationDispatcher::Shutdown(this[13]);
  v2 = (*((__int64 (__fastcall **)(RTL_SRWLOCK *, _QWORD))this[20]->Ptr + 13))(this[20], *((unsigned int *)this + 42));
  if ( v2 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x168,
      (int)"pcshell\\twinui\\appviewmanager\\lib\\appviewmanagervisibilitydebouncer.cpp",
      (const char *)(unsigned int)v2);
  *((_DWORD *)this + 42) = 0;
  return 0LL;
}

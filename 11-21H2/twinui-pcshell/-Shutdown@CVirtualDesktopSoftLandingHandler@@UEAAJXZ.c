/*
 * XREFs of ?Shutdown@CVirtualDesktopSoftLandingHandler@@UEAAJXZ @ 0x1800A9B00
 * Callers:
 *     <none>
 * Callees:
 *     ?Unregister@SmartCookie@@QEAAJXZ @ 0x1800AA9A4 (-Unregister@SmartCookie@@QEAAJXZ.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800B7A84 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall CVirtualDesktopSoftLandingHandler::Shutdown(CVirtualDesktopSoftLandingHandler *this)
{
  int v2; // eax
  int v3; // eax
  int v5; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  if ( *((_DWORD *)this + 10) )
  {
    v2 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 4) + 104LL))(*((_QWORD *)this + 4));
    if ( v2 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x5E,
        (unsigned int)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopsoftlandinghandler.cpp",
        (const char *)(unsigned int)v2,
        v5);
    *((_DWORD *)this + 10) = 0;
  }
  v3 = SmartCookie::Unregister((CVirtualDesktopSoftLandingHandler *)((char *)this + 48));
  if ( v3 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x61,
      (unsigned int)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopsoftlandinghandler.cpp",
      (const char *)(unsigned int)v3,
      v5);
  return 0LL;
}

/*
 * XREFs of ?Shutdown@VirtualDesktopAcessibility@@UEAAXXZ @ 0x1800A9A10
 * Callers:
 *     <none>
 * Callees:
 *     ?Unregister@SmartCookie@@QEAAJXZ @ 0x1800AA9A4 (-Unregister@SmartCookie@@QEAAJXZ.c)
 */

void __fastcall VirtualDesktopAcessibility::Shutdown(
        VirtualDesktopAcessibility *this,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        int a5)
{
  int v5; // eax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v5 = SmartCookie::Unregister((VirtualDesktopAcessibility *)((char *)this + 48));
  if ( v5 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x82,
      (unsigned int)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopaccessibility.cpp",
      (const char *)(unsigned int)v5,
      a5);
}

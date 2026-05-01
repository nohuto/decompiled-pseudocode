/*
 * XREFs of ?VirtualDesktopRemoved@VirtualDesktopPersistence@@UEAAJPEAUIVirtualDesktop@@@Z @ 0x18055D5B0
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800917F4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x1801881F0 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 *     ?GetVirtualDesktopRegKeyName@VirtualDesktopPersistence@@AEAAJPEAUIVirtualDesktop@@AEAY0DB@G@Z @ 0x18055CA90 (-GetVirtualDesktopRegKeyName@VirtualDesktopPersistence@@AEAAJPEAUIVirtualDesktop@@AEAY0DB@G@Z.c)
 */

__int64 __fastcall VirtualDesktopPersistence::VirtualDesktopRemoved(__int64 **this, struct IVirtualDesktop *a2)
{
  int VirtualDesktopRegKeyName; // eax
  unsigned int v4; // edi
  unsigned int v5; // ebx
  __int64 *v7; // rcx
  __int64 v8; // rdx
  int v9; // eax
  wchar_t v10[56]; // [rsp+20h] [rbp-88h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+A8h] [rbp+0h]

  VirtualDesktopRegKeyName = VirtualDesktopPersistence::GetVirtualDesktopRegKeyName(
                               (VirtualDesktopPersistence *)this,
                               a2,
                               v10);
  v4 = 0;
  v5 = VirtualDesktopRegKeyName;
  if ( VirtualDesktopRegKeyName >= 0 )
  {
    v7 = this[2];
    v8 = *v7;
    LOBYTE(v8) = 1;
    v9 = (*(__int64 (__fastcall **)(__int64 *, __int64, wchar_t *))(*v7 + 64))(v7, v8, v10);
    if ( v9 < 0 )
      return (unsigned int)v9;
    return v4;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x1B3,
      (__int64)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktoppersistence.cpp",
      (const char *)(unsigned int)VirtualDesktopRegKeyName);
    return v5;
  }
}

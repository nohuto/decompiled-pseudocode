/*
 * XREFs of ?ReadPerDesktopStringData@VirtualDesktopPersistence@@AEAAJPEAUIVirtualDesktop@@PEBGPEAPEAG@Z @ 0x18055CDF0
 * Callers:
 *     ?RestoreVirtualDesktopState@VirtualDesktopPersistence@@UEAAJW4_TABLETMODESTATE@@PEAUIVirtualDesktopManagerPrivate@@PEAUIVirtualDesktopCollection@@PEAUIVirtualDesktopTabletModePolicy@@@Z @ 0x180110060 (-RestoreVirtualDesktopState@VirtualDesktopPersistence@@UEAAJW4_TABLETMODESTATE@@PEAUIVirtualDesk.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800917F4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x1801881F0 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 *     ?GetVirtualDesktopRegKeyName@VirtualDesktopPersistence@@AEAAJPEAUIVirtualDesktop@@AEAY0DB@G@Z @ 0x18055CA90 (-GetVirtualDesktopRegKeyName@VirtualDesktopPersistence@@AEAAJPEAUIVirtualDesktop@@AEAY0DB@G@Z.c)
 */

__int64 __fastcall VirtualDesktopPersistence::ReadPerDesktopStringData(
        VirtualDesktopPersistence *this,
        struct IVirtualDesktop *a2,
        const unsigned __int16 *a3,
        unsigned __int16 **a4)
{
  int VirtualDesktopRegKeyName; // eax
  unsigned int v8; // ebx
  __int64 result; // rax
  unsigned __int16 **v10; // rdx
  unsigned __int16 *v11; // [rsp+40h] [rbp-B8h] BYREF
  _BYTE v12[8]; // [rsp+48h] [rbp-B0h] BYREF
  wchar_t v13[56]; // [rsp+50h] [rbp-A8h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+F8h] [rbp+0h]

  VirtualDesktopRegKeyName = VirtualDesktopPersistence::GetVirtualDesktopRegKeyName(this, a2, v13);
  v8 = VirtualDesktopRegKeyName;
  if ( VirtualDesktopRegKeyName >= 0 )
  {
    v10 = &v11;
    LOBYTE(v10) = 1;
    result = (*(__int64 (__fastcall **)(_QWORD, unsigned __int16 **, wchar_t *, const unsigned __int16 *, int, unsigned __int16 **, _BYTE *))(**((_QWORD **)this + 2) + 24LL))(
               *((_QWORD *)this + 2),
               v10,
               v13,
               a3,
               1,
               &v11,
               v12);
    if ( (int)result >= 0 )
    {
      *a4 = v11;
      return 0LL;
    }
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x1BE,
      (__int64)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktoppersistence.cpp",
      (const char *)(unsigned int)VirtualDesktopRegKeyName);
    return v8;
  }
  return result;
}

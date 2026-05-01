/*
 * XREFs of ?WritePerDesktopData@VirtualDesktopPersistence@@AEAAJPEAUIVirtualDesktop@@PEBGKPEBX_K@Z @ 0x18055DA78
 * Callers:
 *     ?VirtualDesktopNameChanged@VirtualDesktopPersistence@@UEAAJPEAUIVirtualDesktop@@PEAUHSTRING__@@@Z @ 0x18055D4A0 (-VirtualDesktopNameChanged@VirtualDesktopPersistence@@UEAAJPEAUIVirtualDesktop@@PEAUHSTRING__@@@.c)
 *     ?VirtualDesktopWallpaperChanged@VirtualDesktopPersistence@@UEAAJPEAUIVirtualDesktop@@PEAUHSTRING__@@@Z @ 0x18055D660 (-VirtualDesktopWallpaperChanged@VirtualDesktopPersistence@@UEAAJPEAUIVirtualDesktop@@PEAUHSTRING.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800917F4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x1801881F0 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 *     ?GetVirtualDesktopRegKeyName@VirtualDesktopPersistence@@AEAAJPEAUIVirtualDesktop@@AEAY0DB@G@Z @ 0x18055CA90 (-GetVirtualDesktopRegKeyName@VirtualDesktopPersistence@@AEAAJPEAUIVirtualDesktop@@AEAY0DB@G@Z.c)
 */

__int64 __fastcall VirtualDesktopPersistence::WritePerDesktopData(
        VirtualDesktopPersistence *this,
        struct IVirtualDesktop *a2,
        const unsigned __int16 *a3,
        __int64 a4,
        const void *a5,
        unsigned __int64 a6)
{
  int VirtualDesktopRegKeyName; // ebx
  __int64 v9; // rdx
  unsigned __int64 v11; // rdx
  wchar_t v12[56]; // [rsp+40h] [rbp-98h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+D8h] [rbp+0h]

  VirtualDesktopRegKeyName = VirtualDesktopPersistence::GetVirtualDesktopRegKeyName(this, a2, v12);
  if ( VirtualDesktopRegKeyName < 0 )
  {
    v9 = 455LL;
LABEL_3:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v9,
      (__int64)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktoppersistence.cpp",
      (const char *)(unsigned int)VirtualDesktopRegKeyName);
    return (unsigned int)VirtualDesktopRegKeyName;
  }
  v11 = a6;
  LOBYTE(v11) = 1;
  VirtualDesktopRegKeyName = (*(__int64 (__fastcall **)(_QWORD, unsigned __int64, wchar_t *, const unsigned __int16 *, int, const void *, unsigned __int64))(**((_QWORD **)this + 2) + 32LL))(
                               *((_QWORD *)this + 2),
                               v11,
                               v12,
                               a3,
                               1,
                               a5,
                               a6);
  if ( VirtualDesktopRegKeyName < 0 )
  {
    v9 = 456LL;
    goto LABEL_3;
  }
  return 0LL;
}

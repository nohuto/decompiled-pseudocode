/*
 * XREFs of ?GetVirtualDesktopRegKeyName@VirtualDesktopPersistence@@AEAAJPEAUIVirtualDesktop@@AEAY0DB@G@Z @ 0x180617AA4
 * Callers:
 *     ?ReadPerDesktopStringData@VirtualDesktopPersistence@@AEAAJPEAUIVirtualDesktop@@PEBGPEAPEAG@Z @ 0x1802E73D6 (-ReadPerDesktopStringData@VirtualDesktopPersistence@@AEAAJPEAUIVirtualDesktop@@PEBGPEAPEAG@Z.c)
 *     ?VirtualDesktopNameChanged@VirtualDesktopPersistence@@UEAAJPEAUIVirtualDesktop@@PEAUHSTRING__@@@Z @ 0x180618020 (-VirtualDesktopNameChanged@VirtualDesktopPersistence@@UEAAJPEAUIVirtualDesktop@@PEAUHSTRING__@@@.c)
 *     ?VirtualDesktopRemoved@VirtualDesktopPersistence@@UEAAJPEAUIVirtualDesktop@@@Z @ 0x180618130 (-VirtualDesktopRemoved@VirtualDesktopPersistence@@UEAAJPEAUIVirtualDesktop@@@Z.c)
 *     ?VirtualDesktopWallpaperChanged@VirtualDesktopPersistence@@UEAAJPEAUIVirtualDesktop@@PEAUHSTRING__@@@Z @ 0x180618200 (-VirtualDesktopWallpaperChanged@VirtualDesktopPersistence@@UEAAJPEAUIVirtualDesktop@@PEAUHSTRING.c)
 *     ?WritePerDesktopData@VirtualDesktopPersistence@@AEAAJPEAUIVirtualDesktop@@PEBGKPEBX_K@Z @ 0x180618304 (-WritePerDesktopData@VirtualDesktopPersistence@@AEAAJPEAUIVirtualDesktop@@PEBGKPEBX_K@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131A24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x1801C6750 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?StringCchCopyExW@@YAJPEAG_KPEBGPEAPEAGPEA_KK@Z @ 0x1802D56E8 (-StringCchCopyExW@@YAJPEAG_KPEBGPEAPEAGPEA_KK@Z.c)
 */

__int64 __fastcall VirtualDesktopPersistence::GetVirtualDesktopRegKeyName(
        VirtualDesktopPersistence *this,
        struct IVirtualDesktop *a2,
        wchar_t *a3)
{
  int v4; // ebx
  __int64 v5; // rdx
  unsigned __int64 cchMax; // [rsp+30h] [rbp-38h] BYREF
  LPOLESTR lpsz; // [rsp+38h] [rbp-30h] BYREF
  GUID rguid; // [rsp+40h] [rbp-28h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+0h]

  v4 = (*(__int64 (__fastcall **)(struct IVirtualDesktop *, GUID *))(*(_QWORD *)a2 + 32LL))(a2, &rguid);
  if ( v4 < 0 )
  {
    v5 = 242LL;
LABEL_3:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v5,
      (int)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktoppersistence.cpp",
      (const char *)(unsigned int)v4);
    return (unsigned int)v4;
  }
  v4 = StringCchCopyExW(a3, 0x31uLL, L"Desktops\\", &lpsz, &cchMax, 0);
  if ( v4 < 0 )
  {
    v5 = 246LL;
    goto LABEL_3;
  }
  if ( !StringFromGUID2(&rguid, lpsz, cchMax) )
  {
    v4 = -2147418113;
    v5 = 247LL;
    goto LABEL_3;
  }
  return 0LL;
}

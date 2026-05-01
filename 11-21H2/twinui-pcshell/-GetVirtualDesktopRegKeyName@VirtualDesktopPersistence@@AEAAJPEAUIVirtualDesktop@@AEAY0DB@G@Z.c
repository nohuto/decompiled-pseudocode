/*
 * XREFs of ?GetVirtualDesktopRegKeyName@VirtualDesktopPersistence@@AEAAJPEAUIVirtualDesktop@@AEAY0DB@G@Z @ 0x18055CA90
 * Callers:
 *     ?GetVirtualDesktopMonitorRegKeyName@VirtualDesktopPersistence@@AEAAJPEAUIVirtualDesktop@@PEAUHMONITOR__@@AEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@Z @ 0x18055C8A0 (-GetVirtualDesktopMonitorRegKeyName@VirtualDesktopPersistence@@AEAAJPEAUIVirtualDesktop@@PEAUHMO.c)
 *     ?ReadMonitors@VirtualDesktopPersistence@@AEAAJPEAUIVirtualDesktop@@AEAV?$vector@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$allocator@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@@std@@@Z @ 0x18055CC68 (-ReadMonitors@VirtualDesktopPersistence@@AEAAJPEAUIVirtualDesktop@@AEAV-$vector@V-$basic_string@.c)
 *     ?ReadPerDesktopStringData@VirtualDesktopPersistence@@AEAAJPEAUIVirtualDesktop@@PEBGPEAPEAG@Z @ 0x18055CDF0 (-ReadPerDesktopStringData@VirtualDesktopPersistence@@AEAAJPEAUIVirtualDesktop@@PEBGPEAPEAG@Z.c)
 *     ?VirtualDesktopNameChanged@VirtualDesktopPersistence@@UEAAJPEAUIVirtualDesktop@@PEAUHSTRING__@@@Z @ 0x18055D4A0 (-VirtualDesktopNameChanged@VirtualDesktopPersistence@@UEAAJPEAUIVirtualDesktop@@PEAUHSTRING__@@@.c)
 *     ?VirtualDesktopRemoved@VirtualDesktopPersistence@@UEAAJPEAUIVirtualDesktop@@@Z @ 0x18055D5B0 (-VirtualDesktopRemoved@VirtualDesktopPersistence@@UEAAJPEAUIVirtualDesktop@@@Z.c)
 *     ?VirtualDesktopWallpaperChanged@VirtualDesktopPersistence@@UEAAJPEAUIVirtualDesktop@@PEAUHSTRING__@@@Z @ 0x18055D660 (-VirtualDesktopWallpaperChanged@VirtualDesktopPersistence@@UEAAJPEAUIVirtualDesktop@@PEAUHSTRING.c)
 *     ?WritePerDesktopData@VirtualDesktopPersistence@@AEAAJPEAUIVirtualDesktop@@PEBGKPEBX_K@Z @ 0x18055DA78 (-WritePerDesktopData@VirtualDesktopPersistence@@AEAAJPEAUIVirtualDesktop@@PEBGKPEBX_K@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800917F4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x1801881F0 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 *     ?StringCchCopyExW@@YAJPEAG_KPEBGPEAPEAGPEA_KK@Z @ 0x1803B0F6C (-StringCchCopyExW@@YAJPEAG_KPEBGPEAPEAGPEA_KK@Z.c)
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
    v5 = 423LL;
LABEL_3:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v5,
      (__int64)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktoppersistence.cpp",
      (const char *)(unsigned int)v4);
    return (unsigned int)v4;
  }
  v4 = StringCchCopyExW(a3, 0x31uLL, L"Desktops\\", &lpsz, &cchMax, 0);
  if ( v4 < 0 )
  {
    v5 = 427LL;
    goto LABEL_3;
  }
  if ( !StringFromGUID2(&rguid, lpsz, cchMax) )
  {
    v4 = -2147418113;
    v5 = 428LL;
    goto LABEL_3;
  }
  return 0LL;
}

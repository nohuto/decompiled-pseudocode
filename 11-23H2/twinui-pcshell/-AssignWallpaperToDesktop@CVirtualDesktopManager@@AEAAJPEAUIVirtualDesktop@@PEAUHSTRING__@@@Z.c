/*
 * XREFs of ?AssignWallpaperToDesktop@CVirtualDesktopManager@@AEAAJPEAUIVirtualDesktop@@PEAUHSTRING__@@@Z @ 0x1806008C4
 * Callers:
 *     ?SetDesktopWallpaperInternal@CVirtualDesktopManager@@AEAAJPEAUIVirtualDesktop@@PEAUHSTRING__@@@Z @ 0x18060384C (-SetDesktopWallpaperInternal@CVirtualDesktopManager@@AEAAJPEAUIVirtualDesktop@@PEAUHSTRING__@@@Z.c)
 *     ?SwitchDesktopInternalPrivate@CVirtualDesktopManager@@AEAAJPEAUIVirtualDesktop@@W4VirtualDesktopSwitchType@@@Z @ 0x1806060A4 (-SwitchDesktopInternalPrivate@CVirtualDesktopManager@@AEAAJPEAUIVirtualDesktop@@W4VirtualDesktop.c)
 *     ?UpdateCurrentDesktopWallpaperPath@CVirtualDesktopManager@@AEAAJXZ @ 0x180607108 (-UpdateCurrentDesktopWallpaperPath@CVirtualDesktopManager@@AEAAJXZ.c)
 * Callees:
 *     ??1?$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x18000D700 (--1-$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131870 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131A24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?IsNewWallpaper@CVirtualDesktopManager@@AEAA_NPEAUIVirtualDesktop@@PEAUHSTRING__@@@Z @ 0x180601D14 (-IsNewWallpaper@CVirtualDesktopManager@@AEAA_NPEAUIVirtualDesktop@@PEAUHSTRING__@@@Z.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CVirtualDesktopManager::AssignWallpaperToDesktop(
        CVirtualDesktopManager *this,
        struct IVirtualDesktop *a2,
        HSTRING a3)
{
  __int64 (__fastcall **v6)(struct IVirtualDesktop *, GUID *, __int64 *); // rax
  int v7; // eax
  unsigned int v8; // ebx
  __int64 v9; // rdx
  int v11; // eax
  int v12; // eax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  __int64 v14; // [rsp+48h] [rbp+20h] BYREF

  if ( CVirtualDesktopManager::IsNewWallpaper(this, a2, a3) )
  {
    v6 = *(__int64 (__fastcall ***)(struct IVirtualDesktop *, GUID *, __int64 *))a2;
    v14 = 0LL;
    v7 = (*v6)(a2, &GUID_c9be252c_e386_425e_b33c_ca422112f51f, &v14);
    v8 = v7;
    if ( v7 < 0 )
    {
      v9 = 1429LL;
LABEL_6:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v9,
        (int)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopmanager.cpp",
        (const char *)(unsigned int)v7);
      wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v14);
      return v8;
    }
    v7 = (*(__int64 (__fastcall **)(__int64, HSTRING))(*(_QWORD *)v14 + 40LL))(v14, a3);
    v8 = v7;
    if ( v7 < 0 )
    {
      v9 = 1430LL;
      goto LABEL_6;
    }
    v11 = (*(__int64 (__fastcall **)(_QWORD, struct IVirtualDesktop *, HSTRING))(**((_QWORD **)this + 18) + 64LL))(
            *((_QWORD *)this + 18),
            a2,
            a3);
    if ( v11 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x598,
        (int)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopmanager.cpp",
        (const char *)(unsigned int)v11);
    v12 = (*(__int64 (__fastcall **)(_QWORD, struct IVirtualDesktop *, HSTRING))(**((_QWORD **)this + 16) + 88LL))(
            *((_QWORD *)this + 16),
            a2,
            a3);
    if ( v12 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x599,
        (int)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopmanager.cpp",
        (const char *)(unsigned int)v12);
    wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v14);
  }
  return 0LL;
}

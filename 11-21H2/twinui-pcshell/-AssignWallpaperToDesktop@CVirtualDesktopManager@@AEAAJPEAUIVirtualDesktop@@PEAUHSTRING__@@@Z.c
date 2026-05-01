/*
 * XREFs of ?AssignWallpaperToDesktop@CVirtualDesktopManager@@AEAAJPEAUIVirtualDesktop@@PEAUHSTRING__@@@Z @ 0x180544C64
 * Callers:
 *     ?SetDesktopWallpaperInternal@CVirtualDesktopManager@@AEAAJPEAUHMONITOR__@@PEAUIVirtualDesktop@@PEAUHSTRING__@@@Z @ 0x180548360 (-SetDesktopWallpaperInternal@CVirtualDesktopManager@@AEAAJPEAUHMONITOR__@@PEAUIVirtualDesktop@@P.c)
 *     ?SwitchDesktopInternal@CVirtualDesktopManager@@UEAAJPEAUHMONITOR__@@PEAUIVirtualDesktop@@@Z @ 0x18054ACB0 (-SwitchDesktopInternal@CVirtualDesktopManager@@UEAAJPEAUHMONITOR__@@PEAUIVirtualDesktop@@@Z.c)
 *     ?UpdateCurrentDesktopWallpaperPath@CVirtualDesktopManager@@AEAAJPEAUHMONITOR__@@@Z @ 0x18054C1E8 (-UpdateCurrentDesktopWallpaperPath@CVirtualDesktopManager@@AEAAJPEAUHMONITOR__@@@Z.c)
 * Callees:
 *     ??1?$com_ptr_t@UISnapAssistCallback2@WindowSnapping@Shell@Internal@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18000B3E0 (--1-$com_ptr_t@UISnapAssistCallback2@WindowSnapping@Shell@Internal@Windows@@Uerr_returncode_poli.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800917F4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800B7A84 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 *     ?IsNewWallpaper@CVirtualDesktopManager@@AEAA_NPEAUIVirtualDesktop@@PEAUHSTRING__@@@Z @ 0x180545FEC (-IsNewWallpaper@CVirtualDesktopManager@@AEAA_NPEAUIVirtualDesktop@@PEAUHSTRING__@@@Z.c)
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
    v7 = (*v6)(a2, &GUID_eddfebdb_99be_41b5_924b_71dee9de176c, &v14);
    v8 = v7;
    if ( v7 < 0 )
    {
      v9 = 1755LL;
LABEL_6:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v9,
        (__int64)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopmanager.cpp",
        (const char *)(unsigned int)v7);
      wil::com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>::~com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>(&v14);
      return v8;
    }
    v7 = (*(__int64 (__fastcall **)(__int64, HSTRING))(*(_QWORD *)v14 + 56LL))(v14, a3);
    v8 = v7;
    if ( v7 < 0 )
    {
      v9 = 1756LL;
      goto LABEL_6;
    }
    v11 = (*(__int64 (__fastcall **)(_QWORD, struct IVirtualDesktop *, HSTRING))(**((_QWORD **)this + 17) + 72LL))(
            *((_QWORD *)this + 17),
            a2,
            a3);
    if ( v11 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x6DE,
        (__int64)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopmanager.cpp",
        (const char *)(unsigned int)v11);
    v12 = (*(__int64 (__fastcall **)(_QWORD, struct IVirtualDesktop *, HSTRING))(**((_QWORD **)this + 15) + 96LL))(
            *((_QWORD *)this + 15),
            a2,
            a3);
    if ( v12 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x6DF,
        (__int64)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopmanager.cpp",
        (const char *)(unsigned int)v12);
    wil::com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>::~com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>(&v14);
  }
  return 0LL;
}

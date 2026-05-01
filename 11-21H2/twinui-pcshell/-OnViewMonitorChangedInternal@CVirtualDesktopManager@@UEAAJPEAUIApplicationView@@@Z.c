/*
 * XREFs of ?OnViewMonitorChangedInternal@CVirtualDesktopManager@@UEAAJPEAUIApplicationView@@@Z @ 0x180547020
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$com_ptr_t@UISnapAssistCallback2@WindowSnapping@Shell@Internal@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18000B3E0 (--1-$com_ptr_t@UISnapAssistCallback2@WindowSnapping@Shell@Internal@Windows@@Uerr_returncode_poli.c)
 *     ?GetMonitorFromApplicationView@VirtualDesktopHelpers@@YAPEAUHMONITOR__@@PEAUIApplicationView@@@Z @ 0x180074B3C (-GetMonitorFromApplicationView@VirtualDesktopHelpers@@YAPEAUHMONITOR__@@PEAUIApplicationView@@@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800917F4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?IsVirtualDesktopPerMonitor@CVirtualDesktopManager@@AEAA_NXZ @ 0x1800A0180 (-IsVirtualDesktopPerMonitor@CVirtualDesktopManager@@AEAA_NXZ.c)
 *     ?GetCurrentDesktopInternal@CVirtualDesktopManager@@UEAAJPEAUHMONITOR__@@PEAPEAUIVirtualDesktop@@@Z @ 0x18012FBF0 (-GetCurrentDesktopInternal@CVirtualDesktopManager@@UEAAJPEAUHMONITOR__@@PEAPEAUIVirtualDesktop@@.c)
 *     __security_check_cookie @ 0x1801881F0 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 *     ?MoveViewInHighZOrderBandToDesktop@CVirtualDesktopManager@@AEAAJPEAUIApplicationView@@PEAUIVirtualDesktop@@@Z @ 0x180546750 (-MoveViewInHighZOrderBandToDesktop@CVirtualDesktopManager@@AEAAJPEAUIApplicationView@@PEAUIVirtu.c)
 *     ?_MoveViewToDesktop@CVirtualDesktopManager@@AEAAJPEAUIApplicationView@@PEAUIVirtualDesktop@@@Z @ 0x18054C8E0 (-_MoveViewToDesktop@CVirtualDesktopManager@@AEAAJPEAUIApplicationView@@PEAUIVirtualDesktop@@@Z.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall CVirtualDesktopManager::OnViewMonitorChangedInternal(
        CVirtualDesktopManager *this,
        struct IApplicationView *a2)
{
  struct IApplicationView *v4; // rdx
  VirtualDesktopHelpers *v5; // rcx
  HMONITOR MonitorFromApplicationView; // r12
  int v7; // eax
  unsigned int v8; // ebx
  char v10; // r15
  int v11; // eax
  unsigned int v12; // edi
  __int64 v13; // rdx
  __int64 v14; // rbx
  int (__fastcall *v15)(__int64, _QWORD *, __int64 *); // rdi
  __int64 v16; // r9
  struct IVirtualDesktop *v17; // rbx
  int v18; // eax
  __int64 v19; // rdx
  __int64 v20; // rax
  int v21; // [rsp+20h] [rbp-50h] BYREF
  __int64 v22; // [rsp+28h] [rbp-48h] BYREF
  int v23; // [rsp+30h] [rbp-40h] BYREF
  struct IVirtualDesktop *v24; // [rsp+38h] [rbp-38h] BYREF
  _QWORD v25[2]; // [rsp+40h] [rbp-30h] BYREF
  _QWORD v26[2]; // [rsp+50h] [rbp-20h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+98h] [rbp+28h]

  if ( !CVirtualDesktopManager::IsVirtualDesktopPerMonitor(this) )
    return 0LL;
  MonitorFromApplicationView = VirtualDesktopHelpers::GetMonitorFromApplicationView(v5, v4);
  v23 = 0;
  v7 = (*(__int64 (__fastcall **)(struct IApplicationView *, int *))(*(_QWORD *)a2 + 88LL))(a2, &v23);
  v8 = v7;
  if ( v7 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x475,
      (__int64)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopmanager.cpp",
      (const char *)(unsigned int)v7);
    return v8;
  }
  if ( !MonitorFromApplicationView || !v23 )
    return 0LL;
  v22 = 0LL;
  v21 = 0;
  v10 = 0;
  v11 = (*(__int64 (__fastcall **)(struct IApplicationView *, _QWORD *))(*(_QWORD *)a2 + 200LL))(a2, v25);
  v12 = v11;
  if ( v11 < 0 )
  {
    v13 = 1152LL;
LABEL_11:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v13,
      (__int64)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopmanager.cpp",
      (const char *)(unsigned int)v11);
LABEL_29:
    wil::com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>::~com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>(&v22);
    return v12;
  }
  v14 = *((_QWORD *)this + 11);
  v15 = *(int (__fastcall **)(__int64, _QWORD *, __int64 *))(*(_QWORD *)v14 + 96LL);
  v22 = 0LL;
  if ( v15(v14, v25, &v22) >= 0 )
  {
    v11 = (*(__int64 (__fastcall **)(struct IApplicationView *, int *))(*(_QWORD *)a2 + 336LL))(a2, &v21);
    v12 = v11;
    if ( v11 < 0 )
    {
      v13 = 1161LL;
      goto LABEL_11;
    }
    if ( v21 )
      goto LABEL_16;
    v10 = (*(__int64 (__fastcall **)(_QWORD, struct IApplicationView *, __int64))(**((_QWORD **)this + 13) + 32LL))(
            *((_QWORD *)this + 13),
            a2,
            v22);
  }
  if ( v21 || v10 )
  {
LABEL_16:
    v24 = 0LL;
    if ( (int)CVirtualDesktopManager::GetCurrentDesktopInternal(this, MonitorFromApplicationView, &v24, v16) >= 0 )
    {
      v17 = v24;
      v18 = (*(__int64 (__fastcall **)(struct IVirtualDesktop *, _QWORD *))(*(_QWORD *)v24 + 32LL))(v24, v26);
      v12 = v18;
      if ( v18 < 0 )
      {
        v19 = 1181LL;
LABEL_28:
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)v19,
          (__int64)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopmanager.cpp",
          (const char *)(unsigned int)v18);
        wil::com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>::~com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>((__int64 *)&v24);
        goto LABEL_29;
      }
      v20 = v25[0] - v26[0];
      if ( v25[0] == v26[0] )
        v20 = v25[1] - v26[1];
      if ( v20 )
      {
        if ( v21 )
        {
          v18 = CVirtualDesktopManager::MoveViewInHighZOrderBandToDesktop(
                  (CVirtualDesktopManager *)((char *)this - 8),
                  a2,
                  v17);
          v12 = v18;
          if ( v18 < 0 )
          {
            v19 = 1187LL;
            goto LABEL_28;
          }
        }
        else if ( v10 )
        {
          v18 = CVirtualDesktopManager::_MoveViewToDesktop((CVirtualDesktopManager *)((char *)this - 8), a2, v17);
          v12 = v18;
          if ( v18 < 0 )
          {
            v19 = 1191LL;
            goto LABEL_28;
          }
        }
      }
    }
    wil::com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>::~com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>((__int64 *)&v24);
  }
  wil::com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>::~com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>(&v22);
  return 0LL;
}

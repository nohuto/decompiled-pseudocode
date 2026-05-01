/*
 * XREFs of ?OnMonitorAttached@CVirtualDesktopManager@@UEAAJPEAUHMONITOR__@@@Z @ 0x180546BF0
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$com_ptr_t@UISnapAssistCallback2@WindowSnapping@Shell@Internal@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18000B3E0 (--1-$com_ptr_t@UISnapAssistCallback2@WindowSnapping@Shell@Internal@Windows@@Uerr_returncode_poli.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800917F4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 *     ??$_Emplace_reallocate@AEBQEAUHMONITOR__@@@?$vector@PEAUHMONITOR__@@V?$allocator@PEAUHMONITOR__@@@std@@@std@@QEAAPEAPEAUHMONITOR__@@QEAPEAU2@AEBQEAU2@@Z @ 0x180489A34 (--$_Emplace_reallocate@AEBQEAUHMONITOR__@@@-$vector@PEAUHMONITOR__@@V-$allocator@PEAUHMONITOR__@.c)
 *     ?SetCurrentDesktopForMonitorHelper@CVirtualDesktopManager@@AEAAJPEAUHMONITOR__@@PEAUIVirtualDesktop@@@Z @ 0x180547EC0 (-SetCurrentDesktopForMonitorHelper@CVirtualDesktopManager@@AEAAJPEAUHMONITOR__@@PEAUIVirtualDesk.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CVirtualDesktopManager::OnMonitorAttached(CVirtualDesktopManager *this, HMONITOR a2)
{
  HMONITOR v2; // rbx
  HMONITOR *v4; // rdx
  const void **v5; // rcx
  HMONITOR *i; // rax
  int v7; // eax
  unsigned int v8; // esi
  __int64 *v10; // rcx
  __int64 v11; // rax
  int v12; // eax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  struct IVirtualDesktop *v14; // [rsp+30h] [rbp+8h] BYREF
  HMONITOR v15; // [rsp+38h] [rbp+10h] BYREF

  v15 = a2;
  v2 = a2;
  v4 = (HMONITOR *)*((_QWORD *)this + 32);
  v5 = (const void **)((char *)this + 248);
  for ( i = (HMONITOR *)*v5; i != v4; ++i )
  {
    if ( *i == v2 )
      return 0LL;
  }
  if ( v4 == v5[2] )
  {
    std::vector<HMONITOR__ *>::_Emplace_reallocate<HMONITOR__ * const &>(v5, v4, &v15);
    v2 = v15;
  }
  else
  {
    *v4 = v2;
    v5[1] = (char *)v5[1] + 8;
  }
  v7 = (*(__int64 (__fastcall **)(_QWORD, HMONITOR))(**((_QWORD **)this + 11) + 128LL))(*((_QWORD *)this + 11), v2);
  v8 = v7;
  if ( v7 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x11D,
      (__int64)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopmanager.cpp",
      (const char *)(unsigned int)v7);
    return v8;
  }
  v14 = 0LL;
  v10 = (__int64 *)*((_QWORD *)this + 11);
  v11 = *v10;
  v14 = 0LL;
  v12 = (*(__int64 (__fastcall **)(__int64 *, HMONITOR, struct IVirtualDesktop **))(v11 + 80))(v10, v2, &v14);
  v8 = v12;
  if ( v12 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x124,
      (__int64)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopmanager.cpp",
      (const char *)(unsigned int)v12);
    wil::com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>::~com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>((__int64 *)&v14);
    return v8;
  }
  CVirtualDesktopManager::SetCurrentDesktopForMonitorHelper((CVirtualDesktopManager *)((char *)this - 8), v2, v14);
  wil::com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>::~com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>((__int64 *)&v14);
  return 0LL;
}

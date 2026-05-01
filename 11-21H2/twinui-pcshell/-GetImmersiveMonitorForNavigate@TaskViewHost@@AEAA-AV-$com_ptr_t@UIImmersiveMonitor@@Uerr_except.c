/*
 * XREFs of ?GetImmersiveMonitorForNavigate@TaskViewHost@@AEAA?AV?$com_ptr_t@UIImmersiveMonitor@@Uerr_exception_policy@wil@@@wil@@PEAUIImmersiveMonitor@@I@Z @ 0x1805FE6AC
 * Callers:
 *     ?HandleCrossMonitorTabbing@TaskViewHost@@UEAAXPEAUHWND__@@I@Z @ 0x1805FE770 (-HandleCrossMonitorTabbing@TaskViewHost@@UEAAXPEAUHWND__@@I@Z.c)
 * Callees:
 *     ??1?$com_ptr_t@UISnapAssistCallback2@WindowSnapping@Shell@Internal@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18000B3E0 (--1-$com_ptr_t@UISnapAssistCallback2@WindowSnapping@Shell@Internal@Windows@@Uerr_returncode_poli.c)
 *     ??0?$com_ptr_t@UIImmersiveMonitor@@Uerr_exception_policy@wil@@@wil@@QEAA@PEAUIImmersiveMonitor@@@Z @ 0x18000FCC8 (--0-$com_ptr_t@UIImmersiveMonitor@@Uerr_exception_policy@wil@@@wil@@QEAA@PEAUIImmersiveMonitor@@.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 *__fastcall TaskViewHost::GetImmersiveMonitorForNavigate(_QWORD *a1, __int64 *a2, __int64 a3, int a4)
{
  __int64 *v6; // rcx
  __int64 v7; // rax
  __int64 v8; // rax
  __int64 v10; // [rsp+40h] [rbp+8h] BYREF

  v6 = (__int64 *)a1[29];
  if ( !v6 || (unsigned __int64)((__int64)(a1[39] - a1[38]) >> 3) <= 1 )
    goto LABEL_6;
  v10 = 0LL;
  v7 = *v6;
  v10 = 0LL;
  if ( (*(int (__fastcall **)(__int64 *, bool, __int64, __int64 *))(v7 + 104))(v6, a4 == 5, a3, &v10) < 0 )
  {
    wil::com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>::~com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>(&v10);
LABEL_6:
    wil::com_ptr_t<IImmersiveMonitor,wil::err_exception_policy>::com_ptr_t<IImmersiveMonitor,wil::err_exception_policy>(
      a2,
      a1[30]);
    return a2;
  }
  v8 = v10;
  v10 = 0LL;
  *a2 = v8;
  wil::com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>::~com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>(&v10);
  return a2;
}

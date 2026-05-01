/*
 * XREFs of ?GetImmersiveMonitorForNavigate@TaskViewHost@@AEAA?AV?$com_ptr_t@UIImmersiveMonitor@@Uerr_exception_policy@wil@@@wil@@PEAUIImmersiveMonitor@@I@Z @ 0x180767A78
 * Callers:
 *     ?HandleCrossMonitorTabbing@TaskViewHost@@UEAAXPEAUHWND__@@I@Z @ 0x180767B40 (-HandleCrossMonitorTabbing@TaskViewHost@@UEAAXPEAUHWND__@@I@Z.c)
 * Callees:
 *     ??1?$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x18000D700 (--1-$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ??0?$com_ptr_t@UIImmersiveMonitor@@Uerr_exception_policy@wil@@@wil@@QEAA@PEAUIImmersiveMonitor@@@Z @ 0x1801B9F9C (--0-$com_ptr_t@UIImmersiveMonitor@@Uerr_exception_policy@wil@@@wil@@QEAA@PEAUIImmersiveMonitor@@.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 *__fastcall TaskViewHost::GetImmersiveMonitorForNavigate(_QWORD *a1, __int64 *a2, __int64 a3, int a4)
{
  __int64 *v6; // rcx
  __int64 v7; // rax
  __int64 v8; // rax
  __int64 v10; // [rsp+50h] [rbp+8h] BYREF

  v6 = (__int64 *)a1[29];
  if ( !v6 || (unsigned __int64)((__int64)(a1[41] - a1[40]) >> 3) <= 1 )
    goto LABEL_6;
  v10 = 0LL;
  v7 = *v6;
  v10 = 0LL;
  if ( (*(int (__fastcall **)(__int64 *, bool, __int64, __int64 *))(v7 + 104))(v6, a4 == 5, a3, &v10) < 0 )
  {
    wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v10);
LABEL_6:
    wil::com_ptr_t<IImmersiveMonitor,wil::err_exception_policy>::com_ptr_t<IImmersiveMonitor,wil::err_exception_policy>(
      a2,
      a1[30]);
    return a2;
  }
  v8 = v10;
  v10 = 0LL;
  *a2 = v8;
  wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v10);
  return a2;
}

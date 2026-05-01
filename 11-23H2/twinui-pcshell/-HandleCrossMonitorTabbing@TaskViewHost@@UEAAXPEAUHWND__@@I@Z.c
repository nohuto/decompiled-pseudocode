/*
 * XREFs of ?HandleCrossMonitorTabbing@TaskViewHost@@UEAAXPEAUHWND__@@I@Z @ 0x180767B40
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x18000D700 (--1-$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?TryEnterOnCurrentThread@CObjectWithThreadUseDetection@@IEAAJW4ThreadUseFailureResponse@@@Z @ 0x18014E10C (-TryEnterOnCurrentThread@CObjectWithThreadUseDetection@@IEAAJW4ThreadUseFailureResponse@@@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?GetFrameForMonitor@TaskViewHost@@AEAA?AV?$com_ptr_t@UITaskViewFrame@@Uerr_exception_policy@wil@@@wil@@PEAUIImmersiveMonitor@@@Z @ 0x1807679DC (-GetFrameForMonitor@TaskViewHost@@AEAA-AV-$com_ptr_t@UITaskViewFrame@@Uerr_exception_policy@wil@.c)
 *     ?GetImmersiveMonitorForNavigate@TaskViewHost@@AEAA?AV?$com_ptr_t@UIImmersiveMonitor@@Uerr_exception_policy@wil@@@wil@@PEAUIImmersiveMonitor@@I@Z @ 0x180767A78 (-GetImmersiveMonitorForNavigate@TaskViewHost@@AEAA-AV-$com_ptr_t@UIImmersiveMonitor@@Uerr_except.c)
 *     ?TryGetActiveFrame@TaskViewHost@@AEAA?AV?$com_ptr_t@UITaskViewFrame@@Uerr_exception_policy@wil@@@wil@@XZ @ 0x180768410 (-TryGetActiveFrame@TaskViewHost@@AEAA-AV-$com_ptr_t@UITaskViewFrame@@Uerr_exception_policy@wil@@.c)
 */

// Hidden C++ exception states: #wind=5
void __fastcall TaskViewHost::HandleCrossMonitorTabbing(TaskViewHost *this, HWND a2, unsigned int a3)
{
  _QWORD *v4; // rsi
  struct _RTL_CRITICAL_SECTION *v5; // rbx
  int v6; // edi
  __int64 v7; // [rsp+20h] [rbp-20h] BYREF
  __int64 v8[2]; // [rsp+28h] [rbp-18h] BYREF
  int v9; // [rsp+38h] [rbp-8h]
  __int64 v10; // [rsp+60h] [rbp+20h] BYREF
  __int64 v11; // [rsp+78h] [rbp+38h] BYREF

  v4 = (_QWORD *)((char *)this - 120);
  v5 = (struct _RTL_CRITICAL_SECTION *)(((unsigned __int64)this - 96) & -(__int64)(this != (TaskViewHost *)120));
  v8[1] = (__int64)v5;
  v6 = CObjectWithThreadUseDetection::TryEnterOnCurrentThread((__int64)v5, 1);
  v9 = v6;
  TaskViewHost::TryGetActiveFrame(v4, v8);
  if ( v8[0] )
  {
    (*(void (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v8[0] + 40LL))(v8[0], &v7);
    TaskViewHost::GetImmersiveMonitorForNavigate(v4, &v11, v7, a3);
    TaskViewHost::GetFrameForMonitor((__int64)v4, &v10, v11);
    (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v10 + 120LL))(v10, a3);
    wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v10);
    wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v11);
    wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v7);
  }
  wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(v8);
  if ( v6 >= 0 )
    LeaveCriticalSection(v5);
}

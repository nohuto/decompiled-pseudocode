/*
 * XREFs of ?HandleCrossMonitorTabbing@TaskViewHost@@UEAAXPEAUHWND__@@I@Z @ 0x1805FE770
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$com_ptr_t@UISnapAssistCallback2@WindowSnapping@Shell@Internal@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18000B3E0 (--1-$com_ptr_t@UISnapAssistCallback2@WindowSnapping@Shell@Internal@Windows@@Uerr_returncode_poli.c)
 *     ?TryEnterOnCurrentThread@CObjectWithThreadUseDetection@@IEAAJW4ThreadUseFailureResponse@@@Z @ 0x180141840 (-TryEnterOnCurrentThread@CObjectWithThreadUseDetection@@IEAAJW4ThreadUseFailureResponse@@@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 *     ?GetFrameForHwnd@TaskViewHost@@AEAA?AV?$com_ptr_t@UITaskViewFrame@@Uerr_exception_policy@wil@@@wil@@PEAUHWND__@@@Z @ 0x1805FE574 (-GetFrameForHwnd@TaskViewHost@@AEAA-AV-$com_ptr_t@UITaskViewFrame@@Uerr_exception_policy@wil@@@w.c)
 *     ?GetFrameForMonitor@TaskViewHost@@AEAA?AV?$com_ptr_t@UITaskViewFrame@@Uerr_exception_policy@wil@@@wil@@PEAUIImmersiveMonitor@@@Z @ 0x1805FE610 (-GetFrameForMonitor@TaskViewHost@@AEAA-AV-$com_ptr_t@UITaskViewFrame@@Uerr_exception_policy@wil@.c)
 *     ?GetImmersiveMonitorForNavigate@TaskViewHost@@AEAA?AV?$com_ptr_t@UIImmersiveMonitor@@Uerr_exception_policy@wil@@@wil@@PEAUIImmersiveMonitor@@I@Z @ 0x1805FE6AC (-GetImmersiveMonitorForNavigate@TaskViewHost@@AEAA-AV-$com_ptr_t@UIImmersiveMonitor@@Uerr_except.c)
 */

// Hidden C++ exception states: #wind=5
void __fastcall TaskViewHost::HandleCrossMonitorTabbing(TaskViewHost *this, __int64 a2, int a3)
{
  _QWORD *v5; // rsi
  struct _RTL_CRITICAL_SECTION *v6; // rdi
  int v7; // r14d
  __int64 v8; // [rsp+20h] [rbp-20h] BYREF
  __int64 v9[2]; // [rsp+28h] [rbp-18h] BYREF
  int v10; // [rsp+38h] [rbp-8h]
  __int64 v11; // [rsp+70h] [rbp+30h] BYREF
  __int64 v12; // [rsp+88h] [rbp+48h] BYREF

  v5 = (_QWORD *)((char *)this - 120);
  v6 = (struct _RTL_CRITICAL_SECTION *)(((unsigned __int64)this - 96) & -(__int64)(this != (TaskViewHost *)120));
  v9[1] = (__int64)v6;
  v7 = CObjectWithThreadUseDetection::TryEnterOnCurrentThread((__int64)v6, 1);
  v10 = v7;
  TaskViewHost::GetFrameForHwnd((__int64)v5, v9, a2);
  if ( v9[0] )
  {
    (*(void (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v9[0] + 40LL))(v9[0], &v11);
    TaskViewHost::GetImmersiveMonitorForNavigate(v5, &v8, v11, a3);
    if ( v11 != v8 )
    {
      TaskViewHost::GetFrameForMonitor((__int64)v5, &v12, v8);
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 72LL))(v12);
      wil::com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>::~com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>(&v12);
    }
    wil::com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>::~com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>(&v8);
    wil::com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>::~com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>(&v11);
  }
  wil::com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>::~com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>(v9);
  if ( v7 >= 0 )
    LeaveCriticalSection(v6);
}

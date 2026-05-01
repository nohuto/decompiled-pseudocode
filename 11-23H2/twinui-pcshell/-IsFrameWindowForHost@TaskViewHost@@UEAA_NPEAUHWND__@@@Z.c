/*
 * XREFs of ?IsFrameWindowForHost@TaskViewHost@@UEAA_NPEAUHWND__@@@Z @ 0x180767C90
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x18000D700 (--1-$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?TryEnterOnCurrentThread@CObjectWithThreadUseDetection@@IEAAJW4ThreadUseFailureResponse@@@Z @ 0x18014E10C (-TryEnterOnCurrentThread@CObjectWithThreadUseDetection@@IEAAJW4ThreadUseFailureResponse@@@Z.c)
 *     ?GetFrameForHwnd@TaskViewHost@@AEAA?AV?$com_ptr_t@UITaskViewFrame@@Uerr_exception_policy@wil@@@wil@@PEAUHWND__@@@Z @ 0x180767940 (-GetFrameForHwnd@TaskViewHost@@AEAA-AV-$com_ptr_t@UITaskViewFrame@@Uerr_exception_policy@wil@@@w.c)
 */

// Hidden C++ exception states: #wind=1
bool __fastcall TaskViewHost::IsFrameWindowForHost(TaskViewHost *this, __int64 a2)
{
  char *v3; // rdi
  struct _RTL_CRITICAL_SECTION *v4; // rbp
  bool v5; // di
  int v7; // [rsp+28h] [rbp-10h]
  __int64 v8; // [rsp+40h] [rbp+8h] BYREF

  v3 = (char *)this - 120;
  v4 = (struct _RTL_CRITICAL_SECTION *)(((unsigned __int64)this - 96) & -(__int64)(this != (TaskViewHost *)120));
  v7 = CObjectWithThreadUseDetection::TryEnterOnCurrentThread((__int64)v4, 1);
  v5 = *TaskViewHost::GetFrameForHwnd((__int64)v3, &v8, a2) != 0LL;
  wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v8);
  if ( v7 >= 0 )
    LeaveCriticalSection(v4);
  return v5;
}

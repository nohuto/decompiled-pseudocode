/*
 * XREFs of ?DismissViewAnimated@TaskViewHost@@UEAAJXZ @ 0x18006FF80
 * Callers:
 *     <none>
 * Callees:
 *     std::for_each_std::_Vector_iterator_std::_Vector_val_std::_Simple_types_wil::com_ptr_t_ITaskViewFrame_wil::err_exception_policy_________lambda_44f6d189e7116b6c3e129de871273415___ @ 0x180078534 (std--for_each_std--_Vector_iterator_std--_Vector_val_std--_Simple_types_wil--com_ptr_t_ITaskView.c)
 *     ?TryEnterOnCurrentThread@CObjectWithThreadUseDetection@@IEAAJW4ThreadUseFailureResponse@@@Z @ 0x18014E10C (-TryEnterOnCurrentThread@CObjectWithThreadUseDetection@@IEAAJW4ThreadUseFailureResponse@@@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall TaskViewHost::DismissViewAnimated(TaskViewHost *this)
{
  struct _RTL_CRITICAL_SECTION *v2; // rdi
  int v3; // esi
  char v5; // [rsp+40h] [rbp+8h] BYREF

  v2 = (struct _RTL_CRITICAL_SECTION *)(((unsigned __int64)this + 24) & -(__int64)(this != 0LL));
  v3 = CObjectWithThreadUseDetection::TryEnterOnCurrentThread(v2, 1LL);
  if ( *((_QWORD *)this + 43) < (unsigned __int64)((__int64)(*((_QWORD *)this + 41) - *((_QWORD *)this + 40)) >> 3) )
    (*(void (__fastcall **)(TaskViewHost *))(*(_QWORD *)this + 40LL))(this);
  if ( *((_DWORD *)this + 184) == 1 )
  {
    std::for_each_std::_Vector_iterator_std::_Vector_val_std::_Simple_types_wil::com_ptr_t_ITaskViewFrame_wil::err_exception_policy_________lambda_44f6d189e7116b6c3e129de871273415___(
      &v5,
      *((_QWORD *)this + 40),
      *((_QWORD *)this + 41),
      this,
      v2,
      v3);
    *((_DWORD *)this + 184) = 2;
  }
  if ( v3 >= 0 )
    LeaveCriticalSection(v2);
  return 0LL;
}

/*
 * XREFs of ??0?$com_ptr_t@VTaskViewFrame@@Uerr_exception_policy@wil@@@wil@@QEAA@PEAVTaskViewFrame@@@Z @ 0x18007C550
 * Callers:
 *     ?DismissAnimated@TaskViewFrame@@UEAAXPE$AAUIMonitorFrameDismissAnimationCallback@@@Z @ 0x18007B710 (-DismissAnimated@TaskViewFrame@@UEAAXPE$AAUIMonitorFrameDismissAnimationCallback@@@Z.c)
 *     _lambda_c4c5c4b54f46ee55e98247dc2d6953d1_::_lambda_c4c5c4b54f46ee55e98247dc2d6953d1_ @ 0x18007C514 (_lambda_c4c5c4b54f46ee55e98247dc2d6953d1_--_lambda_c4c5c4b54f46ee55e98247dc2d6953d1_.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

_QWORD *__fastcall wil::com_ptr_t<TaskViewFrame,wil::err_exception_policy>::com_ptr_t<TaskViewFrame,wil::err_exception_policy>(
        _QWORD *a1,
        __int64 a2)
{
  *a1 = a2;
  if ( a2 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)a2 + 8LL))(a2);
  return a1;
}

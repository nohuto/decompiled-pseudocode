/*
 * XREFs of _lambda_c4c5c4b54f46ee55e98247dc2d6953d1_::_lambda_c4c5c4b54f46ee55e98247dc2d6953d1_ @ 0x18007C514
 * Callers:
 *     WindowsInternal::ComposableShell::Experiences::Switcher::AnimationCompletedEventHandler::AnimationCompletedEventHandler__lambda_c4c5c4b54f46ee55e98247dc2d6953d1___ @ 0x18007C3E4 (WindowsInternal--ComposableShell--Experiences--Switcher--AnimationCompletedEventHandler--Animati.c)
 *     Platform::Details::__abi_FunctorCapture__lambda_c4c5c4b54f46ee55e98247dc2d6953d1__void_::__abi_FunctorCapture__lambda_c4c5c4b54f46ee55e98247dc2d6953d1__void_ @ 0x18007C4B0 (Platform--Details--__abi_FunctorCapture__lambda_c4c5c4b54f46ee55e98247dc2d6953d1__void_--__abi_F.c)
 * Callees:
 *     ??0?$com_ptr_t@VTaskViewFrame@@Uerr_exception_policy@wil@@@wil@@QEAA@PEAVTaskViewFrame@@@Z @ 0x18007C550 (--0-$com_ptr_t@VTaskViewFrame@@Uerr_exception_policy@wil@@@wil@@QEAA@PEAVTaskViewFrame@@@Z.c)
 *     ?__abi_winrt_ptr_ctor@@YAPEAXQE$ADVObject@Platform@@@Z @ 0x18010E5F4 (-__abi_winrt_ptr_ctor@@YAPEAXQE$ADVObject@Platform@@@Z.c)
 */

__int64 __fastcall lambda_c4c5c4b54f46ee55e98247dc2d6953d1_::_lambda_c4c5c4b54f46ee55e98247dc2d6953d1_(
        __int64 a1,
        _QWORD *a2)
{
  wil::com_ptr_t<TaskViewFrame,wil::err_exception_policy>::com_ptr_t<TaskViewFrame,wil::err_exception_policy>(a1, *a2);
  *(_QWORD *)(a1 + 8) = __abi_winrt_ptr_ctor(a2[1]);
  return a1;
}

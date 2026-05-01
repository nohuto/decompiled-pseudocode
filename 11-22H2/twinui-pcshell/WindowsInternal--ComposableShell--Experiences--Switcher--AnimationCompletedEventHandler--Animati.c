/*
 * XREFs of WindowsInternal::ComposableShell::Experiences::Switcher::AnimationCompletedEventHandler::AnimationCompletedEventHandler__lambda_c4c5c4b54f46ee55e98247dc2d6953d1___ @ 0x18007C3E4
 * Callers:
 *     ?DismissAnimated@TaskViewFrame@@UEAAXPE$AAUIMonitorFrameDismissAnimationCallback@@@Z @ 0x18007B710 (-DismissAnimated@TaskViewFrame@@UEAAXPE$AAUIMonitorFrameDismissAnimationCallback@@@Z.c)
 * Callees:
 *     ??1?$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x18000D700 (--1-$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     Platform::Details::__abi_FunctorCapture__lambda_c4c5c4b54f46ee55e98247dc2d6953d1__void_::__abi_FunctorCapture__lambda_c4c5c4b54f46ee55e98247dc2d6953d1__void_ @ 0x18007C4B0 (Platform--Details--__abi_FunctorCapture__lambda_c4c5c4b54f46ee55e98247dc2d6953d1__void_--__abi_F.c)
 *     _lambda_c4c5c4b54f46ee55e98247dc2d6953d1_::_lambda_c4c5c4b54f46ee55e98247dc2d6953d1_ @ 0x18007C514 (_lambda_c4c5c4b54f46ee55e98247dc2d6953d1_--_lambda_c4c5c4b54f46ee55e98247dc2d6953d1_.c)
 *     ??0__abi_FTMWeakRefData@@QEAA@PE$AAVObject@Platform@@W4CallbackContext@2@@Z @ 0x18007CA6C (--0__abi_FTMWeakRefData@@QEAA@PE$AAVObject@Platform@@W4CallbackContext@2@@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
_QWORD *__fastcall WindowsInternal::ComposableShell::Experiences::Switcher::AnimationCompletedEventHandler::AnimationCompletedEventHandler__lambda_c4c5c4b54f46ee55e98247dc2d6953d1___(
        _QWORD *a1,
        __int64 *a2)
{
  __int64 v4; // rax
  __int64 v5; // rax
  __int64 v6; // rcx
  _BYTE v8[24]; // [rsp+20h] [rbp-18h] BYREF

  Platform::Delegate::Delegate(a1 + 2);
  *a1 = &WindowsInternal::ComposableShell::Experiences::Switcher::AnimationCompletedEventHandler::`vftable'{for `__abi_IUnknown'};
  a1[1] = &WindowsInternal::ComposableShell::Experiences::Switcher::AnimationCompletedEventHandler::`vftable'{for `Platform::Object'};
  a1[2] = &WindowsInternal::ComposableShell::Experiences::Switcher::AnimationCompletedEventHandler::`vftable';
  __abi_FTMWeakRefData::__abi_FTMWeakRefData(a1 + 3);
  a1[37] = a1 + 5;
  if ( a1 == (_QWORD *)-40LL )
  {
    v5 = 0LL;
  }
  else
  {
    v4 = lambda_c4c5c4b54f46ee55e98247dc2d6953d1_::_lambda_c4c5c4b54f46ee55e98247dc2d6953d1_(v8, a2);
    v5 = Platform::Details::__abi_FunctorCapture__lambda_c4c5c4b54f46ee55e98247dc2d6953d1__void_::__abi_FunctorCapture__lambda_c4c5c4b54f46ee55e98247dc2d6953d1__void_(
           a1 + 5,
           v4);
  }
  a1[37] = v5;
  v6 = a2[1];
  if ( v6 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 16LL))(v6);
  wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(a2);
  return a1;
}

/*
 * XREFs of ?ControlGained@FullScreenPositioner@@UEAAXPEAUIObjectArray@@W4SHELL_POSITIONER_TYPE@@PEAUIUnknown@@PEAUIPresentationRequestedArgs@@@Z @ 0x1803ECB30
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x18000D700 (--1-$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?ControlGainedHelper@FullScreenPositioner@@AEAAXPEAUIApplicationView@@W4SHELL_POSITIONER_TYPE@@PEAUIPresentationRequestedArgs@@0@Z @ 0x1803ECD70 (-ControlGainedHelper@FullScreenPositioner@@AEAAXPEAUIApplicationView@@W4SHELL_POSITIONER_TYPE@@P.c)
 */

// Hidden C++ exception states: #wind=2
void __fastcall FullScreenPositioner::ControlGained(__int64 a1, __int64 *a2, unsigned int a3, __int64 a4, __int64 a5)
{
  __int64 v7; // rax
  void (*v8)(void); // rax
  const char *v9; // r9
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  __int64 v11; // [rsp+48h] [rbp+10h] BYREF

  v7 = *a2;
  v11 = 0LL;
  v8 = *(void (**)(void))(v7 + 32);
  try
  {
    v8();
    FullScreenPositioner::ControlGainedHelper(a1 - 120, v11, a3, a5, 0LL);
    wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v11);
  }
  catch ( ... )
  {
    wil::details::in1diag3::Log_CaughtException(
      retaddr,
      (void *)0x245,
      (int)"pcshell\\twinui\\fullscreen\\lib\\fullscreenpositioner.cpp",
      v9);
  }
}

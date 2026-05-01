/*
 * XREFs of ?IsTargetApplicationRunning@CopilotHotkeyManager@@AEAA_NXZ @ 0x180271630
 * Callers:
 *     ?SendWindowMessageOnInvocation@CopilotHotkeyManager@@AEAA_NHAEAPEAUHWND__@@@Z @ 0x180273224 (-SendWindowMessageOnInvocation@CopilotHotkeyManager@@AEAA_NHAEAPEAUHWND__@@@Z.c)
 * Callees:
 *     ??1?$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x18000D700 (--1-$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
bool __fastcall CopilotHotkeyManager::IsTargetApplicationRunning(CopilotHotkeyManager *this)
{
  __int64 *v1; // r9
  __int64 v2; // rax
  _QWORD *v3; // rdx
  bool v4; // bl
  __int64 v6; // [rsp+30h] [rbp+8h] BYREF

  v6 = 0LL;
  v1 = (__int64 *)*((_QWORD *)this + 20);
  v2 = *v1;
  v6 = 0LL;
  v3 = (_QWORD *)((char *)this + 192);
  if ( *((_QWORD *)this + 27) >= 8uLL )
    v3 = (_QWORD *)*v3;
  v4 = (*(int (__fastcall **)(__int64 *, _QWORD *, __int64 *))(v2 + 64))(v1, v3, &v6) >= 0;
  wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v6);
  return v4;
}

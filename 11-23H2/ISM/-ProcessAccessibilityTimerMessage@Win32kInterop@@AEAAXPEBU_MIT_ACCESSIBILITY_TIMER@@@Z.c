/*
 * XREFs of ?ProcessAccessibilityTimerMessage@Win32kInterop@@AEAAXPEBU_MIT_ACCESSIBILITY_TIMER@@@Z @ 0x1800F9D84
 * Callers:
 *     std::_Func_impl_no_alloc__lambda_9505533670deb393e9e7bf932fb2c1e9__void__MIT_ACCESSIBILITY_TIMER_const___::_Do_call @ 0x1800FB920 (std--_Func_impl_no_alloc__lambda_9505533670deb393e9e7bf932fb2c1e9__void__MIT_ACCESS_ea_1800FB920.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIRawInputProvider@@@WRL@Microsoft@@IEAAKXZ @ 0x180017AC0 (-InternalRelease@-$ComPtr@UIRawInputProvider@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180058998 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180065970 (_guard_xfg_dispatch_icall_nop.c)
 */

void __fastcall Win32kInterop::ProcessAccessibilityTimerMessage(
        Win32kInterop *this,
        const struct _MIT_ACCESSIBILITY_TIMER *a2)
{
  int v3; // ebx
  __int64 *v5; // r14
  __int64 v6; // rdi
  __int64 (__fastcall *v7)(__int64, __int64 (*)(), _QWORD, __int64 *); // rbx
  int v8; // eax
  __int64 v9; // rcx
  __int64 v10; // rax
  int v11; // [rsp+20h] [rbp-18h]
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  v3 = *((_DWORD *)a2 + 1) & 2;
  v5 = (__int64 *)((char *)this + 8 * (unsigned __int16)(*(_WORD *)a2 - 1) + 496);
  if ( *v5 )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)*v5 + 96LL))(*v5);
    Microsoft::WRL::ComPtr<IRawInputProvider>::InternalRelease(v5);
  }
  if ( !v3 )
  {
    v6 = *((_QWORD *)this + 61);
    v7 = *(__int64 (__fastcall **)(__int64, __int64 (*)(), _QWORD, __int64 *))(*(_QWORD *)v6 + 144LL);
    Microsoft::WRL::ComPtr<IRawInputProvider>::InternalRelease(v5);
    v8 = v7(v6, lambda_dc6b4baf3ce8e698d0113e7b0a7480ab_::_lambda_invoker_cdecl_, *(int *)a2, v5);
    if ( v8 < 0 )
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        (void *)0x2A4,
        (int)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputhosts\\components\\win32kinterop\\lib\\win32kinterop.cpp",
        (const char *)(unsigned int)v8,
        v11);
    v9 = *v5;
    v10 = *(_QWORD *)*v5;
    if ( (*((_BYTE *)a2 + 4) & 1) != 0 )
      (*(void (__fastcall **)(__int64, _QWORD, _QWORD))(v10 + 80))(v9, 10000 * *((_DWORD *)a2 + 2), 0LL);
    else
      (*(void (__fastcall **)(__int64, _QWORD, _QWORD))(v10 + 80))(v9, 0LL, 10000 * *((_DWORD *)a2 + 2));
  }
}

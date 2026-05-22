/*
 * XREFs of ?ProcessAccessibilityTimerMessage@Win32kInterop@@AEAAXPEBU_MIT_ACCESSIBILITY_TIMER@@@Z @ 0x1800E0450
 * Callers:
 *     std::_Func_impl_no_alloc__lambda_9505533670deb393e9e7bf932fb2c1e9__void__MIT_ACCESSIBILITY_TIMER_const___::_Do_call @ 0x1800E21F0 (std--_Func_impl_no_alloc__lambda_9505533670deb393e9e7bf932fb2c1e9__void__MIT_ACCESS_ea_1800E21F0.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIContainerInfoInputObjectProxy@@@WRL@Microsoft@@IEAAKXZ @ 0x1800113C4 (-InternalRelease@-$ComPtr@UIContainerInfoInputObjectProxy@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18004C7A4 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18004E9E0 (_guard_xfg_dispatch_icall_nop.c)
 */

void __fastcall Win32kInterop::ProcessAccessibilityTimerMessage(
        Win32kInterop *this,
        const struct _MIT_ACCESSIBILITY_TIMER *a2)
{
  __int64 v2; // r15
  int v4; // ebx
  __int64 *v6; // r14
  __int64 v7; // rdi
  __int64 (__fastcall *v8)(__int64, __int64 (*)(), _QWORD, __int64 *); // rbx
  int v9; // eax
  __int64 *v10; // rcx
  __int64 v11; // rax
  int v12; // [rsp+20h] [rbp-28h]
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]

  v2 = (unsigned __int16)(*(_WORD *)a2 - 1);
  v4 = *((_DWORD *)a2 + 1) & 2;
  v6 = (__int64 *)((char *)this + 8 * v2 + 496);
  if ( *v6 )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)*v6 + 96LL))(*v6);
    Microsoft::WRL::ComPtr<IContainerInfoInputObjectProxy>::InternalRelease(v6);
  }
  if ( !v4 )
  {
    v7 = *((_QWORD *)this + 61);
    v8 = *(__int64 (__fastcall **)(__int64, __int64 (*)(), _QWORD, __int64 *))(*(_QWORD *)v7 + 144LL);
    Microsoft::WRL::ComPtr<IContainerInfoInputObjectProxy>::InternalRelease(v6);
    v9 = v8(v7, lambda_dc6b4baf3ce8e698d0113e7b0a7480ab_::_lambda_invoker_cdecl_, *(int *)a2, v6);
    if ( v9 < 0 )
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        (void *)0x2C2,
        (int)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputhosts\\components\\win32kinterop\\lib\\win32kinterop.cpp",
        (const char *)(unsigned int)v9,
        v12);
    v10 = (__int64 *)*((_QWORD *)this + v2 + 62);
    v11 = *v10;
    if ( (*((_BYTE *)a2 + 4) & 1) != 0 )
      (*(void (__fastcall **)(__int64 *, _QWORD, _QWORD))(v11 + 80))(v10, 10000 * *((_DWORD *)a2 + 2), 0LL);
    else
      (*(void (__fastcall **)(__int64 *, _QWORD, _QWORD))(v11 + 80))(v10, 0LL, 10000 * *((_DWORD *)a2 + 2));
  }
}

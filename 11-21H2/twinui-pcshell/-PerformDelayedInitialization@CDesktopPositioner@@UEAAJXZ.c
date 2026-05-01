/*
 * XREFs of ?PerformDelayedInitialization@CDesktopPositioner@@UEAAJXZ @ 0x180177BF0
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$com_ptr_t@UISnapAssistCallback2@WindowSnapping@Shell@Internal@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18000B3E0 (--1-$com_ptr_t@UISnapAssistCallback2@WindowSnapping@Shell@Internal@Windows@@Uerr_returncode_poli.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800917F4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CDesktopPositioner::PerformDelayedInitialization(CDesktopPositioner *this)
{
  __int64 *v1; // rcx
  __int64 v2; // rax
  int v3; // eax
  unsigned int v4; // ebx
  __int64 v6; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  __int64 v8; // [rsp+30h] [rbp+8h] BYREF

  v1 = (__int64 *)*((_QWORD *)this + 34);
  v2 = *v1;
  v8 = 0LL;
  v3 = (*(__int64 (__fastcall **)(__int64 *, __int64, __int64 *))(v2 + 32))(v1, 1LL, &v8);
  v4 = v3;
  if ( v3 < 0 )
  {
    v6 = 180LL;
LABEL_7:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v6,
      (__int64)"pcshell\\twinui\\shellpositioners\\lib\\desktoppositioner.cpp",
      (const char *)(unsigned int)v3);
    goto LABEL_4;
  }
  v3 = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v8 + 48LL))(v8, 3LL);
  v4 = v3;
  if ( v3 < 0 )
  {
    v6 = 181LL;
    goto LABEL_7;
  }
  v4 = 0;
LABEL_4:
  wil::com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>::~com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>(&v8);
  return v4;
}

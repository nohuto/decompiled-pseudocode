/*
 * XREFs of _lambda_7038a910990fc1bfa49a8b972a544a3b_::operator() @ 0x1804122BC
 * Callers:
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_7038a910990fc1bfa49a8b972a544a3b___::Run @ 0x180416CC0 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_7038a910990fc1bfa49a8b972a544a3b___--Run.c)
 * Callees:
 *     ??1?$com_ptr_t@UISnapAssistCallback2@WindowSnapping@Shell@Internal@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18000B3E0 (--1-$com_ptr_t@UISnapAssistCallback2@WindowSnapping@Shell@Internal@Windows@@Uerr_returncode_poli.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800917F4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall lambda_7038a910990fc1bfa49a8b972a544a3b_::operator()(HSTRING *a1)
{
  HRESULT v2; // eax
  unsigned int v3; // ebx
  __int64 v4; // rdx
  LPVOID v5; // rbx
  __int64 (__fastcall *v6)(LPVOID, PCWSTR, _QWORD, _QWORD, int *); // rdi
  PCWSTR StringRawBuffer; // rax
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  int v10; // [rsp+48h] [rbp+10h] BYREF
  LPVOID v11; // [rsp+50h] [rbp+18h] BYREF

  v11 = 0LL;
  v2 = CoCreateInstance(&CLSID_ApplicationActivationClient, 0LL, 1u, &GUID_2e941141_7f97_4756_ba1d_9decde894a3d, &v11);
  v3 = v2;
  if ( v2 >= 0 )
  {
    v5 = v11;
    v6 = *(__int64 (__fastcall **)(LPVOID, PCWSTR, _QWORD, _QWORD, int *))(*(_QWORD *)v11 + 24LL);
    StringRawBuffer = WindowsGetStringRawBuffer(*a1, 0LL);
    v2 = v6(v5, StringRawBuffer, 0LL, 0LL, &v10);
    v3 = v2;
    if ( v2 >= 0 )
    {
      v3 = 0;
      goto LABEL_7;
    }
    v4 = 3152LL;
  }
  else
  {
    v4 = 3145LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v4,
    (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\uwpwindowwrapperbase.cpp",
    (const char *)(unsigned int)v2);
LABEL_7:
  wil::com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>::~com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>((__int64 *)&v11);
  return v3;
}

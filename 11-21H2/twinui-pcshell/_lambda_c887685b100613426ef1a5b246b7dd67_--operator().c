/*
 * XREFs of _lambda_c887685b100613426ef1a5b246b7dd67_::operator() @ 0x180166868
 * Callers:
 *     Windows::Internal::ComTaskPool::CResultTaskWrapper__lambda_c887685b100613426ef1a5b246b7dd67___::Run @ 0x180166840 (Windows--Internal--ComTaskPool--CResultTaskWrapper__lambda_c887685b100613426ef1a5b246b7dd67___--.c)
 * Callees:
 *     ??1?$com_ptr_t@UISnapAssistCallback2@WindowSnapping@Shell@Internal@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18000B3E0 (--1-$com_ptr_t@UISnapAssistCallback2@WindowSnapping@Shell@Internal@Windows@@Uerr_returncode_poli.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18012A008 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall lambda_c887685b100613426ef1a5b246b7dd67_::operator()(_BYTE **a1)
{
  __int64 v2; // rdi
  __int64 (__fastcall *v3)(__int64, __int64 *); // rsi
  __int64 v4; // rcx
  int v5; // eax
  int v6; // ecx
  int v7; // eax
  __int64 v8; // rax
  int v9; // eax
  int v10; // eax
  int v12; // eax
  int v13; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  __int64 v15; // [rsp+30h] [rbp+8h] BYREF

  v15 = 0LL;
  v2 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)*a1 + 10) + 32LL))(*((_QWORD *)*a1 + 10));
  v3 = *(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v2 + 48LL);
  v4 = v15;
  v15 = 0LL;
  if ( v4 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
  v5 = v3(v2, &v15);
  if ( v5 < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x4A,
      (int)"pcshell\\twinui\\windowingenvironment\\lib\\windowingenvironmentconfig.cpp",
      (const char *)(unsigned int)v5,
      v13);
  v6 = *(_DWORD *)a1[1];
  if ( v6 )
  {
    if ( (v6 & 1) == 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0x52,
        (int)"pcshell\\twinui\\windowingenvironment\\lib\\windowingenvironmentconfig.cpp",
        (const char *)0x80070057LL,
        v13);
    v7 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)*a1 + 8) + 64LL))(*((_QWORD *)*a1 + 8));
    if ( v7 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0x54,
        (int)"pcshell\\twinui\\windowingenvironment\\lib\\windowingenvironmentconfig.cpp",
        (const char *)(unsigned int)v7,
        v13);
    if ( (*a1[1] & 2) != 0 )
    {
      v8 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)*a1 + 10) + 24LL))(*((_QWORD *)*a1 + 10));
      v9 = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v8 + 96LL))(v8, *((_QWORD *)*a1 + 8));
      if ( v9 < 0 )
        wil::details::in1diag3::Throw_Hr(
          retaddr,
          (void *)0x58,
          (int)"pcshell\\twinui\\windowingenvironment\\lib\\windowingenvironmentconfig.cpp",
          (const char *)(unsigned int)v9,
          v13);
    }
  }
  else
  {
    v12 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(**((_QWORD **)*a1 + 8) + 64LL))(*((_QWORD *)*a1 + 8), 0LL);
    if ( v12 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0x4E,
        (int)"pcshell\\twinui\\windowingenvironment\\lib\\windowingenvironmentconfig.cpp",
        (const char *)(unsigned int)v12,
        v13);
  }
  v10 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v15 + 56LL))(v15);
  if ( v10 < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x5C,
      (int)"pcshell\\twinui\\windowingenvironment\\lib\\windowingenvironmentconfig.cpp",
      (const char *)(unsigned int)v10,
      v13);
  *((_DWORD *)*a1 + 23) = *(_DWORD *)a1[1];
  wil::com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>::~com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>(&v15);
  return 0LL;
}

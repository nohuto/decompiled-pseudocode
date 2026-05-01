/*
 * XREFs of _lambda_224f9cb247002186ab59ad0be817f863_::operator() @ 0x18010964C
 * Callers:
 *     Windows::Internal::ComTaskPool::CResultTaskWrapper__lambda_224f9cb247002186ab59ad0be817f863___::Run @ 0x180108C00 (Windows--Internal--ComTaskPool--CResultTaskWrapper__lambda_224f9cb247002186ab59ad0be817f863___--.c)
 * Callees:
 *     ??1?$com_ptr_t@UISnapAssistCallback2@WindowSnapping@Shell@Internal@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18000B3E0 (--1-$com_ptr_t@UISnapAssistCallback2@WindowSnapping@Shell@Internal@Windows@@Uerr_returncode_poli.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18012A008 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall lambda_224f9cb247002186ab59ad0be817f863_::operator()(_DWORD **a1)
{
  __int64 v2; // rdi
  __int64 (__fastcall *v3)(__int64, __int64 *); // rsi
  __int64 v4; // rcx
  int v5; // eax
  __int64 *v6; // rcx
  __int64 v7; // rax
  int v8; // eax
  char v9; // di
  int v10; // eax
  __int64 v11; // rdx
  _QWORD **v12; // r8
  __int64 v13; // r9
  int v14; // eax
  __int64 v15; // rdx
  __int64 v16; // rdx
  _DWORD *v17; // rdx
  __int64 v18; // r8
  int v19; // eax
  int v20; // eax
  int v22; // eax
  int v23; // eax
  int v24; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  __int64 v26; // [rsp+30h] [rbp+8h] BYREF
  __int64 v27; // [rsp+38h] [rbp+10h] BYREF

  v27 = 0LL;
  v2 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)*a1 + 10) + 32LL))(*((_QWORD *)*a1 + 10));
  v3 = *(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v2 + 48LL);
  v4 = v27;
  v27 = 0LL;
  if ( v4 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
  v5 = v3(v2, &v27);
  if ( v5 < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x78,
      (unsigned int)"pcshell\\twinui\\windowingenvironment\\lib\\windowingenvironmentconfig.cpp",
      (const char *)(unsigned int)v5,
      v24);
  v26 = 0LL;
  v6 = (__int64 *)*((_QWORD *)*a1 + 8);
  v7 = *v6;
  v26 = 0LL;
  v8 = (*(__int64 (__fastcall **)(__int64 *, __int64 *))(v7 + 88))(v6, &v26);
  if ( v8 < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x7B,
      (unsigned int)"pcshell\\twinui\\windowingenvironment\\lib\\windowingenvironmentconfig.cpp",
      (const char *)(unsigned int)v8,
      v24);
  v9 = 0;
  if ( (*a1[1] & 1) != ((*a1)[24] & 1) )
  {
    v10 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v26 + 152LL))(v26);
    if ( v10 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0x81,
        (unsigned int)"pcshell\\twinui\\windowingenvironment\\lib\\windowingenvironmentconfig.cpp",
        (const char *)(unsigned int)v10,
        v24);
  }
  v11 = (unsigned int)*a1[1];
  v12 = (_QWORD **)*a1;
  v13 = *a1[1] & 2;
  if ( ((*a1[1] & 2) != 0) != (((*a1)[24] >> 1) & 1) )
  {
    LOBYTE(v11) = (_DWORD)v13 != 0;
    v14 = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v26 + 56LL))(v26, v11);
    if ( v14 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0x86,
        (unsigned int)"pcshell\\twinui\\windowingenvironment\\lib\\windowingenvironmentconfig.cpp",
        (const char *)(unsigned int)v14,
        v24);
    v9 = 1;
    LODWORD(v11) = *a1[1];
    v12 = (_QWORD **)*a1;
  }
  v15 = v11 & 4;
  if ( ((_DWORD)v15 != 0) != ((*((_DWORD *)v12 + 24) >> 2) & 1) )
  {
    LOBYTE(v15) = (_DWORD)v15 != 0;
    v22 = (*(__int64 (__fastcall **)(__int64, __int64, _QWORD **, __int64))(*(_QWORD *)v26 + 136LL))(v26, v15, v12, v13);
    if ( v22 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0x8C,
        (unsigned int)"pcshell\\twinui\\windowingenvironment\\lib\\windowingenvironmentconfig.cpp",
        (const char *)(unsigned int)v22,
        v24);
  }
  v16 = *a1[1] & 8;
  if ( ((*a1[1] & 8) != 0) == (((*a1)[24] >> 3) & 1) )
  {
    if ( !v9 )
      goto LABEL_14;
  }
  else
  {
    LOBYTE(v16) = (_DWORD)v16 != 0;
    v23 = (*(__int64 (__fastcall **)(__int64, __int64, _QWORD **, __int64))(*(_QWORD *)v26 + 104LL))(v26, v16, v12, v13);
    if ( v23 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0x91,
        (unsigned int)"pcshell\\twinui\\windowingenvironment\\lib\\windowingenvironmentconfig.cpp",
        (const char *)(unsigned int)v23,
        v24);
  }
  v17 = a1[1];
  v18 = *v17 & 0xA;
  LOBYTE(v17) = (*(_BYTE *)v17 & 0xA) == 10;
  v19 = (*(__int64 (__fastcall **)(__int64, _DWORD *, __int64, __int64))(*(_QWORD *)v26 + 88LL))(v26, v17, v18, v13);
  if ( v19 < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x98,
      (unsigned int)"pcshell\\twinui\\windowingenvironment\\lib\\windowingenvironmentconfig.cpp",
      (const char *)(unsigned int)v19,
      v24);
LABEL_14:
  v20 = (*(__int64 (__fastcall **)(__int64, __int64, _QWORD **, __int64))(*(_QWORD *)v27 + 56LL))(v27, v16, v12, v13);
  if ( v20 < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x9B,
      (unsigned int)"pcshell\\twinui\\windowingenvironment\\lib\\windowingenvironmentconfig.cpp",
      (const char *)(unsigned int)v20,
      v24);
  (*a1)[24] = *a1[1];
  wil::com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>::~com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>(&v26);
  wil::com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>::~com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>(&v27);
  return 0LL;
}

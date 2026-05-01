/*
 * XREFs of _lambda_5c5493d934288f02b1cda8463f34ddab_::operator() @ 0x180022920
 * Callers:
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_5c5493d934288f02b1cda8463f34ddab___::Run @ 0x180022910 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_5c5493d934288f02b1cda8463f34ddab___--Run.c)
 * Callees:
 *     ??$?0$0DM@@StringReference@Internal@Windows@@QEAA@AEAY0DM@$$CBG@Z @ 0x180022A68 (--$-0$0DM@@StringReference@Internal@Windows@@QEAA@AEAY0DM@$$CBG@Z.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18012A008 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x1801881F0 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=5
__int64 __fastcall lambda_5c5493d934288f02b1cda8463f34ddab_::operator()(HWND *a1)
{
  DWORD WindowThreadProcessId; // ebx
  const unsigned __int16 (*v2)[60]; // rdx
  _QWORD *v3; // rax
  int ActivationFactory; // eax
  __int64 v5; // rax
  int v6; // eax
  int v7; // eax
  int v9; // [rsp+20h] [rbp-68h]
  DWORD dwProcessId; // [rsp+30h] [rbp-58h] BYREF
  __int64 v11; // [rsp+38h] [rbp-50h] BYREF
  __int64 *v12; // [rsp+40h] [rbp-48h] BYREF
  _BYTE v13[8]; // [rsp+48h] [rbp-40h] BYREF
  HSTRING string; // [rsp+50h] [rbp-38h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+0h]

  WindowThreadProcessId = GetWindowThreadProcessId(*a1, &dwProcessId);
  v12 = 0LL;
  v3 = (_QWORD *)Windows::Internal::StringReference::StringReference(&string, v2);
  ActivationFactory = RoGetActivationFactory(*v3, &GUID_365b4229_bffa_4446_8dc8_a293bebbe536, &v12);
  if ( ActivationFactory < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0xA2D,
      (unsigned int)"pcshell\\twinui\\viewmanagerinterop\\lib\\windowwrapperbase.cpp",
      (const char *)(unsigned int)ActivationFactory,
      v9);
  v11 = 0LL;
  v5 = *v12;
  v11 = 0LL;
  v6 = (*(__int64 (__fastcall **)(__int64 *, _QWORD, _QWORD, __int64 *))(v5 + 48))(
         v12,
         dwProcessId,
         WindowThreadProcessId,
         &v11);
  if ( v6 < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0xA33,
      (unsigned int)"pcshell\\twinui\\viewmanagerinterop\\lib\\windowwrapperbase.cpp",
      (const char *)(unsigned int)v6,
      v9);
  v7 = (*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)v11 + 48LL))(v11, v13);
  if ( v7 < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0xA36,
      (unsigned int)"pcshell\\twinui\\viewmanagerinterop\\lib\\windowwrapperbase.cpp",
      (const char *)(unsigned int)v7,
      v9);
  if ( v11 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 16LL))(v11);
  if ( v12 )
    (*(void (__fastcall **)(__int64 *))(*v12 + 16))(v12);
  return 0LL;
}

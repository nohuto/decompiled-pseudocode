/*
 * XREFs of ?SetGroupingParam@CAudioSession@@UEAAJPEBU_GUID@@0@Z @ 0x1800E2CC0
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180031C24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180075A20 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall CAudioSession::SetGroupingParam(CAudioSession *this, const struct _GUID *a2, const struct _GUID *a3)
{
  _QWORD *v6; // rbp
  _QWORD *i; // rsi
  int v8; // eax
  unsigned int v9; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  unsigned int v12; // [rsp+40h] [rbp+8h] BYREF

  v12 = 0;
  I_RpcBindingInqLocalClientPID(0LL, &v12);
  if ( v12 == *((_DWORD *)this + 51) )
  {
    EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 664));
    v6 = (_QWORD *)*((_QWORD *)this + 89);
    for ( i = (_QWORD *)*((_QWORD *)this + 88); i != v6; ++i )
      (*(void (__fastcall **)(_QWORD))(*(_QWORD *)*i + 456LL))(*i);
    if ( this != (CAudioSession *)-664LL )
      LeaveCriticalSection((LPCRITICAL_SECTION)((char *)this + 664));
  }
  v8 = (*(__int64 (__fastcall **)(char *, const struct _GUID *, const struct _GUID *))(*((_QWORD *)this + 1) + 112LL))(
         (char *)this + 8,
         a2,
         a3);
  v9 = v8;
  if ( v8 >= 0 )
    return 0LL;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x2A9,
    (int)"avcore\\audiocore\\server\\audiosrv\\dll\\audiosession.cpp",
    (const char *)(unsigned int)v8);
  return v9;
}

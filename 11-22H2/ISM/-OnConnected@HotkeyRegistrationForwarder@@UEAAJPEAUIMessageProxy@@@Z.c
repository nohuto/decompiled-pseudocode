/*
 * XREFs of ?OnConnected@HotkeyRegistrationForwarder@@UEAAJPEAUIMessageProxy@@@Z @ 0x18001B910
 * Callers:
 *     <none>
 * Callees:
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180059DB0 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800793F0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall HotkeyRegistrationForwarder::OnConnected(
        HotkeyRegistrationForwarder *this,
        struct IMessageProxy *a2,
        __int64 a3)
{
  __int64 v3; // rsi
  __int64 i; // rbx
  __int64 *v7; // rcx
  int v8; // edx
  __int64 v9; // rax
  int v10; // eax
  int v11[2]; // [rsp+20h] [rbp-18h] BYREF
  int v12; // [rsp+28h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  v3 = *((_QWORD *)this + 3);
  for ( i = *((_QWORD *)this + 2); i != v3; i += 12LL )
  {
    v7 = (__int64 *)*((_QWORD *)this + 6);
    v8 = *(_DWORD *)(i + 8);
    *(_QWORD *)v11 = *(_QWORD *)i;
    v9 = *v7;
    v12 = v8;
    LOBYTE(a3) = 1;
    v10 = (*(__int64 (__fastcall **)(__int64 *, int *, __int64))(v9 + 488))(v7, v11, a3);
    if ( v10 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x80,
        (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\utilities\\hotkeyregistrationforwarder\\hotkeyregistrationforwarder.cpp",
        (const char *)(unsigned int)v10,
        v11[0]);
  }
  return 0LL;
}

/*
 * XREFs of sub_1800DC0E0 @ 0x1800DC0E0
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x18000B300 (__security_check_cookie.c)
 *     sub_1800DA7BC @ 0x1800DA7BC (sub_1800DA7BC.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800FEEF0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
bool __fastcall sub_1800DC0E0(__int64 a1)
{
  _QWORD *v1; // rax
  __int64 v2; // rcx
  __int64 v4; // [rsp+20h] [rbp-168h] BYREF
  _BYTE v5[320]; // [rsp+30h] [rbp-158h] BYREF

  v1 = sub_1800DA7BC(a1, &v4);
  (*(void (__fastcall **)(_QWORD, _BYTE *))(*(_QWORD *)*v1 + 80LL))(*v1, v5);
  v2 = v4;
  if ( v4 )
  {
    v4 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 16LL))(v2);
  }
  return (v5[304] & 2) == 0;
}

/*
 * XREFs of sub_1800C6A20 @ 0x1800C6A20
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x18000B300 (__security_check_cookie.c)
 *     sub_18000E72C @ 0x18000E72C (sub_18000E72C.c)
 *     sub_1800C570C @ 0x1800C570C (sub_1800C570C.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800E39B0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
bool __fastcall sub_1800C6A20(__int64 a1)
{
  _QWORD *v1; // rax
  __int64 v3[2]; // [rsp+20h] [rbp-168h] BYREF
  _BYTE v4[320]; // [rsp+30h] [rbp-158h] BYREF

  v1 = sub_1800C570C(a1, v3);
  (*(void (__fastcall **)(_QWORD, _BYTE *))(*(_QWORD *)*v1 + 80LL))(*v1, v4);
  sub_18000E72C(v3);
  return (v4[304] & 2) == 0;
}

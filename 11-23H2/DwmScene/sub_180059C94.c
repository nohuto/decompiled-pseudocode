/*
 * XREFs of sub_180059C94 @ 0x180059C94
 * Callers:
 *     sub_18005AF50 @ 0x18005AF50 (sub_18005AF50.c)
 *     sub_1800DE4F0 @ 0x1800DE4F0 (sub_1800DE4F0.c)
 * Callees:
 *     __security_check_cookie @ 0x18000B300 (__security_check_cookie.c)
 *     sub_18001DE1C @ 0x18001DE1C (sub_18001DE1C.c)
 *     sub_18002771C @ 0x18002771C (sub_18002771C.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800E39B0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_180059C94(__int64 a1, __int64 a2)
{
  _BYTE *v3; // rax
  __int64 (__fastcall ***v4)(_QWORD, _BYTE *); // rcx
  __int64 v5; // rdx
  _BYTE v7[56]; // [rsp+20h] [rbp-39h] BYREF
  _BYTE *v8; // [rsp+58h] [rbp-1h]
  _BYTE v9[56]; // [rsp+60h] [rbp+7h] BYREF
  __int64 v10; // [rsp+98h] [rbp+3Fh]

  v3 = 0LL;
  v8 = 0LL;
  v4 = *(__int64 (__fastcall ****)(_QWORD, _BYTE *))(a2 + 56);
  if ( v4 )
  {
    v3 = (_BYTE *)(**v4)(v4, v7);
    v8 = v3;
  }
  if ( v3 == v7 || *(_QWORD *)(a1 + 56) == a1 )
  {
    v10 = 0LL;
    sub_18002771C((__int64)v9, (__int64)v7);
    sub_18002771C((__int64)v7, a1);
    sub_18002771C(a1, (__int64)v9);
    sub_18001DE1C((__int64)v9, v5);
  }
  else
  {
    v8 = *(_BYTE **)(a1 + 56);
    *(_QWORD *)(a1 + 56) = v3;
  }
  sub_18001DE1C((__int64)v7, a2);
  return a1;
}

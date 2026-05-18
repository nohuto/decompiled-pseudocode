/*
 * XREFs of sub_18005B860 @ 0x18005B860
 * Callers:
 *     sub_18005A8D0 @ 0x18005A8D0 (sub_18005A8D0.c)
 *     sub_180062BE0 @ 0x180062BE0 (sub_180062BE0.c)
 *     sub_180077414 @ 0x180077414 (sub_180077414.c)
 *     sub_1800DC2D0 @ 0x1800DC2D0 (sub_1800DC2D0.c)
 * Callees:
 *     __security_check_cookie @ 0x18000B300 (__security_check_cookie.c)
 *     sub_180029710 @ 0x180029710 (sub_180029710.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800FEEF0 (_guard_xfg_dispatch_icall_nop.c)
 */

void __fastcall sub_18005B860(__int64 a1, __int64 a2)
{
  __int64 v4; // rcx
  __int64 v5; // rax
  _BYTE *v6; // rdx
  _BYTE v7[56]; // [rsp+20h] [rbp-58h] BYREF
  _BYTE *v8; // [rsp+58h] [rbp-20h]

  v4 = *(_QWORD *)(a1 + 56);
  if ( v4 == a1 || (v5 = *(_QWORD *)(a2 + 56), v5 == a2) )
  {
    v8 = 0LL;
    sub_180029710((__int64)v7, a1);
    sub_180029710(a1, a2);
    sub_180029710(a2, (__int64)v7);
    if ( v8 )
    {
      v6 = v7;
      LOBYTE(v6) = v8 != v7;
      (*(void (__fastcall **)(_BYTE *, _BYTE *))(*(_QWORD *)v8 + 32LL))(v8, v6);
    }
  }
  else
  {
    *(_QWORD *)(a1 + 56) = v5;
    *(_QWORD *)(a2 + 56) = v4;
  }
}

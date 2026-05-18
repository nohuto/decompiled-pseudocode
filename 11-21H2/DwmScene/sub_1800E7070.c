/*
 * XREFs of sub_1800E7070 @ 0x1800E7070
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x18000B300 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800FEEF0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_1800E7070(__int64 *a1, __int64 a2, float a3, float a4, int a5, int a6)
{
  __int64 v6; // rax
  _DWORD v8[4]; // [rsp+20h] [rbp-28h] BYREF

  v6 = *a1;
  v8[2] = a5;
  v8[3] = a6;
  *(float *)v8 = a3;
  *(float *)&v8[1] = a4;
  return (*(__int64 (__fastcall **)(__int64 *, __int64, _DWORD *))(v6 + 88))(a1, a2, v8);
}

/*
 * XREFs of sub_18008B478 @ 0x18008B478
 * Callers:
 *     sub_180088AB8 @ 0x180088AB8 (sub_180088AB8.c)
 * Callees:
 *     sub_18008863C @ 0x18008863C (sub_18008863C.c)
 *     sub_1800888BC @ 0x1800888BC (sub_1800888BC.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800E39B0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_18008B478(__int64 *a1, __int64 a2, __int64 a3, __int64 a4, int a5, int a6)
{
  __int64 *v8; // rax
  __int64 v10; // [rsp+50h] [rbp+8h] BYREF

  v8 = (__int64 *)(*(__int64 (__fastcall **)(__int64 *, __int64 *))(*a1 + 48))(a1, &v10);
  sub_18008863C(a1 + 12, v8);
  sub_1800888BC(&v10);
  return (*(__int64 (__fastcall **)(__int64 *, __int64))(*a1 + 56))(a1, a2);
}

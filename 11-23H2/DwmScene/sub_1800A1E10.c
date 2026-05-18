/*
 * XREFs of sub_1800A1E10 @ 0x1800A1E10
 * Callers:
 *     sub_1800A29C8 @ 0x1800A29C8 (sub_1800A29C8.c)
 * Callees:
 *     sub_180010530 @ 0x180010530 (sub_180010530.c)
 *     sub_18001246C @ 0x18001246C (sub_18001246C.c)
 *     sub_1800124F8 @ 0x1800124F8 (sub_1800124F8.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800E39B0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_1800A1E10(__int64 a1, _QWORD *a2)
{
  _QWORD *v3; // rax
  __int64 (__fastcall *v4)(__int64, _QWORD *); // r8
  __int64 v5; // r9
  __int64 result; // rax
  __int64 v7; // rcx
  _QWORD v8[3]; // [rsp+20h] [rbp-18h] BYREF

  sub_1800124F8((__int64 *)(a1 + 144), a2);
  v3 = sub_18001246C(v8, a2);
  result = v4(v5, v3);
  v7 = a2[1];
  if ( v7 )
    return sub_180010530(v7);
  return result;
}

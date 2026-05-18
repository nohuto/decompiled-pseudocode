/*
 * XREFs of sub_1800A1E84 @ 0x1800A1E84
 * Callers:
 *     sub_1800A2788 @ 0x1800A2788 (sub_1800A2788.c)
 *     sub_1800A29C8 @ 0x1800A29C8 (sub_1800A29C8.c)
 *     sub_1800A2DA0 @ 0x1800A2DA0 (sub_1800A2DA0.c)
 *     sub_1800A2EC0 @ 0x1800A2EC0 (sub_1800A2EC0.c)
 *     sub_1800A38B4 @ 0x1800A38B4 (sub_1800A38B4.c)
 * Callees:
 *     sub_180010530 @ 0x180010530 (sub_180010530.c)
 *     sub_18001246C @ 0x18001246C (sub_18001246C.c)
 *     sub_1800124F8 @ 0x1800124F8 (sub_1800124F8.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800E39B0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall sub_1800A1E84(__int64 a1, _QWORD *a2, _QWORD *a3)
{
  _QWORD *v6; // rax
  __int64 (__fastcall *v7)(__int64, _QWORD *); // r9
  __int64 v8; // r11
  __int64 result; // rax
  __int64 v10; // rcx
  __int64 v11; // rcx
  __int64 v12; // [rsp+20h] [rbp-38h] BYREF
  _QWORD v13[5]; // [rsp+30h] [rbp-28h] BYREF

  sub_1800124F8((__int64 *)(a1 + 144), a2);
  sub_1800124F8((__int64 *)(a1 + 160), a3);
  sub_18001246C(&v12, a3);
  v6 = sub_18001246C(v13, a2);
  result = v7(v8, v6);
  v10 = a2[1];
  if ( v10 )
    result = sub_180010530(v10);
  v11 = a3[1];
  if ( v11 )
    return sub_180010530(v11);
  return result;
}

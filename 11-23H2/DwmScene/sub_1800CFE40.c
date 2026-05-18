/*
 * XREFs of sub_1800CFE40 @ 0x1800CFE40
 * Callers:
 *     <none>
 * Callees:
 *     sub_18000E72C @ 0x18000E72C (sub_18000E72C.c)
 *     sub_180010530 @ 0x180010530 (sub_180010530.c)
 *     sub_1800CC188 @ 0x1800CC188 (sub_1800CC188.c)
 *     sub_1800CFA58 @ 0x1800CFA58 (sub_1800CFA58.c)
 *     sub_1800D05C0 @ 0x1800D05C0 (sub_1800D05C0.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800E39B0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall sub_1800CFE40(__int64 a1, _QWORD *a2, __int64 a3)
{
  __int64 result; // rax
  __int64 v6; // [rsp+20h] [rbp-28h] BYREF
  __int64 v7; // [rsp+28h] [rbp-20h]
  _BYTE v8[24]; // [rsp+30h] [rbp-18h] BYREF
  __int64 v9; // [rsp+50h] [rbp+8h] BYREF

  sub_1800D05C0(*a2, v8, *(unsigned int *)(a1 + 88));
  sub_1800CFA58((__int64)&v6);
  sub_1800CC188(v6, &v9);
  (*(void (__fastcall **)(_QWORD, __int64, __int64))(**(_QWORD **)(a1 + 144) + 400LL))(*(_QWORD *)(a1 + 144), v9, a3);
  (*(void (__fastcall **)(__int64))(*(_QWORD *)a1 + 296LL))(a1);
  result = sub_18000E72C(&v9);
  if ( v7 )
    return sub_180010530(v7);
  return result;
}

/*
 * XREFs of sub_180055D7C @ 0x180055D7C
 * Callers:
 *     sub_1800CBFA8 @ 0x1800CBFA8 (sub_1800CBFA8.c)
 * Callees:
 *     sub_180051F00 @ 0x180051F00 (sub_180051F00.c)
 *     sub_180056398 @ 0x180056398 (sub_180056398.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800E39B0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_180055D7C(__int64 a1, __int64 a2)
{
  void (__fastcall *v4)(__int64, __int64, __int64); // rbx
  __int64 v5; // rax
  _BYTE v7[24]; // [rsp+20h] [rbp-48h] BYREF
  _BYTE v8[48]; // [rsp+38h] [rbp-30h] BYREF

  v4 = *(void (__fastcall **)(__int64, __int64, __int64))(*(_QWORD *)a1 + 40LL);
  v5 = sub_180056398(v7, a2, 0LL, 0LL);
  v4(a1, a2, v5);
  return sub_180051F00((__int64)v8);
}

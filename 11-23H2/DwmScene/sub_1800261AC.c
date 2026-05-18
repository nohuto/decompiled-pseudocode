/*
 * XREFs of sub_1800261AC @ 0x1800261AC
 * Callers:
 *     sub_18005A1F0 @ 0x18005A1F0 (sub_18005A1F0.c)
 * Callees:
 *     sub_180017648 @ 0x180017648 (sub_180017648.c)
 *     sub_180024750 @ 0x180024750 (sub_180024750.c)
 *     sub_180029824 @ 0x180029824 (sub_180029824.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800E39B0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 *__fastcall sub_1800261AC(__int64 a1, __int64 *a2, __int64 a3, __int64 a4)
{
  __int64 v7; // rbx
  _QWORD *v8; // rax
  _QWORD v10[5]; // [rsp+30h] [rbp-28h] BYREF

  sub_180024750(a1, a2);
  v7 = *a2;
  v8 = sub_180017648(v10, a4);
  sub_180029824(v7, v8);
  (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)*a2 + 40LL))(*a2, a3);
  return a2;
}

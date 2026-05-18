/*
 * XREFs of sub_18002805C @ 0x18002805C
 * Callers:
 *     sub_180061C80 @ 0x180061C80 (sub_180061C80.c)
 * Callees:
 *     sub_18001875C @ 0x18001875C (sub_18001875C.c)
 *     sub_1800262D0 @ 0x1800262D0 (sub_1800262D0.c)
 *     sub_18002BC44 @ 0x18002BC44 (sub_18002BC44.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800FEEF0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
_QWORD *__fastcall sub_18002805C(__int64 a1, _QWORD *a2, __int64 a3, __int64 a4)
{
  __int64 v7; // rbx
  __int64 *v8; // rax
  __int64 v10[5]; // [rsp+30h] [rbp-28h] BYREF

  sub_1800262D0(a1, a2);
  v7 = *a2;
  v8 = sub_18001875C(v10, a4);
  sub_18002BC44(v7, v8);
  (*(void (__fastcall **)(_QWORD, __int64))(*(_QWORD *)*a2 + 40LL))(*a2, a3);
  return a2;
}

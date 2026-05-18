/*
 * XREFs of sub_1800FF917 @ 0x1800FF917
 * Callers:
 *     <none>
 * Callees:
 *     _CxxThrowException @ 0x18000CA79 (_CxxThrowException.c)
 *     sub_1800122C0 @ 0x1800122C0 (sub_1800122C0.c)
 *     sub_180016254 @ 0x180016254 (sub_180016254.c)
 *     sub_180037278 @ 0x180037278 (sub_180037278.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800FEEF0 (_guard_xfg_dispatch_icall_nop.c)
 */

void __fastcall __noreturn sub_1800FF917(__int64 a1, __int64 a2)
{
  __int64 v3; // rcx
  __int64 v4; // rdi
  void (__fastcall *v5)(__int64, _QWORD, __int64, const char *); // rbx
  const char *v6; // rax
  __int64 v7; // r8

  if ( sub_1800122C0(*(_QWORD **)(a2 + 64)) )
  {
    v4 = sub_180016254(v3);
    v5 = *(void (__fastcall **)(__int64, _QWORD, __int64, const char *))(*(_QWORD *)v4 + 24LL);
    (*(void (__fastcall **)(_QWORD))(**(_QWORD **)(a2 + 176) + 8LL))(*(_QWORD *)(a2 + 176));
    v6 = sub_180037278();
    v5(v4, 0LL, v7, v6);
  }
  throw;
}

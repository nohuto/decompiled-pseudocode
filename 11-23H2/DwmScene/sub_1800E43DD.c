/*
 * XREFs of sub_1800E43DD @ 0x1800E43DD
 * Callers:
 *     <none>
 * Callees:
 *     _CxxThrowException @ 0x18000CA79 (_CxxThrowException.c)
 *     sub_180011DE0 @ 0x180011DE0 (sub_180011DE0.c)
 *     sub_18003476C @ 0x18003476C (sub_18003476C.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800E39B0 (_guard_xfg_dispatch_icall_nop.c)
 */

void __fastcall __noreturn sub_1800E43DD(__int64 a1, __int64 a2)
{
  __int64 *v3; // rcx
  __int64 v4; // rdi
  void (__fastcall *v5)(__int64, _QWORD, __int64, const char *); // rbx
  const char *v6; // rax
  __int64 v7; // r8

  if ( sub_180011DE0(*(_QWORD **)(a2 + 72)) )
  {
    v4 = *v3;
    v5 = *(void (__fastcall **)(__int64, _QWORD, __int64, const char *))(*(_QWORD *)*v3 + 24LL);
    (*(void (__fastcall **)(_QWORD))(**(_QWORD **)(a2 + 176) + 8LL))(*(_QWORD *)(a2 + 176));
    v6 = sub_18003476C();
    v5(v4, 0LL, v7, v6);
  }
  throw;
}

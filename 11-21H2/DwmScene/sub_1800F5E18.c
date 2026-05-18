/*
 * XREFs of sub_1800F5E18 @ 0x1800F5E18
 * Callers:
 *     sub_1800751B0 @ 0x1800751B0 (sub_1800751B0.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x1800FEEF0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_1800F5E18(__int64 a1, __int64 a2)
{
  __int64 (__fastcall *v4)(__int64, __int64, __int64, __int64); // rbx
  __int64 v5; // r8

  v4 = *(__int64 (__fastcall **)(__int64, __int64, __int64, __int64))(*(_QWORD *)a1 + 144LL);
  LOBYTE(v5) = (*(unsigned __int8 (__fastcall **)(__int64, __int64, _QWORD))(*(_QWORD *)a1 + 64LL))(a1, a2, 0LL) == 0;
  return v4(a1, a2, v5, 1LL);
}

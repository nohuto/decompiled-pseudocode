/*
 * XREFs of sub_1800DBF50 @ 0x1800DBF50
 * Callers:
 *     sub_18006AFE4 @ 0x18006AFE4 (sub_18006AFE4.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x1800E39B0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_1800DBF50(__int64 a1, __int64 a2)
{
  __int64 (__fastcall *v4)(__int64, __int64, __int64, __int64); // rbx
  __int64 v5; // r8

  v4 = *(__int64 (__fastcall **)(__int64, __int64, __int64, __int64))(*(_QWORD *)a1 + 144LL);
  LOBYTE(v5) = (*(unsigned __int8 (__fastcall **)(__int64, __int64, _QWORD))(*(_QWORD *)a1 + 64LL))(a1, a2, 0LL) == 0;
  return v4(a1, a2, v5, 1LL);
}

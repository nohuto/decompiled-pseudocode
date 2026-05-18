/*
 * XREFs of sub_1800DBBD4 @ 0x1800DBBD4
 * Callers:
 *     sub_1800DBC28 @ 0x1800DBC28 (sub_1800DBC28.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x1800E39B0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 (__fastcall ***__fastcall sub_1800DBBD4(__int64 a1))(_QWORD, __int64)
{
  __int64 (__fastcall ***result)(_QWORD, __int64); // rax

  result = (__int64 (__fastcall ***)(_QWORD, __int64))(*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 8) + 16LL))(*(_QWORD *)(a1 + 8));
  if ( result )
    return (__int64 (__fastcall ***)(_QWORD, __int64))(**result)(result, 1LL);
  return result;
}

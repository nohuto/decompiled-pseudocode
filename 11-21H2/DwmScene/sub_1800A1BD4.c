/*
 * XREFs of sub_1800A1BD4 @ 0x1800A1BD4
 * Callers:
 *     sub_180106D17 @ 0x180106D17 (sub_180106D17.c)
 *     sub_180106D3B @ 0x180106D3B (sub_180106D3B.c)
 *     unknown_libname_67 @ 0x180106D8B (unknown_libname_67.c)
 *     unknown_libname_69 @ 0x180106EBB (unknown_libname_69.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x1800FEEF0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_1800A1BD4(__int64 *a1)
{
  __int64 v1; // rcx
  __int64 result; // rax

  v1 = *a1;
  if ( v1 )
    return (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v1 + 8LL))(v1, 1LL);
  return result;
}

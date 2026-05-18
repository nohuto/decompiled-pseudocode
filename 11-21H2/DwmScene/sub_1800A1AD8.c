/*
 * XREFs of sub_1800A1AD8 @ 0x1800A1AD8
 * Callers:
 *     sub_1800A11C8 @ 0x1800A11C8 (sub_1800A11C8.c)
 *     sub_1800A2E10 @ 0x1800A2E10 (sub_1800A2E10.c)
 *     sub_1800A30A0 @ 0x1800A30A0 (sub_1800A30A0.c)
 *     sub_180106D29 @ 0x180106D29 (sub_180106D29.c)
 *     unknown_libname_68 @ 0x180106EA9 (unknown_libname_68.c)
 *     sub_180106ECD @ 0x180106ECD (sub_180106ECD.c)
 * Callees:
 *     sub_180010910 @ 0x180010910 (sub_180010910.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800FEEF0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_1800A1AD8(__int64 a1, __int64 a2)
{
  __int64 v2; // rdi
  __int64 v4; // rcx
  __int64 v5; // rcx

  v2 = a1 + 120;
  v4 = *(_QWORD *)(a1 + 176);
  if ( v4 )
  {
    LOBYTE(a2) = v4 != v2;
    (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v4 + 32LL))(v4, a2);
    *(_QWORD *)(v2 + 56) = 0LL;
  }
  v5 = *(_QWORD *)(a1 + 112);
  if ( v5 )
  {
    LOBYTE(a2) = v5 != a1 + 56;
    (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v5 + 32LL))(v5, a2);
    *(_QWORD *)(a1 + 112) = 0LL;
  }
  sub_180010910(a1 + 16);
  return sub_180010910(a1);
}

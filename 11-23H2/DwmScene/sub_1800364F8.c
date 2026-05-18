/*
 * XREFs of sub_1800364F8 @ 0x1800364F8
 * Callers:
 *     sub_180033CA0 @ 0x180033CA0 (sub_180033CA0.c)
 * Callees:
 *     sub_180034094 @ 0x180034094 (sub_180034094.c)
 *     sub_180034880 @ 0x180034880 (sub_180034880.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800E39B0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_1800364F8(__int64 a1)
{
  __int64 v1; // rax
  __int64 result; // rax

  v1 = sub_180034094(a1, 1);
  result = (*(__int64 (__fastcall **)(__int64, void *, _QWORD))(*(_QWORD *)v1 + 64LL))(v1, &unk_1801D45C8, 0LL);
  if ( (_BYTE)result )
    sub_180034880();
  return result;
}

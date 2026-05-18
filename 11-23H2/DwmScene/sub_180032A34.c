/*
 * XREFs of sub_180032A34 @ 0x180032A34
 * Callers:
 *     sub_180033CA0 @ 0x180033CA0 (sub_180033CA0.c)
 * Callees:
 *     sub_180034094 @ 0x180034094 (sub_180034094.c)
 *     sub_180034880 @ 0x180034880 (sub_180034880.c)
 *     sub_1800A04FC @ 0x1800A04FC (sub_1800A04FC.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800E39B0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_180032A34(__int64 a1)
{
  __int64 v2; // rdi
  char v3; // bl
  char v4; // al

  v2 = sub_180034094(a1, 1LL);
  v3 = (*(__int64 (__fastcall **)(__int64, void *, _QWORD))(*(_QWORD *)v2 + 64LL))(v2, &unk_1801D45E8, 0LL);
  v4 = (*(__int64 (__fastcall **)(__int64, void *, _QWORD))(*(_QWORD *)v2 + 64LL))(v2, &unk_1801D4608, 0LL);
  if ( v3 && v4 )
    sub_180034880();
  sub_1800A04FC(*(_QWORD *)(a1 + 968), 0LL);
  return sub_1800A0254(*(_QWORD *)(a1 + 968), *(_QWORD *)(a1 + 944));
}

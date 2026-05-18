/*
 * XREFs of sub_180034AD8 @ 0x180034AD8
 * Callers:
 *     sub_1800362B0 @ 0x1800362B0 (sub_1800362B0.c)
 * Callees:
 *     sub_180036808 @ 0x180036808 (sub_180036808.c)
 *     sub_180037398 @ 0x180037398 (sub_180037398.c)
 *     sub_1800B25F0 @ 0x1800B25F0 (sub_1800B25F0.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800FEEF0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_180034AD8(__int64 a1)
{
  __int64 v2; // rdi
  char v3; // bl
  char v4; // al

  v2 = sub_180036808(a1, 1LL);
  v3 = (*(__int64 (__fastcall **)(__int64, __int64 *, _QWORD))(*(_QWORD *)v2 + 64LL))(v2, &qword_1801F8658, 0LL);
  v4 = (*(__int64 (__fastcall **)(__int64, __int64 *, _QWORD))(*(_QWORD *)v2 + 64LL))(v2, &qword_1801F8678, 0LL);
  if ( v3 && v4 )
    sub_180037398();
  sub_1800B25F0(*(_QWORD *)(a1 + 968), 0LL);
  return sub_1800B21F8(*(_QWORD *)(a1 + 968), *(_QWORD *)(a1 + 944));
}

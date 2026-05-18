/*
 * XREFs of sub_180039E5C @ 0x180039E5C
 * Callers:
 *     sub_1800362B0 @ 0x1800362B0 (sub_1800362B0.c)
 * Callees:
 *     sub_180036808 @ 0x180036808 (sub_180036808.c)
 *     sub_180037398 @ 0x180037398 (sub_180037398.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800FEEF0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_180039E5C(__int64 a1)
{
  __int64 v1; // rax
  __int64 result; // rax

  v1 = sub_180036808(a1, 1);
  result = (*(__int64 (__fastcall **)(__int64, __int64 *, _QWORD))(*(_QWORD *)v1 + 64LL))(v1, &qword_1801F8638, 0LL);
  if ( (_BYTE)result )
    sub_180037398();
  return result;
}

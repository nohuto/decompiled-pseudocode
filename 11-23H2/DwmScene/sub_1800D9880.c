/*
 * XREFs of sub_1800D9880 @ 0x1800D9880
 * Callers:
 *     <none>
 * Callees:
 *     sub_180011DE0 @ 0x180011DE0 (sub_180011DE0.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800E39B0 (_guard_xfg_dispatch_icall_nop.c)
 */

char __fastcall sub_1800D9880(__int64 a1)
{
  char result; // al
  _QWORD *v2; // rcx

  result = sub_180011DE0((_QWORD *)(a1 + 536));
  if ( result )
    return (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)*v2 + 24LL))(*v2);
  return result;
}

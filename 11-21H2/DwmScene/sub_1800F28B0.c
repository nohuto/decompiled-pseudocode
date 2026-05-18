/*
 * XREFs of sub_1800F28B0 @ 0x1800F28B0
 * Callers:
 *     <none>
 * Callees:
 *     sub_1800122C0 @ 0x1800122C0 (sub_1800122C0.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800FEEF0 (_guard_xfg_dispatch_icall_nop.c)
 */

char __fastcall sub_1800F28B0(__int64 a1)
{
  char result; // al
  _QWORD *v2; // rcx

  result = sub_1800122C0((_QWORD *)(a1 + 536));
  if ( result )
    return (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)*v2 + 24LL))(*v2);
  return result;
}

/*
 * XREFs of sub_1800D08A0 @ 0x1800D08A0
 * Callers:
 *     <none>
 * Callees:
 *     sub_180039630 @ 0x180039630 (sub_180039630.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800E39B0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_1800D08A0(__int64 a1)
{
  __int64 result; // rax
  __int64 v3; // rcx

  result = sub_180039630(a1);
  v3 = *(_QWORD *)(a1 + 144);
  if ( v3 )
    return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v3 + 880LL))(v3);
  return result;
}

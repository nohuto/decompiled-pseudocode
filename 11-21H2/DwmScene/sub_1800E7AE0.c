/*
 * XREFs of sub_1800E7AE0 @ 0x1800E7AE0
 * Callers:
 *     <none>
 * Callees:
 *     sub_18003D7E0 @ 0x18003D7E0 (sub_18003D7E0.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800FEEF0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_1800E7AE0(__int64 a1)
{
  __int64 result; // rax
  __int64 v3; // rcx

  result = sub_18003D7E0(a1);
  v3 = *(_QWORD *)(a1 + 144);
  if ( v3 )
    return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v3 + 880LL))(v3);
  return result;
}

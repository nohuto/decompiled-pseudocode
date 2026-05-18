/*
 * XREFs of sub_1800178DC @ 0x1800178DC
 * Callers:
 *     sub_180019460 @ 0x180019460 (sub_180019460.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x1800FEEF0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_1800178DC(__int64 *a1, int *a2, _QWORD *a3)
{
  __int64 v6; // rcx

  v6 = *a1;
  if ( v6 )
  {
    *a1 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 16LL))(v6);
  }
  return sub_180017788(a1, a2, a3);
}

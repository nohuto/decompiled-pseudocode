/*
 * XREFs of sub_180019410 @ 0x180019410
 * Callers:
 *     <none>
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x1800FEEF0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_180019410(__int64 a1)
{
  __int64 v2; // rcx

  v2 = *(_QWORD *)(a1 + 120);
  if ( v2 )
  {
    *(_QWORD *)(a1 + 120) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 16LL))(v2);
  }
  return sub_180011C6C(*(_QWORD *)(a1 + 64), 0LL, 0, 0);
}

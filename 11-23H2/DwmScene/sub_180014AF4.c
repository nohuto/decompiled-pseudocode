/*
 * XREFs of sub_180014AF4 @ 0x180014AF4
 * Callers:
 *     sub_1800149F4 @ 0x1800149F4 (sub_1800149F4.c)
 *     sub_18001BA30 @ 0x18001BA30 (sub_18001BA30.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x1800E39B0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_180014AF4(__int64 a1)
{
  *(_QWORD *)a1 = &ISpectreNode::`vftable';
  *(_DWORD *)(a1 + 12) = 1;
  *(_QWORD *)a1 = off_1800FA4F8;
  if ( qword_1801D3388 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)qword_1801D3388 + 8LL))(qword_1801D3388);
  *(_QWORD *)(a1 + 24) = 0LL;
  *(_QWORD *)a1 = off_1800FA558;
  *(_QWORD *)(a1 + 16) = off_1800FA610;
  *(_QWORD *)(a1 + 32) = 0LL;
  *(_QWORD *)(a1 + 40) = 0LL;
  return a1;
}

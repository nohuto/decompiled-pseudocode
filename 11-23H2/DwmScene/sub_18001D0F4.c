/*
 * XREFs of sub_18001D0F4 @ 0x18001D0F4
 * Callers:
 *     sub_18001D168 @ 0x18001D168 (sub_18001D168.c)
 *     sub_180024C1C @ 0x180024C1C (sub_180024C1C.c)
 *     sub_18002CCA0 @ 0x18002CCA0 (sub_18002CCA0.c)
 *     sub_1800914D8 @ 0x1800914D8 (sub_1800914D8.c)
 *     sub_180091C08 @ 0x180091C08 (sub_180091C08.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x1800E39B0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_18001D0F4(__int64 a1, __int64 a2)
{
  __int64 (__fastcall ***v3)(_QWORD, __int64); // rcx

  *(_QWORD *)(a1 + 56) = 0LL;
  v3 = *(__int64 (__fastcall ****)(_QWORD, __int64))(a2 + 56);
  if ( v3 )
    *(_QWORD *)(a1 + 56) = (**v3)(v3, a1);
  return a1;
}

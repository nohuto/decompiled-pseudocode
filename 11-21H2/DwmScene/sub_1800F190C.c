/*
 * XREFs of sub_1800F190C @ 0x1800F190C
 * Callers:
 *     sub_1800F1B20 @ 0x1800F1B20 (sub_1800F1B20.c)
 * Callees:
 *     sub_180010910 @ 0x180010910 (sub_180010910.c)
 *     sub_180029C94 @ 0x180029C94 (sub_180029C94.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800FEEF0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_1800F190C(_QWORD *a1)
{
  __int64 v2; // rcx
  __int64 v3; // rcx
  __int64 v4; // rcx

  sub_180029C94(a1 + 69);
  sub_180010910((__int64)(a1 + 67));
  v2 = a1[66];
  if ( v2 )
  {
    a1[66] = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 16LL))(v2);
  }
  v3 = a1[65];
  if ( v3 )
  {
    a1[65] = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 16LL))(v3);
  }
  v4 = a1[64];
  if ( v4 )
  {
    a1[64] = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
  }
  return sub_18002D880((__int64)a1);
}

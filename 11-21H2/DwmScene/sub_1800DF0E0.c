/*
 * XREFs of sub_1800DF0E0 @ 0x1800DF0E0
 * Callers:
 *     sub_1800DF4B0 @ 0x1800DF4B0 (sub_1800DF4B0.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x1800FEEF0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_1800DF0E0(_QWORD *a1)
{
  __int64 v2; // rcx
  __int64 v3; // rcx
  __int64 v4; // rcx
  __int64 v5; // rcx

  v2 = a1[215];
  if ( v2 )
  {
    a1[215] = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 16LL))(v2);
  }
  v3 = a1[214];
  if ( v3 )
  {
    a1[214] = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 16LL))(v3);
  }
  v4 = a1[213];
  if ( v4 )
  {
    a1[213] = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
  }
  v5 = a1[212];
  if ( v5 )
  {
    a1[212] = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 16LL))(v5);
  }
  return sub_1800DEF9C(a1);
}

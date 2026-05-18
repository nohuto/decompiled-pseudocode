/*
 * XREFs of sub_1800CC200 @ 0x1800CC200
 * Callers:
 *     sub_1800CE190 @ 0x1800CE190 (sub_1800CE190.c)
 * Callees:
 *     sub_180011520 @ 0x180011520 (sub_180011520.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800E39B0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 *__fastcall sub_1800CC200(__int64 *a1, __int64 *a2)
{
  __int64 v3; // rbx
  __int64 v4; // rcx
  __int64 v6; // [rsp+30h] [rbp+8h] BYREF

  v6 = *a2;
  v3 = v6;
  sub_180011520(&v6);
  v4 = *a1;
  *a1 = v3;
  if ( v4 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
  return a1;
}

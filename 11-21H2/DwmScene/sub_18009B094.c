/*
 * XREFs of sub_18009B094 @ 0x18009B094
 * Callers:
 *     sub_18009ADA0 @ 0x18009ADA0 (sub_18009ADA0.c)
 * Callees:
 *     sub_180010884 @ 0x180010884 (sub_180010884.c)
 *     sub_180088D1C @ 0x180088D1C (sub_180088D1C.c)
 *     sub_18009474C @ 0x18009474C (sub_18009474C.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800FEEF0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_18009B094(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 result; // rax
  __int64 v9; // rcx

  sub_18009474C(a1 + 96, a3);
  result = (*(__int64 (__fastcall **)(__int64, __int64, __int64))(*(_QWORD *)a1 + 40LL))(a1, a2, a4);
  v9 = *(_QWORD *)(a3 + 16);
  if ( v9 )
  {
    sub_180088D1C(v9, *(_QWORD *)(a3 + 24));
    result = sub_180010884(*(char **)(a3 + 16), 16 * ((__int64)(*(_QWORD *)(a3 + 32) - *(_QWORD *)(a3 + 16)) >> 4));
    *(_QWORD *)(a3 + 16) = 0LL;
    *(_QWORD *)(a3 + 24) = 0LL;
    *(_QWORD *)(a3 + 32) = 0LL;
  }
  return result;
}

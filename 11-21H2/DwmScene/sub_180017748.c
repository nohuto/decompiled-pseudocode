/*
 * XREFs of sub_180017748 @ 0x180017748
 * Callers:
 *     sub_18001AB5C @ 0x18001AB5C (sub_18001AB5C.c)
 *     sub_1800DAEE0 @ 0x1800DAEE0 (sub_1800DAEE0.c)
 *     sub_1800DF960 @ 0x1800DF960 (sub_1800DF960.c)
 *     sub_1800DFC90 @ 0x1800DFC90 (sub_1800DFC90.c)
 *     sub_1800E1120 @ 0x1800E1120 (sub_1800E1120.c)
 *     sub_1800F424C @ 0x1800F424C (sub_1800F424C.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x1800FEEF0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 *__fastcall sub_180017748(__int64 *a1)
{
  __int64 v2; // rcx

  v2 = *a1;
  if ( v2 )
  {
    *a1 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 16LL))(v2);
  }
  return a1;
}

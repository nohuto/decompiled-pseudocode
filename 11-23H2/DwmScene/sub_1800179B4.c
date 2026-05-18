/*
 * XREFs of sub_1800179B4 @ 0x1800179B4
 * Callers:
 *     sub_18001568C @ 0x18001568C (sub_18001568C.c)
 *     sub_180019608 @ 0x180019608 (sub_180019608.c)
 *     sub_1800E43B9 @ 0x1800E43B9 (sub_1800E43B9.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x1800E39B0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_1800179B4(__int64 (__fastcall ****a1)(_QWORD, __int64))
{
  __int64 (__fastcall ***v1)(_QWORD, __int64); // rcx
  __int64 result; // rax

  v1 = *a1;
  if ( v1 )
    return (**v1)(v1, 1LL);
  return result;
}

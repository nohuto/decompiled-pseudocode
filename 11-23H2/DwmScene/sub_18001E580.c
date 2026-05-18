/*
 * XREFs of sub_18001E580 @ 0x18001E580
 * Callers:
 *     sub_18001E624 @ 0x18001E624 (sub_18001E624.c)
 *     sub_180050E70 @ 0x180050E70 (sub_180050E70.c)
 *     sub_1800513B4 @ 0x1800513B4 (sub_1800513B4.c)
 *     sub_18008EE7C @ 0x18008EE7C (sub_18008EE7C.c)
 *     sub_1800E4913 @ 0x1800E4913 (sub_1800E4913.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x1800E39B0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_18001E580(__int64 a1)
{
  __int64 result; // rax

  result = std::ios::rdbuf(*(_QWORD *)a1 + *(int *)(**(_QWORD **)a1 + 4LL));
  if ( result )
    return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)result + 16LL))(result);
  return result;
}

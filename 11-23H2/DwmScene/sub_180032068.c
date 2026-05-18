/*
 * XREFs of sub_180032068 @ 0x180032068
 * Callers:
 *     sub_1800320DC @ 0x1800320DC (sub_1800320DC.c)
 *     sub_1800E57E4 @ 0x1800E57E4 (sub_1800E57E4.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x1800E39B0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_180032068(__int64 a1)
{
  __int64 result; // rax

  result = std::wios::rdbuf(*(_QWORD *)a1 + *(int *)(**(_QWORD **)a1 + 4LL));
  if ( result )
    return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)result + 16LL))(result);
  return result;
}

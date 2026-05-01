/*
 * XREFs of sub_180019710 @ 0x180019710
 * Callers:
 *     sub_180016DE0 @ 0x180016DE0 (sub_180016DE0.c)
 *     sub_180016E00 @ 0x180016E00 (sub_180016E00.c)
 *     sub_180016E20 @ 0x180016E20 (sub_180016E20.c)
 *     sub_180016E40 @ 0x180016E40 (sub_180016E40.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x180016AA0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_180019710(__int64 a1, int *a2)
{
  __int64 v2; // rax
  int v4; // eax

  v2 = *(_QWORD *)(a1 + 120);
  if ( v2 )
    v4 = (*(__int64 (**)(void))(v2 + 16))();
  else
    v4 = 2;
  *a2 = v4;
  return 0LL;
}

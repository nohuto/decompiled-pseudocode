/*
 * XREFs of sub_180011428 @ 0x180011428
 * Callers:
 *     sub_18000F974 @ 0x18000F974 (sub_18000F974.c)
 *     sub_18000FBD0 @ 0x18000FBD0 (sub_18000FBD0.c)
 *     sub_180012160 @ 0x180012160 (sub_180012160.c)
 *     sub_180015704 @ 0x180015704 (sub_180015704.c)
 *     sub_180015888 @ 0x180015888 (sub_180015888.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x180016AA0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 (*sub_180011428())(void)
{
  __int64 (*result)(void); // rax

  if ( qword_180032960 )
    return (__int64 (*)(void))qword_180032960();
  result = qword_180032D90;
  if ( qword_180032D90 )
    return (__int64 (*)(void))qword_180032D90();
  return result;
}

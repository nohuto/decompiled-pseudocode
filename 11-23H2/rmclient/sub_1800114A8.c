/*
 * XREFs of sub_1800114A8 @ 0x1800114A8
 * Callers:
 *     sub_18000CE14 @ 0x18000CE14 (sub_18000CE14.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x180016AA0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 (*sub_1800114A8())(void)
{
  __int64 (*result)(void); // rax

  if ( qword_1800329E8 )
    return (__int64 (*)(void))qword_1800329E8();
  result = qword_180032DA8;
  if ( qword_180032DA8 )
    return (__int64 (*)(void))qword_180032DA8();
  return result;
}

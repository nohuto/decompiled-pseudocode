/*
 * XREFs of UserSetWindowedSwapChainApiExt @ 0x1C00D0510
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00DE650 (_guard_dispatch_icall_nop.c)
 */

__int64 (*UserSetWindowedSwapChainApiExt())(void)
{
  __int64 (*result)(void); // rax

  result = qword_1C029CA50;
  if ( qword_1C029CA50 )
    return (__int64 (*)(void))qword_1C029CA50();
  return result;
}

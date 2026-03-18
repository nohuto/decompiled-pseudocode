/*
 * XREFs of UserIsWindowDesktopComposed @ 0x1C00CD6E0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00DE650 (_guard_dispatch_icall_nop.c)
 */

__int64 (*UserIsWindowDesktopComposed())(void)
{
  __int64 (*result)(void); // rax

  result = qword_1C029CA40;
  if ( qword_1C029CA40 )
    return (__int64 (*)(void))qword_1C029CA40();
  return result;
}

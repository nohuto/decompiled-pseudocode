/*
 * XREFs of GreIsCurrentProcessSystemCritical @ 0x1C0037FE8
 * Callers:
 *     W32CalloutDispatch @ 0x1C00DE840 (W32CalloutDispatch.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00D6980 (_guard_dispatch_icall_nop.c)
 */

__int64 (*GreIsCurrentProcessSystemCritical())(void)
{
  __int64 (*result)(void); // rax

  result = qword_1C0294E60;
  if ( qword_1C0294E60 )
    return (__int64 (*)(void))qword_1C0294E60();
  return result;
}

/*
 * XREFs of HalpIommuPopulateExceptionList @ 0x1403A9F7C
 * Callers:
 *     HalpIommuInitializeAll @ 0x140A90D8C (HalpIommuInitializeAll.c)
 * Callees:
 *     HalpIommuAddDebuggerException @ 0x1403A9F98 (HalpIommuAddDebuggerException.c)
 */

__int64 HalpIommuPopulateExceptionList()
{
  __int64 result; // rax

  result = HalpIommuAddDebuggerException();
  if ( (int)result >= 0 )
    return 0LL;
  return result;
}

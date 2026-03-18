/*
 * XREFs of HalpIommuPopulateExceptionList @ 0x1403A96AC
 * Callers:
 *     HalpIommuInitializeAll @ 0x140A90F0C (HalpIommuInitializeAll.c)
 * Callees:
 *     HalpIommuAddDebuggerException @ 0x1403A96C8 (HalpIommuAddDebuggerException.c)
 */

__int64 HalpIommuPopulateExceptionList()
{
  __int64 result; // rax

  result = HalpIommuAddDebuggerException();
  if ( (int)result >= 0 )
    return 0LL;
  return result;
}

/*
 * XREFs of WdiUpdateSem @ 0x14062C578
 * Callers:
 *     NtTraceControl @ 0x1407954F0 (NtTraceControl.c)
 * Callees:
 *     WdipAccessCheck @ 0x14062C598 (WdipAccessCheck.c)
 *     WdipSemUpdate @ 0x1409DA758 (WdipSemUpdate.c)
 */

__int64 WdiUpdateSem()
{
  __int64 result; // rax

  result = WdipAccessCheck();
  if ( (int)result >= 0 )
    return WdipSemUpdate();
  return result;
}

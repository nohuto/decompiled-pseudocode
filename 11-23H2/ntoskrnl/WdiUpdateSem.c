/*
 * XREFs of WdiUpdateSem @ 0x1405FB7E8
 * Callers:
 *     NtTraceControl @ 0x140725BD0 (NtTraceControl.c)
 * Callees:
 *     WdipAccessCheck @ 0x1405FB808 (WdipAccessCheck.c)
 *     WdipSemUpdate @ 0x1409DD93C (WdipSemUpdate.c)
 */

__int64 WdiUpdateSem()
{
  __int64 result; // rax

  result = WdipAccessCheck();
  if ( (int)result >= 0 )
    return WdipSemUpdate();
  return result;
}

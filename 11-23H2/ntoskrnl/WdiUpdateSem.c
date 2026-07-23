/*
 * XREFs of WdiUpdateSem @ 0x1405FBD58
 * Callers:
 *     NtTraceControl @ 0x140725DD0 (NtTraceControl.c)
 * Callees:
 *     WdipAccessCheck @ 0x1405FBD78 (WdipAccessCheck.c)
 *     WdipSemUpdate @ 0x1409DDB3C (WdipSemUpdate.c)
 */

__int64 WdiUpdateSem()
{
  __int64 result; // rax

  result = WdipAccessCheck();
  if ( (int)result >= 0 )
    return WdipSemUpdate();
  return result;
}

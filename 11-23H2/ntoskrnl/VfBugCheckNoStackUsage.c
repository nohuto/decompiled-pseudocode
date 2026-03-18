/*
 * XREFs of VfBugCheckNoStackUsage @ 0x1405CF880
 * Callers:
 *     IovCallDriver @ 0x140AC11D0 (IovCallDriver.c)
 *     IovpCallDriverWithStackBuffer @ 0x140AC19B4 (IovpCallDriverWithStackBuffer.c)
 *     VfAfterCallDriver @ 0x140ACD408 (VfAfterCallDriver.c)
 *     VfBeforeCallDriver @ 0x140ACD5DC (VfBeforeCallDriver.c)
 * Callees:
 *     KeBugCheckEx @ 0x14041EA50 (KeBugCheckEx.c)
 */

void __noreturn VfBugCheckNoStackUsage()
{
  KeBugCheckEx(VfBugcheckTmpData, BugCheckParameter1, qword_140D70500, xmmword_140D70508, *(&xmmword_140D70508 + 1));
}

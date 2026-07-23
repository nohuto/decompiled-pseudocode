/*
 * XREFs of VfBugCheckNoStackUsage @ 0x1405CFDF0
 * Callers:
 *     IovCallDriver @ 0x140AC11C0 (IovCallDriver.c)
 *     IovpCallDriverWithStackBuffer @ 0x140AC19A4 (IovpCallDriverWithStackBuffer.c)
 *     VfAfterCallDriver @ 0x140ACD3F8 (VfAfterCallDriver.c)
 *     VfBeforeCallDriver @ 0x140ACD5CC (VfBeforeCallDriver.c)
 * Callees:
 *     KeBugCheckEx @ 0x14041EDE0 (KeBugCheckEx.c)
 */

void __noreturn VfBugCheckNoStackUsage()
{
  KeBugCheckEx(VfBugcheckTmpData, BugCheckParameter1, qword_140D70500, xmmword_140D70508, *(&xmmword_140D70508 + 1));
}

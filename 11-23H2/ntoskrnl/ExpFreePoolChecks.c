/*
 * XREFs of ExpFreePoolChecks @ 0x1402AC3A0
 * Callers:
 *     ExRemovePoolTag @ 0x1403C380C (ExRemovePoolTag.c)
 *     ExpFreeHeapSpecialPool @ 0x14060F0A8 (ExpFreeHeapSpecialPool.c)
 *     ExFreePoolWithTag @ 0x140AAE110 (ExFreePoolWithTag.c)
 * Callees:
 *     KeCheckForTimer @ 0x140570AEC (KeCheckForTimer.c)
 *     ExpCheckForResource @ 0x14060AC58 (ExpCheckForResource.c)
 *     ExpCheckForLookaside @ 0x14060B398 (ExpCheckForLookaside.c)
 *     ExpCheckForWorker @ 0x14060CC08 (ExpCheckForWorker.c)
 *     VfPtFreePoolNotification @ 0x140ADE76C (VfPtFreePoolNotification.c)
 */

__int64 __fastcall ExpFreePoolChecks(ULONG_PTR BugCheckParameter3, unsigned int a2, __int64 a3, int a4, __int64 a5)
{
  __int64 result; // rax

  if ( (ExpPoolFlags & 0x207) != 0 )
  {
    if ( (ExpPoolFlags & 0x200) != 0 && !a4 )
      ExpCheckForLookaside(BugCheckParameter3, a3);
    if ( (ExpPoolFlags & 1) != 0 )
      KeCheckForTimer(BugCheckParameter3);
    if ( (ExpPoolFlags & 4) != 0 )
      ExpCheckForResource(BugCheckParameter3, a3);
    if ( (ExpPoolFlags & 2) != 0 )
      ExpCheckForWorker(BugCheckParameter3);
  }
  result = (unsigned int)ExpPoolFlags;
  if ( (ExpPoolFlags & 0x10) != 0 )
    return VfPtFreePoolNotification(BugCheckParameter3, a2, a3, a5);
  return result;
}

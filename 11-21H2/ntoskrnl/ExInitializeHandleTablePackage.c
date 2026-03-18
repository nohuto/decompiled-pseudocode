/*
 * XREFs of ExInitializeHandleTablePackage @ 0x140B31380
 * Callers:
 *     InitBootProcessor @ 0x140AFB264 (InitBootProcessor.c)
 * Callees:
 *     HalQueryMaximumProcessorCount @ 0x14036FA30 (HalQueryMaximumProcessorCount.c)
 */

__int64 ExInitializeHandleTablePackage()
{
  __int64 result; // rax

  HandleTableListLock = 0LL;
  qword_140D3CEB0 = (__int64)&HandleTableListHead;
  HandleTableListHead = (__int64)&HandleTableListHead;
  result = HalQueryMaximumProcessorCount();
  ExpFreeListCount = result;
  return result;
}

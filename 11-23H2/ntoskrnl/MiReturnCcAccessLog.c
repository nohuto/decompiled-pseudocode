/*
 * XREFs of MiReturnCcAccessLog @ 0x1402F4FC0
 * Callers:
 *     MiCheckAndProcessCcAccessLog @ 0x1402F4F78 (MiCheckAndProcessCcAccessLog.c)
 *     MmPrefetchForCacheManager @ 0x14073EE0C (MmPrefetchForCacheManager.c)
 * Callees:
 *     MiQueuePageAccessLog @ 0x1402F5780 (MiQueuePageAccessLog.c)
 *     MmFreeAccessPfnBuffer @ 0x1402F583C (MmFreeAccessPfnBuffer.c)
 */

__int64 __fastcall MiReturnCcAccessLog(_QWORD *a1, int a2)
{
  __int64 result; // rax

  if ( a2 )
  {
    result = a1[3];
    a1[4] = result;
  }
  if ( qword_140C67FC0 || (result = _InterlockedCompareExchange64(&qword_140C67FC0, (signed __int64)a1, 0LL)) != 0 )
  {
    if ( a1 )
    {
      if ( (_QWORD *)a1[4] == a1 + 9 )
        return MmFreeAccessPfnBuffer(a1);
      else
        return MiQueuePageAccessLog(a1);
    }
  }
  return result;
}

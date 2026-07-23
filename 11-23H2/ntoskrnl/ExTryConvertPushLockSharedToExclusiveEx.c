/*
 * XREFs of ExTryConvertPushLockSharedToExclusiveEx @ 0x140346030
 * Callers:
 *     <none>
 * Callees:
 *     KeBugCheckEx @ 0x14041EDE0 (KeBugCheckEx.c)
 */

bool __fastcall ExTryConvertPushLockSharedToExclusiveEx(
        volatile signed __int64 *BugCheckParameter2,
        ULONG_PTR BugCheckParameter1)
{
  if ( (BugCheckParameter1 & 0xFFFFFFF8) != 0 )
    KeBugCheckEx(0x152u, (unsigned int)BugCheckParameter1, (ULONG_PTR)BugCheckParameter2, 0LL, 0LL);
  return _InterlockedCompareExchange64(BugCheckParameter2, 1LL, 17LL) == 17;
}

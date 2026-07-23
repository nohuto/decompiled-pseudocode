/*
 * XREFs of sub_140353BB0 @ 0x140353BB0
 * Callers:
 *     sub_1402175B8 @ 0x1402175B8 (sub_1402175B8.c)
 *     ExTryAcquirePushLockSharedEx @ 0x140220540 (ExTryAcquirePushLockSharedEx.c)
 *     sub_14022CA54 @ 0x14022CA54 (sub_14022CA54.c)
 *     ExTryToAcquireFastMutex @ 0x140233370 (ExTryToAcquireFastMutex.c)
 *     sub_140259A00 @ 0x140259A00 (sub_140259A00.c)
 *     sub_14027FEF8 @ 0x14027FEF8 (sub_14027FEF8.c)
 *     sub_140287C84 @ 0x140287C84 (sub_140287C84.c)
 *     KeWaitForSingleObject @ 0x1402AF080 (KeWaitForSingleObject.c)
 *     sub_1402C7DF0 @ 0x1402C7DF0 (sub_1402C7DF0.c)
 *     KeWaitForMultipleObjects @ 0x1402F13C0 (KeWaitForMultipleObjects.c)
 *     ExTryAcquirePushLockExclusiveEx @ 0x1402F62C0 (ExTryAcquirePushLockExclusiveEx.c)
 *     sub_140310450 @ 0x140310450 (sub_140310450.c)
 *     sub_140360258 @ 0x140360258 (sub_140360258.c)
 *     sub_14037CE7C @ 0x14037CE7C (sub_14037CE7C.c)
 *     ExAcquireFastResourceShared @ 0x14039B6B0 (ExAcquireFastResourceShared.c)
 *     ExAcquireFastResourceSharedStarveExclusive @ 0x14039BA90 (ExAcquireFastResourceSharedStarveExclusive.c)
 *     ExAcquireFastResourceExclusive @ 0x14039BDE0 (ExAcquireFastResourceExclusive.c)
 *     ExDisownFastResource @ 0x14039C100 (ExDisownFastResource.c)
 *     sub_14039D010 @ 0x14039D010 (sub_14039D010.c)
 *     sub_14039D3E4 @ 0x14039D3E4 (sub_14039D3E4.c)
 *     ExTryAcquireAutoExpandPushLockShared @ 0x14039E320 (ExTryAcquireAutoExpandPushLockShared.c)
 *     ExTryAcquireAutoExpandPushLockExclusive @ 0x14039E660 (ExTryAcquireAutoExpandPushLockExclusive.c)
 *     sub_140559C3C @ 0x140559C3C (sub_140559C3C.c)
 *     sub_14059D69C @ 0x14059D69C (sub_14059D69C.c)
 *     sub_1405A1AE8 @ 0x1405A1AE8 (sub_1405A1AE8.c)
 *     sub_1405B7EB4 @ 0x1405B7EB4 (sub_1405B7EB4.c)
 *     ExTryAcquireCacheAwarePushLockExclusiveEx @ 0x14063C300 (ExTryAcquireCacheAwarePushLockExclusiveEx.c)
 *     ExTryAcquireCacheAwarePushLockSharedEx @ 0x14063C3D0 (ExTryAcquireCacheAwarePushLockSharedEx.c)
 *     sub_140661FA0 @ 0x140661FA0 (sub_140661FA0.c)
 *     sub_14069A534 @ 0x14069A534 (sub_14069A534.c)
 *     sub_1406D1790 @ 0x1406D1790 (sub_1406D1790.c)
 *     sub_1406DA700 @ 0x1406DA700 (sub_1406DA700.c)
 *     sub_140709FAC @ 0x140709FAC (sub_140709FAC.c)
 *     sub_140734160 @ 0x140734160 (sub_140734160.c)
 *     sub_1407A3190 @ 0x1407A3190 (sub_1407A3190.c)
 *     sub_1407A91A0 @ 0x1407A91A0 (sub_1407A91A0.c)
 *     sub_1407C3850 @ 0x1407C3850 (sub_1407C3850.c)
 *     sub_1408654C0 @ 0x1408654C0 (sub_1408654C0.c)
 *     sub_140919170 @ 0x140919170 (sub_140919170.c)
 *     sub_140927128 @ 0x140927128 (sub_140927128.c)
 *     sub_140B50C78 @ 0x140B50C78 (sub_140B50C78.c)
 * Callees:
 *     sub_140351DF0 @ 0x140351DF0 (sub_140351DF0.c)
 *     KeBugCheckEx @ 0x14041F3D0 (KeBugCheckEx.c)
 */

__int64 __fastcall sub_140353BB0(ULONG_PTR BugCheckParameter2, unsigned __int64 a2)
{
  unsigned __int64 v2; // r10
  struct _KTHREAD *CurrentThread; // rdx
  __int64 v4; // r8

  v2 = a2;
  if ( (a2 & 1) != 0 )
  {
    CurrentThread = KeGetCurrentThread();
    v4 = 96LL * (unsigned __int8)(v2 >> 1);
    v2 = (unsigned __int64)CurrentThread + v4 + 1696;
    if ( (*(_QWORD *)v2 & 0x7FFFFFFFFFFFFFFCLL | 0x8000000000000000uLL) != BugCheckParameter2 )
      KeBugCheckEx(0x162u, (ULONG_PTR)CurrentThread, BugCheckParameter2, (ULONG_PTR)CurrentThread + v4 + 1696, 0LL);
  }
  else
  {
    CurrentThread = (struct _KTHREAD *)(a2 - 96LL * *(unsigned __int8 *)(a2 + 16) - 1696);
  }
  _disable();
  *(_BYTE *)(v2 + 18) = 0;
  return sub_140351DF0(v2, (ULONG_PTR)CurrentThread, BugCheckParameter2, 1);
}

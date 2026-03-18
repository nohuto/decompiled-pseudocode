/*
 * XREFs of ExReleaseResourceAndLeavePriorityRegion @ 0x14060AA80
 * Callers:
 *     DifExReleaseResourceAndLeavePriorityRegionWrapper @ 0x1405D9B70 (DifExReleaseResourceAndLeavePriorityRegionWrapper.c)
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x14022F700 (KeLeaveCriticalRegionThread.c)
 *     PsBoostThreadIoEx @ 0x14022FF50 (PsBoostThreadIoEx.c)
 *     ExReleaseResourceLite @ 0x14023D3F0 (ExReleaseResourceLite.c)
 */

_QWORD *__fastcall ExReleaseResourceAndLeavePriorityRegion(struct _ERESOURCE *a1)
{
  struct _KTHREAD *CurrentThread; // rbx

  ExReleaseResourceLite(a1);
  CurrentThread = KeGetCurrentThread();
  PsBoostThreadIoEx((__int64)CurrentThread, 1, 0, 0LL);
  return KeLeaveCriticalRegionThread((__int64)CurrentThread);
}

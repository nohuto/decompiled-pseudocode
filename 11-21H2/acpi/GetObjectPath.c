/*
 * XREFs of GetObjectPath @ 0x1C00282F8
 * Callers:
 *     AMLIEvalNameSpaceObject @ 0x1C000B894 (AMLIEvalNameSpaceObject.c)
 *     SyncEvalObject @ 0x1C000B990 (SyncEvalObject.c)
 *     ACPIGet @ 0x1C0010180 (ACPIGet.c)
 *     AsyncEvalObject @ 0x1C00114E0 (AsyncEvalObject.c)
 *     AMLIAsyncEvalObject @ 0x1C0019E08 (AMLIAsyncEvalObject.c)
 *     AccessFieldData @ 0x1C001AC40 (AccessFieldData.c)
 *     Release @ 0x1C001C1A0 (Release.c)
 *     Acquire @ 0x1C001C290 (Acquire.c)
 *     AMLIFindNameSpaceObject @ 0x1C001F5E4 (AMLIFindNameSpaceObject.c)
 *     AMLIEvalPackageElement @ 0x1C0024258 (AMLIEvalPackageElement.c)
 *     ProcessEvalObj @ 0x1C0025310 (ProcessEvalObj.c)
 *     ResetSignal @ 0x1C0026970 (ResetSignal.c)
 *     CreateNativeNameSpaceObject @ 0x1C0027F50 (CreateNativeNameSpaceObject.c)
 *     Wait @ 0x1C002A600 (Wait.c)
 *     Simulator_NotifyNamespaceCollision @ 0x1C0064F70 (Simulator_NotifyNamespaceCollision.c)
 *     GetFieldUnitRegionObj @ 0x1C00666B8 (GetFieldUnitRegionObj.c)
 *     DebugNotify @ 0x1C00673F0 (DebugNotify.c)
 *     DebugRunMethod @ 0x1C00676F0 (DebugRunMethod.c)
 *     RunMethodCallBack @ 0x1C0067DB0 (RunMethodCallBack.c)
 *     DumpObject @ 0x1C0068B08 (DumpObject.c)
 *     NestAsyncEvalObject @ 0x1C006982C (NestAsyncEvalObject.c)
 * Callees:
 *     GetObjectPathNoLock @ 0x1C0010780 (GetObjectPathNoLock.c)
 */

_BYTE *__fastcall GetObjectPath(__int64 a1)
{
  KIRQL v2; // bl
  _BYTE *ObjectPathNoLock; // rdi

  v2 = ExAcquireSpinLockShared(&ACPINamespaceLock);
  ObjectPathNoLock = GetObjectPathNoLock(a1);
  ExReleaseSpinLockShared(&ACPINamespaceLock, v2);
  return ObjectPathNoLock;
}

/*
 * XREFs of CmInitServerSiloState @ 0x14080C634
 * Callers:
 *     CmpInitSiloSupport @ 0x14080C5C0 (CmpInitSiloSupport.c)
 *     PspInitializeServerSiloDeferred @ 0x1409AD0A0 (PspInitializeServerSiloDeferred.c)
 * Callees:
 *     CmpInitializeThreadInfo @ 0x14022E640 (CmpInitializeThreadInfo.c)
 *     CmCleanupThreadInfo @ 0x14022E680 (CmCleanupThreadInfo.c)
 *     CmpGetOrCreateContextForSiloNoRef @ 0x14077A73C (CmpGetOrCreateContextForSiloNoRef.c)
 *     CmpStartSiloRegistryNamespace @ 0x14077CF00 (CmpStartSiloRegistryNamespace.c)
 *     CmpStartSiloKeyLockTracker @ 0x14080C6A8 (CmpStartSiloKeyLockTracker.c)
 */

__int64 CmInitServerSiloState()
{
  __int64 v0; // r8
  unsigned int v1; // r8d
  __int64 v3[3]; // [rsp+20h] [rbp-18h] BYREF
  ULONG_PTR BugCheckParameter2; // [rsp+48h] [rbp+10h] BYREF

  *(_OWORD *)v3 = 0LL;
  BugCheckParameter2 = 0LL;
  CmpInitializeThreadInfo((__int64)v3);
  if ( (int)CmpGetOrCreateContextForSiloNoRef(v0, &BugCheckParameter2) >= 0
    && (int)CmpStartSiloRegistryNamespace(BugCheckParameter2) >= 0 )
  {
    CmpStartSiloKeyLockTracker(BugCheckParameter2);
  }
  CmCleanupThreadInfo(v3);
  return v1;
}

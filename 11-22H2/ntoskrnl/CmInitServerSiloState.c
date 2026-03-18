/*
 * XREFs of CmInitServerSiloState @ 0x14080EBB4
 * Callers:
 *     CmpInitSiloSupport @ 0x14080EB40 (CmpInitSiloSupport.c)
 *     PspInitializeServerSiloDeferred @ 0x1409AD150 (PspInitializeServerSiloDeferred.c)
 * Callees:
 *     CmpInitializeThreadInfo @ 0x14022E660 (CmpInitializeThreadInfo.c)
 *     CmCleanupThreadInfo @ 0x14022E6A0 (CmCleanupThreadInfo.c)
 *     CmpGetOrCreateContextForSiloNoRef @ 0x14077AC4C (CmpGetOrCreateContextForSiloNoRef.c)
 *     CmpStartSiloRegistryNamespace @ 0x14077D410 (CmpStartSiloRegistryNamespace.c)
 *     CmpStartSiloKeyLockTracker @ 0x14080EC28 (CmpStartSiloKeyLockTracker.c)
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

/*
 * XREFs of CmInitServerSiloState @ 0x14080C904
 * Callers:
 *     CmpInitSiloSupport @ 0x14080C890 (CmpInitSiloSupport.c)
 *     PspInitializeServerSiloDeferred @ 0x1409AD2A0 (PspInitializeServerSiloDeferred.c)
 * Callees:
 *     CmpInitializeThreadInfo @ 0x14022E750 (CmpInitializeThreadInfo.c)
 *     CmCleanupThreadInfo @ 0x14022E790 (CmCleanupThreadInfo.c)
 *     CmpGetOrCreateContextForSiloNoRef @ 0x14077A92C (CmpGetOrCreateContextForSiloNoRef.c)
 *     CmpStartSiloRegistryNamespace @ 0x14077D0F0 (CmpStartSiloRegistryNamespace.c)
 *     CmpStartSiloKeyLockTracker @ 0x14080C978 (CmpStartSiloKeyLockTracker.c)
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

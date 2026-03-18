/*
 * XREFs of CmpFreeSiloContextCallback @ 0x140A11C00
 * Callers:
 *     <none>
 * Callees:
 *     CmpInitializeThreadInfo @ 0x14022E640 (CmpInitializeThreadInfo.c)
 *     CmCleanupThreadInfo @ 0x14022E680 (CmCleanupThreadInfo.c)
 *     ObfDereferenceObject @ 0x140231570 (ObfDereferenceObject.c)
 *     CmpStopSiloKeyLockTracker @ 0x140A1BE98 (CmpStopSiloKeyLockTracker.c)
 */

__int64 __fastcall CmpFreeSiloContextCallback(ULONG_PTR BugCheckParameter2)
{
  void *v2; // rcx
  __int64 v4[3]; // [rsp+20h] [rbp-18h] BYREF

  *(_OWORD *)v4 = 0LL;
  CmpInitializeThreadInfo((__int64)v4);
  CmpStopSiloKeyLockTracker(BugCheckParameter2);
  v2 = *(void **)(BugCheckParameter2 + 32);
  if ( v2 )
    ObfDereferenceObject(v2);
  return CmCleanupThreadInfo(v4);
}

/*
 * XREFs of CmpRecordRegistryLockAcquire @ 0x14022FB30
 * Callers:
 *     CmpLockRegistryExclusive @ 0x1407691EC (CmpLockRegistryExclusive.c)
 *     CmpLockRegistry @ 0x140AF54A0 (CmpLockRegistry.c)
 * Callees:
 *     Feature_AccessRegistryLockAcquireCount__private_ReportDeviceUsage @ 0x140419778 (Feature_AccessRegistryLockAcquireCount__private_ReportDeviceUsage.c)
 *     CmpThreadInfoLogStack @ 0x14061600C (CmpThreadInfoLogStack.c)
 */

struct _KTHREAD *CmpRecordRegistryLockAcquire()
{
  struct _KTHREAD *result; // rax
  __int64 v1; // rcx

  Feature_AccessRegistryLockAcquireCount__private_ReportDeviceUsage();
  result = KeGetCurrentThread();
  v1 = *(_QWORD *)&result[1].ResourceIndex;
  if ( !v1 )
    return (struct _KTHREAD *)CmpThreadInfoLogStack();
  ++*(_DWORD *)(v1 + 8);
  return result;
}

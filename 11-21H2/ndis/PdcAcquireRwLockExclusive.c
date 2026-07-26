/*
 * XREFs of PdcAcquireRwLockExclusive @ 0x1C0137F1C
 * Callers:
 *     PdcTaskClientRequest @ 0x1C0137D98 (PdcTaskClientRequest.c)
 *     PdcTaskClientUnregister @ 0x1C0137E90 (PdcTaskClientUnregister.c)
 * Callees:
 *     <none>
 */

struct _KTHREAD *__fastcall PdcAcquireRwLockExclusive(__int64 a1)
{
  struct _KTHREAD *result; // rax

  KeEnterCriticalRegion();
  ExAcquirePushLockExclusiveEx(a1, 0LL);
  result = KeGetCurrentThread();
  *(_QWORD *)(a1 + 8) = result;
  return result;
}

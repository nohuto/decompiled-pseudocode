/*
 * XREFs of ExEnterCriticalRegionAndAcquireSharedWaitForExclusive @ 0x140461910
 * Callers:
 *     sub_140608290 @ 0x140608290 (sub_140608290.c)
 *     sub_140A8D720 @ 0x140A8D720 (sub_140A8D720.c)
 * Callees:
 *     ExAcquireSharedWaitForExclusive @ 0x14039B280 (ExAcquireSharedWaitForExclusive.c)
 */

PVOID __stdcall ExEnterCriticalRegionAndAcquireSharedWaitForExclusive(PERESOURCE Resource)
{
  struct _KTHREAD *CurrentThread; // rax

  CurrentThread = KeGetCurrentThread();
  --*((_WORD *)CurrentThread + 242);
  ExAcquireSharedWaitForExclusive(Resource, 1u);
  return (PVOID)*((_QWORD *)KeGetCurrentThread() + 57);
}

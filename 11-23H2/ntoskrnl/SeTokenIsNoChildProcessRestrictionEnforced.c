/*
 * XREFs of SeTokenIsNoChildProcessRestrictionEnforced @ 0x1405B9768
 * Callers:
 *     SeSubProcessToken @ 0x1406B722C (SeSubProcessToken.c)
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x14022F7F0 (KeLeaveCriticalRegionThread.c)
 *     ExReleaseResourceLite @ 0x14023D4E0 (ExReleaseResourceLite.c)
 *     ExAcquireResourceSharedLite @ 0x14023D750 (ExAcquireResourceSharedLite.c)
 */

bool __fastcall SeTokenIsNoChildProcessRestrictionEnforced(__int64 a1)
{
  struct _KTHREAD *CurrentThread; // rax
  int v3; // ebx

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquireResourceSharedLite(*(PERESOURCE *)(a1 + 48), 1u);
  v3 = *(_DWORD *)(a1 + 200);
  ExReleaseResourceLite(*(PERESOURCE *)(a1 + 48));
  KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  return (v3 & 0x80000) != 0;
}

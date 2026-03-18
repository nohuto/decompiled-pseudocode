/*
 * XREFs of SeTokenGetRedirectionTrustPolicy @ 0x140255CD4
 * Callers:
 *     IoCheckRedirectionTrustLevel @ 0x140252BD0 (IoCheckRedirectionTrustLevel.c)
 *     PspGetRedirectionTrustPolicy @ 0x1406DEAEC (PspGetRedirectionTrustPolicy.c)
 * Callees:
 *     ExReleaseResourceLite @ 0x1402B0E80 (ExReleaseResourceLite.c)
 *     ExAcquireResourceSharedLite @ 0x1402B1080 (ExAcquireResourceSharedLite.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x1402F9540 (KiLeaveCriticalRegionUnsafe.c)
 */

bool __fastcall SeTokenGetRedirectionTrustPolicy(__int64 a1, bool *a2, _BYTE *a3)
{
  struct _KTHREAD *CurrentThread; // rax
  int v7; // edi
  bool result; // al

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquireResourceSharedLite(*(PERESOURCE *)(a1 + 48), 1u);
  v7 = *(_DWORD *)(a1 + 200);
  ExReleaseResourceLite(*(PERESOURCE *)(a1 + 48));
  KiLeaveCriticalRegionUnsafe(KeGetCurrentThread());
  result = (v7 & 0x800000) != 0;
  *a2 = result;
  *a3 = HIBYTE(v7) & 1;
  return result;
}

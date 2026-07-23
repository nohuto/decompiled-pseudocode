/*
 * XREFs of SeTokenSetRedirectionTrustPolicy @ 0x140365338
 * Callers:
 *     PspSetRedirectionTrustPolicy @ 0x1407DD7F4 (PspSetRedirectionTrustPolicy.c)
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x14022F7F0 (KeLeaveCriticalRegionThread.c)
 *     ExAcquireResourceExclusiveLite @ 0x1402391B0 (ExAcquireResourceExclusiveLite.c)
 *     ExReleaseResourceLite @ 0x14023D4E0 (ExReleaseResourceLite.c)
 */

_QWORD *__fastcall SeTokenSetRedirectionTrustPolicy(__int64 a1, char a2)
{
  struct _KTHREAD *CurrentThread; // rax
  int v5; // eax
  unsigned int v6; // eax
  signed __int32 v8[10]; // [rsp+0h] [rbp-28h] BYREF

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquireResourceExclusiveLite(*(PERESOURCE *)(a1 + 48), 1u);
  _InterlockedOr(v8, 0);
  v5 = *(_DWORD *)(a1 + 200);
  if ( a2 )
    v6 = v5 & 0xFF3FFFFF | 0x800000;
  else
    v6 = v5 & 0xFF3FFFFF | 0x400000;
  *(_DWORD *)(a1 + 200) = v6;
  *(_QWORD *)(a1 + 56) = ExpLuidIncrement + _InterlockedExchangeAdd64(&ExpLuid, ExpLuidIncrement);
  _InterlockedOr(v8, 0);
  ExReleaseResourceLite(*(PERESOURCE *)(a1 + 48));
  return KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
}

/*
 * XREFs of ObIsDosDeviceLocallyMapped @ 0x14080F870
 * Callers:
 *     <none>
 * Callees:
 *     ExAcquirePushLockSharedEx @ 0x1402AD220 (ExAcquirePushLockSharedEx.c)
 *     KeAbPostRelease @ 0x1402AFC00 (KeAbPostRelease.c)
 *     KiCheckForKernelApcDelivery @ 0x1402F1D50 (KiCheckForKernelApcDelivery.c)
 *     PsGetCurrentServerSiloGlobals @ 0x140347DB0 (PsGetCurrentServerSiloGlobals.c)
 *     ExfReleasePushLockShared @ 0x140359E40 (ExfReleasePushLockShared.c)
 */

__int64 __fastcall ObIsDosDeviceLocallyMapped(int a1, bool *a2)
{
  __int64 v2; // rsi
  char *CurrentServerSiloGlobals; // rax
  struct _KTHREAD *CurrentThread; // rcx
  char *v6; // rbx
  signed __int64 *v7; // rdi
  struct _KTHREAD *v8; // rax

  v2 = (unsigned int)(a1 - 1);
  if ( (unsigned int)v2 > 0x19 )
    return 3221225485LL;
  CurrentServerSiloGlobals = (char *)PsGetCurrentServerSiloGlobals();
  CurrentThread = KeGetCurrentThread();
  v6 = CurrentServerSiloGlobals;
  --CurrentThread->SpecialApcDisable;
  v7 = (signed __int64 *)(CurrentServerSiloGlobals + 120);
  ExAcquirePushLockSharedEx((ULONG_PTR)(CurrentServerSiloGlobals + 120), 0LL);
  *a2 = *(_DWORD *)&v6[4 * v2 + 12] != 0;
  if ( _InterlockedCompareExchange64(v7, 0LL, 17LL) != 17 )
    ExfReleasePushLockShared(v7);
  KeAbPostRelease((ULONG_PTR)v7);
  v8 = KeGetCurrentThread();
  if ( v8->SpecialApcDisable++ == -1
    && ($CEA84C04E3712D858E5667A507841A2A *)v8->ApcState.ApcListHead[0].Flink != &v8->152 )
  {
    KiCheckForKernelApcDelivery();
  }
  return 0LL;
}

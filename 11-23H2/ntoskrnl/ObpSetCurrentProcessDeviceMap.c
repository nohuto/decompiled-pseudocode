/*
 * XREFs of ObpSetCurrentProcessDeviceMap @ 0x1407AF7A4
 * Callers:
 *     ObpLookupObjectName @ 0x1406ED750 (ObpLookupObjectName.c)
 *     ObpReferenceCurrentDeviceMap @ 0x1406FCB00 (ObpReferenceCurrentDeviceMap.c)
 * Callees:
 *     PsGetCurrentServerSiloGlobals @ 0x14022D480 (PsGetCurrentServerSiloGlobals.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140231120 (ExAcquirePushLockExclusiveEx.c)
 *     KeAbPostRelease @ 0x140231350 (KeAbPostRelease.c)
 *     ObfDereferenceObject @ 0x140231660 (ObfDereferenceObject.c)
 *     PsReferencePrimaryTokenWithTag @ 0x140232A90 (PsReferencePrimaryTokenWithTag.c)
 *     ExfTryToWakePushLock @ 0x1402BDBF0 (ExfTryToWakePushLock.c)
 *     KiCheckForKernelApcDelivery @ 0x14030FAB0 (KiCheckForKernelApcDelivery.c)
 *     ObpReferenceDeviceMapFastRef @ 0x1407AF8F8 (ObpReferenceDeviceMapFastRef.c)
 *     SeGetTokenDeviceMap @ 0x1407AF940 (SeGetTokenDeviceMap.c)
 *     ObDereferenceDeviceMap @ 0x1407B004C (ObDereferenceDeviceMap.c)
 */

__int64 ObpSetCurrentProcessDeviceMap()
{
  __int64 v0; // rsi
  _KPROCESS *Process; // r15
  ULONG_PTR v2; // rax
  void *v3; // rbp
  char *CurrentServerSiloGlobals; // rax
  char *v5; // r14
  int v6; // edx
  struct _KTHREAD *CurrentThread; // rax
  volatile signed __int64 *v8; // r14
  __int64 v9; // rdi
  struct _KTHREAD *v10; // rax
  bool v11; // zf
  __int64 v13; // [rsp+50h] [rbp+8h] BYREF
  __int64 v14; // [rsp+58h] [rbp+10h]

  v0 = 0LL;
  Process = KeGetCurrentThread()->ApcState.Process;
  v2 = PsReferencePrimaryTokenWithTag((__int64)Process, 0x746C6644u);
  v3 = (void *)v2;
  if ( v2 )
  {
    v14 = *(_QWORD *)(v2 + 24);
    CurrentServerSiloGlobals = (char *)PsGetCurrentServerSiloGlobals();
    v5 = CurrentServerSiloGlobals;
    if ( v6 != 999 || HIDWORD(v14) )
    {
      v13 = 0LL;
      if ( (int)SeGetTokenDeviceMap(v3, &v13) < 0 )
      {
LABEL_14:
        ObfDereferenceObject(v3);
        return v0;
      }
      v0 = v13;
    }
    else
    {
      v0 = ObpReferenceDeviceMapFastRef(CurrentServerSiloGlobals);
    }
    if ( v0 )
    {
      if ( _InterlockedExchangeAdd64((volatile signed __int64 *)(v0 + 240), 0x10uLL) <= 0 )
        __fastfail(0xEu);
      CurrentThread = KeGetCurrentThread();
      v8 = (volatile signed __int64 *)(v5 + 120);
      --CurrentThread->SpecialApcDisable;
      ExAcquirePushLockExclusiveEx((ULONG_PTR)v8, 0LL);
      v9 = _InterlockedExchange64((volatile __int64 *)&Process[1].Affinity.StaticBitmap[31], v0 | 0xF);
      if ( (_InterlockedExchangeAdd64(v8, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock(v8);
      KeAbPostRelease((ULONG_PTR)v8);
      v10 = KeGetCurrentThread();
      v11 = v10->SpecialApcDisable++ == -1;
      if ( v11 && ($C71981A45BEB2B45F82C232A7085991E *)v10->ApcState.ApcListHead[0].Flink != &v10->152 )
        KiCheckForKernelApcDelivery();
      if ( v9 )
        ObDereferenceDeviceMap((PVOID)(v9 & 0xFFFFFFFFFFFFFFF0uLL));
    }
    goto LABEL_14;
  }
  return v0;
}

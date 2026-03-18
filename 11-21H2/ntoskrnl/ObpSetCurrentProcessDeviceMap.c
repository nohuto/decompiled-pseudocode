/*
 * XREFs of ObpSetCurrentProcessDeviceMap @ 0x14069CAE8
 * Callers:
 *     ObpReferenceCurrentDeviceMap @ 0x14069C820 (ObpReferenceCurrentDeviceMap.c)
 *     ObpLookupObjectName @ 0x1407CB6C0 (ObpLookupObjectName.c)
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x1402AC910 (ExAcquirePushLockExclusiveEx.c)
 *     ObfDereferenceObject @ 0x1402AD3E0 (ObfDereferenceObject.c)
 *     KeAbPostRelease @ 0x1402AFC00 (KeAbPostRelease.c)
 *     KiCheckForKernelApcDelivery @ 0x1402F1D50 (KiCheckForKernelApcDelivery.c)
 *     PsReferencePrimaryTokenWithTag @ 0x140347920 (PsReferencePrimaryTokenWithTag.c)
 *     PsGetCurrentServerSiloGlobals @ 0x140347DB0 (PsGetCurrentServerSiloGlobals.c)
 *     ExfTryToWakePushLock @ 0x140359F40 (ExfTryToWakePushLock.c)
 *     ObDereferenceDeviceMap @ 0x14069C9C0 (ObDereferenceDeviceMap.c)
 *     SeGetTokenDeviceMap @ 0x14069CC40 (SeGetTokenDeviceMap.c)
 *     ObpReferenceDeviceMapFastRef @ 0x14069CE84 (ObpReferenceDeviceMapFastRef.c)
 */

__int64 ObpSetCurrentProcessDeviceMap()
{
  __int64 v0; // rsi
  _KPROCESS *Process; // r15
  unsigned __int64 v2; // rax
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
      --CurrentThread->SpecialApcDisable;
      v8 = (volatile signed __int64 *)(v5 + 120);
      ExAcquirePushLockExclusiveEx((ULONG_PTR)v8, 0LL);
      v9 = _InterlockedExchange64((volatile __int64 *)&Process[1].Affinity.StaticBitmap[31], v0 | 0xF);
      if ( (_InterlockedExchangeAdd64(v8, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock(v8);
      KeAbPostRelease((ULONG_PTR)v8);
      v10 = KeGetCurrentThread();
      v11 = v10->SpecialApcDisable++ == -1;
      if ( v11 && ($CEA84C04E3712D858E5667A507841A2A *)v10->ApcState.ApcListHead[0].Flink != &v10->152 )
        KiCheckForKernelApcDelivery();
      if ( v9 )
        ObDereferenceDeviceMap((volatile signed __int64 *)(v9 & 0xFFFFFFFFFFFFFFF0uLL), (v9 & 0xF) + 1);
    }
    goto LABEL_14;
  }
  return v0;
}

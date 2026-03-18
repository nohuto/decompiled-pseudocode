/*
 * XREFs of ObClearProcessDeviceMap @ 0x1407AFD88
 * Callers:
 *     PspProcessDelete @ 0x1407610B0 (PspProcessDelete.c)
 *     PspAssignPrimaryToken @ 0x140840128 (PspAssignPrimaryToken.c)
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x140231030 (ExAcquirePushLockExclusiveEx.c)
 *     KeAbPostRelease @ 0x140231260 (KeAbPostRelease.c)
 *     PsGetProcessServerSilo @ 0x14028C180 (PsGetProcessServerSilo.c)
 *     PsGetServerSiloGlobals @ 0x140297694 (PsGetServerSiloGlobals.c)
 *     ExfTryToWakePushLock @ 0x1402BD960 (ExfTryToWakePushLock.c)
 *     KiCheckForKernelApcDelivery @ 0x14030F820 (KiCheckForKernelApcDelivery.c)
 *     ObDereferenceDeviceMap @ 0x1407AFE5C (ObDereferenceDeviceMap.c)
 */

void __fastcall ObClearProcessDeviceMap(__int64 a1)
{
  __int64 ProcessServerSilo; // rax
  char *ServerSiloGlobals; // rax
  struct _KTHREAD *CurrentThread; // rdx
  volatile signed __int64 *v5; // rdi
  __int64 v6; // rbx
  char v7; // bp
  struct _KTHREAD *v8; // rax
  bool v9; // zf

  if ( *(_QWORD *)(a1 + 1416) )
  {
    ProcessServerSilo = PsGetProcessServerSilo(a1);
    ServerSiloGlobals = (char *)PsGetServerSiloGlobals(ProcessServerSilo);
    CurrentThread = KeGetCurrentThread();
    v5 = (volatile signed __int64 *)(ServerSiloGlobals + 120);
    --CurrentThread->SpecialApcDisable;
    ExAcquirePushLockExclusiveEx((ULONG_PTR)(ServerSiloGlobals + 120), 0LL);
    v6 = _InterlockedExchange64((volatile __int64 *)(a1 + 1416), 0LL);
    v7 = _InterlockedExchangeAdd64(v5, 0xFFFFFFFFFFFFFFFFuLL);
    if ( (v7 & 2) != 0 && (v7 & 4) == 0 )
      ExfTryToWakePushLock(v5);
    KeAbPostRelease((ULONG_PTR)v5);
    v8 = KeGetCurrentThread();
    v9 = v8->SpecialApcDisable++ == -1;
    if ( v9 && ($C71981A45BEB2B45F82C232A7085991E *)v8->ApcState.ApcListHead[0].Flink != &v8->152 )
      KiCheckForKernelApcDelivery();
    if ( v6 )
      ObDereferenceDeviceMap((PVOID)(v6 & 0xFFFFFFFFFFFFFFF0uLL));
  }
}

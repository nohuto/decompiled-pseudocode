/*
 * XREFs of ObClearProcessDeviceMap @ 0x14069C104
 * Callers:
 *     PspProcessDelete @ 0x1407E0F30 (PspProcessDelete.c)
 *     PspAssignPrimaryToken @ 0x140847028 (PspAssignPrimaryToken.c)
 * Callees:
 *     PsGetServerSiloGlobals @ 0x140204738 (PsGetServerSiloGlobals.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1402AC910 (ExAcquirePushLockExclusiveEx.c)
 *     KeAbPostRelease @ 0x1402AFC00 (KeAbPostRelease.c)
 *     KiCheckForKernelApcDelivery @ 0x1402F1D50 (KiCheckForKernelApcDelivery.c)
 *     PsGetProcessServerSilo @ 0x140347680 (PsGetProcessServerSilo.c)
 *     ExfTryToWakePushLock @ 0x140359F40 (ExfTryToWakePushLock.c)
 *     ObDereferenceDeviceMap @ 0x14069C9C0 (ObDereferenceDeviceMap.c)
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
    --CurrentThread->SpecialApcDisable;
    v5 = (volatile signed __int64 *)(ServerSiloGlobals + 120);
    ExAcquirePushLockExclusiveEx((ULONG_PTR)(ServerSiloGlobals + 120), 0LL);
    v6 = _InterlockedExchange64((volatile __int64 *)(a1 + 1416), 0LL);
    v7 = _InterlockedExchangeAdd64(v5, 0xFFFFFFFFFFFFFFFFuLL);
    if ( (v7 & 2) != 0 && (v7 & 4) == 0 )
      ExfTryToWakePushLock(v5);
    KeAbPostRelease((ULONG_PTR)v5);
    v8 = KeGetCurrentThread();
    v9 = v8->SpecialApcDisable++ == -1;
    if ( v9 && ($CEA84C04E3712D858E5667A507841A2A *)v8->ApcState.ApcListHead[0].Flink != &v8->152 )
      KiCheckForKernelApcDelivery();
    if ( v6 )
      ObDereferenceDeviceMap((PVOID)(v6 & 0xFFFFFFFFFFFFFFF0uLL));
  }
}

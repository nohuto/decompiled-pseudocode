/*
 * XREFs of ObpDeleteSymbolicLinkName @ 0x140697B5C
 * Callers:
 *     ObpMarkDirectoryObjectsTemporary @ 0x14069794C (ObpMarkDirectoryObjectsTemporary.c)
 *     ObpCloseHandle @ 0x1406E76B0 (ObpCloseHandle.c)
 *     ObpDeleteNameCheck @ 0x140740330 (ObpDeleteNameCheck.c)
 *     ObShutdownSystem @ 0x14097B000 (ObShutdownSystem.c)
 * Callees:
 *     ObDereferenceObjectDeferDelete @ 0x14020B8D0 (ObDereferenceObjectDeferDelete.c)
 *     PsGetCurrentServerSiloGlobals @ 0x14022D480 (PsGetCurrentServerSiloGlobals.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140231120 (ExAcquirePushLockExclusiveEx.c)
 *     KeAbPostRelease @ 0x140231350 (KeAbPostRelease.c)
 *     ObFastReplaceObject @ 0x14029A808 (ObFastReplaceObject.c)
 *     ExfTryToWakePushLock @ 0x1402BDBF0 (ExfTryToWakePushLock.c)
 *     KiCheckForKernelApcDelivery @ 0x14030FAB0 (KiCheckForKernelApcDelivery.c)
 */

void __fastcall ObpDeleteSymbolicLinkName(__int64 a1)
{
  int v1; // eax
  __int64 v3; // r14
  __int64 v4; // r15
  char *CurrentServerSiloGlobals; // rax
  struct _KTHREAD *CurrentThread; // rcx
  char *v7; // rdi
  volatile signed __int64 *v8; // rsi
  int v9; // r13d
  void *v10; // r12
  struct _KTHREAD *v11; // rax
  bool v12; // zf

  v1 = *(_DWORD *)(a1 + 24);
  if ( v1 )
  {
    v3 = (unsigned int)(v1 - 1);
    v4 = *(_QWORD *)(*(_QWORD *)(a1 - 48 - ObpInfoMaskToOffset[*(_BYTE *)(a1 - 48 + 26) & 3]) + 304LL);
    if ( v4 )
    {
      CurrentServerSiloGlobals = (char *)PsGetCurrentServerSiloGlobals();
      CurrentThread = KeGetCurrentThread();
      v7 = CurrentServerSiloGlobals;
      v8 = (volatile signed __int64 *)(CurrentServerSiloGlobals + 120);
      --CurrentThread->SpecialApcDisable;
      ExAcquirePushLockExclusiveEx((ULONG_PTR)(CurrentServerSiloGlobals + 120), 0LL);
      v9 = ~(1 << v3);
      *(_DWORD *)(v4 + 256) &= v9;
      *(_BYTE *)(v3 + v4 + 260) = 0;
      v10 = (void *)ObFastReplaceObject((volatile __int64 *)(v4 + 8 * (v3 + 4)), 0LL);
      if ( v4 == (*(_QWORD *)v7 & 0xFFFFFFFFFFFFFFF0uLL) )
        *((_DWORD *)v7 + 2) &= v9;
      else
        --*(_DWORD *)&v7[4 * v3 + 12];
      if ( (_InterlockedExchangeAdd64(v8, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock(v8);
      KeAbPostRelease((ULONG_PTR)v8);
      v11 = KeGetCurrentThread();
      v12 = v11->SpecialApcDisable++ == -1;
      if ( v12 && ($C71981A45BEB2B45F82C232A7085991E *)v11->ApcState.ApcListHead[0].Flink != &v11->152 )
        KiCheckForKernelApcDelivery();
      if ( v10 )
        ObDereferenceObjectDeferDelete(v10);
    }
    *(_DWORD *)(a1 + 24) = 0;
  }
}

/*
 * XREFs of ObpDeleteSymbolicLinkName @ 0x1406B96E8
 * Callers:
 *     ObpMarkDirectoryObjectsTemporary @ 0x1406B94DC (ObpMarkDirectoryObjectsTemporary.c)
 *     ObpCloseHandle @ 0x140734160 (ObpCloseHandle.c)
 *     ObpDeleteNameCheck @ 0x1407A3190 (ObpDeleteNameCheck.c)
 *     ObShutdownSystem @ 0x140983EF0 (ObShutdownSystem.c)
 * Callees:
 *     ObFastReplaceObject @ 0x140276A48 (ObFastReplaceObject.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1402AC910 (ExAcquirePushLockExclusiveEx.c)
 *     KeAbPostRelease @ 0x1402AFC00 (KeAbPostRelease.c)
 *     KiCheckForKernelApcDelivery @ 0x1402F1D50 (KiCheckForKernelApcDelivery.c)
 *     PsGetCurrentServerSiloGlobals @ 0x140347DB0 (PsGetCurrentServerSiloGlobals.c)
 *     ObDereferenceObjectDeferDelete @ 0x140348920 (ObDereferenceObjectDeferDelete.c)
 *     ExfTryToWakePushLock @ 0x140359F40 (ExfTryToWakePushLock.c)
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
      --CurrentThread->SpecialApcDisable;
      v8 = (volatile signed __int64 *)(CurrentServerSiloGlobals + 120);
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
      if ( v12 && ($CEA84C04E3712D858E5667A507841A2A *)v11->ApcState.ApcListHead[0].Flink != &v11->152 )
        KiCheckForKernelApcDelivery();
      if ( v10 )
        ObDereferenceObjectDeferDelete(v10);
    }
    *(_DWORD *)(a1 + 24) = 0;
  }
}

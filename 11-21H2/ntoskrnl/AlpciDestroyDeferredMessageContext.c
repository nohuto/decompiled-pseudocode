/*
 * XREFs of AlpciDestroyDeferredMessageContext @ 0x1406A2630
 * Callers:
 *     NtWaitForWorkViaWorkerFactory @ 0x1402BA130 (NtWaitForWorkViaWorkerFactory.c)
 * Callees:
 *     ObfDereferenceObject @ 0x1402AD3E0 (ObfDereferenceObject.c)
 *     KiCheckForKernelApcDelivery @ 0x1402F1D50 (KiCheckForKernelApcDelivery.c)
 */

char __fastcall AlpciDestroyDeferredMessageContext(__int64 a1)
{
  struct _KTHREAD *CurrentThread; // rax
  void *v3; // rcx
  void *v4; // rcx
  struct _KTHREAD *v5; // rax
  bool v6; // zf

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v3 = *(void **)a1;
  if ( v3 )
  {
    ObfDereferenceObject(v3);
    *(_QWORD *)a1 = 0LL;
  }
  v4 = *(void **)(a1 + 8);
  if ( v4 )
  {
    ObfDereferenceObject(v4);
    *(_QWORD *)(a1 + 8) = 0LL;
  }
  v5 = KeGetCurrentThread();
  v6 = v5->KernelApcDisable++ == -1;
  if ( v6
    && ($CEA84C04E3712D858E5667A507841A2A *)v5->ApcState.ApcListHead[0].Flink != &v5->152
    && !v5->SpecialApcDisable )
  {
    LOBYTE(v5) = KiCheckForKernelApcDelivery();
  }
  return (char)v5;
}

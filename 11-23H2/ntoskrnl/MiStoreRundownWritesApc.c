/*
 * XREFs of MiStoreRundownWritesApc @ 0x14065C8E0
 * Callers:
 *     <none>
 * Callees:
 *     KeSetEvent @ 0x14023C5E0 (KeSetEvent.c)
 *     KiCheckForKernelApcDelivery @ 0x14030F820 (KiCheckForKernelApcDelivery.c)
 *     MiStoreDecrementOutstandingWrites @ 0x14065C000 (MiStoreDecrementOutstandingWrites.c)
 */

LONG __fastcall MiStoreRundownWritesApc(__int64 a1)
{
  struct _KTHREAD *CurrentThread; // rbx
  __int64 v3; // rcx
  bool v4; // zf

  CurrentThread = KeGetCurrentThread();
  v3 = *(_QWORD *)(a1 + 48);
  --CurrentThread->SpecialApcDisable;
  ++*(_DWORD *)(v3 + 1212);
  *(_QWORD *)(v3 + 1216) = a1;
  MiStoreDecrementOutstandingWrites(v3);
  v4 = CurrentThread->SpecialApcDisable++ == -1;
  if ( v4 && ($C71981A45BEB2B45F82C232A7085991E *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
    KiCheckForKernelApcDelivery();
  return KeSetEvent((PRKEVENT)(a1 + 24), 0, 0);
}

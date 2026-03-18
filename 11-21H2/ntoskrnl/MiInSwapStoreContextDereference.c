/*
 * XREFs of MiInSwapStoreContextDereference @ 0x1406EBE54
 * Callers:
 *     MiInSwapStore @ 0x1406EBCCC (MiInSwapStore.c)
 *     MiInSwapStoreWorker @ 0x1406EBDB0 (MiInSwapStoreWorker.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

void __fastcall MiInSwapStoreContextDereference(volatile signed __int32 *a1)
{
  if ( _InterlockedExchangeAdd(a1 + 16, 0xFFFFFFFF) == 1 )
    ExFreePoolWithTag((PVOID)a1, 0);
}

/*
 * XREFs of ViDeadlockKeInitializeMutant_Exit @ 0x140AD9370
 * Callers:
 *     <none>
 * Callees:
 *     VfDeadlockAcquireResource @ 0x140AD6DCC (VfDeadlockAcquireResource.c)
 *     VfDeadlockInitializeResource @ 0x140AD7758 (VfDeadlockInitializeResource.c)
 */

PVOID __fastcall ViDeadlockKeInitializeMutant_Exit(__int64 a1, __int64 a2)
{
  PVOID result; // rax

  result = (PVOID)VfDeadlockInitializeResource(*(LONG **)(a1 + 16), a2, *(void **)a1);
  if ( *(_BYTE *)(a1 + 8) )
    return VfDeadlockAcquireResource(*(LONG **)(a1 + 16), 1, (__int64)KeGetCurrentThread(), 0, *(PVOID *)a1);
  return result;
}

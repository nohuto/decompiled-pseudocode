/*
 * XREFs of sub_1406DFD98 @ 0x1406DFD98
 * Callers:
 *     sub_1406DFC4C @ 0x1406DFC4C (sub_1406DFC4C.c)
 *     sub_140774F24 @ 0x140774F24 (sub_140774F24.c)
 * Callees:
 *     ExAcquireFastMutex @ 0x14028A160 (ExAcquireFastMutex.c)
 *     KeReleaseGuardedMutex @ 0x1402AF9B0 (KeReleaseGuardedMutex.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

void __fastcall sub_1406DFD98(__int64 a1)
{
  void *v2; // rcx

  ExAcquireFastMutex(&stru_140C467E0);
  v2 = *(void **)(a1 + 48);
  if ( v2 )
    ExFreePoolWithTag(v2, 0x49706E50u);
  *(_DWORD *)(a1 + 40) = 0;
  *(_QWORD *)(a1 + 48) = 0LL;
  KeReleaseGuardedMutex(&stru_140C467E0);
}

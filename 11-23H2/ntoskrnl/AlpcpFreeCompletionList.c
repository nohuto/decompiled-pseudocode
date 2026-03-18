/*
 * XREFs of AlpcpFreeCompletionList @ 0x1409796C4
 * Callers:
 *     AlpcpDoPortCleanup @ 0x140718D20 (AlpcpDoPortCleanup.c)
 *     NtAlpcSetInformation @ 0x1407857F0 (NtAlpcSetInformation.c)
 * Callees:
 *     IoFreeMdl @ 0x1402ACFE0 (IoFreeMdl.c)
 *     MmUnlockPages @ 0x1402CAB10 (MmUnlockPages.c)
 *     AlpcpUnregisterCompletionListDatabase @ 0x140979FB0 (AlpcpUnregisterCompletionListDatabase.c)
 *     ExFreePoolWithTag @ 0x140AAE110 (ExFreePoolWithTag.c)
 */

void __fastcall AlpcpFreeCompletionList(__int64 a1)
{
  PMDL *v1; // rbx

  v1 = *(PMDL **)(a1 + 360);
  MmUnlockPages(v1[4]);
  IoFreeMdl(v1[4]);
  AlpcpUnregisterCompletionListDatabase(v1);
  ExFreePoolWithTag(v1, 0);
  *(_QWORD *)(a1 + 360) = 0LL;
  *(_DWORD *)(a1 + 416) &= ~0x4000u;
}

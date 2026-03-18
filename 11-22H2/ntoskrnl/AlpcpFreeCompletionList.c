/*
 * XREFs of AlpcpFreeCompletionList @ 0x140979774
 * Callers:
 *     AlpcpDoPortCleanup @ 0x140718D90 (AlpcpDoPortCleanup.c)
 *     NtAlpcSetInformation @ 0x140785D00 (NtAlpcSetInformation.c)
 * Callees:
 *     IoFreeMdl @ 0x1402ACFB0 (IoFreeMdl.c)
 *     MmUnlockPages @ 0x1402CAB10 (MmUnlockPages.c)
 *     AlpcpUnregisterCompletionListDatabase @ 0x14097A060 (AlpcpUnregisterCompletionListDatabase.c)
 *     ExFreePoolWithTag @ 0x140AAF110 (ExFreePoolWithTag.c)
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

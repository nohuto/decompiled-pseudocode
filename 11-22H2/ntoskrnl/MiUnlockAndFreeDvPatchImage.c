/*
 * XREFs of MiUnlockAndFreeDvPatchImage @ 0x140641234
 * Callers:
 *     MiLockPatchIatForDV @ 0x140640510 (MiLockPatchIatForDV.c)
 *     MiReapplyImportOptimizationForDriverVerifier @ 0x140640958 (MiReapplyImportOptimizationForDriverVerifier.c)
 * Callees:
 *     IoFreeMdl @ 0x1402ACFB0 (IoFreeMdl.c)
 *     MmUnmapLockedPages @ 0x1402CB700 (MmUnmapLockedPages.c)
 *     MiUnlockDriverPages @ 0x140875FFC (MiUnlockDriverPages.c)
 *     ExFreePoolWithTag @ 0x140AAF110 (ExFreePoolWithTag.c)
 */

void __fastcall MiUnlockAndFreeDvPatchImage(char *P)
{
  __int64 v2; // rcx

  v2 = *((_QWORD *)P + 15);
  if ( v2 )
  {
    if ( (*(_BYTE *)(v2 + 10) & 1) != 0 )
      MmUnmapLockedPages(*(PVOID *)(v2 + 24), (PMDL)v2);
    IoFreeMdl(*((PMDL *)P + 15));
  }
  MiUnlockDriverPages(P + 16);
  ExFreePoolWithTag(P, 0);
}

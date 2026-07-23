/*
 * XREFs of MiUnlockAndFreeDvPatchImage @ 0x140641714
 * Callers:
 *     MiLockPatchIatForDV @ 0x1406409F0 (MiLockPatchIatForDV.c)
 *     MiReapplyImportOptimizationForDriverVerifier @ 0x140640E38 (MiReapplyImportOptimizationForDriverVerifier.c)
 * Callees:
 *     IoFreeMdl @ 0x1402AD270 (IoFreeMdl.c)
 *     MmUnmapLockedPages @ 0x1402CB990 (MmUnmapLockedPages.c)
 *     MiUnlockDriverPages @ 0x140875D6C (MiUnlockDriverPages.c)
 *     ExFreePoolWithTag @ 0x140AAE110 (ExFreePoolWithTag.c)
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

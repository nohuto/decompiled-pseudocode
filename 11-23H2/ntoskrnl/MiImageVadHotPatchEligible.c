/*
 * XREFs of MiImageVadHotPatchEligible @ 0x1407BA950
 * Callers:
 *     MiSetProtectionOnSection @ 0x140277F10 (MiSetProtectionOnSection.c)
 *     MiGetVadForHotPatchInProgress @ 0x140A375BC (MiGetVadForHotPatchInProgress.c)
 *     MiHotPatchProcess @ 0x140A37774 (MiHotPatchProcess.c)
 *     MmPrepareImagePagesForHotPatch @ 0x140A3C4C4 (MmPrepareImagePagesForHotPatch.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiImageVadHotPatchEligible(__int64 a1)
{
  unsigned int v1; // r10d

  v1 = 0;
  if ( !dword_140C6987C || (*(_DWORD *)(a1 + 64) & 0x1000000) != 0 || (*(_DWORD *)(a1 + 48) & 0xF80) != 0x380 )
    return 0LL;
  LOBYTE(v1) = (*(unsigned int *)(a1 + 28) | ((unsigned __int64)*(unsigned __int8 *)(a1 + 33) << 32))
             - (*(unsigned int *)(a1 + 24) | ((unsigned __int64)*(unsigned __int8 *)(a1 + 32) << 32))
             + 1 > *(unsigned int *)(***(_QWORD ***)(a1 + 72) + 8LL);
  return v1;
}

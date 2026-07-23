/*
 * XREFs of MiReleaseHotPatchResources @ 0x140A3BF50
 * Callers:
 *     MiApplyImageHotPatchRequest @ 0x140A35890 (MiApplyImageHotPatchRequest.c)
 *     MmPrepareImagePagesForHotPatch @ 0x140A3C4C4 (MmPrepareImagePagesForHotPatch.c)
 * Callees:
 *     IoFreeMdl @ 0x1402AD270 (IoFreeMdl.c)
 *     MmUnlockPages @ 0x1402CADA0 (MmUnlockPages.c)
 *     MiReleasePtes @ 0x1402CBB70 (MiReleasePtes.c)
 *     MiGetPteAddress @ 0x1402DE29C (MiGetPteAddress.c)
 *     MiFinishHoldingDirtyFaults @ 0x140642B18 (MiFinishHoldingDirtyFaults.c)
 *     ExFreePoolWithTag @ 0x140AAE110 (ExFreePoolWithTag.c)
 */

void __fastcall MiReleaseHotPatchResources(__int64 a1)
{
  __int64 v2; // rcx
  __int64 *PteAddress; // rax
  unsigned int v4; // r8d
  struct _MDL *v5; // rdi
  struct _MDL *v6; // rax
  void *v7; // rcx
  void *v8; // rcx

  if ( (*(_DWORD *)(a1 + 140) & 2) != 0 )
    MiFinishHoldingDirtyFaults((_QWORD *)(a1 + 88));
  v2 = *(_QWORD *)(a1 + 64);
  if ( v2 )
  {
    PteAddress = (__int64 *)MiGetPteAddress(*(_QWORD *)(v2 + 24));
    MiReleasePtes((__int64)&qword_140C69940, PteAddress, v4);
    *(_WORD *)(*(_QWORD *)(a1 + 64) + 10LL) &= ~1u;
    IoFreeMdl(*(PMDL *)(a1 + 64));
  }
  v5 = *(struct _MDL **)(a1 + 56);
  if ( v5 )
  {
    v6 = *(struct _MDL **)(a1 + 56);
    do
    {
      *(_QWORD *)(a1 + 56) = v6->Next;
      MmUnlockPages(v5);
      IoFreeMdl(v5);
      v5 = *(struct _MDL **)(a1 + 56);
      v6 = v5;
    }
    while ( v5 );
  }
  v7 = *(void **)(a1 + 40);
  if ( v7 )
  {
    ExFreePoolWithTag(v7, 0);
    *(_QWORD *)(a1 + 40) = 0LL;
  }
  v8 = *(void **)(a1 + 48);
  if ( v8 )
  {
    ExFreePoolWithTag(v8, 0);
    *(_QWORD *)(a1 + 48) = 0LL;
  }
}

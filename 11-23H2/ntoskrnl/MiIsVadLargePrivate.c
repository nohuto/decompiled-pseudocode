/*
 * XREFs of MiIsVadLargePrivate @ 0x140288300
 * Callers:
 *     MiCheckUserVirtualAddress @ 0x14025B040 (MiCheckUserVirtualAddress.c)
 *     MiInsertVad @ 0x140287F20 (MiInsertVad.c)
 *     MiRemoveVad @ 0x14028A700 (MiRemoveVad.c)
 *     MiPrefetchJumpVad @ 0x140632528 (MiPrefetchJumpVad.c)
 *     MiBuildForkPte @ 0x140662750 (MiBuildForkPte.c)
 *     MiCloneVads @ 0x1406637C8 (MiCloneVads.c)
 *     MiDeleteVad @ 0x1406FA630 (MiDeleteVad.c)
 *     MiScrubProcessLargePage @ 0x140A46C44 (MiScrubProcessLargePage.c)
 *     MiAllocateChildVads @ 0x140A4862C (MiAllocateChildVads.c)
 *     MiDeletePartialCloneVads @ 0x140A490DC (MiDeletePartialCloneVads.c)
 *     MiMapChildLargePageVads @ 0x140A4952C (MiMapChildLargePageVads.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall MiIsVadLargePrivate(__int64 a1)
{
  int v1; // eax

  v1 = *(_DWORD *)(a1 + 48);
  return (v1 & 0x200000) != 0 && ((v1 & 0x800000) != 0 || (v1 & 0x180000u) >= 0x100000)
      || (v1 & 0x70) == 0x20 && (*(_DWORD *)(a1 + 64) & 0x1000000) != 0;
}

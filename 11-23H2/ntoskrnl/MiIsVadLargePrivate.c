/*
 * XREFs of MiIsVadLargePrivate @ 0x140288070
 * Callers:
 *     MiCheckUserVirtualAddress @ 0x14025ADB0 (MiCheckUserVirtualAddress.c)
 *     MiInsertVad @ 0x140287C90 (MiInsertVad.c)
 *     MiRemoveVad @ 0x14028A470 (MiRemoveVad.c)
 *     MiPrefetchJumpVad @ 0x140631FD8 (MiPrefetchJumpVad.c)
 *     MiBuildForkPte @ 0x140662200 (MiBuildForkPte.c)
 *     MiCloneVads @ 0x140663278 (MiCloneVads.c)
 *     MiDeleteVad @ 0x1406FA420 (MiDeleteVad.c)
 *     MiScrubProcessLargePage @ 0x140A46994 (MiScrubProcessLargePage.c)
 *     MiAllocateChildVads @ 0x140A4837C (MiAllocateChildVads.c)
 *     MiDeletePartialCloneVads @ 0x140A48E2C (MiDeletePartialCloneVads.c)
 *     MiMapChildLargePageVads @ 0x140A4927C (MiMapChildLargePageVads.c)
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

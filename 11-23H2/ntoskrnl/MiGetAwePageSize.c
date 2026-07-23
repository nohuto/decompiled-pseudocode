/*
 * XREFs of MiGetAwePageSize @ 0x14064AE68
 * Callers:
 *     MiAllocateFastAwePages @ 0x140A40454 (MiAllocateFastAwePages.c)
 *     MiAllocateUserPhysicalPages @ 0x140A40608 (MiAllocateUserPhysicalPages.c)
 *     MiComputeAweCharges @ 0x140A41768 (MiComputeAweCharges.c)
 *     MiCreateAweInfoBitMap @ 0x140A417F0 (MiCreateAweInfoBitMap.c)
 *     MiCreateUserPhysicalView @ 0x140A41A28 (MiCreateUserPhysicalView.c)
 *     MiDeleteAweInfoPages @ 0x140A41D40 (MiDeleteAweInfoPages.c)
 *     MiGetAweVadPageSize @ 0x140A4200C (MiGetAweVadPageSize.c)
 *     MiReferenceIncomingPhysicalPages @ 0x140A42068 (MiReferenceIncomingPhysicalPages.c)
 *     NtFreeUserPhysicalPages @ 0x140A425D0 (NtFreeUserPhysicalPages.c)
 *     NtMapUserPhysicalPages @ 0x140A42B30 (NtMapUserPhysicalPages.c)
 *     NtMapUserPhysicalPagesScatter @ 0x140A42DE0 (NtMapUserPhysicalPagesScatter.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiGetAwePageSize(__int64 a1)
{
  return *(_QWORD *)(a1 + 16);
}

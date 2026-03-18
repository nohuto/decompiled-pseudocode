/*
 * XREFs of MiGetAwePageSize @ 0x14064A918
 * Callers:
 *     MiAllocateFastAwePages @ 0x140A401A4 (MiAllocateFastAwePages.c)
 *     MiAllocateUserPhysicalPages @ 0x140A40358 (MiAllocateUserPhysicalPages.c)
 *     MiComputeAweCharges @ 0x140A414B8 (MiComputeAweCharges.c)
 *     MiCreateAweInfoBitMap @ 0x140A41540 (MiCreateAweInfoBitMap.c)
 *     MiCreateUserPhysicalView @ 0x140A41778 (MiCreateUserPhysicalView.c)
 *     MiDeleteAweInfoPages @ 0x140A41A90 (MiDeleteAweInfoPages.c)
 *     MiGetAweVadPageSize @ 0x140A41D5C (MiGetAweVadPageSize.c)
 *     MiReferenceIncomingPhysicalPages @ 0x140A41DB8 (MiReferenceIncomingPhysicalPages.c)
 *     NtFreeUserPhysicalPages @ 0x140A42320 (NtFreeUserPhysicalPages.c)
 *     NtMapUserPhysicalPages @ 0x140A42880 (NtMapUserPhysicalPages.c)
 *     NtMapUserPhysicalPagesScatter @ 0x140A42B30 (NtMapUserPhysicalPagesScatter.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiGetAwePageSize(__int64 a1)
{
  return *(_QWORD *)(a1 + 16);
}

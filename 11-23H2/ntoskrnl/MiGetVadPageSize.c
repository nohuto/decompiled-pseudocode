/*
 * XREFs of MiGetVadPageSize @ 0x140275674
 * Callers:
 *     MiAllocateVirtualMemory @ 0x1406F7220 (MiAllocateVirtualMemory.c)
 *     MmQueryVirtualMemory @ 0x1406F8350 (MmQueryVirtualMemory.c)
 *     MmProtectVirtualMemory @ 0x1406F9770 (MmProtectVirtualMemory.c)
 *     MiCheckSecuredVad @ 0x14071A0B4 (MiCheckSecuredVad.c)
 *     MmFreeVirtualMemory @ 0x1407450C0 (MmFreeVirtualMemory.c)
 *     MmSetGraphicsPtes @ 0x140A2EAF0 (MmSetGraphicsPtes.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiGetVadPageSize(__int64 a1)
{
  return MiVadPageSizes[(*(_DWORD *)(a1 + 48) >> 19) & 3];
}

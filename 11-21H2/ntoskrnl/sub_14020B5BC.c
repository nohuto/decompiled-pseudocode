/*
 * XREFs of sub_14020B5BC @ 0x14020B5BC
 * Callers:
 *     sub_14068DB00 @ 0x14068DB00 (sub_14068DB00.c)
 * Callees:
 *     ZwSetInformationVirtualMemory @ 0x14041EC80 (ZwSetInformationVirtualMemory.c)
 */

NTSTATUS __fastcall sub_14020B5BC(void **a1, void *a2, SIZE_T a3)
{
  void *v3; // rcx
  _MEMORY_RANGE_ENTRY VirtualAddresses; // [rsp+30h] [rbp-18h] BYREF
  int VmInformation; // [rsp+50h] [rbp+8h] BYREF

  VmInformation = 0;
  v3 = *a1;
  VirtualAddresses.VirtualAddress = a2;
  VirtualAddresses.NumberOfBytes = a3;
  return ZwSetInformationVirtualMemory(v3, VmPrefetchInformation, 1uLL, &VirtualAddresses, &VmInformation, 4u);
}

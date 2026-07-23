/*
 * XREFs of CmSiPrefetchVirtualMemoryRange @ 0x140207E54
 * Callers:
 *     HvpViewMapMakeViewRangeValid @ 0x140689AA4 (HvpViewMapMakeViewRangeValid.c)
 * Callees:
 *     ZwSetInformationVirtualMemory @ 0x14041DC40 (ZwSetInformationVirtualMemory.c)
 */

NTSTATUS __fastcall CmSiPrefetchVirtualMemoryRange(void **a1, void *a2, SIZE_T a3)
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

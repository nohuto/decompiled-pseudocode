/*
 * XREFs of KiShadowKernelSectionByAddress @ 0x1404104F4
 * Callers:
 *     KiShadowProcessorAllocation @ 0x140A89C48 (KiShadowProcessorAllocation.c)
 * Callees:
 *     RtlImageNtHeader @ 0x140214B50 (RtlImageNtHeader.c)
 *     RtlSectionTableFromVirtualAddress @ 0x1402F7190 (RtlSectionTableFromVirtualAddress.c)
 *     MmCreateShadowMapping @ 0x140820130 (MmCreateShadowMapping.c)
 */

__int64 KiShadowKernelSectionByAddress()
{
  _IMAGE_NT_HEADERS64 *v0; // rax
  PIMAGE_SECTION_HEADER v1; // rax
  unsigned int PhysicalAddress; // edx

  v0 = RtlImageNtHeader((PVOID)0x140000000LL);
  v1 = RtlSectionTableFromVirtualAddress(v0, (PVOID)0x140000000LL, (unsigned int)KiDivideErrorFaultShadow - 0x40000000);
  PhysicalAddress = v1->Misc.PhysicalAddress;
  if ( PhysicalAddress <= v1->SizeOfRawData )
    PhysicalAddress = v1->SizeOfRawData;
  return MmCreateShadowMapping(0x140000000LL + v1->VirtualAddress, (PhysicalAddress + 4095) & 0xFFFFF000);
}

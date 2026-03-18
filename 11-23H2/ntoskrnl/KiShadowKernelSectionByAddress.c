/*
 * XREFs of KiShadowKernelSectionByAddress @ 0x140410E78
 * Callers:
 *     KiShadowProcessorAllocation @ 0x140A893F4 (KiShadowProcessorAllocation.c)
 * Callees:
 *     RtlImageNtHeader @ 0x140214B30 (RtlImageNtHeader.c)
 *     RtlSectionTableFromVirtualAddress @ 0x1402F7190 (RtlSectionTableFromVirtualAddress.c)
 *     MmCreateShadowMapping @ 0x14081DBB0 (MmCreateShadowMapping.c)
 */

__int64 KiShadowKernelSectionByAddress()
{
  unsigned __int64 v0; // rax
  _DWORD *v1; // rax
  unsigned int v2; // edx

  v0 = RtlImageNtHeader(0x140000000LL);
  v1 = (_DWORD *)RtlSectionTableFromVirtualAddress(
                   v0,
                   0x140000000LL,
                   (unsigned int)KiDivideErrorFaultShadow - 0x40000000);
  v2 = v1[2];
  if ( v2 <= v1[4] )
    v2 = v1[4];
  return MmCreateShadowMapping(0x140000000LL + (unsigned int)v1[3], (v2 + 4095) & 0xFFFFF000);
}

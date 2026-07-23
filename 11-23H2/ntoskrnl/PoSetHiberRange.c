/*
 * XREFs of PoSetHiberRange @ 0x14058ED90
 * Callers:
 *     HalpTimerMarkHiberPhase @ 0x1404FEC74 (HalpTimerMarkHiberPhase.c)
 *     HalpDmaMarkHiberAdapter @ 0x140501AEC (HalpDmaMarkHiberAdapter.c)
 *     HalpIommuExtMarkHiberMemory @ 0x140515898 (HalpIommuExtMarkHiberMemory.c)
 *     HalpPciMarkHiberPhase @ 0x140515B90 (HalpPciMarkHiberPhase.c)
 *     HalpExtEnvMarkHiberRegions @ 0x14051FC78 (HalpExtEnvMarkHiberRegions.c)
 *     HalpIommuDmarPageTableMarkHiberPhase @ 0x140527388 (HalpIommuDmarPageTableMarkHiberPhase.c)
 *     HvlDiscardPagesFromHibernation @ 0x140546D60 (HvlDiscardPagesFromHibernation.c)
 *     HvlDiscardSecurePagesFromHibernation @ 0x140546DC8 (HvlDiscardSecurePagesFromHibernation.c)
 *     HvlpMarkHvlPagesForHibernation @ 0x140547700 (HvlpMarkHvlPagesForHibernation.c)
 *     HvlpMarkHypervisorPagesForHibernation @ 0x1405477D4 (HvlpMarkHypervisorPagesForHibernation.c)
 *     IoGetDumpHiberRanges @ 0x140550C3C (IoGetDumpHiberRanges.c)
 *     KeMarkDynamicTracingHiberPhase @ 0x14057F01C (KeMarkDynamicTracingHiberPhase.c)
 *     RtlMarkHiberPhase @ 0x1405B4CBC (RtlMarkHiberPhase.c)
 *     DifMarkHiberPhase @ 0x1405D53F4 (DifMarkHiberPhase.c)
 *     MiMarkKernelPageTablePte @ 0x140627000 (MiMarkKernelPageTablePte.c)
 *     VslAllocateSecureHibernateResources @ 0x140941A0C (VslAllocateSecureHibernateResources.c)
 *     PopAllocateHiberContext @ 0x140987F38 (PopAllocateHiberContext.c)
 *     PopHiberInitializeResources @ 0x140988A24 (PopHiberInitializeResources.c)
 *     MmMarkHiberRange @ 0x140A30D20 (MmMarkHiberRange.c)
 *     HalpMmAllocCtxMarkHiberPhase @ 0x140A9558C (HalpMmAllocCtxMarkHiberPhase.c)
 *     HaliLocateHiberRanges @ 0x140A95B10 (HaliLocateHiberRanges.c)
 *     HalpExtMarkHiberPhase @ 0x140A95E10 (HalpExtMarkHiberPhase.c)
 *     HalpIommuMarkHiberPhase @ 0x140A95EF0 (HalpIommuMarkHiberPhase.c)
 *     BgkResumePrepare @ 0x140A998E4 (BgkResumePrepare.c)
 *     KdMarkHiberPhase @ 0x140A9E818 (KdMarkHiberPhase.c)
 *     KeMarkHiberPhase @ 0x140A9E8A8 (KeMarkHiberPhase.c)
 *     PopBootLoaderTraceCopyPfnList @ 0x140AA1988 (PopBootLoaderTraceCopyPfnList.c)
 *     PopBuildMemoryImageHeader @ 0x140AA1A28 (PopBuildMemoryImageHeader.c)
 *     PopCopyFirmwareRuntimeInformationPfnList @ 0x140AA1ECC (PopCopyFirmwareRuntimeInformationPfnList.c)
 *     PopMarkComponentsBootPhase @ 0x140AA347C (PopMarkComponentsBootPhase.c)
 *     PopMarkHiberPhase @ 0x140AA3708 (PopMarkHiberPhase.c)
 *     MiMarkHiberNotCachedPte @ 0x140AAC1B0 (MiMarkHiberNotCachedPte.c)
 *     MiMarkNonPagedHiberPhasePte @ 0x140AAC3B0 (MiMarkNonPagedHiberPhasePte.c)
 *     MmMarkHiberPhase @ 0x140AACB50 (MmMarkHiberPhase.c)
 *     BgpFwMarkHiberPhase @ 0x140AF1DF4 (BgpFwMarkHiberPhase.c)
 * Callees:
 *     MmGetPhysicalAddress @ 0x14028C170 (MmGetPhysicalAddress.c)
 *     KeBugCheckEx @ 0x14041EDE0 (KeBugCheckEx.c)
 *     PopSetRange @ 0x14058F40C (PopSetRange.c)
 *     MmGetSectionRange @ 0x140A30928 (MmGetSectionRange.c)
 *     MmMarkImageForHiberPhase @ 0x140AACDDC (MmMarkImageForHiberPhase.c)
 */

void __stdcall PoSetHiberRange(PVOID MemoryMap, ULONG Flags, PVOID Address, ULONG_PTR Length, ULONG Tag)
{
  __int16 v5; // bx
  PVOID v6; // rbp
  unsigned int v7; // eax
  ULONG v8; // eax
  ULONG_PTR v9; // rdi
  ULONG_PTR v10; // rsi
  ULONG_PTR v11; // r15
  PHYSICAL_ADDRESS v12; // r12
  __int64 v13; // r14
  ULONG_PTR v14; // rbp
  ULONG_PTR v15[9]; // [rsp+30h] [rbp-48h] BYREF
  PVOID v16; // [rsp+80h] [rbp+8h]
  unsigned __int64 v17; // [rsp+90h] [rbp+18h] BYREF

  v17 = (unsigned __int64)Address;
  v16 = MemoryMap;
  v5 = Flags;
  v6 = MemoryMap;
  LODWORD(v15[0]) = 0;
  if ( (KiBugCheckActive & 3) != 0 )
    return;
  if ( MemoryMap )
  {
    v8 = Flags & 0x10000;
    if ( (Flags & 0x10000) == 0 )
      goto LABEL_12;
LABEL_16:
    KeBugCheckEx(0xA0u, 0x10CuLL, 0xAuLL, Flags, 0LL);
  }
  v6 = (PVOID)qword_140C3CDC0;
  v16 = (PVOID)qword_140C3CDC0;
  if ( !qword_140C3CDC0 )
    KeBugCheckEx(0xA0u, 0x10BuLL, 0xAuLL, 0LL, 0LL);
  v7 = *(_DWORD *)(qword_140C3CDC0 + 184);
  if ( v7 != 8 )
  {
    if ( v7 != 9 )
      KeBugCheckEx(0xA0u, 0x10BuLL, 0xAuLL, v7, 0LL);
    return;
  }
  if ( (Flags & 0xFFFFBFFF) != 0x10000 || !Length && (Flags & 0x4000) != 0 )
    goto LABEL_16;
  v8 = Flags & 0x10000;
LABEL_12:
  if ( !Length )
  {
    if ( v8 )
    {
      MmMarkImageForHiberPhase(v17);
      return;
    }
    if ( (int)MmGetSectionRange(v17, &v17, v15) < 0 )
      KeBugCheckEx(0xA0u, 2uLL, 0xA14C5uLL, 0LL, 0LL);
    Length = LODWORD(v15[0]);
  }
  if ( (v5 & 4) != 0 )
    v5 = v5 & 0xFFF9 | 2;
  if ( (v5 & 0x4000) != 0 )
  {
    PopSetRange((ULONG_PTR)v6, Tag);
  }
  else
  {
    v9 = v17 >> 12;
    v10 = (Length + v17 + 4095) >> 12;
    while ( v9 < v10 )
    {
      v15[0] = v9 << 12;
      v11 = v9 + 1;
      v12.QuadPart = (unsigned __int64)MmGetPhysicalAddress((PVOID)(v9 << 12)).QuadPart >> 12;
      v13 = 1LL;
      if ( v9 + 1 < v10 )
      {
        v14 = v15[0];
        do
        {
          if ( v11 + v12.QuadPart - v9 != (unsigned __int64)MmGetPhysicalAddress((PVOID)(v14 + (v13 << 12))).QuadPart >> 12 )
            break;
          ++v13;
          ++v11;
        }
        while ( v11 < v10 );
        v6 = v16;
      }
      PopSetRange((ULONG_PTR)v6, Tag);
      v9 += v13;
    }
  }
}

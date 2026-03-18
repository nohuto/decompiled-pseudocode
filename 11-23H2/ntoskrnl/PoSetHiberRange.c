/*
 * XREFs of PoSetHiberRange @ 0x14058E8A0
 * Callers:
 *     HalpTimerMarkHiberPhase @ 0x1404FE724 (HalpTimerMarkHiberPhase.c)
 *     HalpDmaMarkHiberAdapter @ 0x14050159C (HalpDmaMarkHiberAdapter.c)
 *     HalpIommuExtMarkHiberMemory @ 0x140515348 (HalpIommuExtMarkHiberMemory.c)
 *     HalpPciMarkHiberPhase @ 0x140515640 (HalpPciMarkHiberPhase.c)
 *     HalpExtEnvMarkHiberRegions @ 0x14051F728 (HalpExtEnvMarkHiberRegions.c)
 *     HalpIommuDmarPageTableMarkHiberPhase @ 0x140526E38 (HalpIommuDmarPageTableMarkHiberPhase.c)
 *     HvlDiscardPagesFromHibernation @ 0x1405466A0 (HvlDiscardPagesFromHibernation.c)
 *     HvlDiscardSecurePagesFromHibernation @ 0x140546708 (HvlDiscardSecurePagesFromHibernation.c)
 *     HvlpMarkHvlPagesForHibernation @ 0x140547040 (HvlpMarkHvlPagesForHibernation.c)
 *     HvlpMarkHypervisorPagesForHibernation @ 0x140547114 (HvlpMarkHypervisorPagesForHibernation.c)
 *     IoGetDumpHiberRanges @ 0x14055057C (IoGetDumpHiberRanges.c)
 *     KeMarkDynamicTracingHiberPhase @ 0x14057EB2C (KeMarkDynamicTracingHiberPhase.c)
 *     RtlMarkHiberPhase @ 0x1405B474C (RtlMarkHiberPhase.c)
 *     DifMarkHiberPhase @ 0x1405D4E84 (DifMarkHiberPhase.c)
 *     MiMarkKernelPageTablePte @ 0x140626AB0 (MiMarkKernelPageTablePte.c)
 *     VslAllocateSecureHibernateResources @ 0x14094180C (VslAllocateSecureHibernateResources.c)
 *     PopAllocateHiberContext @ 0x140987D38 (PopAllocateHiberContext.c)
 *     PopHiberInitializeResources @ 0x140988824 (PopHiberInitializeResources.c)
 *     MmMarkHiberRange @ 0x140A30A70 (MmMarkHiberRange.c)
 *     HalpMmAllocCtxMarkHiberPhase @ 0x140A9571C (HalpMmAllocCtxMarkHiberPhase.c)
 *     HaliLocateHiberRanges @ 0x140A95CA0 (HaliLocateHiberRanges.c)
 *     HalpExtMarkHiberPhase @ 0x140A95FA0 (HalpExtMarkHiberPhase.c)
 *     HalpIommuMarkHiberPhase @ 0x140A96080 (HalpIommuMarkHiberPhase.c)
 *     BgkResumePrepare @ 0x140A99A74 (BgkResumePrepare.c)
 *     KdMarkHiberPhase @ 0x140A9E9A8 (KdMarkHiberPhase.c)
 *     KeMarkHiberPhase @ 0x140A9EA38 (KeMarkHiberPhase.c)
 *     PopBootLoaderTraceCopyPfnList @ 0x140AA1B18 (PopBootLoaderTraceCopyPfnList.c)
 *     PopBuildMemoryImageHeader @ 0x140AA1BB8 (PopBuildMemoryImageHeader.c)
 *     PopCopyFirmwareRuntimeInformationPfnList @ 0x140AA205C (PopCopyFirmwareRuntimeInformationPfnList.c)
 *     PopMarkComponentsBootPhase @ 0x140AA360C (PopMarkComponentsBootPhase.c)
 *     PopMarkHiberPhase @ 0x140AA3898 (PopMarkHiberPhase.c)
 *     MiMarkHiberNotCachedPte @ 0x140AAC340 (MiMarkHiberNotCachedPte.c)
 *     MiMarkNonPagedHiberPhasePte @ 0x140AAC540 (MiMarkNonPagedHiberPhasePte.c)
 *     MmMarkHiberPhase @ 0x140AACCE0 (MmMarkHiberPhase.c)
 *     BgpFwMarkHiberPhase @ 0x140AF1DE4 (BgpFwMarkHiberPhase.c)
 * Callees:
 *     MmGetPhysicalAddress @ 0x14028BEE0 (MmGetPhysicalAddress.c)
 *     KeBugCheckEx @ 0x14041EA50 (KeBugCheckEx.c)
 *     PopSetRange @ 0x14058EF1C (PopSetRange.c)
 *     MmGetSectionRange @ 0x140A30678 (MmGetSectionRange.c)
 *     MmMarkImageForHiberPhase @ 0x140AACF6C (MmMarkImageForHiberPhase.c)
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
  v6 = (PVOID)qword_140C3D100;
  v16 = (PVOID)qword_140C3D100;
  if ( !qword_140C3D100 )
    KeBugCheckEx(0xA0u, 0x10BuLL, 0xAuLL, 0LL, 0LL);
  v7 = *(_DWORD *)(qword_140C3D100 + 184);
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

/*
 * XREFs of PoSetHiberRange @ 0x14038DBE0
 * Callers:
 *     HalpTimerMarkHiberPhase @ 0x14038D480 (HalpTimerMarkHiberPhase.c)
 *     HalpPciMarkHiberPhase @ 0x14038D4BC (HalpPciMarkHiberPhase.c)
 *     RtlMarkHiberPhase @ 0x14038D4F0 (RtlMarkHiberPhase.c)
 *     HalpDmaMarkHiberAdapter @ 0x14038D91C (HalpDmaMarkHiberAdapter.c)
 *     IoGetDumpHiberRanges @ 0x14038DA90 (IoGetDumpHiberRanges.c)
 *     MiMarkKernelPageTablePte @ 0x14038DB80 (MiMarkKernelPageTablePte.c)
 *     HalpExtEnvMarkHiberRegions @ 0x14038DF04 (HalpExtEnvMarkHiberRegions.c)
 *     DifMarkHiberPhase @ 0x14039936C (DifMarkHiberPhase.c)
 *     HalpIommuExtMarkHiberMemory @ 0x140517F6C (HalpIommuExtMarkHiberMemory.c)
 *     HalpIommuDmarPageTableMarkHiberPhase @ 0x14052974C (HalpIommuDmarPageTableMarkHiberPhase.c)
 *     HvlDiscardPagesFromHibernation @ 0x1405498B4 (HvlDiscardPagesFromHibernation.c)
 *     HvlDiscardSecurePagesFromHibernation @ 0x14054991C (HvlDiscardSecurePagesFromHibernation.c)
 *     HvlpMarkHvlPagesForHibernation @ 0x14054A188 (HvlpMarkHvlPagesForHibernation.c)
 *     HvlpMarkHypervisorPagesForHibernation @ 0x14054A25C (HvlpMarkHypervisorPagesForHibernation.c)
 *     PopHiberInitializeResources @ 0x140801D60 (PopHiberInitializeResources.c)
 *     MmMarkHiberRange @ 0x140802020 (MmMarkHiberRange.c)
 *     PopAllocateHiberContext @ 0x140802068 (PopAllocateHiberContext.c)
 *     VslAllocateSecureHibernateResources @ 0x1409315C4 (VslAllocateSecureHibernateResources.c)
 *     MiGatherHiberRange @ 0x140A4E460 (MiGatherHiberRange.c)
 *     HalpIommuMarkHiberPhase @ 0x140A4E6D4 (HalpIommuMarkHiberPhase.c)
 *     BgkResumePrepare @ 0x140A4E794 (BgkResumePrepare.c)
 *     KdMarkHiberPhase @ 0x140A4E854 (KdMarkHiberPhase.c)
 *     PopBuildMemoryImageHeader @ 0x140A4E8E4 (PopBuildMemoryImageHeader.c)
 *     HaliLocateHiberRanges @ 0x140A4EB20 (HaliLocateHiberRanges.c)
 *     PopMarkHiberPhase @ 0x140A4ED84 (PopMarkHiberPhase.c)
 *     MmMarkHiberPhase @ 0x140A4EEAC (MmMarkHiberPhase.c)
 *     HalpMmAllocCtxMarkHiberPhase @ 0x140A4F0DC (HalpMmAllocCtxMarkHiberPhase.c)
 *     PopMarkComponentsBootPhase @ 0x140A4F19C (PopMarkComponentsBootPhase.c)
 *     KeMarkHiberPhase @ 0x140A4F3AC (KeMarkHiberPhase.c)
 *     MiMarkHiberNotCachedPte @ 0x140A4F800 (MiMarkHiberNotCachedPte.c)
 *     MiMarkNonPagedHiberPhasePte @ 0x140A4F8B0 (MiMarkNonPagedHiberPhasePte.c)
 *     PopBootLoaderTraceCopyPfnList @ 0x140A4FC74 (PopBootLoaderTraceCopyPfnList.c)
 *     BgpFwMarkHiberPhase @ 0x140AAB280 (BgpFwMarkHiberPhase.c)
 * Callees:
 *     MmGetPhysicalAddress @ 0x14027B670 (MmGetPhysicalAddress.c)
 *     PopSetRange @ 0x14038DDD4 (PopSetRange.c)
 *     KeBugCheckEx @ 0x14041F3D0 (KeBugCheckEx.c)
 *     MmGetSectionRange @ 0x1408024FC (MmGetSectionRange.c)
 *     MmMarkImageForHiberPhase @ 0x140A4F9F4 (MmMarkImageForHiberPhase.c)
 */

void __stdcall PoSetHiberRange(PVOID MemoryMap, ULONG Flags, PVOID Address, ULONG_PTR Length, ULONG Tag)
{
  __int16 v5; // bx
  PVOID v6; // rbp
  ULONG_PTR v7; // rax
  ULONG v8; // eax
  ULONG_PTR v9; // rdi
  ULONG_PTR v10; // rsi
  ULONG_PTR v11; // r15
  PHYSICAL_ADDRESS v12; // r12
  __int64 v13; // r14
  _DWORD v14[18]; // [rsp+30h] [rbp-48h] BYREF
  PVOID BugCheckParameter3; // [rsp+80h] [rbp+8h]
  unsigned __int64 v16; // [rsp+90h] [rbp+18h] BYREF

  v16 = (unsigned __int64)Address;
  BugCheckParameter3 = MemoryMap;
  v5 = Flags;
  v6 = MemoryMap;
  v14[0] = 0;
  if ( (KiBugCheckActive & 3) != 0 )
    return;
  if ( MemoryMap )
  {
    v8 = Flags & 0x10000;
    if ( (Flags & 0x10000) != 0 )
      goto LABEL_34;
  }
  else
  {
    v6 = (PVOID)qword_140C22800;
    BugCheckParameter3 = (PVOID)qword_140C22800;
    if ( !qword_140C22800 )
      KeBugCheckEx(0xA0u, 0x10BuLL, 0xAuLL, 0LL, 0LL);
    v7 = *(unsigned int *)(qword_140C22800 + 184);
    if ( (_DWORD)v7 != 8 )
    {
      if ( (_DWORD)v7 != 9 )
        KeBugCheckEx(0xA0u, 0x10BuLL, 0xAuLL, v7, 0LL);
      return;
    }
    if ( (Flags & 0xFFFFBFFF) != 0x10000 || !Length && (Flags & 0x4000) != 0 )
LABEL_34:
      KeBugCheckEx(0xA0u, 0x10CuLL, 0xAuLL, Flags, 0LL);
    v8 = Flags & 0x10000;
  }
  if ( !Length )
  {
    if ( v8 )
    {
      MmMarkImageForHiberPhase(v16);
      return;
    }
    if ( (int)MmGetSectionRange(v16, &v16, v14) < 0 )
      KeBugCheckEx(0xA0u, 2uLL, 0xA148FuLL, 0LL, 0LL);
    Length = v14[0];
  }
  if ( (v5 & 4) != 0 )
    v5 = v5 & 0xFFF9 | 2;
  if ( (v5 & 0x4000) != 0 )
  {
    PopSetRange((ULONG_PTR)v6, Tag);
  }
  else
  {
    v9 = v16 >> 12;
    v10 = (Length + v16 + 4095) >> 12;
    while ( v9 < v10 )
    {
      v11 = v9 + 1;
      v12.QuadPart = (unsigned __int64)MmGetPhysicalAddress((PVOID)(v9 << 12)).QuadPart >> 12;
      v13 = 1LL;
      if ( v9 + 1 < v10 )
      {
        do
        {
          if ( v11 + v12.QuadPart - v9 != (unsigned __int64)MmGetPhysicalAddress((PVOID)((v9 << 12) + (v13 << 12))).QuadPart >> 12 )
            break;
          ++v13;
          ++v11;
        }
        while ( v11 < v10 );
        v6 = BugCheckParameter3;
      }
      PopSetRange((ULONG_PTR)v6, Tag);
      v9 += v13;
    }
  }
}

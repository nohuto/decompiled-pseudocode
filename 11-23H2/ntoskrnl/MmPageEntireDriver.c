/*
 * XREFs of MmPageEntireDriver @ 0x140701160
 * Callers:
 *     DifMmPageEntireDriverWrapper @ 0x1405E7D10 (DifMmPageEntireDriverWrapper.c)
 * Callees:
 *     MiLookupDataTableEntry @ 0x1402136A0 (MiLookupDataTableEntry.c)
 *     MiGetSystemRegionType @ 0x140284B00 (MiGetSystemRegionType.c)
 *     MI_IS_PHYSICAL_ADDRESS @ 0x140284B40 (MI_IS_PHYSICAL_ADDRESS.c)
 *     KeFlushQueuedDpcs @ 0x14028FC50 (KeFlushQueuedDpcs.c)
 *     MiSetPagingOfDriver @ 0x140291014 (MiSetPagingOfDriver.c)
 *     MiGetPteAddress @ 0x1402DE29C (MiGetPteAddress.c)
 *     MiCancelPhase0Locking @ 0x140701204 (MiCancelPhase0Locking.c)
 */

PVOID __stdcall MmPageEntireDriver(PVOID AddressWithinSection)
{
  _QWORD *v2; // rax
  __int64 v3; // rsi
  void *v4; // rbp
  unsigned __int64 PteAddress; // rdi
  unsigned __int64 v6; // rbx

  if ( (unsigned int)MI_IS_PHYSICAL_ADDRESS((unsigned __int64)AddressWithinSection) )
    return 0LL;
  v2 = MiLookupDataTableEntry((unsigned __int64)AddressWithinSection, 1);
  v3 = (__int64)v2;
  if ( !v2 )
    return 0LL;
  v4 = (void *)v2[6];
  if ( (dword_140D1D1C4 & 1) == 0 && (unsigned int)MiGetSystemRegionType((unsigned __int64)AddressWithinSection) != 1 )
  {
    KeFlushQueuedDpcs();
    PteAddress = MiGetPteAddress((unsigned __int64)v4);
    v6 = PteAddress + 8 * ((unsigned __int64)*(unsigned int *)(v3 + 64) >> 12);
    MiCancelPhase0Locking(v3);
    MiSetPagingOfDriver(v3, PteAddress, v6 - 8);
  }
  return v4;
}

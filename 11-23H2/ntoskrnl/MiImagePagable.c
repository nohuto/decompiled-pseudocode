/*
 * XREFs of MiImagePagable @ 0x14070127C
 * Callers:
 *     MmResetDriverPaging @ 0x140703840 (MmResetDriverPaging.c)
 *     MiEnablePagingTheExecutive @ 0x140B5EC88 (MiEnablePagingTheExecutive.c)
 *     MiLockPagableSections @ 0x140B5EDA8 (MiLockPagableSections.c)
 * Callees:
 *     MiLookupDataTableEntry @ 0x1402136A0 (MiLookupDataTableEntry.c)
 *     MiGetSystemRegionType @ 0x140284B00 (MiGetSystemRegionType.c)
 *     MI_IS_PHYSICAL_ADDRESS @ 0x140284B40 (MI_IS_PHYSICAL_ADDRESS.c)
 */

_QWORD *__fastcall MiImagePagable(_QWORD *a1, unsigned __int64 a2)
{
  if ( (dword_140D1D1C4 & 1) != 0 || (unsigned int)MI_IS_PHYSICAL_ADDRESS(a2) )
    return 0LL;
  if ( !a1 )
    a1 = MiLookupDataTableEntry(a2, 1);
  if ( (unsigned int)MiGetSystemRegionType(a2) == 1 )
    return 0LL;
  return a1;
}

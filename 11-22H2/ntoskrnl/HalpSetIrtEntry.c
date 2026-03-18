/*
 * XREFs of HalpSetIrtEntry @ 0x14051A658
 * Callers:
 *     HalpInterruptUnmap @ 0x1409334A8 (HalpInterruptUnmap.c)
 * Callees:
 *     HalpIommuUpdateRemappingTableEntry @ 0x14036779C (HalpIommuUpdateRemappingTableEntry.c)
 */

void __fastcall HalpSetIrtEntry(char a1, _DWORD *a2, __int64 a3)
{
  HalpIommuUpdateRemappingTableEntry(a1, *a2 & 0x3FFFFFFF, a3);
}

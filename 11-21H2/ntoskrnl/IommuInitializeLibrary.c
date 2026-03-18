/*
 * XREFs of IommuInitializeLibrary @ 0x1403BB76C
 * Callers:
 *     HalpIommuInitSystem @ 0x140A55270 (HalpIommuInitSystem.c)
 * Callees:
 *     IommupHvInitializeLibrary @ 0x140B4D2C4 (IommupHvInitializeLibrary.c)
 */

__int64 IommuInitializeLibrary()
{
  IommupSystemContextListLock = 0LL;
  qword_140C4A148 = (__int64)&IommupSystemContextListHead;
  IommupSystemContextListHead = &IommupSystemContextListHead;
  if ( HalpHvIommu )
    IommupHvInitializeLibrary();
  return 0LL;
}

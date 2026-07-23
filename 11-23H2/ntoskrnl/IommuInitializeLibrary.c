/*
 * XREFs of IommuInitializeLibrary @ 0x1403B6448
 * Callers:
 *     HalpIommuInitSystem @ 0x140A89BC0 (HalpIommuInitSystem.c)
 * Callees:
 *     IommupHvInitializeLibrary @ 0x140B92694 (IommupHvInitializeLibrary.c)
 */

__int64 IommuInitializeLibrary()
{
  IommupSystemContextListPushLock = 0LL;
  qword_140C60138 = (__int64)&IommupSystemContextListHead;
  IommupSystemContextListHead = &IommupSystemContextListHead;
  if ( HalpHvIommu )
    IommupHvInitializeLibrary();
  return 0LL;
}

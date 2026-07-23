/*
 * XREFs of ZwQuerySection @ 0x14041BB10
 * Callers:
 *     CmSiGetSectionLength @ 0x1402F6220 (CmSiGetSectionLength.c)
 *     DifZwQuerySectionWrapper @ 0x1405F5AB0 (DifZwQuerySectionWrapper.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwQuerySection(
        HANDLE SectionHandle,
        SECTION_INFORMATION_CLASS SectionInformationClass,
        PVOID SectionInformation,
        SIZE_T SectionInformationLength,
        PSIZE_T ReturnLength)
{
  _disable();
  __readeflags();
  return KiServiceInternal(SectionHandle);
}

/*
 * XREFs of ZwQuerySection @ 0x14041C180
 * Callers:
 *     sub_14020B6C8 @ 0x14020B6C8 (sub_14020B6C8.c)
 *     sub_1406257F0 @ 0x1406257F0 (sub_1406257F0.c)
 * Callees:
 *     <none>
 */

// local variable allocation has failed, the output may be wrong!
NTSTATUS __cdecl ZwQuerySection(
        HANDLE SectionHandle,
        SECTION_INFORMATION_CLASS SectionInformationClass,
        PVOID SectionInformation,
        SIZE_T SectionInformationLength,
        PSIZE_T ReturnLength)
{
  _disable();
  __readeflags();
  return sub_140433F80(SectionHandle, *(_QWORD *)&SectionInformationClass);
}

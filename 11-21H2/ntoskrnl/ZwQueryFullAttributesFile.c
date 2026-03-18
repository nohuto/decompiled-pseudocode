/*
 * XREFs of ZwQueryFullAttributesFile @ 0x14041E100
 * Callers:
 *     DifZwQueryFullAttributesFileWrapper @ 0x140624540 (DifZwQueryFullAttributesFileWrapper.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall ZwQueryFullAttributesFile(
        POBJECT_ATTRIBUTES ObjectAttributes,
        PFILE_NETWORK_OPEN_INFORMATION FileInformation)
{
  _disable();
  __readeflags();
  return KiServiceInternal(ObjectAttributes, FileInformation);
}

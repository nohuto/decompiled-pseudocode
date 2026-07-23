/*
 * XREFs of ZwQueryFullAttributesFile @ 0x14041E100
 * Callers:
 *     sub_140624540 @ 0x140624540 (sub_140624540.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall ZwQueryFullAttributesFile(
        POBJECT_ATTRIBUTES ObjectAttributes,
        PFILE_NETWORK_OPEN_INFORMATION FileInformation)
{
  _disable();
  __readeflags();
  return sub_140433F80(ObjectAttributes, FileInformation);
}

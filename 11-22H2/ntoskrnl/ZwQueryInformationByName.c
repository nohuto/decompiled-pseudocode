/*
 * XREFs of ZwQueryInformationByName @ 0x14041D0C0
 * Callers:
 *     SdbpGetFileTimestamp @ 0x140A4E9A4 (SdbpGetFileTimestamp.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwQueryInformationByName(
        POBJECT_ATTRIBUTES ObjectAttributes,
        PIO_STATUS_BLOCK IoStatusBlock,
        PVOID FileInformation,
        ULONG Length,
        FILE_INFORMATION_CLASS FileInformationClass)
{
  _disable();
  __readeflags();
  return KiServiceInternal(ObjectAttributes);
}

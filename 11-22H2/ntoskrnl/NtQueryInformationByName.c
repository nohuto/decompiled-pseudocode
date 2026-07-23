/*
 * XREFs of NtQueryInformationByName @ 0x1407BF3F0
 * Callers:
 *     <none>
 * Callees:
 *     IoQueryInformationByName @ 0x1407BF420 (IoQueryInformationByName.c)
 */

NTSTATUS __cdecl NtQueryInformationByName(
        POBJECT_ATTRIBUTES ObjectAttributes,
        PIO_STATUS_BLOCK IoStatusBlock,
        PVOID FileInformation,
        ULONG Length,
        FILE_INFORMATION_CLASS FileInformationClass)
{
  return IoQueryInformationByName(
           ObjectAttributes,
           IoStatusBlock,
           FileInformation,
           Length,
           FileInformationClass,
           0,
           0LL);
}

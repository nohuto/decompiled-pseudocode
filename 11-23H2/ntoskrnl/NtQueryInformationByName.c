/*
 * XREFs of NtQueryInformationByName @ 0x1407BF130
 * Callers:
 *     <none>
 * Callees:
 *     IoQueryInformationByName @ 0x1407BF160 (IoQueryInformationByName.c)
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

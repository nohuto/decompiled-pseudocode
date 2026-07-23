/*
 * XREFs of RtlIdnToAscii @ 0x1409BBC20
 * Callers:
 *     <none>
 * Callees:
 *     sub_1409BBD10 @ 0x1409BBD10 (sub_1409BBD10.c)
 */

NTSTATUS __stdcall RtlIdnToAscii(
        ULONG Flags,
        PCWSTR SourceString,
        LONG SourceStringLength,
        PWSTR DestinationString,
        PLONG DestinationStringLength)
{
  return sub_1409BBD10(
           Flags,
           (_DWORD)SourceString,
           SourceStringLength,
           (_DWORD)DestinationString,
           (__int64)DestinationStringLength,
           1);
}

/*
 * XREFs of RtlIdnToNameprepUnicode @ 0x1409BBC50
 * Callers:
 *     <none>
 * Callees:
 *     sub_1409BBD10 @ 0x1409BBD10 (sub_1409BBD10.c)
 */

NTSTATUS __stdcall RtlIdnToNameprepUnicode(
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
           0);
}

/*
 * XREFs of RtlIdnToNameprepUnicode @ 0x18010BC90
 * Callers:
 *     <none>
 * Callees:
 *     RtlpNameprepAsciiWorker @ 0x18000D74C (RtlpNameprepAsciiWorker.c)
 */

NTSTATUS __cdecl RtlIdnToNameprepUnicode(
        ULONG Flags,
        PCWSTR SourceString,
        LONG SourceStringLength,
        PWSTR DestinationString,
        PLONG DestinationStringLength)
{
  return RtlpNameprepAsciiWorker(
           Flags,
           (__int64)SourceString,
           SourceStringLength,
           (__int64)DestinationString,
           (__int64)DestinationStringLength,
           0);
}

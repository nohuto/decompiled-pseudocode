/*
 * XREFs of RtlFormatMessage @ 0x1409B6A00
 * Callers:
 *     <none>
 * Callees:
 *     sub_1409B6A58 @ 0x1409B6A58 (sub_1409B6A58.c)
 */

NTSTATUS __cdecl RtlFormatMessage(
        PWSTR MessageFormat,
        ULONG MaximumWidth,
        BOOLEAN IgnoreInserts,
        BOOLEAN ArgumentsAreAnsi,
        BOOLEAN ArgumentsAreAnArray,
        va_list *Arguments,
        PWSTR Buffer,
        ULONG Length,
        PULONG ReturnLength)
{
  return sub_1409B6A58(
           (_DWORD)MessageFormat,
           MaximumWidth,
           IgnoreInserts,
           ArgumentsAreAnsi,
           ArgumentsAreAnArray,
           (__int64)Arguments,
           (__int64)Buffer,
           Length,
           (__int64)ReturnLength);
}

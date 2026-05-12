/*
 * XREFs of RaDuplicateUnicodeString @ 0x1C0057064
 * Callers:
 *     RaidCreateDeviceName @ 0x1C005888C (RaidCreateDeviceName.c)
 *     RaInitializeDriver @ 0x1C00A865C (RaInitializeDriver.c)
 * Callees:
 *     RaidAllocatePool @ 0x1C0007B34 (RaidAllocatePool.c)
 */

__int64 __fastcall RaDuplicateUnicodeString(
        PUNICODE_STRING DestinationString,
        PCUNICODE_STRING SourceString,
        __int64 a3,
        __int64 a4)
{
  unsigned __int16 v6; // ax
  wchar_t *Pool; // rax

  DestinationString->Length = SourceString->Length;
  v6 = SourceString->Length + 2;
  DestinationString->MaximumLength = v6;
  Pool = (wchar_t *)RaidAllocatePool(64LL, v6, 1396990290LL, a4);
  DestinationString->Buffer = Pool;
  if ( !Pool )
    return 3221225495LL;
  RtlCopyUnicodeString(DestinationString, SourceString);
  DestinationString->Buffer[(unsigned __int64)DestinationString->Length >> 1] = 0;
  return 0LL;
}

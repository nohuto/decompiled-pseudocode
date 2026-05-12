/*
 * XREFs of sub_1C00576D4 @ 0x1C00576D4
 * Callers:
 *     sub_1C0058EFC @ 0x1C0058EFC (sub_1C0058EFC.c)
 *     sub_1C00A982C @ 0x1C00A982C (sub_1C00A982C.c)
 * Callees:
 *     sub_1C0007CF4 @ 0x1C0007CF4 (sub_1C0007CF4.c)
 */

__int64 __fastcall sub_1C00576D4(
        PUNICODE_STRING DestinationString,
        PCUNICODE_STRING SourceString,
        __int64 a3,
        __int64 a4)
{
  USHORT v6; // ax
  WCHAR *v7; // rax

  DestinationString->Length = SourceString->Length;
  v6 = SourceString->Length + 2;
  DestinationString->MaximumLength = v6;
  v7 = (WCHAR *)sub_1C0007CF4(64LL, v6, 1396990290LL, a4);
  DestinationString->Buffer = v7;
  if ( !v7 )
    return 3221225495LL;
  RtlCopyUnicodeString(DestinationString, SourceString);
  DestinationString->Buffer[(unsigned __int64)DestinationString->Length >> 1] = 0;
  return 0LL;
}

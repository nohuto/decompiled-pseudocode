/*
 * XREFs of sub_140778D60 @ 0x140778D60
 * Callers:
 *     sub_1406E2EEC @ 0x1406E2EEC (sub_1406E2EEC.c)
 *     sub_1406E5574 @ 0x1406E5574 (sub_1406E5574.c)
 *     sub_140747740 @ 0x140747740 (sub_140747740.c)
 *     sub_140771524 @ 0x140771524 (sub_140771524.c)
 *     sub_140778C00 @ 0x140778C00 (sub_140778C00.c)
 *     sub_140779F10 @ 0x140779F10 (sub_140779F10.c)
 *     sub_14094AA64 @ 0x14094AA64 (sub_14094AA64.c)
 *     sub_14094B864 @ 0x14094B864 (sub_14094B864.c)
 *     sub_140954E2C @ 0x140954E2C (sub_140954E2C.c)
 *     sub_140B4FCB0 @ 0x140B4FCB0 (sub_140B4FCB0.c)
 * Callees:
 *     RtlInitUnicodeStringEx @ 0x1402DFB70 (RtlInitUnicodeStringEx.c)
 *     RtlPrefixUnicodeString @ 0x14077F870 (RtlPrefixUnicodeString.c)
 */

BOOLEAN __fastcall sub_140778D60(PCWSTR SourceString)
{
  UNICODE_STRING DestinationString; // [rsp+20h] [rbp-18h] BYREF

  DestinationString = 0LL;
  if ( RtlInitUnicodeStringEx(&DestinationString, SourceString) < 0 )
    return 0;
  else
    return RtlPrefixUnicodeString(&stru_140002408, &DestinationString, 1u);
}

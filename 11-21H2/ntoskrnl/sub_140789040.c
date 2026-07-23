/*
 * XREFs of sub_140789040 @ 0x140789040
 * Callers:
 *     sub_14065F3BC @ 0x14065F3BC (sub_14065F3BC.c)
 *     sub_14065F7D4 @ 0x14065F7D4 (sub_14065F7D4.c)
 *     sub_14076E224 @ 0x14076E224 (sub_14076E224.c)
 *     sub_14076FF88 @ 0x14076FF88 (sub_14076FF88.c)
 *     sub_140788ED4 @ 0x140788ED4 (sub_140788ED4.c)
 *     sub_1407894A8 @ 0x1407894A8 (sub_1407894A8.c)
 *     sub_14078A748 @ 0x14078A748 (sub_14078A748.c)
 *     sub_140949470 @ 0x140949470 (sub_140949470.c)
 *     sub_140954434 @ 0x140954434 (sub_140954434.c)
 *     sub_140954E2C @ 0x140954E2C (sub_140954E2C.c)
 * Callees:
 *     RtlInitUnicodeStringEx @ 0x1402DFB70 (RtlInitUnicodeStringEx.c)
 *     RtlEqualUnicodeString @ 0x1407CD6A0 (RtlEqualUnicodeString.c)
 */

BOOLEAN __fastcall sub_140789040(PCWSTR SourceString)
{
  UNICODE_STRING DestinationString; // [rsp+20h] [rbp-18h] BYREF

  DestinationString = 0LL;
  if ( RtlInitUnicodeStringEx(&DestinationString, SourceString) < 0 )
    return 0;
  else
    return RtlEqualUnicodeString(&DestinationString, &stru_140002D70, 1u);
}

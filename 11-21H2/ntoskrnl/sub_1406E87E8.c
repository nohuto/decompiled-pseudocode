/*
 * XREFs of sub_1406E87E8 @ 0x1406E87E8
 * Callers:
 *     sub_14076D788 @ 0x14076D788 (sub_14076D788.c)
 *     sub_140779F10 @ 0x140779F10 (sub_140779F10.c)
 *     sub_1407871A0 @ 0x1407871A0 (sub_1407871A0.c)
 *     sub_14083DEC8 @ 0x14083DEC8 (sub_14083DEC8.c)
 * Callees:
 *     RtlInitUnicodeStringEx @ 0x1402DFB70 (RtlInitUnicodeStringEx.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     RtlGUIDFromString @ 0x1407814E0 (RtlGUIDFromString.c)
 */

bool __fastcall sub_1406E87E8(PCWSTR SourceString)
{
  UNICODE_STRING DestinationString; // [rsp+20h] [rbp-38h] BYREF
  GUID Guid; // [rsp+30h] [rbp-28h] BYREF

  DestinationString = 0LL;
  Guid = 0LL;
  return RtlInitUnicodeStringEx(&DestinationString, SourceString) >= 0
      && (DestinationString.MaximumLength & 0xFFFE) == 0x4E
      && RtlGUIDFromString(&DestinationString, &Guid) >= 0;
}

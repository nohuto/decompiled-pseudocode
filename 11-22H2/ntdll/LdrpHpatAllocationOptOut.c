/*
 * XREFs of LdrpHpatAllocationOptOut @ 0x18002CC20
 * Callers:
 *     LdrpMapViewOfSection @ 0x18002CBA0 (LdrpMapViewOfSection.c)
 * Callees:
 *     RtlCompareUnicodeStrings @ 0x180014B60 (RtlCompareUnicodeStrings.c)
 *     RtlGetNtSystemRoot @ 0x180018A20 (RtlGetNtSystemRoot.c)
 *     RtlInitUnicodeStringEx @ 0x18001AEA0 (RtlInitUnicodeStringEx.c)
 */

bool __fastcall LdrpHpatAllocationOptOut(__int64 a1)
{
  const WCHAR *NtSystemRoot; // rax
  _UNICODE_STRING DestinationString; // [rsp+30h] [rbp-18h] BYREF

  if ( (NtCurrentPeb()->ProcessParameters->Flags & 0x2000000) == 0 || **(_WORD **)(a1 + 8) == 92 )
    return 0;
  NtSystemRoot = RtlGetNtSystemRoot();
  RtlInitUnicodeStringEx(&DestinationString, NtSystemRoot);
  return *(_WORD *)a1 < DestinationString.Length
      || RtlCompareUnicodeStrings(
           *(PCWCH *)(a1 + 8),
           (unsigned __int64)DestinationString.Length >> 1,
           DestinationString.Buffer,
           (unsigned __int64)DestinationString.Length >> 1,
           1u) != 0;
}

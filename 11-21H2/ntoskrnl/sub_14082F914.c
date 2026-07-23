/*
 * XREFs of sub_14082F914 @ 0x14082F914
 * Callers:
 *     sub_14091FEFC @ 0x14091FEFC (sub_14091FEFC.c)
 *     sub_140B146C4 @ 0x140B146C4 (sub_140B146C4.c)
 *     sub_140B14B1C @ 0x140B14B1C (sub_140B14B1C.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x140347630 (RtlInitUnicodeString.c)
 *     sub_14082F95C @ 0x14082F95C (sub_14082F95C.c)
 */

__int64 __fastcall sub_14082F914(ULONG_PTR BugCheckParameter3, ULONG_PTR BugCheckParameter4, PCWSTR SourceString)
{
  unsigned int v3; // ebx
  UNICODE_STRING DestinationString; // [rsp+20h] [rbp-18h] BYREF

  v3 = BugCheckParameter4;
  DestinationString = 0LL;
  RtlInitUnicodeString(&DestinationString, SourceString);
  return sub_14082F95C(BugCheckParameter3, v3);
}

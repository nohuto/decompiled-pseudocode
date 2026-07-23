/*
 * XREFs of sub_1406C29F4 @ 0x1406C29F4
 * Callers:
 *     sub_1406C29BC @ 0x1406C29BC (sub_1406C29BC.c)
 *     sub_140780EF0 @ 0x140780EF0 (sub_140780EF0.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x140347630 (RtlInitUnicodeString.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

void __fastcall sub_1406C29F4(UNICODE_STRING *a1)
{
  wchar_t *Buffer; // rcx

  Buffer = a1[1].Buffer;
  if ( Buffer )
  {
    ExFreePoolWithTag(Buffer, 0x67655256u);
    RtlInitUnicodeString(a1 + 1, 0LL);
  }
}

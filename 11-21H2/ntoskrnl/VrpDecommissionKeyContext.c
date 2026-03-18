/*
 * XREFs of VrpDecommissionKeyContext @ 0x1406C29F4
 * Callers:
 *     VrpFreeKeyContext @ 0x1406C29BC (VrpFreeKeyContext.c)
 *     VrpRegistryCallback @ 0x140780EF0 (VrpRegistryCallback.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x140347630 (RtlInitUnicodeString.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

void __fastcall VrpDecommissionKeyContext(UNICODE_STRING *a1)
{
  wchar_t *Buffer; // rcx

  Buffer = a1[1].Buffer;
  if ( Buffer )
  {
    ExFreePoolWithTag(Buffer, 0x67655256u);
    RtlInitUnicodeString(a1 + 1, 0LL);
  }
}

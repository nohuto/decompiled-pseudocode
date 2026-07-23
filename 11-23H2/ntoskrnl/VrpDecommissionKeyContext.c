/*
 * XREFs of VrpDecommissionKeyContext @ 0x14068EC6C
 * Callers:
 *     VrpRegistryCallback @ 0x14068E300 (VrpRegistryCallback.c)
 *     VrpFreeKeyContext @ 0x14068EC34 (VrpFreeKeyContext.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x14022E2C0 (RtlInitUnicodeString.c)
 *     ExFreePoolWithTag @ 0x140AAE110 (ExFreePoolWithTag.c)
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

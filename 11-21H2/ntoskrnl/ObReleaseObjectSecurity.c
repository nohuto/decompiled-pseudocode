/*
 * XREFs of ObReleaseObjectSecurity @ 0x1406E14B0
 * Callers:
 *     sub_14041A13C @ 0x14041A13C (sub_14041A13C.c)
 *     sub_140618880 @ 0x140618880 (sub_140618880.c)
 * Callees:
 *     ObDereferenceSecurityDescriptor @ 0x140725730 (ObDereferenceSecurityDescriptor.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

void __stdcall ObReleaseObjectSecurity(PSECURITY_DESCRIPTOR SecurityDescriptor, BOOLEAN MemoryAllocated)
{
  if ( SecurityDescriptor )
  {
    if ( MemoryAllocated )
      ExFreePoolWithTag(SecurityDescriptor, 0);
    else
      ObDereferenceSecurityDescriptor(SecurityDescriptor, 1LL);
  }
}

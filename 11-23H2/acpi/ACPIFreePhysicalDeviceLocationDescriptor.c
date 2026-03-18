/*
 * XREFs of ACPIFreePhysicalDeviceLocationDescriptor @ 0x1C0097DC0
 * Callers:
 *     ACPIFreePhysicalDeviceLocationDescriptors @ 0x1C0097E04 (ACPIFreePhysicalDeviceLocationDescriptors.c)
 *     ACPIProcessPhysicalDeviceLocation @ 0x1C0098144 (ACPIProcessPhysicalDeviceLocation.c)
 * Callees:
 *     <none>
 */

void __fastcall ACPIFreePhysicalDeviceLocationDescriptor(char *P)
{
  if ( *((_QWORD *)P + 16) )
    RtlFreeUnicodeString((PUNICODE_STRING)(P + 120));
  ExFreePoolWithTag(P, 0);
}

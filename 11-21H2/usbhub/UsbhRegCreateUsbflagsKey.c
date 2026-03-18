/*
 * XREFs of UsbhRegCreateUsbflagsKey @ 0x1C0045C5C
 * Callers:
 *     UsbhGetMSOS_Descriptor @ 0x1C003227C (UsbhGetMSOS_Descriptor.c)
 *     UsbhRegDriverEntry @ 0x1C0045CB0 (UsbhRegDriverEntry.c)
 * Callees:
 *     <none>
 */

NTSTATUS UsbhRegCreateUsbflagsKey()
{
  NTSTATUS result; // eax

  result = RtlCheckRegistryKey(2u, (PWSTR)L"usbflags");
  if ( (result & 0xC0000000) == 0xC0000000 )
    return RtlCreateRegistryKey(2u, (PWSTR)L"usbflags");
  return result;
}

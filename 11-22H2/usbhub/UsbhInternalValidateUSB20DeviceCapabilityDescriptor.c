/*
 * XREFs of UsbhInternalValidateUSB20DeviceCapabilityDescriptor @ 0x1C0052470
 * Callers:
 *     UsbhInternalValidateDeviceCapabilityDescriptor @ 0x1C0051EEC (UsbhInternalValidateDeviceCapabilityDescriptor.c)
 * Callees:
 *     Log @ 0x1C000F210 (Log.c)
 */

char __fastcall UsbhInternalValidateUSB20DeviceCapabilityDescriptor(__int64 a1, unsigned __int8 *a2)
{
  unsigned int v3; // eax

  if ( *a2 == 7 )
  {
    v3 = *(_DWORD *)(a2 + 3);
    if ( (v3 & 0xFFFF00E1) != 0 )
      Log(a1, 256, 1448423986, v3, 0LL);
    return 1;
  }
  else
  {
    Log(a1, 256, 1448423985, *a2, 0LL);
    return 0;
  }
}

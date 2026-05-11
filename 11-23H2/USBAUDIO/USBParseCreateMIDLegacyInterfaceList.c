/*
 * XREFs of USBParseCreateMIDLegacyInterfaceList @ 0x1C003428C
 * Callers:
 *     USBHwCreateInterfaceList @ 0x1C0031D58 (USBHwCreateInterfaceList.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall USBParseCreateMIDLegacyInterfaceList(
        PUSB_CONFIGURATION_DESCRIPTOR ConfigurationDescriptor,
        __int64 *a2)
{
  __int64 v2; // rbp
  unsigned int v3; // ebx
  unsigned int v5; // edi
  PUSB_INTERFACE_DESCRIPTOR v6; // rcx
  __int64 v7; // rax

  v2 = *a2;
  v3 = 0;
  v5 = 0;
  v6 = USBD_ParseConfigurationDescriptorEx(ConfigurationDescriptor, ConfigurationDescriptor, -1, -1, 1, 3, -1);
  if ( v6 )
  {
    while ( v5 < ConfigurationDescriptor->bNumInterfaces )
    {
      v7 = 2LL * v5++;
      *(_QWORD *)(v2 + 8 * v7) = v6;
      v6 = USBD_ParseConfigurationDescriptorEx(ConfigurationDescriptor, &v6->bLength + v6->bLength, -1, -1, 1, 3, -1);
      if ( !v6 )
        goto LABEL_4;
    }
    if ( v5 != ConfigurationDescriptor->bNumInterfaces )
    {
LABEL_4:
      *(_QWORD *)(v2 + 16LL * v5) = 0LL;
      return v3;
    }
  }
  return (unsigned int)-1073741438;
}

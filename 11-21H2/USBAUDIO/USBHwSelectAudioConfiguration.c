/*
 * XREFs of USBHwSelectAudioConfiguration @ 0x1C0034778
 * Callers:
 *     USBDeviceStart @ 0x1C0032B50 (USBDeviceStart.c)
 * Callees:
 *     memmove @ 0x1C0019680 (memmove.c)
 *     USBHwAllocateAndBag @ 0x1C0033484 (USBHwAllocateAndBag.c)
 *     USBHwSubmitUrbToUsbdSynch @ 0x1C0035AA4 (USBHwSubmitUrbToUsbdSynch.c)
 *     USBParseCreateInterfaceList @ 0x1C00365A8 (USBParseCreateInterfaceList.c)
 *     USBParseCreateMIDLegacyInterfaceList @ 0x1C00366D8 (USBParseCreateMIDLegacyInterfaceList.c)
 */

__int64 __fastcall USBHwSelectAudioConfiguration(__int64 a1)
{
  __int64 v1; // rax
  struct _USBD_INTERFACE_LIST_ENTRY *v3; // rdi
  __int64 v4; // rsi
  struct _USB_CONFIGURATION_DESCRIPTOR *v5; // r15
  int bNumInterfaces; // eax
  int v7; // ebx
  struct _USB_CONFIGURATION_DESCRIPTOR *v8; // rcx
  int v9; // eax
  struct _URB *ConfigurationRequest; // rax
  struct _URB *v11; // rbp
  int v12; // eax
  unsigned int v13; // r14d
  void *v14; // r9
  unsigned __int16 *v15; // r12
  PVOID *p_Interface; // [rsp+50h] [rbp+8h] BYREF

  v1 = *(_QWORD *)(a1 + 16);
  p_Interface = 0LL;
  v3 = 0LL;
  v4 = *(_QWORD *)(v1 + 72);
  v5 = *(struct _USB_CONFIGURATION_DESCRIPTOR **)(v4 + 40);
  bNumInterfaces = v5->bNumInterfaces;
  if ( (_BYTE)bNumInterfaces )
  {
    v7 = USBHwAllocateAndBag((PVOID *)&p_Interface, 16 * (bNumInterfaces + 1), 64LL, *(void **)(a1 + 8));
    if ( v7 >= 0 )
    {
      v8 = *(struct _USB_CONFIGURATION_DESCRIPTOR **)(v4 + 40);
      v9 = *(_BYTE *)(v4 + 5) ? USBParseCreateMIDLegacyInterfaceList(v8) : USBParseCreateInterfaceList(v8);
      v7 = v9;
      if ( v9 >= 0 )
        v3 = (struct _USBD_INTERFACE_LIST_ENTRY *)p_Interface;
    }
    if ( v7 >= 0 )
    {
      ConfigurationRequest = USBD_CreateConfigurationRequestEx(v5, v3);
      v11 = ConfigurationRequest;
      if ( ConfigurationRequest )
      {
        v12 = USBHwSubmitUrbToUsbdSynch(*(PDEVICE_OBJECT *)(a1 + 40), ConfigurationRequest, 0LL);
        v7 = v12;
        if ( v11->UrbHeader.Status >= 0 )
        {
          if ( v12 >= 0 )
          {
            v13 = 0;
            *(_QWORD *)(v4 + 24) = v11->UrbSelectConfiguration.ConfigurationHandle;
            if ( !v5->bNumInterfaces )
              goto LABEL_18;
            do
            {
              v14 = *(void **)(a1 + 8);
              p_Interface = (PVOID *)&v3[v13].Interface;
              v15 = (unsigned __int16 *)*p_Interface;
              v7 = USBHwAllocateAndBag(p_Interface, *(unsigned __int16 *)*p_Interface, 64LL, v14);
              if ( v7 >= 0 )
                memmove(*p_Interface, v15, *v15);
              ++v13;
            }
            while ( v13 < v5->bNumInterfaces );
            if ( v7 >= 0 )
LABEL_18:
              *(_QWORD *)(v4 + 16) = v3;
          }
        }
        else
        {
          v7 = -1073741808;
        }
        ExFreePool(v11);
      }
      else
      {
        return (unsigned int)-1073741670;
      }
    }
  }
  else
  {
    return (unsigned int)-1073741438;
  }
  return (unsigned int)v7;
}

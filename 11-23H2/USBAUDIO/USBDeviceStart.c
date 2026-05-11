/*
 * XREFs of USBDeviceStart @ 0x1C003CF90
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x1C0009730 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C001A000 (_guard_dispatch_icall_nop.c)
 *     USBHwGetCaptureRequestSize @ 0x1C002A008 (USBHwGetCaptureRequestSize.c)
 *     USBDeviceDescriptorHacks @ 0x1C0031750 (USBDeviceDescriptorHacks.c)
 *     USBHwGetAudioConfigurationDescriptor @ 0x1C0031F60 (USBHwGetAudioConfigurationDescriptor.c)
 *     USBHwGetAudioDeviceDescriptor @ 0x1C0032094 (USBHwGetAudioDeviceDescriptor.c)
 *     USBHwGetDeviceIDString @ 0x1C0032210 (USBHwGetDeviceIDString.c)
 *     USBHwSelectAudioConfiguration @ 0x1C0032868 (USBHwSelectAudioConfiguration.c)
 *     IsLegacyMIDIDevice @ 0x1C0033868 (IsLegacyMIDIDevice.c)
 *     USBParseGetAudioSpecificInterface @ 0x1C00347D8 (USBParseGetAudioSpecificInterface.c)
 *     USBHwLogStartFailure @ 0x1C003D448 (USBHwLogStartFailure.c)
 *     USBHwGetUsbBusInterface @ 0x1C003D610 (USBHwGetUsbBusInterface.c)
 */

__int64 __fastcall USBDeviceStart(__int64 a1)
{
  __int64 v1; // r13
  __int64 v3; // r15
  int UsbBusInterface; // eax
  int AudioDeviceDescriptor; // ebx
  PVOID v6; // r14
  struct _USB_CONFIGURATION_DESCRIPTOR *v7; // r12
  __int64 v8; // rdx
  struct _USB_CONFIGURATION_DESCRIPTOR *v9; // rsi
  PVOID v10; // rdx
  PUSB_INTERFACE_DESCRIPTOR v11; // rax
  __int64 v12; // r8
  unsigned __int8 *AudioSpecificInterface; // rax
  unsigned int v14; // eax
  int v15; // eax
  __int64 v16; // r8
  __int64 v17; // r9
  __int128 v18; // xmm1
  __int64 v19; // rdx
  bool v20; // al
  __int64 v21; // rcx
  __int64 v22; // rcx
  __int128 v23; // xmm0
  struct _USB_CONFIGURATION_DESCRIPTOR *v24; // rcx
  PVOID Item; // [rsp+48h] [rbp-29h] BYREF
  PVOID v27; // [rsp+50h] [rbp-21h] BYREF
  PVOID StartPosition; // [rsp+58h] [rbp-19h] BYREF
  _OWORD v29[4]; // [rsp+60h] [rbp-11h] BYREF

  v1 = *(_QWORD *)(a1 + 16);
  v27 = 0LL;
  StartPosition = 0LL;
  Item = 0LL;
  v3 = *(_QWORD *)(v1 + 72);
  UsbBusInterface = USBHwGetUsbBusInterface(a1, &Item);
  AudioDeviceDescriptor = UsbBusInterface;
  if ( UsbBusInterface < 0 )
  {
    strcpy((char *)v29, "Could not acquire Bus Interface");
    USBHwLogStartFailure(a1, (unsigned int)UsbBusInterface, v29, 32LL);
    v6 = Item;
    goto LABEL_43;
  }
  v6 = Item;
  AudioDeviceDescriptor = KsAddItemToObjectBag(*(KSOBJECT_BAG *)(a1 + 8), Item, ExFreePool);
  if ( AudioDeviceDescriptor < 0 )
  {
    ExFreePool(v6);
    v6 = 0LL;
  }
  else
  {
    *(_QWORD *)(v3 + 56) = v6;
  }
  if ( AudioDeviceDescriptor < 0 )
    goto LABEL_43;
  AudioDeviceDescriptor = USBHwGetAudioDeviceDescriptor(a1, &v27);
  if ( AudioDeviceDescriptor < 0 )
  {
    v23 = *(_OWORD *)"Could not acquire Device Descriptor";
    strcpy((char *)&v29[2], "tor");
    v17 = 36LL;
    v18 = *(_OWORD *)"e Device Descriptor";
LABEL_32:
    v29[0] = v23;
LABEL_33:
    v19 = (unsigned int)AudioDeviceDescriptor;
    goto LABEL_18;
  }
  v7 = (struct _USB_CONFIGURATION_DESCRIPTOR *)v27;
  AudioDeviceDescriptor = KsAddItemToObjectBag(*(KSOBJECT_BAG *)(a1 + 8), v27, ExFreePool);
  if ( AudioDeviceDescriptor < 0 )
  {
    v24 = v7;
    goto LABEL_38;
  }
  *(_QWORD *)(v3 + 32) = v7;
  AudioDeviceDescriptor = USBHwGetAudioConfigurationDescriptor(a1, v8, (unsigned __int16 **)&StartPosition);
  if ( AudioDeviceDescriptor < 0 )
  {
    v18 = *(_OWORD *)"e Configuration Descriptor";
    v17 = 43LL;
    v29[0] = *(_OWORD *)"Could not acquire Configuration Descriptor";
    strcpy((char *)&v29[2], "Descriptor");
    goto LABEL_33;
  }
  v9 = (struct _USB_CONFIGURATION_DESCRIPTOR *)StartPosition;
  AudioDeviceDescriptor = KsAddItemToObjectBag(*(KSOBJECT_BAG *)(a1 + 8), StartPosition, ExFreePool);
  if ( AudioDeviceDescriptor < 0 )
  {
    v24 = v9;
LABEL_38:
    ExFreePool(v24);
    goto LABEL_43;
  }
  *(_QWORD *)(v3 + 40) = v9;
  USBDeviceDescriptorHacks((__int64)v7, (__int64)v9);
  v11 = USBD_ParseConfigurationDescriptorEx(v9, v10, -1, -1, 1, 1, -1);
  if ( !v11 )
  {
    v20 = IsLegacyMIDIDevice(v9);
    *(_BYTE *)(v3 + 5) = v20;
    if ( v20 )
      goto LABEL_16;
    strcpy((char *)v29, "Could not find Control interface in Configuration Descriptor");
    USBHwLogStartFailure(a1, (unsigned int)AudioDeviceDescriptor, v29, 61LL);
    AudioDeviceDescriptor = -1073741438;
LABEL_43:
    if ( v6 )
      (*((void (__fastcall **)(_QWORD))v6 + 3))(*((_QWORD *)v6 + 1));
    return (unsigned int)AudioDeviceDescriptor;
  }
  *(_QWORD *)(v3 + 48) = v11;
  AudioSpecificInterface = USBParseGetAudioSpecificInterface(v9, &v11->bLength, v12, 8LL);
  if ( AudioSpecificInterface )
  {
    v14 = *(unsigned __int16 *)(AudioSpecificInterface + 3);
    *(_DWORD *)(v3 + 8) = v14;
    if ( v14 >= 0x200 )
      AudioDeviceDescriptor = -1073741735;
  }
  else
  {
    AudioDeviceDescriptor = -1073741438;
  }
  *(_DWORD *)(v1 + 1000) = USBD_ParseConfigurationDescriptorEx(v9, v9, -1, -1, 1, 3, -1) != 0LL;
  if ( AudioDeviceDescriptor < 0 )
    goto LABEL_43;
LABEL_16:
  v15 = USBHwSelectAudioConfiguration(a1);
  AudioDeviceDescriptor = v15;
  if ( v15 < 0 )
  {
    v17 = 40LL;
    v18 = *(_OWORD *)" a device configuration";
    v19 = (unsigned int)v15;
    v29[0] = *(_OWORD *)"Could not Select a device configuration";
    strcpy((char *)&v29[2], "uration");
LABEL_18:
    v29[1] = v18;
    USBHwLogStartFailure(a1, v19, v29, v17);
    goto LABEL_43;
  }
  if ( !v7[1].iConfiguration )
    goto LABEL_24;
  AudioDeviceDescriptor = USBHwGetDeviceIDString(a1, (_QWORD *)(v1 + 24), (_DWORD *)(v1 + 32));
  if ( AudioDeviceDescriptor != -1073741822 )
  {
    if ( AudioDeviceDescriptor >= 0 )
      goto LABEL_25;
    v23 = *(_OWORD *)"Could not acquire a device name string";
    strcpy((char *)&v29[2], "string");
    v17 = 39LL;
    v18 = *(_OWORD *)"e a device name string";
    goto LABEL_32;
  }
  AudioDeviceDescriptor = 0;
LABEL_24:
  *(_DWORD *)(v1 + 32) = 10;
  *(_QWORD *)(v1 + 24) = Default_Product_String;
LABEL_25:
  *(_DWORD *)(v3 + 208) = USBHwGetCaptureRequestSize(a1, (_BYTE *)(v3 + 212), v16);
  v21 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 16) + 72LL) + 56LL);
  *(_BYTE *)(v3 + 4) = (*(__int64 (__fastcall **)(_QWORD))(v21 + 64))(*(_QWORD *)(v21 + 8));
  v22 = 0LL;
  *(_QWORD *)(v3 + 200) = v3 + 192;
  *(_QWORD *)(v3 + 192) = v3 + 192;
  *(_DWORD *)(v1 + 40) = *(unsigned __int16 *)&v7->MaxPower;
  *(_DWORD *)(v1 + 44) = *(unsigned __int16 *)&v7[1].bDescriptorType;
  *(_DWORD *)(v1 + 48) = *(unsigned __int16 *)((char *)&v7[1].wTotalLength + 1);
  *(_QWORD *)(v1 + 56) = &KSCOMPONENTID_USBAUDIO;
  while ( (unsigned int)v22 < 0x18 )
  {
    if ( *(_WORD *)&v7->MaxPower == DeviceIDsForVolumeCurve[2 * v22]
      && *(_WORD *)&v7[1].bDescriptorType == DeviceIDsForVolumeCurve[2 * v22 + 1] )
    {
      *(_BYTE *)(v3 + 6) = 1;
      break;
    }
    v22 = (unsigned int)(v22 + 1);
  }
  if ( AudioDeviceDescriptor < 0 )
    goto LABEL_43;
  return (unsigned int)AudioDeviceDescriptor;
}

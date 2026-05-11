/*
 * XREFs of USBDeviceStart @ 0x1C0032B50
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x1C0001010 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0018A40 (_guard_dispatch_icall_nop.c)
 *     RegistryReadPnPKeyValue @ 0x1C0031C44 (RegistryReadPnPKeyValue.c)
 *     USBHwGetAudioConfigurationDescriptor @ 0x1C00336BC (USBHwGetAudioConfigurationDescriptor.c)
 *     USBHwGetDescriptor @ 0x1C00337F0 (USBHwGetDescriptor.c)
 *     USBHwGetDeviceIDString @ 0x1C00338CC (USBHwGetDeviceIDString.c)
 *     USBHwLogStartFailure @ 0x1C00345B0 (USBHwLogStartFailure.c)
 *     USBHwSelectAudioConfiguration @ 0x1C0034778 (USBHwSelectAudioConfiguration.c)
 *     USBParseGetAudioSpecificInterface @ 0x1C0036C38 (USBParseGetAudioSpecificInterface.c)
 */

__int64 __fastcall USBDeviceStart(__int64 a1)
{
  __int64 v1; // rax
  int Descriptor; // edi
  __int64 v4; // r12
  NTSTATUS Status; // r15d
  PIRP Irp; // rbx
  void *Pool2; // r14
  struct _IO_STACK_LOCATION *CurrentStackLocation; // rax
  struct _IO_STACK_LOCATION *v9; // rax
  NTSTATUS AudioConfigurationDescriptor; // ebx
  void (__fastcall **v11)(_QWORD); // r15
  __int64 v12; // rax
  __int64 v13; // rsi
  __int64 v14; // rdx
  char *v15; // rdi
  __int16 v16; // ax
  PUSB_INTERFACE_DESCRIPTOR v17; // rax
  __int64 v18; // r8
  __int64 AudioSpecificInterface; // rax
  unsigned int v20; // eax
  PUSB_INTERFACE_DESCRIPTOR v21; // rax
  __int64 v22; // rdi
  bool v23; // r15
  int v24; // eax
  __int64 v25; // r8
  __int64 v26; // r9
  __int128 v27; // xmm1
  __int64 v28; // rdx
  __int64 v29; // xmm0_8
  _QWORD *v30; // r15
  _DWORD *v31; // rax
  int v32; // edi
  __int128 v33; // xmm0
  __int64 v34; // r9
  __int64 v35; // rdx
  __int128 v36; // xmm1
  PVOID v37; // rcx
  unsigned int v38; // eax
  __int64 v39; // rcx
  char v40; // al
  __int64 v41; // rcx
  unsigned int v42; // edx
  _WORD *v43; // rcx
  PVOID Item; // [rsp+48h] [rbp-49h] BYREF
  __int64 v46; // [rsp+50h] [rbp-41h]
  int v47; // [rsp+58h] [rbp-39h] BYREF
  _OWORD v48[4]; // [rsp+60h] [rbp-31h] BYREF
  char Event[32]; // [rsp+A0h] [rbp+Fh] BYREF

  v1 = *(_QWORD *)(a1 + 16);
  Item = 0LL;
  v46 = v1;
  Descriptor = -1073741670;
  memset(Event, 0, 24);
  v4 = *(_QWORD *)(v1 + 72);
  Status = -1073741670;
  Irp = IoAllocateIrp(*(_BYTE *)(*(_QWORD *)(a1 + 40) + 76LL), 0);
  if ( !Irp )
    goto LABEL_84;
  Pool2 = (void *)ExAllocatePool2(64LL, 72LL, 1096972357LL);
  if ( Pool2 )
  {
    Irp->IoStatus.Status = -1073741637;
    KeInitializeEvent((PRKEVENT)Event, NotificationEvent, 0);
    CurrentStackLocation = Irp->Tail.Overlay.CurrentStackLocation;
    CurrentStackLocation[-1].CompletionRoutine = (PIO_COMPLETION_ROUTINE)USBD_SyncCompletionRoutine;
    CurrentStackLocation[-1].Context = Event;
    CurrentStackLocation[-1].Control = -32;
    v9 = Irp->Tail.Overlay.CurrentStackLocation;
    v9[-1].Parameters.CreatePipe.Parameters = 0LL;
    *(_WORD *)&v9[-1].MajorFunction = 2075;
    v9[-1].Parameters.Read.ByteOffset.QuadPart = (LONGLONG)Pool2;
    v9[-1].Parameters.WMI.ProviderId = (ULONG_PTR)&USB_BUS_INTERFACE_USBDI_GUID;
    v9[-1].Parameters.Create.Options = 65608;
    Status = IofCallDriver(*(PDEVICE_OBJECT *)(a1 + 40), Irp);
    if ( Status == 259 )
    {
      KeWaitForSingleObject(Event, Suspended, 0, 0, 0LL);
      Status = Irp->IoStatus.Status;
    }
    if ( Status < 0 )
    {
      ExFreePool(Pool2);
      Pool2 = 0LL;
    }
  }
  IoFreeIrp(Irp);
  if ( Status < 0 )
    goto LABEL_84;
  if ( !Pool2 )
  {
    Status = -1073741438;
LABEL_84:
    strcpy(Event, "Could not acquire Bus Interface");
    AudioConfigurationDescriptor = Status;
    USBHwLogStartFailure(a1, (unsigned int)Status, Event, 32LL);
    return (unsigned int)AudioConfigurationDescriptor;
  }
  AudioConfigurationDescriptor = KsAddItemToObjectBag(*(KSOBJECT_BAG *)(a1 + 8), Pool2, ExFreePool);
  if ( AudioConfigurationDescriptor < 0 )
  {
    ExFreePool(Pool2);
    Pool2 = 0LL;
  }
  else
  {
    *(_QWORD *)(v4 + 56) = Pool2;
  }
  v11 = (void (__fastcall **)(_QWORD))Pool2;
  if ( AudioConfigurationDescriptor < 0 )
    goto LABEL_81;
  v47 = 18;
  v12 = ExAllocatePool2(64LL, 18LL, 1096972357LL);
  v13 = v12;
  if ( !v12 )
  {
    AudioConfigurationDescriptor = -1073741670;
    goto LABEL_79;
  }
  Descriptor = USBHwGetDescriptor(a1, 1, 0, 0, (__int64)&v47, v12);
  AudioConfigurationDescriptor = Descriptor;
  if ( Descriptor < 0 )
  {
    ExFreePool((PVOID)v13);
LABEL_79:
    v33 = *(_OWORD *)"Could not acquire Device Descriptor";
    strcpy((char *)&v48[2], "tor");
    v34 = 36LL;
    v36 = *(_OWORD *)"e Device Descriptor";
    v35 = (unsigned int)Descriptor;
    goto LABEL_80;
  }
  AudioConfigurationDescriptor = KsAddItemToObjectBag(*(KSOBJECT_BAG *)(a1 + 8), (PVOID)v13, ExFreePool);
  if ( AudioConfigurationDescriptor < 0 )
  {
    ExFreePool((PVOID)v13);
    goto LABEL_81;
  }
  *(_QWORD *)(v4 + 32) = v13;
  AudioConfigurationDescriptor = USBHwGetAudioConfigurationDescriptor(a1, v14, &Item);
  if ( AudioConfigurationDescriptor < 0 )
  {
    v27 = *(_OWORD *)"e Configuration Descriptor";
    strcpy((char *)&v48[2] + 8, "or");
    v26 = 43LL;
    v28 = (unsigned int)AudioConfigurationDescriptor;
    v48[0] = *(_OWORD *)"Could not acquire Configuration Descriptor";
    v29 = *(_QWORD *)"Descriptor";
    goto LABEL_52;
  }
  v15 = (char *)Item;
  AudioConfigurationDescriptor = KsAddItemToObjectBag(*(KSOBJECT_BAG *)(a1 + 8), Item, ExFreePool);
  if ( AudioConfigurationDescriptor < 0 )
  {
    ExFreePool(v15);
    goto LABEL_37;
  }
  *(_QWORD *)(v4 + 40) = v15;
  v16 = *(_WORD *)(v13 + 8);
  if ( v16 == 2321 )
  {
    v16 = 2321;
    if ( *(_WORD *)(v13 + 10) == 9490 && *((_WORD *)v15 + 1) > 0x22u )
    {
      v15[34] = 0;
      v16 = *(_WORD *)(v13 + 8);
    }
  }
  if ( v16 == 2235 )
  {
    v16 = 2235;
    if ( *(_WORD *)(v13 + 10) == 9986 && *((_WORD *)v15 + 1) > 0x36u )
    {
      v15[54] = 1;
      v16 = *(_WORD *)(v13 + 8);
    }
  }
  if ( v16 == 2706 )
  {
    if ( *(_WORD *)(v13 + 10) != 4128 || *((_WORD *)v15 + 1) <= 0x2Au )
      goto LABEL_37;
    *(_WORD *)(v15 + 41) = 161;
    v16 = *(_WORD *)(v13 + 8);
  }
  if ( v16 == 2675 && *(_WORD *)(v13 + 10) == 6 && *((_WORD *)v15 + 1) > 0x2Au )
  {
    *(_WORD *)(v15 + 41) = 161;
    goto LABEL_38;
  }
LABEL_37:
  v11 = (void (__fastcall **)(_QWORD))Pool2;
  if ( AudioConfigurationDescriptor < 0 )
    goto LABEL_81;
LABEL_38:
  v17 = USBD_ParseConfigurationDescriptorEx((PUSB_CONFIGURATION_DESCRIPTOR)v15, v15, -1, -1, 1, 1, -1);
  if ( v17 )
  {
    *(_QWORD *)(v4 + 48) = v17;
    AudioSpecificInterface = USBParseGetAudioSpecificInterface(v15, v17, v18, 8LL);
    if ( AudioSpecificInterface )
    {
      v20 = *(unsigned __int16 *)(AudioSpecificInterface + 3);
      *(_DWORD *)(v4 + 8) = v20;
      if ( v20 >= 0x200 )
        AudioConfigurationDescriptor = -1073741735;
    }
    else
    {
      AudioConfigurationDescriptor = -1073741438;
    }
    v21 = USBD_ParseConfigurationDescriptorEx((PUSB_CONFIGURATION_DESCRIPTOR)v15, v15, -1, -1, 1, 3, -1);
    v22 = v46;
    v11 = (void (__fastcall **)(_QWORD))Pool2;
    *(_DWORD *)(v46 + 1000) = v21 != 0LL;
    if ( AudioConfigurationDescriptor < 0 )
      goto LABEL_81;
  }
  else
  {
    v23 = 0;
    if ( !USBD_ParseConfigurationDescriptorEx((PUSB_CONFIGURATION_DESCRIPTOR)v15, v15, -1, -1, 1, 2, -1) )
      v23 = USBD_ParseConfigurationDescriptorEx((PUSB_CONFIGURATION_DESCRIPTOR)v15, v15, -1, -1, 1, 3, -1) != 0LL;
    *(_BYTE *)(v4 + 5) = v23;
    if ( !v23 )
    {
      strcpy((char *)v48, "Could not find Control interface in Configuration Descriptor");
      USBHwLogStartFailure(a1, (unsigned int)AudioConfigurationDescriptor, v48, 61LL);
      AudioConfigurationDescriptor = -1073741438;
LABEL_53:
      v11 = (void (__fastcall **)(_QWORD))Pool2;
      goto LABEL_81;
    }
    v22 = v46;
  }
  v24 = USBHwSelectAudioConfiguration(a1);
  AudioConfigurationDescriptor = v24;
  if ( v24 < 0 )
  {
    v26 = 40LL;
    v27 = *(_OWORD *)" a device configuration";
    v28 = (unsigned int)v24;
    v48[0] = *(_OWORD *)"Could not Select a device configuration";
    v29 = *(_QWORD *)"uration";
LABEL_52:
    *(_QWORD *)&v48[2] = v29;
    v48[1] = v27;
    USBHwLogStartFailure(a1, v28, v48, v26);
    goto LABEL_53;
  }
  v30 = (_QWORD *)(v22 + 24);
  v31 = (_DWORD *)(v22 + 32);
  v32 = 10;
  if ( !*(_BYTE *)(v13 + 15) )
  {
    *v31 = 10;
    goto LABEL_60;
  }
  AudioConfigurationDescriptor = USBHwGetDeviceIDString(a1, v30, v31);
  if ( AudioConfigurationDescriptor == -1073741822 )
  {
    AudioConfigurationDescriptor = 0;
    *(_DWORD *)(v46 + 32) = 10;
LABEL_60:
    *v30 = Default_Product_String;
    v11 = (void (__fastcall **)(_QWORD))Pool2;
    goto LABEL_61;
  }
  v11 = (void (__fastcall **)(_QWORD))Pool2;
  if ( AudioConfigurationDescriptor < 0 )
  {
    v33 = *(_OWORD *)"Could not acquire a device name string";
    strcpy((char *)&v48[2], "string");
    v34 = 39LL;
    v35 = (unsigned int)AudioConfigurationDescriptor;
    v36 = *(_OWORD *)"e a device name string";
LABEL_80:
    v48[0] = v33;
    v48[1] = v36;
    USBHwLogStartFailure(a1, v35, v48, v34);
LABEL_81:
    if ( v11 )
      v11[3](v11[1]);
    return (unsigned int)AudioConfigurationDescriptor;
  }
LABEL_61:
  Item = 0LL;
  *(_BYTE *)(v4 + 212) = 0;
  if ( (int)RegistryReadPnPKeyValue(*(struct _DEVICE_OBJECT **)(a1 + 32), L"CapturePacketsPerUrb", v25, &Item) >= 0 )
  {
    v37 = Item;
    v38 = *(_DWORD *)Item;
    if ( *(_DWORD *)Item >= 3u )
    {
      if ( v38 > 0xA )
        v38 = 10;
      v32 = v38;
    }
    else
    {
      v32 = 3;
    }
    *(_BYTE *)(v4 + 212) = 1;
    ExFreePool(v37);
  }
  *(_DWORD *)(v4 + 208) = v32;
  v39 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 16) + 72LL) + 56LL);
  v40 = (*(__int64 (__fastcall **)(_QWORD))(v39 + 64))(*(_QWORD *)(v39 + 8));
  v41 = v46;
  v42 = 0;
  *(_BYTE *)(v4 + 4) = v40;
  *(_QWORD *)(v4 + 200) = v4 + 192;
  *(_QWORD *)(v4 + 192) = v4 + 192;
  *(_DWORD *)(v41 + 40) = *(unsigned __int16 *)(v13 + 8);
  *(_DWORD *)(v41 + 44) = *(unsigned __int16 *)(v13 + 10);
  *(_DWORD *)(v41 + 48) = *(unsigned __int16 *)(v13 + 12);
  *(_QWORD *)(v41 + 56) = &KSCOMPONENTID_USBAUDIO;
  v43 = &unk_1C001C112;
  while ( *(_WORD *)(v13 + 8) != *(v43 - 1) || *(_WORD *)(v13 + 10) != *v43 )
  {
    ++v42;
    v43 += 2;
    if ( v42 >= 0x18 )
      goto LABEL_74;
  }
  *(_BYTE *)(v4 + 6) = 1;
LABEL_74:
  if ( AudioConfigurationDescriptor < 0 )
    goto LABEL_81;
  return (unsigned int)AudioConfigurationDescriptor;
}

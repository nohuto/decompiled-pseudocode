/*
 * XREFs of ?PmAddDevice@@YAJPEAU_DRIVER_OBJECT@@PEAU_DEVICE_OBJECT@@@Z @ 0x1C0022900
 * Callers:
 *     <none>
 * Callees:
 *     memset @ 0x1C000BA40 (memset.c)
 */

__int64 __fastcall PmAddDevice(struct _DRIVER_OBJECT *a1, struct _DEVICE_OBJECT *a2)
{
  _QWORD *v2; // rbx
  char *DeviceExtension; // r14
  NTSTATUS v5; // edi
  PDEVICE_OBJECT v6; // rax
  _QWORD *v7; // rsi
  PIO_WORKITEM WorkItem; // rax
  PIO_WORKITEM v9; // rax
  PIRP Irp; // rax
  __int64 v11; // rax
  PVOID *v12; // rcx
  IRP *v14; // rcx
  struct _IO_WORKITEM *v15; // rcx
  struct _IO_WORKITEM *v16; // rcx
  struct _DEVICE_OBJECT *v17; // rcx
  PDEVICE_OBJECT SourceDevice; // [rsp+70h] [rbp+30h] BYREF

  v2 = 0LL;
  SourceDevice = 0LL;
  DeviceExtension = (char *)PmControlObject->DeviceExtension;
  v5 = IoCreateDevice(a1, 0x480u, 0LL, 0x2Du, 0x100u, 0, &SourceDevice);
  if ( v5 < 0 )
  {
    SourceDevice = 0LL;
  }
  else
  {
    v2 = SourceDevice->DeviceExtension;
    memset(v2, 0, 0x480uLL);
    v6 = IoAttachDeviceToDeviceStack(SourceDevice, a2);
    v2[2] = v6;
    if ( v6 )
    {
      *v2 = &PmFilterDispatch;
      v2[1] = SourceDevice;
      v2[3] = a2;
      KeInitializeMutex((PRKMUTEX)v2 + 1, 0);
      KeInitializeSpinLock(v2 + 14);
      IoInitializeRemoveLockEx((PIO_REMOVE_LOCK)(v2 + 15), 0x4C526D50u, 0xAu, 0, 0x20u);
      v2[78] = v2 + 77;
      v7 = v2 + 19;
      v2[77] = v2 + 77;
      v2[20] = v2 + 19;
      v2[80] = v2 + 79;
      v2[79] = v2 + 79;
      v2[83] = v2 + 82;
      v2[82] = v2 + 82;
      v2[85] = v2 + 84;
      v2[84] = v2 + 84;
      v2[87] = v2 + 86;
      v2[86] = v2 + 86;
      v2[19] = v2 + 19;
      KeInitializeEvent((PRKEVENT)(v2 + 103), NotificationEvent, 0);
      *((_DWORD *)v2 + 182) = 1;
      v2[113] = v2 + 112;
      v2[112] = v2 + 112;
      v2[109] = v2 + 108;
      v2[108] = v2 + 108;
      v2[92] = &PmGuidList;
      v2[93] = PmQueryWmiRegInfo;
      v2[94] = PmQueryWmiDataBlock;
      v2[98] = PmWmiFunctionControl;
      WorkItem = IoAllocateWorkItem(SourceDevice);
      v2[111] = WorkItem;
      if ( WorkItem )
      {
        v9 = IoAllocateWorkItem(SourceDevice);
        v2[106] = v9;
        if ( v9 )
        {
          Irp = IoAllocateIrp(5, 0);
          v2[107] = Irp;
          if ( Irp )
          {
            *((_DWORD *)v2 + 128) |= 8u;
            v2[66] |= 1uLL;
            *((_DWORD *)v2 + 129) = 0;
            *((_DWORD *)v2 + 102) = -1;
            *((_DWORD *)v2 + 103) = -1;
            *((_DWORD *)v2 + 108) = -1;
            *((_DWORD *)v2 + 109) = -1;
            *((_DWORD *)v2 + 110) = -1;
            *((_DWORD *)v2 + 104) = -1;
            *((_DWORD *)v2 + 105) = -1;
            *((_DWORD *)v2 + 106) = -1;
            *((_DWORD *)v2 + 107) = -1;
            v11 = v2[2];
            *((_BYTE *)v2 + 524) = 1;
            *((_DWORD *)v2 + 140) = 32;
            SourceDevice->DeviceType = *(_DWORD *)(v11 + 72);
            SourceDevice->Flags |= 0x10u;
            SourceDevice->Flags |= (*(_DWORD *)(v2[2] + 48LL) & 0x4000) != 0 ? 0x4000 : 0x2000;
            KeWaitForSingleObject(DeviceExtension + 16, Executive, 0, 0, 0LL);
            v12 = (PVOID *)*((_QWORD *)DeviceExtension + 12);
            if ( *v12 != DeviceExtension + 88 )
              __fastfail(3u);
            v2[20] = v12;
            *v7 = DeviceExtension + 88;
            *v12 = v7;
            *((_QWORD *)DeviceExtension + 12) = v7;
            KeReleaseMutex((PRKMUTEX)(DeviceExtension + 16), 0);
            SourceDevice->Flags &= ~0x80u;
            return (unsigned int)v5;
          }
        }
      }
      v5 = -1073741670;
    }
    else
    {
      v5 = -1073741810;
    }
  }
  if ( SourceDevice )
  {
    v14 = (IRP *)v2[107];
    if ( v14 )
      IoFreeIrp(v14);
    v15 = (struct _IO_WORKITEM *)v2[106];
    if ( v15 )
      IoFreeWorkItem(v15);
    v16 = (struct _IO_WORKITEM *)v2[111];
    if ( v16 )
      IoFreeWorkItem(v16);
    v17 = (struct _DEVICE_OBJECT *)v2[2];
    if ( v17 )
      IoDetachDevice(v17);
    IoDeleteDevice(SourceDevice);
  }
  return (unsigned int)v5;
}

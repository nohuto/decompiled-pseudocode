/*
 * XREFs of ?PmStartDeviceInternal@@YAJPEAU_DEVICE_EXTENSION@@PEAU_IRP@@@Z @ 0x1C0008570
 * Callers:
 *     ?PmStartDevice@@YAJPEAU_DEVICE_OBJECT@@PEAU_IRP@@@Z @ 0x1C000A8E0 (-PmStartDevice@@YAJPEAU_DEVICE_OBJECT@@PEAU_IRP@@@Z.c)
 *     ?PmStartDeviceWorkItem@@YAXPEAX0PEAU_IO_WORKITEM@@@Z @ 0x1C000EF50 (-PmStartDeviceWorkItem@@YAXPEAX0PEAU_IO_WORKITEM@@@Z.c)
 * Callees:
 *     PmGetDriveLayoutEx @ 0x1C0002B60 (PmGetDriveLayoutEx.c)
 *     ?ScExtractFirmwareRevision@@YAJPEAU_STORAGE_HW_FIRMWARE_INFO@@PEAU_UNICODE_STRING@@@Z @ 0x1C0009E60 (-ScExtractFirmwareRevision@@YAJPEAU_STORAGE_HW_FIRMWARE_INFO@@PEAU_UNICODE_STRING@@@Z.c)
 *     ?ScExtractDeviceStrings@@YAJPEAU_STORAGE_DEVICE_DESCRIPTOR@@PEAU_UNICODE_STRING@@111@Z @ 0x1C0009EE8 (-ScExtractDeviceStrings@@YAJPEAU_STORAGE_DEVICE_DESCRIPTOR@@PEAU_UNICODE_STRING@@111@Z.c)
 *     PmPowerCounterEnable @ 0x1C000B084 (PmPowerCounterEnable.c)
 *     __security_check_cookie @ 0x1C000B3D0 (__security_check_cookie.c)
 *     memset @ 0x1C000BA40 (memset.c)
 *     PmInitializeAttributesTableCache @ 0x1C000E2A0 (PmInitializeAttributesTableCache.c)
 *     PmInitializePartitionTableCache @ 0x1C000F9CC (PmInitializePartitionTableCache.c)
 *     PmInitializeSnapshotDataCache @ 0x1C000FCA0 (PmInitializeSnapshotDataCache.c)
 *     ?PmGetDevicePropertyString@@YAJPEAU_DEVICE_OBJECT@@PEBU_DEVPROPKEY@@PEAU_UNICODE_STRING@@@Z @ 0x1C001F240 (-PmGetDevicePropertyString@@YAJPEAU_DEVICE_OBJECT@@PEBU_DEVPROPKEY@@PEAU_UNICODE_STRING@@@Z.c)
 *     ?PmConstructDeviceLocation@@YAJPEAU_DEVICE_EXTENSION@@PEAU_IRP@@@Z @ 0x1C001F3AC (-PmConstructDeviceLocation@@YAJPEAU_DEVICE_EXTENSION@@PEAU_IRP@@@Z.c)
 *     ?PmGetFirmwareInfo@@YAJPEAU_DEVICE_EXTENSION@@W4_STORAGE_BUS_TYPE@@PEAPEAU_STORAGE_HW_FIRMWARE_INFO@@@Z @ 0x1C001F668 (-PmGetFirmwareInfo@@YAJPEAU_DEVICE_EXTENSION@@W4_STORAGE_BUS_TYPE@@PEAPEAU_STORAGE_HW_FIRMWARE_I.c)
 *     ?PmQueryStorageProperty@@YAJPEAU_DEVICE_EXTENSION@@W4_STORAGE_PROPERTY_ID@@KPEAPEAX@Z @ 0x1C00211F0 (-PmQueryStorageProperty@@YAJPEAU_DEVICE_EXTENSION@@W4_STORAGE_PROPERTY_ID@@KPEAPEAX@Z.c)
 *     PmSendDeviceControl @ 0x1C0021354 (PmSendDeviceControl.c)
 *     ?PmGetRegistryId@@YAJPEAU_DEVICE_EXTENSION@@PEAU_GUID@@@Z @ 0x1C0021DEC (-PmGetRegistryId@@YAJPEAU_DEVICE_EXTENSION@@PEAU_GUID@@@Z.c)
 *     PmSetInitialDiskAttributes @ 0x1C0021F84 (PmSetInitialDiskAttributes.c)
 *     PmWmiCounterEnable @ 0x1C00223F0 (PmWmiCounterEnable.c)
 *     PmWmiCounterDisable @ 0x1C0022550 (PmWmiCounterDisable.c)
 *     PmSetSystemCriticalFlag @ 0x1C0022C2C (PmSetSystemCriticalFlag.c)
 *     ?PmGetHybridInfo@@YAJPEAU_DEVICE_EXTENSION@@PEAPEAU_SRB_IO_CONTROL_HYBRID@@@Z @ 0x1C0022D20 (-PmGetHybridInfo@@YAJPEAU_DEVICE_EXTENSION@@PEAPEAU_SRB_IO_CONTROL_HYBRID@@@Z.c)
 *     ?PmApplyServiceProtection@@YAJPEAU_DEVICE_EXTENSION@@@Z @ 0x1C0026414 (-PmApplyServiceProtection@@YAJPEAU_DEVICE_EXTENSION@@@Z.c)
 */

__int64 __fastcall PmStartDeviceInternal(struct _DEVICE_EXTENSION *a1, struct _IRP *a2)
{
  struct _DEVICE_OBJECT *v3; // rcx
  _BYTE *DeviceExtension; // r15
  NTSTATUS Status; // esi
  int v7; // eax
  struct _DEVICE_OBJECT *v8; // rcx
  __int128 v9; // xmm0
  int v10; // eax
  struct _STORAGE_DEVICE_DESCRIPTOR **v11; // r12
  struct _STORAGE_HW_FIRMWARE_INFO *v12; // rcx
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 v16; // r9
  KIRQL v17; // al
  struct _IO_STACK_LOCATION *v19; // rbx
  ULONG Type; // [rsp+40h] [rbp-29h] BYREF
  ULONG RequiredSize; // [rsp+44h] [rbp-25h] BYREF
  __int64 v22; // [rsp+48h] [rbp-21h] BYREF
  int v23; // [rsp+50h] [rbp-19h]
  _BYTE v24[40]; // [rsp+58h] [rbp-11h] BYREF

  v3 = (struct _DEVICE_OBJECT *)*((_QWORD *)a1 + 2);
  RequiredSize = 0;
  DeviceExtension = PmControlObject->DeviceExtension;
  v22 = 0LL;
  v23 = 0;
  memset(v24, 0, sizeof(v24));
  Type = 0;
  IoForwardIrpSynchronously(v3, a2);
  Status = a2->IoStatus.Status;
  if ( Status >= 0 && (*((_DWORD *)a1 + 128) & 1) == 0 )
  {
    *(_DWORD *)(*((_QWORD *)a1 + 1) + 52LL) |= *(_DWORD *)(*((_QWORD *)a1 + 2) + 52LL) & 0x40001;
    if ( (*(_DWORD *)(*((_QWORD *)a1 + 2) + 52LL) & 1) != 0 )
      *((_DWORD *)a1 + 128) |= 0x800u;
    Status = IoGetDevicePropertyData(
               *((PDEVICE_OBJECT *)a1 + 3),
               &DEVPKEY_Device_ClassGuid,
               0,
               0,
               0x10u,
               (char *)a1 + 32,
               &RequiredSize,
               &Type);
    if ( Status >= 0 )
    {
      v7 = PmSendDeviceControl(*((PDEVICE_OBJECT *)a1 + 2), 0x2D1084u, 0LL, 0, v24, 0x28u, 0);
      v8 = (struct _DEVICE_OBJECT *)*((_QWORD *)a1 + 2);
      if ( v7 < 0 )
      {
        Status = PmSendDeviceControl(v8, 0x2D1080u, 0LL, 0, &v22, 0xCu, 0);
        if ( Status < 0 )
          goto LABEL_32;
        *((_DWORD *)a1 + 42) = HIDWORD(v22);
      }
      else
      {
        v9 = *(_OWORD *)&v24[20];
        *((_DWORD *)a1 + 42) = *(_DWORD *)&v24[16];
        v10 = *(_DWORD *)&v24[8];
        *(_OWORD *)((char *)a1 + 184) = v9;
        *((_DWORD *)a1 + 43) = v10;
        *((_DWORD *)a1 + 45) = 40;
        *((_DWORD *)a1 + 44) = 40;
        PmSendDeviceControl(v8, 0x2D280Cu, (char *)a1 + 176, 0x28u, (char *)a1 + 176, 0x28u, 0);
      }
      Status = PmGetRegistryId(a1, (struct _GUID *)((char *)a1 + 216));
      if ( Status >= 0 )
      {
        v11 = (struct _STORAGE_DEVICE_DESCRIPTOR **)((char *)a1 + 232);
        Status = PmQueryStorageProperty(a1, StorageDeviceProperty, 0x28u, (void **)a1 + 29);
        if ( Status >= 0 )
        {
          Status = ScExtractDeviceStrings(
                     *v11,
                     (struct _UNICODE_STRING *)((char *)a1 + 344),
                     (struct _UNICODE_STRING *)((char *)a1 + 360),
                     (struct _UNICODE_STRING *)((char *)a1 + 376),
                     (struct _UNICODE_STRING *)((char *)a1 + 392));
          if ( Status >= 0 )
          {
            PmGetFirmwareInfo(a1, (*v11)->BusType, (struct _STORAGE_HW_FIRMWARE_INFO **)a1 + 30);
            v12 = (struct _STORAGE_HW_FIRMWARE_INFO *)*((_QWORD *)a1 + 30);
            if ( !v12
              || (Status = ScExtractFirmwareRevision(v12, (struct _UNICODE_STRING *)((char *)a1 + 376)), Status >= 0) )
            {
              PmQueryStorageProperty(a1, StorageDeviceIdProperty, 0x10u, (void **)a1 + 31);
              if ( (*(_DWORD *)(*((_QWORD *)a1 + 1) + 52LL) & 0x40001) == 0 )
                PmQueryStorageProperty(a1, StorageDeviceWriteCacheProperty, 0x1Cu, (void **)a1 + 32);
              PmQueryStorageProperty(a1, StorageAccessAlignmentProperty, 0x1Cu, (void **)a1 + 33);
              PmQueryStorageProperty(a1, StorageDeviceSeekPenaltyProperty, 0xCu, (void **)a1 + 34);
              PmQueryStorageProperty(a1, StorageDeviceTrimProperty, 0xCu, (void **)a1 + 35);
              PmQueryStorageProperty(a1, StorageDeviceLBProvisioningProperty, 0x28u, (void **)a1 + 36);
              PmQueryStorageProperty(a1, StorageDeviceResiliencyProperty, 0x20u, (void **)a1 + 37);
              PmQueryStorageProperty(a1, StorageDeviceZonedDeviceProperty, 0x30u, (void **)a1 + 38);
              PmGetHybridInfo(a1, (struct _SRB_IO_CONTROL_HYBRID **)a1 + 39);
              PmQueryStorageProperty(a1, StorageAdapterProperty, 0x20u, (void **)a1 + 40);
              PmQueryStorageProperty(a1, StorageAdapterSerialNumberProperty, 0x108u, (void **)a1 + 41);
              PmQueryStorageProperty(a1, StorageMiniportProperty, 0x18u, (void **)a1 + 42);
              if ( FsRtlGetVirtualDiskNestingLevel(*((PDEVICE_OBJECT *)a1 + 2), (PULONG)a1 + 12, 0LL) < 0 )
                *((_DWORD *)a1 + 12) = 0;
              Status = PmConstructDeviceLocation(a1, a2);
              if ( Status >= 0 )
              {
                PmGetDevicePropertyString(
                  *((struct _DEVICE_OBJECT **)a1 + 3),
                  &DEVPKEY_Device_Parent,
                  (struct _UNICODE_STRING *)a1 + 29);
                Status = IoRegisterDeviceInterface(
                           *((PDEVICE_OBJECT *)a1 + 3),
                           &GUID_DEVINTERFACE_DISK,
                           0LL,
                           (PUNICODE_STRING)a1 + 30);
                if ( Status >= 0 )
                {
                  Status = IoRegisterDeviceInterface(
                             *((PDEVICE_OBJECT *)a1 + 3),
                             &GUID_DEVINTERFACE_HIDDEN_DISK,
                             0LL,
                             (PUNICODE_STRING)a1 + 31);
                  if ( Status >= 0 )
                  {
                    if ( DeviceExtension[165] )
                    {
                      PmInitializePartitionTableCache(a1);
                      PmInitializeAttributesTableCache(a1);
                      PmInitializeSnapshotDataCache(a1);
                    }
                    Status = IoWMIRegistrationControl(*((PDEVICE_OBJECT *)a1 + 1), 0x110001u);
                    if ( Status >= 0 )
                    {
                      PmWmiCounterEnable((char *)a1 + 720);
                      PmWmiCounterDisable((char *)a1 + 720, 0LL);
                      if ( (unsigned __int8)PoEnergyEstimationEnabled(v14, v13, v15, v16) )
                        PmPowerCounterEnable(a1);
                      if ( !DeviceExtension[166]
                        || (Status = PmGetDriveLayoutEx((KSPIN_LOCK *)a1, 0LL), Status >= 0)
                        && ((*((_DWORD *)a1 + 128) & 0x2000) == 0 || (Status = PmApplyServiceProtection(a1), Status >= 0)) )
                      {
                        if ( (int)IoCreateArcName(*((_QWORD *)a1 + 1)) >= 0 )
                          *((_DWORD *)a1 + 128) |= 0x1000u;
                        Status = PmSetInitialDiskAttributes(a1);
                        if ( Status >= 0 )
                        {
                          KeWaitForSingleObject((char *)a1 + 56, Executive, 0, 0, 0LL);
                          PmSetSystemCriticalFlag(a1);
                          if ( *((_BYTE *)a1 + 604) && !DeviceExtension[164] )
                          {
                            *(_DWORD *)(*((_QWORD *)a1 + 1) + 52LL) &= 0xFFFBFFFE;
                            *((_DWORD *)a1 + 128) &= ~0x800u;
                          }
                          v17 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)a1 + 14);
                          *((_DWORD *)a1 + 128) |= 1u;
                          KeReleaseSpinLock((PKSPIN_LOCK)a1 + 14, v17);
                          PmGetDriveLayoutEx((KSPIN_LOCK *)a1, 0LL);
                          if ( *((_BYTE *)a1 + 604) && !DeviceExtension[164] )
                          {
                            v19 = a2->Tail.Overlay.CurrentStackLocation - 1;
                            memset(v19, 0, sizeof(struct _IO_STACK_LOCATION));
                            *(_WORD *)&v19->MajorFunction = 5659;
                            v19->Parameters.SetLock.Lock = 1;
                            v19->Parameters.Create.Options = 4;
                            a2->IoStatus.Status = -1073741637;
                            a2->IoStatus.Information = 0LL;
                            IoSynchronousCallDriver(*((_QWORD *)a1 + 2), a2);
                          }
                          KeReleaseMutex((PRKMUTEX)a1 + 1, 0);
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
LABEL_32:
  a2->IoStatus.Status = Status;
  IofCompleteRequest(a2, 0);
  IoReleaseRemoveLockEx((PIO_REMOVE_LOCK)((char *)a1 + 120), a2, 0x20u);
  return (unsigned int)Status;
}

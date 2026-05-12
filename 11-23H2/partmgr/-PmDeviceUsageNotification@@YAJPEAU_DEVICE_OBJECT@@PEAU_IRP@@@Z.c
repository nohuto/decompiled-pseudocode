/*
 * XREFs of ?PmDeviceUsageNotification@@YAJPEAU_DEVICE_OBJECT@@PEAU_IRP@@@Z @ 0x1C000B124
 * Callers:
 *     ?PmPnp@@YAJPEAU_DEVICE_OBJECT@@PEAU_IRP@@@Z @ 0x1C001C340 (-PmPnp@@YAJPEAU_DEVICE_OBJECT@@PEAU_IRP@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PmDeviceUsageNotification(struct _DEVICE_OBJECT *a1, struct _IRP *a2)
{
  char *DeviceExtension; // rbx
  struct _IO_STACK_LOCATION *CurrentStackLocation; // rsi
  char v6; // r12
  int Status; // edi
  __int64 v8; // rax
  KIRQL v9; // dl
  volatile signed __int32 *v10; // rax
  int v11; // ecx
  __int64 v13; // rax

  DeviceExtension = (char *)a1->DeviceExtension;
  CurrentStackLocation = a2->Tail.Overlay.CurrentStackLocation;
  v6 = 0;
  IoForwardIrpSynchronously(*((PDEVICE_OBJECT *)DeviceExtension + 2), a2);
  Status = a2->IoStatus.Status;
  if ( Status >= 0 )
  {
    KeWaitForSingleObject(DeviceExtension + 56, Executive, 0, 0, 0LL);
    v8 = *((_QWORD *)DeviceExtension + 68) - CLUSDISK_OWNER_GUID;
    if ( !v8 )
      v8 = *((_QWORD *)DeviceExtension + 69) + 0x502D88342DE82841LL;
    if ( !v8 && CurrentStackLocation->Parameters.SetLock.Lock )
      Status = -1073741637;
    KeReleaseMutex((PRKMUTEX)DeviceExtension + 1, 0);
    if ( Status >= 0 )
    {
      v9 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)DeviceExtension + 14);
      switch ( CurrentStackLocation->Parameters.Create.Options )
      {
        case 1u:
          v10 = (volatile signed __int32 *)(DeviceExtension + 592);
          break;
        case 2u:
          v10 = (volatile signed __int32 *)(DeviceExtension + 596);
          break;
        case 3u:
          v10 = (volatile signed __int32 *)(DeviceExtension + 600);
          break;
        default:
          if ( CurrentStackLocation->Parameters.Create.Options == 4 && CurrentStackLocation->Parameters.SetLock.Lock )
          {
            v13 = *((_QWORD *)DeviceExtension + 1);
            DeviceExtension[604] = 1;
            *(_DWORD *)(v13 + 48) |= 0x400000u;
          }
          goto LABEL_13;
      }
      if ( v10 )
      {
        v11 = *((_DWORD *)DeviceExtension + 148)
            + *((_DWORD *)DeviceExtension + 149)
            + *((_DWORD *)DeviceExtension + 150);
        if ( CurrentStackLocation->Parameters.SetLock.Lock )
        {
          if ( !v11 )
          {
            a1->Flags &= ~0x2000u;
            v6 = 1;
          }
          _InterlockedIncrement(v10);
        }
        else
        {
          if ( v11 == 1 )
          {
            a1->Flags |= 0x2000u;
            v6 = 1;
          }
          _InterlockedDecrement(v10);
        }
      }
LABEL_13:
      KeReleaseSpinLock((PKSPIN_LOCK)DeviceExtension + 14, v9);
      if ( v6 )
        IoInvalidateDeviceState(*((PDEVICE_OBJECT *)DeviceExtension + 3));
    }
  }
  a2->IoStatus.Status = Status;
  IofCompleteRequest(a2, 0);
  return (unsigned int)Status;
}

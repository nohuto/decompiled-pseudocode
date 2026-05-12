/*
 * XREFs of ?PmQueryBusRelations@@YAJPEAU_DEVICE_OBJECT@@PEAU_IRP@@@Z @ 0x1C000A390
 * Callers:
 *     ?PmPnp@@YAJPEAU_DEVICE_OBJECT@@PEAU_IRP@@@Z @ 0x1C001C340 (-PmPnp@@YAJPEAU_DEVICE_OBJECT@@PEAU_IRP@@@Z.c)
 * Callees:
 *     PmWakeupNotificationWorkItem @ 0x1C000353C (PmWakeupNotificationWorkItem.c)
 */

__int64 __fastcall PmQueryBusRelations(struct _DEVICE_OBJECT *a1, struct _IRP *a2)
{
  char *DeviceExtension; // rdi
  unsigned int v4; // ebx
  KIRQL v5; // al
  int v6; // edx
  KIRQL v7; // r14
  int Status; // r14d
  unsigned int *Information; // rdi
  unsigned int i; // esi
  _DWORD *v12; // rcx
  __int64 v13; // rax

  DeviceExtension = (char *)a1->DeviceExtension;
  v4 = 0;
  v5 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)DeviceExtension + 14);
  v6 = *((_DWORD *)DeviceExtension + 128);
  v7 = v5;
  if ( (v6 & 2) == 0 )
    *((_DWORD *)DeviceExtension + 128) = v6 | 0x402;
  PmWakeupNotificationWorkItem((__int64)DeviceExtension);
  KeReleaseSpinLock((PKSPIN_LOCK)DeviceExtension + 14, v7);
  KeWaitForSingleObject(DeviceExtension + 824, Executive, 0, 0, 0LL);
  IoForwardIrpSynchronously(*((PDEVICE_OBJECT *)DeviceExtension + 2), a2);
  Status = a2->IoStatus.Status;
  if ( Status >= 0 )
  {
    Information = (unsigned int *)a2->IoStatus.Information;
    if ( Information )
    {
      for ( i = 0; i < *Information; ++i )
      {
        v12 = *(_DWORD **)&Information[2 * i + 2];
        if ( v12[18] == 70 )
        {
          v13 = v4++;
          *(_QWORD *)&Information[2 * v13 + 2] = v12;
        }
        else
        {
          ObfDereferenceObject(v12);
        }
      }
      *Information = v4;
    }
  }
  a2->IoStatus.Status = Status;
  IofCompleteRequest(a2, 0);
  return (unsigned int)Status;
}

/*
 * XREFs of ?PmPnp@@YAJPEAU_DEVICE_OBJECT@@PEAU_IRP@@@Z @ 0x1C001C340
 * Callers:
 *     <none>
 * Callees:
 *     ?PmQueryRemovalRelations@@YAJPEAU_DEVICE_OBJECT@@PEAU_IRP@@@Z @ 0x1C0004ED4 (-PmQueryRemovalRelations@@YAJPEAU_DEVICE_OBJECT@@PEAU_IRP@@@Z.c)
 *     ?PmQueryBusRelations@@YAJPEAU_DEVICE_OBJECT@@PEAU_IRP@@@Z @ 0x1C000A390 (-PmQueryBusRelations@@YAJPEAU_DEVICE_OBJECT@@PEAU_IRP@@@Z.c)
 *     ?PmQueryPnpDeviceState@@YAJPEAU_DEVICE_OBJECT@@PEAU_IRP@@@Z @ 0x1C000A694 (-PmQueryPnpDeviceState@@YAJPEAU_DEVICE_OBJECT@@PEAU_IRP@@@Z.c)
 *     ?PmStartDevice@@YAJPEAU_DEVICE_OBJECT@@PEAU_IRP@@@Z @ 0x1C000A8E0 (-PmStartDevice@@YAJPEAU_DEVICE_OBJECT@@PEAU_IRP@@@Z.c)
 *     ?PmDeviceUsageNotification@@YAJPEAU_DEVICE_OBJECT@@PEAU_IRP@@@Z @ 0x1C000B124 (-PmDeviceUsageNotification@@YAJPEAU_DEVICE_OBJECT@@PEAU_IRP@@@Z.c)
 *     ?PmQueryRemoveDevice@@YAJPEAU_DEVICE_OBJECT@@PEAU_IRP@@@Z @ 0x1C000EE44 (-PmQueryRemoveDevice@@YAJPEAU_DEVICE_OBJECT@@PEAU_IRP@@@Z.c)
 *     ?PmSurpriseRemoval@@YAJPEAU_DEVICE_OBJECT@@PEAU_IRP@@@Z @ 0x1C001E1A8 (-PmSurpriseRemoval@@YAJPEAU_DEVICE_OBJECT@@PEAU_IRP@@@Z.c)
 *     ?PmRemoveDevice@@YAJPEAU_DEVICE_OBJECT@@PEAU_IRP@@@Z @ 0x1C001E204 (-PmRemoveDevice@@YAJPEAU_DEVICE_OBJECT@@PEAU_IRP@@@Z.c)
 */

__int64 __fastcall PmPnp(struct _DEVICE_OBJECT *a1, struct _IRP *a2)
{
  char *DeviceExtension; // r14
  struct _IO_STACK_LOCATION *CurrentStackLocation; // rbp
  int v6; // eax
  unsigned int v7; // esi
  ULONG Length; // eax
  IRP *v9; // rdx
  int BusRelations; // eax
  unsigned int v11; // edi

  DeviceExtension = (char *)a1->DeviceExtension;
  CurrentStackLocation = a2->Tail.Overlay.CurrentStackLocation;
  v6 = IoAcquireRemoveLockEx((PIO_REMOVE_LOCK)(DeviceExtension + 120), a2, File, 1u, 0x20u);
  v7 = v6;
  if ( v6 >= 0 )
  {
    if ( CurrentStackLocation->MinorFunction )
    {
      if ( CurrentStackLocation->MinorFunction == 1 )
      {
        BusRelations = PmQueryRemoveDevice(a1, a2);
        goto LABEL_9;
      }
      if ( CurrentStackLocation->MinorFunction != 2 )
      {
        switch ( CurrentStackLocation->MinorFunction )
        {
          case 7u:
            Length = CurrentStackLocation->Parameters.Read.Length;
            v9 = a2;
            if ( !Length )
            {
              BusRelations = PmQueryBusRelations(a1, a2);
              goto LABEL_9;
            }
            if ( Length == 3 )
            {
              BusRelations = PmQueryRemovalRelations(a1, a2);
              goto LABEL_9;
            }
            break;
          case 0x14u:
            BusRelations = PmQueryPnpDeviceState(a1, a2);
            goto LABEL_9;
          case 0x16u:
            BusRelations = PmDeviceUsageNotification(a1, a2);
            goto LABEL_9;
          default:
            v9 = a2;
            if ( CurrentStackLocation->MinorFunction == 23 )
            {
              BusRelations = PmSurpriseRemoval(a1, a2);
              goto LABEL_9;
            }
            break;
        }
        ++a2->CurrentLocation;
        ++a2->Tail.Overlay.CurrentStackLocation;
        BusRelations = IofCallDriver(*((PDEVICE_OBJECT *)DeviceExtension + 2), v9);
LABEL_9:
        v11 = BusRelations;
        IoReleaseRemoveLockEx((PIO_REMOVE_LOCK)(DeviceExtension + 120), a2, 0x20u);
        return v11;
      }
      return (unsigned int)PmRemoveDevice(a1, a2);
    }
    else
    {
      return (unsigned int)PmStartDevice(a1, a2);
    }
  }
  a2->IoStatus.Status = v6;
  IofCompleteRequest(a2, 0);
  return v7;
}

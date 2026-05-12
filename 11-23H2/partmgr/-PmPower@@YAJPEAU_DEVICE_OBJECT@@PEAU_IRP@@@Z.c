/*
 * XREFs of ?PmPower@@YAJPEAU_DEVICE_OBJECT@@PEAU_IRP@@@Z @ 0x1C000EB10
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall PmPower(struct _DEVICE_OBJECT *a1, struct _IRP *a2)
{
  char *DeviceExtension; // r15
  struct _IO_STACK_LOCATION *CurrentStackLocation; // rbp
  char v5; // di
  int v6; // esi
  struct _IO_STACK_LOCATION *v8; // rax
  struct _IO_STACK_LOCATION *v9; // rax
  unsigned int v10; // ebx

  DeviceExtension = (char *)a1->DeviceExtension;
  CurrentStackLocation = a2->Tail.Overlay.CurrentStackLocation;
  v5 = 1;
  v6 = IoAcquireRemoveLockEx((PIO_REMOVE_LOCK)(DeviceExtension + 120), 0LL, File, 1u, 0x20u);
  if ( v6 >= 0 )
  {
    if ( CurrentStackLocation->MinorFunction == 2 && CurrentStackLocation->Parameters.Create.Options == 1 )
    {
      v8 = a2->Tail.Overlay.CurrentStackLocation;
      *(_OWORD *)&v8[-1].MajorFunction = *(_OWORD *)&v8->MajorFunction;
      *(_OWORD *)&v8[-1].Parameters.NotifyDirectoryEx.CompletionFilter = *(_OWORD *)&v8->Parameters.NotifyDirectoryEx.CompletionFilter;
      *(_OWORD *)(&v8[-1].Parameters.SetQuota + 6) = *(_OWORD *)(&v8->Parameters.SetQuota + 6);
      v8[-1].FileObject = v8->FileObject;
      v8[-1].Control = 0;
      v9 = a2->Tail.Overlay.CurrentStackLocation;
      v9[-1].Context = 0LL;
      v5 = 0;
      v9[-1].CompletionRoutine = (PIO_COMPLETION_ROUTINE)PmPowerCompletion;
      v9[-1].Control = -32;
    }
    else
    {
      PoStartNextPowerIrp(a2);
      ++a2->CurrentLocation;
      ++a2->Tail.Overlay.CurrentStackLocation;
    }
    v10 = PoCallDriver(*((PDEVICE_OBJECT *)DeviceExtension + 2), a2);
    if ( v5 )
      IoReleaseRemoveLockEx((PIO_REMOVE_LOCK)(DeviceExtension + 120), 0LL, 0x20u);
    return v10;
  }
  else
  {
    PoStartNextPowerIrp(a2);
    a2->IoStatus.Status = v6;
    IofCompleteRequest(a2, 0);
    return (unsigned int)v6;
  }
}

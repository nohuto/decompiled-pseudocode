/*
 * XREFs of PmIoctlCreateDisk @ 0x1C001E904
 * Callers:
 *     ?PmFilterDeviceControl@@YAJPEAU_DEVICE_OBJECT@@PEAU_IRP@@@Z @ 0x1C00038D0 (-PmFilterDeviceControl@@YAJPEAU_DEVICE_OBJECT@@PEAU_IRP@@@Z.c)
 * Callees:
 *     PmCreateDisk @ 0x1C001E9A4 (PmCreateDisk.c)
 */

__int64 __fastcall PmIoctlCreateDisk(__int64 a1, IRP *a2)
{
  __int64 v2; // rsi
  struct _IO_STACK_LOCATION *CurrentStackLocation; // rbp
  struct _CREATE_DISK *MasterIrp; // rbx
  int Disk; // ebx

  v2 = *(_QWORD *)(a1 + 64);
  CurrentStackLocation = a2->Tail.Overlay.CurrentStackLocation;
  if ( *(_DWORD *)(*(_QWORD *)(v2 + 232) + 28LL) != 18
    || (IoForwardIrpSynchronously(*(PDEVICE_OBJECT *)(v2 + 16), a2), Disk = a2->IoStatus.Status, Disk >= 0) )
  {
    if ( CurrentStackLocation->Parameters.Create.Options < 0x18 )
    {
      return (unsigned int)-1073741820;
    }
    else
    {
      MasterIrp = (struct _CREATE_DISK *)a2->AssociatedIrp.MasterIrp;
      KeWaitForSingleObject((PVOID)(v2 + 56), Executive, 0, 0, 0LL);
      Disk = PmCreateDisk((struct _DEVICE_EXTENSION *)v2, MasterIrp);
      KeReleaseMutex((PRKMUTEX)(v2 + 56), 0);
    }
  }
  return (unsigned int)Disk;
}

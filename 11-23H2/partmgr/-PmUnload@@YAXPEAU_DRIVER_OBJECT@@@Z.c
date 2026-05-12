/*
 * XREFs of ?PmUnload@@YAXPEAU_DRIVER_OBJECT@@@Z @ 0x1C00268E0
 * Callers:
 *     DriverEntry @ 0x1C002A078 (DriverEntry.c)
 * Callees:
 *     McGenEventUnregister_EtwUnregister @ 0x1C000EF90 (McGenEventUnregister_EtwUnregister.c)
 *     PmVolumeManagerRemoval @ 0x1C0028050 (PmVolumeManagerRemoval.c)
 */

void __fastcall PmUnload(struct _DRIVER_OBJECT *a1)
{
  char *DeviceExtension; // rbx
  void *v2; // rcx
  __int64 v3; // rcx
  _QWORD *i; // rdi
  void *v5; // rcx
  void *v6; // rcx
  REGHANDLE v7; // rcx
  struct _UNICODE_STRING DestinationString; // [rsp+30h] [rbp-18h] BYREF

  DestinationString = 0LL;
  if ( PmControlObject )
  {
    DeviceExtension = (char *)PmControlObject->DeviceExtension;
    v2 = (void *)*((_QWORD *)DeviceExtension + 50);
    if ( v2 )
      IoUnregisterPlugPlayNotification(v2);
    KeWaitForSingleObject(DeviceExtension + 16, Executive, 0, 0, 0LL);
    for ( i = DeviceExtension + 72; (_QWORD *)*i != i; PmVolumeManagerRemoval(v3, *i) )
      ;
    KeReleaseMutex((PRKMUTEX)(DeviceExtension + 16), 0);
    v5 = (void *)*((_QWORD *)DeviceExtension + 52);
    if ( v5 )
      ExFreePoolWithTag(v5, 0);
    RtlInitUnicodeString(&DestinationString, L"\\DosDevices\\PartmgrControl");
    IoDeleteSymbolicLink(&DestinationString);
    v6 = (void *)*((_QWORD *)DeviceExtension + 23);
    if ( v6 )
      ExFreePoolWithTag(v6, 0);
    IoDeleteDevice(PmControlObject);
    PmControlObject = 0LL;
  }
  McGenEventUnregister_EtwUnregister();
  v7 = RegHandle;
  RegHandle = 0LL;
  dword_1C0017048 = 0;
  EtwUnregister(v7);
}

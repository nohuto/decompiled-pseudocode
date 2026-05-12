/*
 * XREFs of DriverEntry @ 0x1C002A078
 * Callers:
 *     GsDriverEntry @ 0x1C002A010 (GsDriverEntry.c)
 * Callees:
 *     McGenEventRegister_EtwRegister @ 0x1C000B2BC (McGenEventRegister_EtwRegister.c)
 *     memset @ 0x1C000BA40 (memset.c)
 *     TraceLoggingRegisterEx_EtwRegister_EtwSetInformation @ 0x1C0023238 (TraceLoggingRegisterEx_EtwRegister_EtwSetInformation.c)
 *     ?PmUnload@@YAXPEAU_DRIVER_OBJECT@@@Z @ 0x1C00268E0 (-PmUnload@@YAXPEAU_DRIVER_OBJECT@@@Z.c)
 *     ?PmQueryGlobalSettings@@YAJPEAU_CONTROL_EXTENSION@@@Z @ 0x1C002A404 (-PmQueryGlobalSettings@@YAJPEAU_CONTROL_EXTENSION@@@Z.c)
 */

NTSTATUS __stdcall DriverEntry(_DRIVER_OBJECT *DriverObject, PUNICODE_STRING RegistryPath)
{
  int GlobalSettings; // ebx
  char *DeviceExtension; // rdi
  struct _UNICODE_STRING DestinationString; // [rsp+40h] [rbp-38h] BYREF
  struct _UNICODE_STRING SymbolicLinkName; // [rsp+50h] [rbp-28h] BYREF
  PDEVICE_OBJECT DeviceObject; // [rsp+80h] [rbp+8h] BYREF

  DeviceObject = 0LL;
  DestinationString = 0LL;
  SymbolicLinkName = 0LL;
  TraceLoggingRegisterEx_EtwRegister_EtwSetInformation();
  McGenEventRegister_EtwRegister();
  memset64(DriverObject->MajorFunction, (unsigned __int64)PmGlobalDispatch, 0x1CuLL);
  DriverObject->DriverExtension->AddDevice = (PDRIVER_ADD_DEVICE)PmAddDevice;
  DriverObject->DriverUnload = (PDRIVER_UNLOAD)PmUnload;
  memset64(&PmControlDispatch, (unsigned __int64)PmFail, 0x1CuLL);
  PmControlDispatch = (__int64)PmCreate;
  qword_1C0017300 = (__int64)PmControlDeviceControl;
  qword_1C00172A0 = (__int64)PmCleanup;
  qword_1C0017320 = (__int64)PmCleanup;
  memset64(&PmFilterDispatch, (unsigned __int64)PmPassThrough, 0x1CuLL);
  qword_1C0017390 = (__int64)PmWrite;
  qword_1C0017388 = (__int64)PmIo;
  qword_1C00173E0 = (__int64)PmFilterDeviceControl;
  qword_1C00173B8 = (__int64)PmIo;
  qword_1C00173E8 = (__int64)PmFilterInternalDeviceControl;
  memset64(&PartitionDispatch, (unsigned __int64)PmFail, 0x1CuLL);
  qword_1C0017420 = (__int64)PmPower;
  qword_1C00171C8 = (__int64)PartitionIo;
  qword_1C0017428 = (__int64)PmSystemControl;
  qword_1C00171D0 = (__int64)PartitionWrite;
  qword_1C0017448 = (__int64)PmPnp;
  PartitionDispatch = (__int64)PmCreate;
  qword_1C00171C0 = (__int64)PmCleanup;
  qword_1C0017220 = (__int64)PartitionDeviceControl;
  qword_1C0017240 = (__int64)PmCleanup;
  RtlInitUnicodeString(&DestinationString, L"\\Device\\PartmgrControl");
  GlobalSettings = IoCreateDevice(DriverObject, 0x1B0u, &DestinationString, 0x2Du, 0x100u, 0, &DeviceObject);
  if ( GlobalSettings < 0 )
    goto LABEL_8;
  PmControlObject = DeviceObject;
  DeviceExtension = (char *)DeviceObject->DeviceExtension;
  memset(DeviceExtension + 16, 0, 0x1A0uLL);
  *(_QWORD *)DeviceExtension = &PmControlDispatch;
  *((_QWORD *)DeviceExtension + 1) = DriverObject;
  KeInitializeMutex((PRKMUTEX)(DeviceExtension + 16), 0);
  *((_QWORD *)DeviceExtension + 10) = DeviceExtension + 72;
  *((_QWORD *)DeviceExtension + 9) = DeviceExtension + 72;
  *((_QWORD *)DeviceExtension + 12) = DeviceExtension + 88;
  *((_QWORD *)DeviceExtension + 11) = DeviceExtension + 88;
  KeInitializeMutex((PRKMUTEX)(DeviceExtension + 104), 0);
  RtlInitializeGenericTableAvl(
    (PRTL_AVL_TABLE)(DeviceExtension + 192),
    (PRTL_AVL_COMPARE_ROUTINE)PmTableSignatureCompareRoutine,
    (PRTL_AVL_ALLOCATE_ROUTINE)PmTableAllocateRoutine,
    (PRTL_AVL_FREE_ROUTINE)PmTableFreeRoutine,
    DeviceExtension);
  RtlInitializeGenericTableAvl(
    (PRTL_AVL_TABLE)(DeviceExtension + 296),
    (PRTL_AVL_COMPARE_ROUTINE)PmTableGuidCompareRoutine,
    (PRTL_AVL_ALLOCATE_ROUTINE)PmTableAllocateRoutine,
    (PRTL_AVL_FREE_ROUTINE)PmTableFreeRoutine,
    DeviceExtension);
  GlobalSettings = RtlDuplicateUnicodeString(1u, RegistryPath, (PUNICODE_STRING)(DeviceExtension + 408));
  if ( GlobalSettings < 0
    || (GlobalSettings = PmQueryGlobalSettings((struct _CONTROL_EXTENSION *)DeviceExtension), GlobalSettings < 0)
    || (RtlInitUnicodeString(&SymbolicLinkName, L"\\DosDevices\\PartmgrControl"),
        GlobalSettings = IoCreateSymbolicLink(&SymbolicLinkName, &DestinationString),
        GlobalSettings < 0)
    || (GlobalSettings = IoRegisterPlugPlayNotification(
                           EventCategoryDeviceInterfaceChange,
                           1u,
                           &VOLMGR_VOLUME_MANAGER_GUID,
                           DriverObject,
                           (PDRIVER_NOTIFICATION_CALLBACK_ROUTINE)PmVolumeManagerNotification,
                           DeviceExtension,
                           (PVOID *)DeviceExtension + 50),
        GlobalSettings < 0) )
  {
LABEL_8:
    PmUnload(DriverObject);
  }
  else
  {
    IoRegisterDriverReinitialization(DriverObject, (PDRIVER_REINITIALIZE)PmDriverReinitialization, 0LL);
  }
  return GlobalSettings;
}

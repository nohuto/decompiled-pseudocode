/*
 * XREFs of PmGetDevicePropertyData @ 0x1C001F2BC
 * Callers:
 *     ?GetPnpProperty@PM_DRIVE@@UEAAJPEAXPEAPEAX@Z @ 0x1C0004FD0 (-GetPnpProperty@PM_DRIVE@@UEAAJPEAXPEAPEAX@Z.c)
 *     ?PmGetDevicePropertyString@@YAJPEAU_DEVICE_OBJECT@@PEBU_DEVPROPKEY@@PEAU_UNICODE_STRING@@@Z @ 0x1C001F240 (-PmGetDevicePropertyString@@YAJPEAU_DEVICE_OBJECT@@PEBU_DEVPROPKEY@@PEAU_UNICODE_STRING@@@Z.c)
 *     ?GetPnpProperty@PM_DISK@@UEAAJPEAXPEAPEAX@Z @ 0x1C001F2A0 (-GetPnpProperty@PM_DISK@@UEAAJPEAXPEAPEAX@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PmGetDevicePropertyData(PDEVICE_OBJECT Pdo, DEVPROPKEY *PropertyKey, _QWORD *a3)
{
  NTSTATUS DevicePropertyData; // edi
  void *Data; // rbx
  ULONG Type[10]; // [rsp+40h] [rbp-28h] BYREF
  ULONG RequiredSize; // [rsp+88h] [rbp+20h] BYREF

  RequiredSize = 0;
  Type[0] = 0;
  DevicePropertyData = IoGetDevicePropertyData(Pdo, PropertyKey, 0, 0, 0, 0LL, &RequiredSize, Type);
  if ( DevicePropertyData == -1073741789 )
  {
    Data = (void *)ExAllocatePool2(66LL, RequiredSize, 1112108368LL);
    if ( Data )
    {
      DevicePropertyData = IoGetDevicePropertyData(Pdo, PropertyKey, 0, 0, RequiredSize, Data, &RequiredSize, Type);
      if ( DevicePropertyData < 0 )
        ExFreePoolWithTag(Data, 0);
      else
        *a3 = Data;
    }
    else
    {
      return (unsigned int)-1073741670;
    }
  }
  return (unsigned int)DevicePropertyData;
}

/*
 * XREFs of ?ndisQueryReenumerateSelfInterface@@YAJPEAU_DEVICE_OBJECT@@PEAPEAU_DEVICE_RESET_INTERFACE_STANDARD@@@Z @ 0x1C012CB7C
 * Callers:
 *     ?ndisMInitializeAdapter@@YAHPEAU_NDIS_M_DRIVER_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_WRAPPER_CONFIGURATION_HANDLE@@PEAU_UNICODE_STRING@@PEAX@Z @ 0x1C014C7DC (-ndisMInitializeAdapter@@YAHPEAU_NDIS_M_DRIVER_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_WRAPPE.c)
 * Callees:
 *     ?ndisQueryDriverInterface@@YAJPEAU_DEVICE_OBJECT@@PEBU_GUID@@GGPEAU_INTERFACE@@@Z @ 0x1C012CA5C (-ndisQueryDriverInterface@@YAJPEAU_DEVICE_OBJECT@@PEBU_GUID@@GGPEAU_INTERFACE@@@Z.c)
 */

__int64 __fastcall ndisQueryReenumerateSelfInterface(PDEVICE_OBJECT DeviceObject, PVOID *a2)
{
  struct _DEVICE_RESET_INTERFACE_STANDARD *Pool2; // rax
  NTSTATUS DriverInterface; // edi

  Pool2 = (struct _DEVICE_RESET_INTERFACE_STANDARD *)ExAllocatePool2(64LL, 80LL, 1768047694);
  *a2 = Pool2;
  if ( !Pool2 )
    return 3221225626LL;
  DriverInterface = ndisQueryDriverInterface(
                      DeviceObject,
                      &GUID_DEVICE_RESET_INTERFACE_STANDARD,
                      1u,
                      0x50u,
                      (struct _INTERFACE *)Pool2);
  if ( DriverInterface < 0 )
  {
    ExFreePoolWithTag(*a2, 0);
    *a2 = 0LL;
  }
  return (unsigned int)DriverInterface;
}

/*
 * XREFs of IopQueryBusResourceUpdateInterface @ 0x140958764
 * Callers:
 *     PiUpdateDeviceResourceLists @ 0x14095B1A4 (PiUpdateDeviceResourceLists.c)
 * Callees:
 *     PnpQueryInterface @ 0x14074C6C0 (PnpQueryInterface.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 *     ExAllocatePool2 @ 0x140A6E430 (ExAllocatePool2.c)
 */

__int64 __fastcall IopQueryBusResourceUpdateInterface(PDEVICE_OBJECT DeviceObject, USHORT **a2)
{
  USHORT *Pool2; // rax
  USHORT *v5; // rbx
  int Interface; // edi

  Pool2 = (USHORT *)ExAllocatePool2(256LL, 40LL, 538996816LL);
  v5 = Pool2;
  if ( !Pool2 )
    return 3221225626LL;
  Interface = PnpQueryInterface(DeviceObject, (ULONG_PTR)&GUID_BUS_RESOURCE_UPDATE_INTERFACE, 0, 0x28u, 0LL, Pool2);
  if ( Interface >= 0 )
  {
    *a2 = v5;
    return 0LL;
  }
  else
  {
    ExFreePoolWithTag(v5, 0);
    return (unsigned int)Interface;
  }
}

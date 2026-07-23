/*
 * XREFs of IopQueryBusResourceUpdateInterface @ 0x14096D0D8
 * Callers:
 *     PiUpdateDeviceResourceLists @ 0x14096F40C (PiUpdateDeviceResourceLists.c)
 * Callees:
 *     PnpQueryInterface @ 0x1407FD510 (PnpQueryInterface.c)
 *     ExFreePoolWithTag @ 0x140AAE110 (ExFreePoolWithTag.c)
 *     ExAllocatePool2 @ 0x140AAE6B0 (ExAllocatePool2.c)
 */

__int64 __fastcall IopQueryBusResourceUpdateInterface(_QWORD *Object, USHORT **a2)
{
  USHORT *Pool2; // rax
  USHORT *v5; // rbx
  int Interface; // edi

  Pool2 = (USHORT *)ExAllocatePool2(256LL, 40LL, 538996816LL);
  v5 = Pool2;
  if ( !Pool2 )
    return 3221225626LL;
  Interface = PnpQueryInterface(Object, (ULONG_PTR)&GUID_BUS_RESOURCE_UPDATE_INTERFACE, 0, 0x28u, 0LL, Pool2);
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

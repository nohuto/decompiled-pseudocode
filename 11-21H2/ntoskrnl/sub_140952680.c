/*
 * XREFs of sub_140952680 @ 0x140952680
 * Callers:
 *     sub_1409518C0 @ 0x1409518C0 (sub_1409518C0.c)
 * Callees:
 *     IoGetDevicePropertyData @ 0x140749610 (IoGetDevicePropertyData.c)
 *     IoGetDeviceInterfaces @ 0x1407896A0 (IoGetDeviceInterfaces.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

char __fastcall sub_140952680(PDEVICE_OBJECT PhysicalDeviceObject, char a2)
{
  PZZWSTR v2; // rbx
  char v3; // di
  NTSTATUS DeviceInterfaces; // eax
  PZZWSTR SymbolicLinkList; // [rsp+40h] [rbp-10h] BYREF
  char Data; // [rsp+78h] [rbp+28h] BYREF
  ULONG Type; // [rsp+80h] [rbp+30h] BYREF
  ULONG RequiredSize; // [rsp+88h] [rbp+38h] BYREF

  RequiredSize = 0;
  v2 = 0LL;
  SymbolicLinkList = 0LL;
  v3 = 0;
  Data = 0;
  Type = 0;
  if ( !a2 )
  {
    if ( IoGetDevicePropertyData(PhysicalDeviceObject, &stru_140039EF0, 0, 0, 1u, &Data, &RequiredSize, &Type) < 0
      || Type != 17
      || !Data )
    {
      return v3;
    }
    goto LABEL_8;
  }
  DeviceInterfaces = IoGetDeviceInterfaces(&InterfaceClassGuid, PhysicalDeviceObject, 0, &SymbolicLinkList);
  v2 = SymbolicLinkList;
  if ( DeviceInterfaces >= 0 && *SymbolicLinkList )
LABEL_8:
    v3 = 1;
  if ( v2 )
    ExFreePoolWithTag(v2, 0);
  return v3;
}

/*
 * XREFs of PiDrvDbUnregisterNode @ 0x140971674
 * Callers:
 *     PiDrvDbUnmountNode @ 0x140971618 (PiDrvDbUnmountNode.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x14022E2C0 (RtlInitUnicodeString.c)
 *     ZwClose @ 0x14041B2D0 (ZwClose.c)
 *     ZwOpenDirectoryObject @ 0x14041BBF0 (ZwOpenDirectoryObject.c)
 *     ZwMakeTemporaryObject @ 0x14041D3D0 (ZwMakeTemporaryObject.c)
 *     ZwOpenSymbolicLinkObject @ 0x14041D7B0 (ZwOpenSymbolicLinkObject.c)
 *     PiDrvDbDriverStoreNodesUpdated @ 0x140811BEC (PiDrvDbDriverStoreNodesUpdated.c)
 *     PiDrvDbDestroyNode @ 0x14097002C (PiDrvDbDestroyNode.c)
 *     _PnpCtxUnregisterMachineNode @ 0x140A60FCC (_PnpCtxUnregisterMachineNode.c)
 *     DrvDbUnregisterDatabase @ 0x140A6DBA4 (DrvDbUnregisterDatabase.c)
 */

__int64 __fastcall PiDrvDbUnregisterNode(char *P)
{
  __int64 v2; // rcx
  int v3; // ebx
  UNICODE_STRING DestinationString; // [rsp+20h] [rbp-40h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+30h] [rbp-30h] BYREF
  HANDLE LinkHandle; // [rsp+70h] [rbp+10h] BYREF
  HANDLE DirectoryHandle; // [rsp+78h] [rbp+18h] BYREF

  *(&ObjectAttributes.Attributes + 1) = 0;
  DirectoryHandle = 0LL;
  LinkHandle = 0LL;
  *(_QWORD *)&ObjectAttributes.Length = 48LL;
  DestinationString = 0LL;
  RtlInitUnicodeString(&DestinationString, L"\\DriverStore\\Nodes");
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.SecurityQualityOfService = 0LL;
  ObjectAttributes.ObjectName = &DestinationString;
  ObjectAttributes.SecurityDescriptor = (PVOID)SePublicDefaultUnrestrictedSd;
  ObjectAttributes.Attributes = 592;
  if ( ZwOpenDirectoryObject(&DirectoryHandle, 0xF000Fu, &ObjectAttributes) >= 0 )
  {
    ObjectAttributes.SecurityQualityOfService = 0LL;
    ObjectAttributes.RootDirectory = DirectoryHandle;
    ObjectAttributes.Length = 48;
    ObjectAttributes.ObjectName = (PUNICODE_STRING)(P + 16);
    ObjectAttributes.SecurityDescriptor = (PVOID)SePublicDefaultUnrestrictedSd;
    ObjectAttributes.Attributes = 576;
    if ( ZwOpenSymbolicLinkObject(&LinkHandle, 0x10000u, &ObjectAttributes) >= 0 )
    {
      ZwMakeTemporaryObject(LinkHandle);
      ZwClose(LinkHandle);
    }
    ZwClose(DirectoryHandle);
  }
  if ( (*((_DWORD *)P + 16) & 8) == 0 || (v3 = PnpCtxUnregisterMachineNode(v2, *((_QWORD *)P + 3)), v3 >= 0) )
  {
    v3 = DrvDbUnregisterDatabase(v2, *((_QWORD *)P + 3));
    if ( v3 >= 0 )
    {
      PiDrvDbDestroyNode(P);
      PiDrvDbDriverStoreNodesUpdated();
    }
  }
  return (unsigned int)v3;
}

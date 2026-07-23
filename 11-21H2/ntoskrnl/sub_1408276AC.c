/*
 * XREFs of sub_1408276AC @ 0x1408276AC
 * Callers:
 *     sub_140826000 @ 0x140826000 (sub_140826000.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x140347630 (RtlInitUnicodeString.c)
 *     ZwClose @ 0x14041B940 (ZwClose.c)
 *     ZwOpenDirectoryObject @ 0x14041C260 (ZwOpenDirectoryObject.c)
 *     ZwQueryDirectoryObject @ 0x14041E0A0 (ZwQueryDirectoryObject.c)
 *     sub_1408646E8 @ 0x1408646E8 (sub_1408646E8.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 *     ExAllocatePool2 @ 0x140A6E430 (ExAllocatePool2.c)
 */

__int64 __fastcall sub_1408276AC(__int64 a1, __int64 a2)
{
  _WORD *Pool2; // rdi
  NTSTATUS v4; // ebx
  NTSTATUS i; // eax
  _QWORD *v6; // rbx
  UNICODE_STRING DestinationString; // [rsp+40h] [rbp-40h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+50h] [rbp-30h] BYREF
  ULONG ReturnLength; // [rsp+B0h] [rbp+30h] BYREF
  int v11; // [rsp+B4h] [rbp+34h]
  ULONG Context; // [rsp+C0h] [rbp+40h] BYREF
  HANDLE DirectoryHandle; // [rsp+C8h] [rbp+48h] BYREF

  v11 = HIDWORD(a1);
  *(_QWORD *)&ObjectAttributes.Length = 48LL;
  DirectoryHandle = 0LL;
  Context = 0;
  ReturnLength = 0;
  *(_QWORD *)&ObjectAttributes.Attributes = 576LL;
  DestinationString = 0LL;
  Pool2 = 0LL;
  RtlInitUnicodeString(&DestinationString, L"\\DriverStore\\Nodes");
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.ObjectName = &DestinationString;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  v4 = ZwOpenDirectoryObject(&DirectoryHandle, 1u, &ObjectAttributes);
  if ( v4 >= 0 )
  {
    Pool2 = (_WORD *)ExAllocatePool2(256LL, 1024LL, 1650749520LL);
    if ( Pool2 )
    {
      for ( i = ZwQueryDirectoryObject(DirectoryHandle, Pool2, 0x400u, 1u, 1u, &Context, &ReturnLength);
            ;
            i = ZwQueryDirectoryObject(DirectoryHandle, Pool2, 0x400u, 1u, 0, &Context, &ReturnLength) )
      {
        v4 = i;
        if ( i == -2147483622 )
          break;
        if ( i < 0 )
          goto LABEL_11;
        v6 = Pool2;
        if ( *Pool2 )
        {
          do
          {
            if ( !(unsigned __int8)sub_1408646E8(v6[1], a2) )
              break;
            v6 += 4;
          }
          while ( *(_WORD *)v6 );
        }
      }
      v4 = 0;
    }
    else
    {
      v4 = -1073741670;
    }
  }
LABEL_11:
  if ( DirectoryHandle )
    ZwClose(DirectoryHandle);
  if ( Pool2 )
    ExFreePoolWithTag(Pool2, 0);
  return (unsigned int)v4;
}

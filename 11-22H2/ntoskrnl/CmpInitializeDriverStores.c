/*
 * XREFs of CmpInitializeDriverStores @ 0x140B3B144
 * Callers:
 *     CmInitSystem1 @ 0x140B39964 (CmInitSystem1.c)
 * Callees:
 *     RtlAppendUnicodeStringToString @ 0x140208A00 (RtlAppendUnicodeStringToString.c)
 *     RtlAppendUnicodeToString @ 0x14022A880 (RtlAppendUnicodeToString.c)
 *     RtlInitUnicodeString @ 0x14022E1D0 (RtlInitUnicodeString.c)
 *     RtlInitAnsiString @ 0x1402F6C50 (RtlInitAnsiString.c)
 *     ZwClose @ 0x14041A880 (ZwClose.c)
 *     ZwCreateDirectoryObject @ 0x14041BBE0 (ZwCreateDirectoryObject.c)
 *     ZwCreateSymbolicLinkObject @ 0x14041BF60 (ZwCreateSymbolicLinkObject.c)
 *     RtlFreeUnicodeString @ 0x14076F8E0 (RtlFreeUnicodeString.c)
 *     RtlAnsiStringToUnicodeString @ 0x140774110 (RtlAnsiStringToUnicodeString.c)
 *     ExFreePoolWithTag @ 0x140AAF110 (ExFreePoolWithTag.c)
 *     ExAllocatePool2 @ 0x140AAF6B0 (ExAllocatePool2.c)
 *     CmpGetSystemRelativeRegistryHiveFilePath @ 0x140B99234 (CmpGetSystemRelativeRegistryHiveFilePath.c)
 */

__int64 __fastcall CmpInitializeDriverStores(__int64 a1)
{
  NTSTATUS v2; // ebx
  wchar_t *Pool2; // rax
  wchar_t *v4; // rsi
  _QWORD *v5; // rax
  _QWORD *v6; // rdi
  unsigned __int64 SystemRelativeRegistryHiveFilePath; // rax
  unsigned __int64 v9; // rdx
  UNICODE_STRING DestinationString; // [rsp+20h] [rbp-60h] BYREF
  UNICODE_STRING LinkTarget; // [rsp+30h] [rbp-50h] BYREF
  STRING SourceString; // [rsp+40h] [rbp-40h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+50h] [rbp-30h] BYREF
  HANDLE LinkHandle; // [rsp+C8h] [rbp+48h] BYREF
  HANDLE Handle; // [rsp+D0h] [rbp+50h] BYREF
  HANDLE DirectoryHandle; // [rsp+D8h] [rbp+58h] BYREF

  *(_QWORD *)&ObjectAttributes.Length = 48LL;
  LinkHandle = 0LL;
  DirectoryHandle = 0LL;
  Handle = 0LL;
  *(_QWORD *)&ObjectAttributes.Attributes = 592LL;
  LinkTarget = 0LL;
  SourceString = 0LL;
  DestinationString = 0LL;
  RtlInitUnicodeString(&DestinationString, L"\\DriverStore");
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.ObjectName = &DestinationString;
  ObjectAttributes.SecurityDescriptor = (PVOID)SePublicDefaultUnrestrictedSd;
  ObjectAttributes.SecurityQualityOfService = 0LL;
  v2 = ZwCreateDirectoryObject(&DirectoryHandle, 0xF000Fu, &ObjectAttributes);
  if ( v2 >= 0 )
  {
    RtlInitUnicodeString(&DestinationString, L"Nodes");
    ObjectAttributes.RootDirectory = DirectoryHandle;
    ObjectAttributes.Length = 48;
    ObjectAttributes.ObjectName = &DestinationString;
    ObjectAttributes.SecurityDescriptor = (PVOID)SePublicDefaultUnrestrictedSd;
    ObjectAttributes.Attributes = 592;
    ObjectAttributes.SecurityQualityOfService = 0LL;
    v2 = ZwCreateDirectoryObject(&Handle, 0xF000Fu, &ObjectAttributes);
    if ( v2 >= 0 )
    {
      RtlInitUnicodeString(&DestinationString, L"\\DriverStores");
      ObjectAttributes.Length = 48;
      ObjectAttributes.ObjectName = &DestinationString;
      ObjectAttributes.SecurityDescriptor = (PVOID)SePublicDefaultUnrestrictedSd;
      ObjectAttributes.RootDirectory = 0LL;
      ObjectAttributes.Attributes = 592;
      ObjectAttributes.SecurityQualityOfService = 0LL;
      RtlInitUnicodeString(&LinkTarget, L"\\DriverStore\\Nodes");
      v2 = ZwCreateSymbolicLinkObject(&LinkHandle, 0xF0001u, &ObjectAttributes, &LinkTarget);
      if ( v2 >= 0 )
      {
        Pool2 = (wchar_t *)ExAllocatePool2(256LL, 0x1000uLL, 0x20204D43u);
        v4 = Pool2;
        if ( Pool2 )
        {
          *(_QWORD *)&LinkTarget.Length = 0x10000000LL;
          LinkTarget.Buffer = Pool2;
          RtlAppendUnicodeToString(&LinkTarget, L"\\SystemRoot");
          RtlInitUnicodeString(&DestinationString, L"SYSTEM");
          ObjectAttributes.RootDirectory = Handle;
          ObjectAttributes.Length = 48;
          ObjectAttributes.ObjectName = &DestinationString;
          ObjectAttributes.SecurityDescriptor = (PVOID)SePublicDefaultUnrestrictedSd;
          ObjectAttributes.Attributes = 592;
          ObjectAttributes.SecurityQualityOfService = 0LL;
          v2 = ZwCreateSymbolicLinkObject(&LinkHandle, 0xF0001u, &ObjectAttributes, &LinkTarget);
          if ( v2 >= 0 )
          {
            ZwClose(LinkHandle);
            v5 = (_QWORD *)(*(_QWORD *)(a1 + 240) + 312LL);
            v6 = (_QWORD *)*v5;
            if ( (_QWORD *)*v5 != v5 )
            {
              do
              {
                if ( (*((_DWORD *)v6 + 6) & 0x80u) != 0 )
                {
                  RtlInitAnsiString(&SourceString, (PCSZ)v6[11]);
                  v2 = RtlAnsiStringToUnicodeString(&DestinationString, &SourceString, 1u);
                  if ( v2 < 0 )
                    break;
                  *(_QWORD *)&LinkTarget.Length = 0x10000000LL;
                  LinkTarget.Buffer = v4;
                  RtlAppendUnicodeToString(&LinkTarget, L"\\ArcName\\");
                  RtlAppendUnicodeStringToString(&LinkTarget, &DestinationString);
                  RtlFreeUnicodeString(&DestinationString);
                  SystemRelativeRegistryHiveFilePath = CmpGetSystemRelativeRegistryHiveFilePath(v6[2]);
                  v9 = v6[2];
                  if ( SystemRelativeRegistryHiveFilePath > v9
                    && (__int64)((SystemRelativeRegistryHiveFilePath - v9) & 0xFFFFFFFFFFFFFFFEuLL) < 131070 )
                  {
                    DestinationString.Buffer = (wchar_t *)v6[2];
                    DestinationString.Length = 2
                                             * ((__int64)(unsigned int)(SystemRelativeRegistryHiveFilePath
                                                                      - *((_DWORD *)v6 + 4)) >> 1);
                    DestinationString.MaximumLength = DestinationString.Length;
                    RtlAppendUnicodeStringToString(&LinkTarget, &DestinationString);
                  }
                  RtlInitUnicodeString(&DestinationString, (PCWSTR)v6[6]);
                  ObjectAttributes.RootDirectory = Handle;
                  ObjectAttributes.Length = 48;
                  ObjectAttributes.ObjectName = &DestinationString;
                  ObjectAttributes.SecurityDescriptor = (PVOID)SePublicDefaultUnrestrictedSd;
                  ObjectAttributes.Attributes = 592;
                  ObjectAttributes.SecurityQualityOfService = 0LL;
                  v2 = ZwCreateSymbolicLinkObject(&LinkHandle, 0xF0001u, &ObjectAttributes, &LinkTarget);
                  if ( v2 < 0 )
                    break;
                  ZwClose(LinkHandle);
                }
                v6 = (_QWORD *)*v6;
              }
              while ( v6 != (_QWORD *)(*(_QWORD *)(a1 + 240) + 312LL) );
            }
          }
          ExFreePoolWithTag(v4, 0);
        }
        else
        {
          v2 = -1073741670;
        }
      }
    }
  }
  if ( Handle )
    ZwClose(Handle);
  if ( DirectoryHandle )
    ZwClose(DirectoryHandle);
  return (unsigned int)v2;
}

/*
 * XREFs of sub_140B2B730 @ 0x140B2B730
 * Callers:
 *     sub_140B15F88 @ 0x140B15F88 (sub_140B15F88.c)
 * Callees:
 *     RtlInitAnsiString @ 0x1402A07B0 (RtlInitAnsiString.c)
 *     RtlAppendUnicodeStringToString @ 0x1402DFA30 (RtlAppendUnicodeStringToString.c)
 *     RtlAppendUnicodeToString @ 0x1402DFAC0 (RtlAppendUnicodeToString.c)
 *     RtlInitUnicodeString @ 0x140347630 (RtlInitUnicodeString.c)
 *     ZwClose @ 0x14041B940 (ZwClose.c)
 *     ZwCreateDirectoryObject @ 0x14041CC80 (ZwCreateDirectoryObject.c)
 *     ZwCreateSymbolicLinkObject @ 0x14041D000 (ZwCreateSymbolicLinkObject.c)
 *     RtlFreeUnicodeString @ 0x1407023F0 (RtlFreeUnicodeString.c)
 *     RtlAnsiStringToUnicodeString @ 0x14075A5D0 (RtlAnsiStringToUnicodeString.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140A6E910 (ExAllocatePoolWithTag.c)
 *     sub_140B4DE2C @ 0x140B4DE2C (sub_140B4DE2C.c)
 */

__int64 __fastcall sub_140B2B730(__int64 a1)
{
  NTSTATUS v2; // ebx
  wchar_t *PoolWithTag; // rax
  wchar_t *v4; // rsi
  __int64 **v5; // rax
  __int64 *v6; // rdi
  unsigned __int64 v8; // rax
  unsigned __int64 v9; // rdx
  UNICODE_STRING DestinationString; // [rsp+20h] [rbp-60h] BYREF
  UNICODE_STRING LinkTarget; // [rsp+30h] [rbp-50h] BYREF
  _STRING SourceString; // [rsp+40h] [rbp-40h] BYREF
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
  ObjectAttributes.SecurityDescriptor = (PVOID)qword_140D3CA48;
  ObjectAttributes.SecurityQualityOfService = 0LL;
  v2 = ZwCreateDirectoryObject(&DirectoryHandle, 0xF000Fu, &ObjectAttributes);
  if ( v2 >= 0 )
  {
    RtlInitUnicodeString(&DestinationString, L"Nodes");
    ObjectAttributes.RootDirectory = DirectoryHandle;
    ObjectAttributes.Length = 48;
    ObjectAttributes.ObjectName = &DestinationString;
    ObjectAttributes.SecurityDescriptor = (PVOID)qword_140D3CA48;
    ObjectAttributes.Attributes = 592;
    ObjectAttributes.SecurityQualityOfService = 0LL;
    v2 = ZwCreateDirectoryObject(&Handle, 0xF000Fu, &ObjectAttributes);
    if ( v2 >= 0 )
    {
      RtlInitUnicodeString(&DestinationString, L"\\DriverStores");
      ObjectAttributes.Length = 48;
      ObjectAttributes.ObjectName = &DestinationString;
      ObjectAttributes.SecurityDescriptor = (PVOID)qword_140D3CA48;
      ObjectAttributes.RootDirectory = 0LL;
      ObjectAttributes.Attributes = 592;
      ObjectAttributes.SecurityQualityOfService = 0LL;
      RtlInitUnicodeString(&LinkTarget, L"\\DriverStore\\Nodes");
      v2 = ZwCreateSymbolicLinkObject(&LinkHandle, 0xF0001u, &ObjectAttributes, &LinkTarget);
      if ( v2 >= 0 )
      {
        PoolWithTag = (wchar_t *)ExAllocatePoolWithTag(PagedPool, 0x1000uLL, 0x20204D43u);
        v4 = PoolWithTag;
        if ( PoolWithTag )
        {
          *(_QWORD *)&LinkTarget.Length = 0x10000000LL;
          LinkTarget.Buffer = PoolWithTag;
          RtlAppendUnicodeToString(&LinkTarget, L"\\SystemRoot");
          RtlInitUnicodeString(&DestinationString, L"SYSTEM");
          ObjectAttributes.RootDirectory = Handle;
          ObjectAttributes.Length = 48;
          ObjectAttributes.ObjectName = &DestinationString;
          ObjectAttributes.SecurityDescriptor = (PVOID)qword_140D3CA48;
          ObjectAttributes.Attributes = 592;
          ObjectAttributes.SecurityQualityOfService = 0LL;
          v2 = ZwCreateSymbolicLinkObject(&LinkHandle, 0xF0001u, &ObjectAttributes, &LinkTarget);
          if ( v2 >= 0 )
          {
            ZwClose(LinkHandle);
            v5 = (__int64 **)(*(_QWORD *)(a1 + 240) + 312LL);
            v6 = *v5;
            while ( v6 != (__int64 *)v5 )
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
                v8 = sub_140B4DE2C(v6[2]);
                v9 = v6[2];
                if ( v8 > v9 && (__int64)((v8 - v9) & 0xFFFFFFFFFFFFFFFEuLL) < 131070 )
                {
                  DestinationString.Buffer = (wchar_t *)v6[2];
                  DestinationString.Length = 2 * ((__int64)(unsigned int)(v8 - *((_DWORD *)v6 + 4)) >> 1);
                  DestinationString.MaximumLength = DestinationString.Length;
                  RtlAppendUnicodeStringToString(&LinkTarget, &DestinationString);
                }
                RtlInitUnicodeString(&DestinationString, (PCWSTR)v6[6]);
                ObjectAttributes.RootDirectory = Handle;
                ObjectAttributes.Length = 48;
                ObjectAttributes.ObjectName = &DestinationString;
                ObjectAttributes.SecurityDescriptor = (PVOID)qword_140D3CA48;
                ObjectAttributes.Attributes = 592;
                ObjectAttributes.SecurityQualityOfService = 0LL;
                v2 = ZwCreateSymbolicLinkObject(&LinkHandle, 0xF0001u, &ObjectAttributes, &LinkTarget);
                if ( v2 < 0 )
                  break;
                ZwClose(LinkHandle);
              }
              v6 = (__int64 *)*v6;
              v5 = (__int64 **)(*(_QWORD *)(a1 + 240) + 312LL);
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

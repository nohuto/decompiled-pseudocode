/*
 * XREFs of SmpConfigureObjectDirectories @ 0x140010840
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall SmpConfigureObjectDirectories(__int64 a1, __int64 a2, const WCHAR *a3)
{
  const WCHAR *v3; // rbx
  PSECURITY_DESCRIPTOR v5; // rdi
  NTSTATUS v6; // edx
  __int64 v7; // rax
  UNICODE_STRING String2; // [rsp+20h] [rbp-60h] BYREF
  UNICODE_STRING v11; // [rsp+30h] [rbp-50h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+40h] [rbp-40h] BYREF
  struct _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+50h] [rbp-30h] BYREF
  void *DirectoryHandle; // [rsp+B0h] [rbp+30h] BYREF

  *(_DWORD *)&String2.Length = 1703960;
  String2.Buffer = L"\\RPC Control";
  v3 = a3;
  v11.Buffer = L"\\Windows";
  *(_DWORD *)&v11.Length = 1179664;
  while ( *v3 )
  {
    RtlInitUnicodeString(&DestinationString, v3);
    v5 = SmpPrimarySecurityDescriptor;
    if ( RtlEqualUnicodeString(&DestinationString, &String2, 1u) || RtlEqualUnicodeString(&DestinationString, &v11, 1u) )
      v5 = SmpLiberalSecurityDescriptor;
    ObjectAttributes.Length = 48;
    ObjectAttributes.ObjectName = &DestinationString;
    ObjectAttributes.RootDirectory = 0LL;
    ObjectAttributes.Attributes = 208;
    ObjectAttributes.SecurityDescriptor = v5;
    ObjectAttributes.SecurityQualityOfService = 0LL;
    v6 = NtCreateDirectoryObject(&DirectoryHandle, 0xF000Fu, &ObjectAttributes);
    if ( v6 >= 0 )
    {
      NtClose(DirectoryHandle);
    }
    else
    {
      v7 = 2LL * (_InterlockedIncrement(SmpGlobalLog) % 64);
      SmpGlobalLog[2 * v7 + 2] = 6975;
      SmpGlobalLog[2 * v7 + 3] = v6;
      *(_QWORD *)&SmpGlobalLog[2 * v7 + 4] = a1;
    }
    while ( *v3++ )
      ;
  }
  return 0LL;
}

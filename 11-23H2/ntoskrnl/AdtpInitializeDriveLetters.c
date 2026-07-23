/*
 * XREFs of AdtpInitializeDriveLetters @ 0x1408421F0
 * Callers:
 *     AdtpInitializeAuditingCommon @ 0x140841F54 (AdtpInitializeAuditingCommon.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x14022E2C0 (RtlInitUnicodeString.c)
 *     StringCopyWorkerW @ 0x14039F73C (StringCopyWorkerW.c)
 *     __security_check_cookie @ 0x1403D7EC0 (__security_check_cookie.c)
 *     NtClose @ 0x1406E44F0 (NtClose.c)
 *     NtQuerySymbolicLinkObject @ 0x1407AA7B0 (NtQuerySymbolicLinkObject.c)
 *     NtOpenSymbolicLinkObject @ 0x1407AACD0 (NtOpenSymbolicLinkObject.c)
 *     ExFreePoolWithTag @ 0x140AAE110 (ExFreePoolWithTag.c)
 *     ExAllocatePool2 @ 0x140AAE6B0 (ExAllocatePool2.c)
 */

__int64 __fastcall AdtpInitializeDriveLetters(__int64 a1, size_t a2, size_t *a3, const wchar_t *a4)
{
  unsigned int v4; // edi
  wchar_t *Buffer; // r13
  unsigned int i; // esi
  NTSTATUS SymbolicLinkObject; // ebx
  unsigned int v8; // ebx
  char v9; // r14
  UNICODE_STRING *v10; // rsi
  char *v12; // r14
  __int64 Pool2; // rax
  void *v14; // r15
  HANDLE v15; // rcx
  size_t v16; // [rsp+28h] [rbp-69h]
  HANDLE LinkHandle; // [rsp+38h] [rbp-59h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+40h] [rbp-51h] BYREF
  UNICODE_STRING DestinationString; // [rsp+70h] [rbp-21h] BYREF
  wchar_t pszDest[32]; // [rsp+80h] [rbp-11h] BYREF

  *(&ObjectAttributes.Length + 1) = 0;
  DestinationString = 0LL;
  *(&ObjectAttributes.Attributes + 1) = 0;
  v4 = 0;
  LinkHandle = 0LL;
  StringCopyWorkerW(pszDest, a2, a3, a4, v16);
  RtlInitUnicodeString(&DestinationString, pszDest);
  Buffer = DestinationString.Buffer;
  for ( i = 0; i < 0x1A; ++i )
  {
    ObjectAttributes.Length = 48;
    Buffer[12] = i + 65;
    ObjectAttributes.RootDirectory = 0LL;
    ObjectAttributes.ObjectName = &DestinationString;
    ObjectAttributes.Attributes = 576;
    *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
    SymbolicLinkObject = NtOpenSymbolicLinkObject(&LinkHandle, 1u, &ObjectAttributes);
    if ( SymbolicLinkObject >= 0 )
    {
      *((_WORD *)&DriveMappingArray + 12 * v4) = Buffer[12];
      v12 = (char *)&DriveMappingArray + 24 * v4;
      Pool2 = ExAllocatePool2(256LL, 256LL, 1799447891LL);
      v14 = (void *)Pool2;
      if ( !Pool2 )
        return (unsigned int)-1073741801;
      v15 = LinkHandle;
      *((_DWORD *)v12 + 2) = 0x1000000;
      *((_QWORD *)v12 + 2) = Pool2;
      SymbolicLinkObject = NtQuerySymbolicLinkObject(v15, (PUNICODE_STRING)(v12 + 8), 0LL);
      NtClose(LinkHandle);
      if ( SymbolicLinkObject < 0 )
      {
        ExFreePoolWithTag(v14, 0);
        RtlInitUnicodeString((PUNICODE_STRING)(v12 + 8), 0LL);
      }
      else
      {
        ++v4;
      }
    }
  }
  if ( SymbolicLinkObject == -1073741801 )
    return (unsigned int)SymbolicLinkObject;
  v8 = 0;
  while ( v8 < v4 )
  {
    ObjectAttributes.Length = 48;
    ObjectAttributes.RootDirectory = 0LL;
    v9 = 0;
    ObjectAttributes.Attributes = 576;
    *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
    v10 = (UNICODE_STRING *)((char *)&DriveMappingArray + 16 * v8 + 8 * v8 + 8);
    ObjectAttributes.ObjectName = v10;
    if ( NtOpenSymbolicLinkObject(&LinkHandle, 1u, &ObjectAttributes) >= 0 )
    {
      if ( NtQuerySymbolicLinkObject(LinkHandle, v10, 0LL) < 0 )
      {
        ExFreePoolWithTag(v10->Buffer, 0);
        RtlInitUnicodeString(v10, 0LL);
      }
      else
      {
        v9 = 1;
      }
      NtClose(LinkHandle);
      if ( v9 )
        continue;
    }
    ++v8;
  }
  return 0LL;
}

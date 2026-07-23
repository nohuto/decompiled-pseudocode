/*
 * XREFs of ExpFindArcName @ 0x1409FC5C0
 * Callers:
 *     ExpCreateOutputARC @ 0x1409FC130 (ExpCreateOutputARC.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x14022E2C0 (RtlInitUnicodeString.c)
 *     wcscpy_s @ 0x1403DFF70 (wcscpy_s.c)
 *     wcsncat_s @ 0x1403E0000 (wcsncat_s.c)
 *     wcsncpy_s @ 0x1403E0110 (wcsncpy_s.c)
 *     ZwClose @ 0x14041B2D0 (ZwClose.c)
 *     ZwOpenDirectoryObject @ 0x14041BBF0 (ZwOpenDirectoryObject.c)
 *     ZwQueryDirectoryObject @ 0x14041DA70 (ZwQueryDirectoryObject.c)
 *     RtlEqualUnicodeString @ 0x1406DA320 (RtlEqualUnicodeString.c)
 *     ExpTranslateSymbolicLink @ 0x14083EBA8 (ExpTranslateSymbolicLink.c)
 *     ExFreePoolWithTag @ 0x140AAE110 (ExFreePoolWithTag.c)
 *     ExAllocatePool2 @ 0x140AAE6B0 (ExAllocatePool2.c)
 */

__int64 __fastcall ExpFindArcName(const UNICODE_STRING *a1, wchar_t **a2)
{
  BOOLEAN v2; // r12
  wchar_t *Pool2; // rax
  WCHAR *v4; // rbx
  NTSTATUS v6; // edi
  UNICODE_STRING *v7; // rdi
  __int64 v8; // r14
  BOOLEAN RestartScan; // r15
  NTSTATUS v10; // eax
  __int64 v11; // rdx
  wchar_t *v12; // rax
  wchar_t *v13; // rsi
  unsigned int v14; // ebx
  rsize_t v15; // r13
  NTSTATUS v16; // ebx
  HANDLE DirectoryHandle; // [rsp+48h] [rbp-41h] BYREF
  UNICODE_STRING DestinationString; // [rsp+50h] [rbp-39h] BYREF
  UNICODE_STRING String2; // [rsp+60h] [rbp-29h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+70h] [rbp-19h] BYREF
  ULONG Length; // [rsp+100h] [rbp+77h] BYREF
  ULONG Context; // [rsp+108h] [rbp+7Fh] BYREF

  *(&ObjectAttributes.Length + 1) = 0;
  *(&ObjectAttributes.Attributes + 1) = 0;
  DestinationString = 0LL;
  DirectoryHandle = 0LL;
  Length = 0;
  Context = 0;
  String2 = 0LL;
  v2 = 0;
  Pool2 = (wchar_t *)ExAllocatePool2(64LL, 18LL, 1920364101LL);
  v4 = Pool2;
  if ( !Pool2 )
    return 3221225626LL;
  wcscpy_s(Pool2, 9uLL, L"\\ArcName");
  RtlInitUnicodeString(&DestinationString, v4);
  ObjectAttributes.Length = 48;
  ObjectAttributes.ObjectName = &DestinationString;
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.Attributes = 576;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  v6 = ZwOpenDirectoryObject(&DirectoryHandle, 1u, &ObjectAttributes);
  ExFreePoolWithTag(v4, 0);
  if ( v6 < 0 )
    return (unsigned int)v6;
  v7 = 0LL;
  LODWORD(v8) = 0;
  RestartScan = 1;
  RtlInitUnicodeString(&String2, L"SymbolicLink");
  while ( 1 )
  {
    v10 = ZwQueryDirectoryObject(DirectoryHandle, v7, v8, 1u, RestartScan, &Context, &Length);
    if ( v10 == -1073741789 )
    {
      v8 = Length;
      if ( v7 )
        ExFreePoolWithTag(v7, 0);
      v7 = (UNICODE_STRING *)ExAllocatePool2(64LL, v8, 1920364101LL);
      if ( !v7 )
      {
        v16 = -1073741670;
        goto LABEL_28;
      }
      v10 = ZwQueryDirectoryObject(DirectoryHandle, v7, v8, 1u, RestartScan, &Context, &Length);
    }
    RestartScan = 0;
    if ( v10 < 0 )
      break;
    if ( RtlEqualUnicodeString(v7 + 1, &String2, 0) )
    {
      v11 = (unsigned int)v7->Length + 18 + 2LL;
      Length = v7->Length + 18;
      v12 = (wchar_t *)ExAllocatePool2(64LL, v11, 1920364101LL);
      v13 = v12;
      if ( !v12 )
      {
        v16 = -1073741670;
        goto LABEL_26;
      }
      v14 = v7->Length >> 1;
      wcscpy_s(v12, ((unsigned __int64)Length >> 1) + 1, L"\\ArcName\\");
      v15 = v14;
      wcsncat_s(v13, ((unsigned __int64)Length >> 1) + 1, v7->Buffer, v14);
      v13[(unsigned __int64)Length >> 1] = 0;
      v16 = ExpTranslateSymbolicLink(v13, &DestinationString);
      if ( v16 < 0 )
      {
        ExFreePoolWithTag(v13, 0);
        goto LABEL_26;
      }
      v2 = RtlEqualUnicodeString(&DestinationString, a1, 1u);
      ExFreePoolWithTag(DestinationString.Buffer, 0);
      if ( v2 == 1 )
      {
        wcsncpy_s(v13, ((unsigned __int64)Length >> 1) + 1, v7->Buffer, v15);
        v13[v15] = 0;
        *a2 = v13;
        goto LABEL_26;
      }
      ExFreePoolWithTag(v13, 0);
    }
  }
  v16 = 0;
  if ( v10 != -2147483622 )
    v16 = v10;
  if ( v16 >= 0 && !v2 )
    v16 = -1073741766;
LABEL_26:
  if ( v7 )
    ExFreePoolWithTag(v7, 0);
LABEL_28:
  ZwClose(DirectoryHandle);
  return (unsigned int)v16;
}

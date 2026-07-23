/*
 * XREFs of sub_1409FC2D0 @ 0x1409FC2D0
 * Callers:
 *     sub_1409FBD64 @ 0x1409FBD64 (sub_1409FBD64.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x140347630 (RtlInitUnicodeString.c)
 *     wcscpy_s @ 0x1403E76C0 (wcscpy_s.c)
 *     wcsncat_s @ 0x1403E7750 (wcsncat_s.c)
 *     wcsncpy_s @ 0x1403E7870 (wcsncpy_s.c)
 *     ZwClose @ 0x14041B940 (ZwClose.c)
 *     ZwOpenDirectoryObject @ 0x14041C260 (ZwOpenDirectoryObject.c)
 *     ZwQueryDirectoryObject @ 0x14041E0A0 (ZwQueryDirectoryObject.c)
 *     RtlEqualUnicodeString @ 0x1407CD6A0 (RtlEqualUnicodeString.c)
 *     sub_1409FEF6C @ 0x1409FEF6C (sub_1409FEF6C.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140A6E910 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall sub_1409FC2D0(const UNICODE_STRING *a1, wchar_t **a2)
{
  BOOLEAN v2; // r12
  wchar_t *PoolWithTag; // rax
  WCHAR *v4; // rbx
  NTSTATUS v6; // edi
  UNICODE_STRING *v7; // rdi
  SIZE_T v8; // r14
  BOOLEAN RestartScan; // r15
  NTSTATUS v10; // eax
  SIZE_T v11; // rdx
  wchar_t *v12; // rax
  wchar_t *v13; // rsi
  unsigned int v14; // r13d
  int v15; // ebx
  HANDLE DirectoryHandle; // [rsp+40h] [rbp-49h] BYREF
  UNICODE_STRING DestinationString; // [rsp+48h] [rbp-41h] BYREF
  UNICODE_STRING String2; // [rsp+58h] [rbp-31h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+68h] [rbp-21h] BYREF
  ULONG Length; // [rsp+100h] [rbp+77h] BYREF
  ULONG Context; // [rsp+108h] [rbp+7Fh] BYREF

  *(&ObjectAttributes.Length + 1) = 0;
  *(&ObjectAttributes.Attributes + 1) = 0;
  DirectoryHandle = 0LL;
  Length = 0;
  DestinationString = 0LL;
  Context = 0;
  v2 = 0;
  String2 = 0LL;
  PoolWithTag = (wchar_t *)ExAllocatePoolWithTag(NonPagedPoolNx, 0x12uLL, 0x72766E45u);
  v4 = PoolWithTag;
  if ( !PoolWithTag )
    return 3221225626LL;
  wcscpy_s(PoolWithTag, 9uLL, L"\\ArcName");
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
      v7 = (UNICODE_STRING *)ExAllocatePoolWithTag(NonPagedPoolNx, v8, 0x72766E45u);
      if ( !v7 )
      {
        v15 = -1073741670;
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
      v12 = (wchar_t *)ExAllocatePoolWithTag(NonPagedPoolNx, v11, 0x72766E45u);
      v13 = v12;
      if ( !v12 )
      {
        v15 = -1073741670;
        goto LABEL_26;
      }
      v14 = v7->Length >> 1;
      wcscpy_s(v12, ((unsigned __int64)Length >> 1) + 1, L"\\ArcName\\");
      wcsncat_s(v13, ((unsigned __int64)Length >> 1) + 1, v7->Buffer, v14);
      v13[(unsigned __int64)Length >> 1] = 0;
      v15 = sub_1409FEF6C(v13);
      if ( v15 < 0 )
      {
        ExFreePoolWithTag(v13, 0);
        goto LABEL_26;
      }
      v2 = RtlEqualUnicodeString(&DestinationString, a1, 1u);
      ExFreePoolWithTag(DestinationString.Buffer, 0);
      if ( v2 == 1 )
      {
        wcsncpy_s(v13, ((unsigned __int64)Length >> 1) + 1, v7->Buffer, v14);
        v13[v14] = 0;
        *a2 = v13;
        goto LABEL_26;
      }
      ExFreePoolWithTag(v13, 0);
    }
  }
  v15 = 0;
  if ( v10 != -2147483622 )
    v15 = v10;
  if ( v15 >= 0 && !v2 )
    v15 = -1073741766;
LABEL_26:
  if ( v7 )
    ExFreePoolWithTag(v7, 0);
LABEL_28:
  ZwClose(DirectoryHandle);
  return (unsigned int)v15;
}

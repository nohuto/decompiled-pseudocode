/*
 * XREFs of sub_140B286CC @ 0x140B286CC
 * Callers:
 *     sub_140B114E8 @ 0x140B114E8 (sub_140B114E8.c)
 * Callees:
 *     KeDelayExecutionThread @ 0x1402B90A0 (KeDelayExecutionThread.c)
 *     RtlInitUnicodeString @ 0x140347630 (RtlInitUnicodeString.c)
 *     ZwClose @ 0x14041B940 (ZwClose.c)
 *     ZwCreateFile @ 0x14041C200 (ZwCreateFile.c)
 *     ZwCreateSymbolicLinkObject @ 0x14041D000 (ZwCreateSymbolicLinkObject.c)
 *     sub_1406DF520 @ 0x1406DF520 (sub_1406DF520.c)
 *     RtlFreeUnicodeString @ 0x1407023F0 (RtlFreeUnicodeString.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 *     sub_140B2888C @ 0x140B2888C (sub_140B2888C.c)
 */

__int64 sub_140B286CC()
{
  void *v0; // rdi
  NTSTATUS v1; // ebx
  unsigned int v2; // esi
  NTSTATUS v3; // eax
  UNICODE_STRING LinkTarget; // [rsp+60h] [rbp-29h] BYREF
  UNICODE_STRING DestinationString; // [rsp+70h] [rbp-19h] BYREF
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+80h] [rbp-9h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+90h] [rbp+7h] BYREF
  void *v9; // [rsp+F0h] [rbp+67h] BYREF
  HANDLE FileHandle; // [rsp+F8h] [rbp+6Fh] BYREF
  HANDLE LinkHandle; // [rsp+100h] [rbp+77h] BYREF
  LARGE_INTEGER Interval; // [rsp+108h] [rbp+7Fh] BYREF

  Interval.QuadPart = -1000000LL;
  FileHandle = 0LL;
  LinkHandle = 0LL;
  *(_QWORD *)&LinkTarget.Length = 0LL;
  LinkTarget.Buffer = 0LL;
  v0 = 0LL;
  IoStatusBlock = 0LL;
  v9 = 0LL;
  DestinationString = 0LL;
  memset(&ObjectAttributes, 0, 44);
  v1 = sub_1406DF520(L"DriverData", L"\\SystemRoot\\System32\\Drivers\\DriverData", LocationTypeFileSystem, &LinkTarget);
  if ( v1 >= 0 )
  {
    v1 = sub_140B2888C(&v9);
    if ( v1 < 0 )
    {
      v0 = v9;
    }
    else
    {
      ObjectAttributes.RootDirectory = 0LL;
      v0 = v9;
      ObjectAttributes.SecurityQualityOfService = 0LL;
      ObjectAttributes.SecurityDescriptor = v9;
      v2 = 0;
      ObjectAttributes.Length = 48;
      ObjectAttributes.Attributes = 576;
      ObjectAttributes.ObjectName = &LinkTarget;
      do
      {
        v3 = ZwCreateFile(&FileHandle, 0x100001u, &ObjectAttributes, &IoStatusBlock, 0LL, 0x80u, 3u, 3u, 0x21u, 0LL, 0);
        v1 = v3;
        if ( v3 != -1073741810 && (unsigned int)(v3 + 2147483632) > 1 && v3 != -1073741766 )
          break;
        KeDelayExecutionThread(0, 0, &Interval);
        ++v2;
      }
      while ( v2 < 0x32 );
      if ( v1 >= 0 )
      {
        RtlInitUnicodeString(&DestinationString, L"\\DriverData");
        ObjectAttributes.RootDirectory = 0LL;
        ObjectAttributes.SecurityQualityOfService = 0LL;
        ObjectAttributes.ObjectName = &DestinationString;
        ObjectAttributes.SecurityDescriptor = (PVOID)qword_140D3CA48;
        ObjectAttributes.Length = 48;
        ObjectAttributes.Attributes = 80;
        v1 = ZwCreateSymbolicLinkObject(&LinkHandle, 0xF0001u, &ObjectAttributes, &LinkTarget);
      }
    }
  }
  RtlFreeUnicodeString(&LinkTarget);
  if ( FileHandle )
    ZwClose(FileHandle);
  if ( LinkHandle )
    ZwClose(LinkHandle);
  if ( v0 )
    ExFreePoolWithTag(v0, 0);
  return (unsigned int)v1;
}

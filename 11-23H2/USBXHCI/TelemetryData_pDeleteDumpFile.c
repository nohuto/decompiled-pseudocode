/*
 * XREFs of TelemetryData_pDeleteDumpFile @ 0x1C007B204
 * Callers:
 *     TelemetryData_SubmitReport @ 0x1C007AF58 (TelemetryData_SubmitReport.c)
 * Callees:
 *     <none>
 */

NTSTATUS __fastcall TelemetryData_pDeleteDumpFile(__int64 a1)
{
  _WORD *v1; // rbx
  NTSTATUS result; // eax
  struct _UNICODE_STRING DestinationString; // [rsp+70h] [rbp+7h] BYREF
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+80h] [rbp+17h] BYREF
  struct _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+90h] [rbp+27h] BYREF
  void *FileHandle; // [rsp+D0h] [rbp+67h] BYREF

  v1 = (_WORD *)(a1 + 736);
  FileHandle = 0LL;
  DestinationString = 0LL;
  *(&ObjectAttributes.Length + 1) = 0;
  IoStatusBlock = 0LL;
  *(&ObjectAttributes.Attributes + 1) = 0;
  RtlInitUnicodeString(&DestinationString, (PCWSTR)(a1 + 736));
  ObjectAttributes.Length = 48;
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.Attributes = 576;
  ObjectAttributes.ObjectName = &DestinationString;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  result = IoCreateFile(
             &FileHandle,
             0x110000u,
             &ObjectAttributes,
             &IoStatusBlock,
             0LL,
             0x80u,
             7u,
             1u,
             0x1000u,
             0LL,
             0,
             CreateFileTypeNone,
             0LL,
             0x100u);
  if ( result >= 0 )
  {
    result = ZwClose(FileHandle);
    *v1 = 0;
  }
  return result;
}

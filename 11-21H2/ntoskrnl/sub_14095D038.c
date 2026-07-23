/*
 * XREFs of sub_14095D038 @ 0x14095D038
 * Callers:
 *     sub_14095D488 @ 0x14095D488 (sub_14095D488.c)
 * Callees:
 *     ObfDereferenceObject @ 0x1402AD3E0 (ObfDereferenceObject.c)
 *     RtlAppendUnicodeStringToString @ 0x1402DFA30 (RtlAppendUnicodeStringToString.c)
 *     RtlInitUnicodeString @ 0x140347630 (RtlInitUnicodeString.c)
 *     ZwClose @ 0x14041B940 (ZwClose.c)
 *     ZwOpenFile @ 0x14041BDC0 (ZwOpenFile.c)
 *     memset @ 0x140435E00 (memset.c)
 *     sub_140564D60 @ 0x140564D60 (sub_140564D60.c)
 *     RtlDuplicateUnicodeString @ 0x1406A9D20 (RtlDuplicateUnicodeString.c)
 *     sub_1406BE560 @ 0x1406BE560 (sub_1406BE560.c)
 *     RtlFreeUnicodeString @ 0x1407023F0 (RtlFreeUnicodeString.c)
 *     IoQueryFileDosDeviceName @ 0x14070F660 (IoQueryFileDosDeviceName.c)
 *     ObReferenceObjectByHandle @ 0x140732D00 (ObReferenceObjectByHandle.c)
 *     RtlPrefixUnicodeString @ 0x14077F870 (RtlPrefixUnicodeString.c)
 *     sub_140781F40 @ 0x140781F40 (sub_140781F40.c)
 *     sub_14095BFCC @ 0x14095BFCC (sub_14095BFCC.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

__int64 __fastcall sub_14095D038(UNICODE_STRING *String2, PUNICODE_STRING StringOut)
{
  PVOID v4; // r15
  POBJECT_NAME_INFORMATION v5; // r14
  NTSTATUS v6; // eax
  int appended; // ebx
  NTSTATUS v8; // eax
  unsigned __int16 Length; // di
  unsigned __int16 v10; // di
  wchar_t *Buffer; // r8
  wchar_t *v12; // rdx
  unsigned __int16 v13; // cx
  bool v14; // zf
  unsigned __int16 v15; // cx
  unsigned __int64 v16; // rax
  wchar_t *v17; // rcx
  unsigned __int16 v18; // di
  int v19; // eax
  const UNICODE_STRING *v20; // rbx
  UNICODE_STRING DestinationString; // [rsp+30h] [rbp-D0h] BYREF
  PVOID Object; // [rsp+40h] [rbp-C0h] BYREF
  UNICODE_STRING v24; // [rsp+48h] [rbp-B8h] BYREF
  UNICODE_STRING String2a; // [rsp+58h] [rbp-A8h] BYREF
  PCUNICODE_STRING v26; // [rsp+68h] [rbp-98h] BYREF
  UNICODE_STRING Source; // [rsp+70h] [rbp-90h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+80h] [rbp-80h] BYREF
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+B0h] [rbp-50h] BYREF
  _QWORD v30[20]; // [rsp+C0h] [rbp-40h] BYREF
  int v31; // [rsp+170h] [rbp+70h] BYREF
  POBJECT_NAME_INFORMATION ObjectNameInformation; // [rsp+180h] [rbp+80h] BYREF
  HANDLE FileHandle; // [rsp+188h] [rbp+88h] BYREF

  *(&ObjectAttributes.Length + 1) = 0;
  *(&ObjectAttributes.Attributes + 1) = 0;
  FileHandle = 0LL;
  ObjectNameInformation = 0LL;
  Object = 0LL;
  IoStatusBlock = 0LL;
  v4 = 0LL;
  v31 = 0;
  v5 = 0LL;
  v26 = 0LL;
  String2a = 0LL;
  DestinationString = 0LL;
  v24 = 0LL;
  Source = 0LL;
  RtlInitUnicodeString(StringOut, 0LL);
  RtlInitUnicodeString(&DestinationString, 0LL);
  RtlInitUnicodeString(&v24, 0LL);
  ObjectAttributes.Length = 48;
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.Attributes = 576;
  ObjectAttributes.ObjectName = String2;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  if ( ZwOpenFile(&FileHandle, 0x100080u, &ObjectAttributes, &IoStatusBlock, 3u, 0x21u) >= 0 )
  {
    Object = 0LL;
    v6 = ObReferenceObjectByHandle(FileHandle, 0x80u, (POBJECT_TYPE)IoFileObjectType, 0, &Object, 0LL);
    v4 = Object;
    appended = v6;
    if ( v6 >= 0 )
    {
      v8 = IoQueryFileDosDeviceName((PFILE_OBJECT)Object, &ObjectNameInformation);
      v5 = ObjectNameInformation;
      appended = v8;
      if ( v8 >= 0 )
        appended = RtlDuplicateUnicodeString(1u, &ObjectNameInformation->Name, StringOut);
    }
    goto LABEL_39;
  }
  if ( String2->Length >= 0x16u && RtlPrefixUnicodeString(&stru_140A37C58, String2, 1u) )
  {
    RtlInitUnicodeString(&String2a, L"SYSTEM");
    Length = String2->Length;
    if ( String2->Length > 0x18u && String2->Buffer[11] == 92 )
    {
      v24.Buffer = String2->Buffer + 11;
      v10 = Length - 22;
LABEL_18:
      v24.Length = v10;
      v24.MaximumLength = v10 + 2;
      goto LABEL_21;
    }
  }
  else if ( String2->Length > 0x26u
         && RtlPrefixUnicodeString(&stru_140A37D70, String2, 1u)
         && (Buffer = String2->Buffer, Buffer[18] == 92) )
  {
    v12 = Buffer + 19;
    v13 = 0;
    v14 = Buffer[19] == 92;
    String2a.Buffer = Buffer + 19;
    if ( !v14 )
    {
      do
      {
        if ( !v12[v13] )
          break;
        ++v13;
      }
      while ( v12[v13] != 92 );
    }
    v15 = 2 * v13;
    v16 = (unsigned __int64)v15 >> 1;
    String2a.Length = v15;
    String2a.MaximumLength = v15;
    v17 = &v12[v16];
    if ( *v17 == 92 )
    {
      v18 = String2->Length;
      v24.Buffer = &v12[v16];
      v10 = v18 - 2 * (v17 - Buffer);
      goto LABEL_18;
    }
  }
  else
  {
    RtlInitUnicodeString(&String2a, L"SYSTEM");
  }
  v10 = v24.Length;
LABEL_21:
  appended = sub_140564D60(&String2a, (__int64 *)&Object);
  if ( appended < 0 )
    goto LABEL_39;
  v19 = *((_DWORD *)Object + 16);
  if ( (v19 & 1) != 0 )
  {
    RtlInitUnicodeString(&Source, L"C:\\Windows");
    DestinationString.MaximumLength = v10 + Source.Length + 2;
    DestinationString.Buffer = (wchar_t *)sub_1406BE560(DestinationString.MaximumLength);
    if ( !DestinationString.Buffer )
      goto LABEL_24;
    appended = RtlAppendUnicodeStringToString(&DestinationString, &Source);
    if ( appended < 0 )
      goto LABEL_39;
    if ( byte_140C4E508 )
    {
      memset(v30, 0, 0x70uLL);
      LODWORD(v30[4]) = 0x4000000;
      LODWORD(v30[1]) = 292;
      v30[2] = L"InstRootDrive";
      v30[3] = &v31;
      appended = sub_140781F40(2, L"WinPE", (__int64)v30, 0LL);
      if ( appended < 0 || (unsigned int)(v31 - 65) > 0x19 )
      {
        appended = 0;
        *DestinationString.Buffer = 88;
      }
      else
      {
        *DestinationString.Buffer = v31;
      }
    }
  }
  else
  {
    if ( (v19 & 8) == 0 )
    {
      appended = -1073741275;
      goto LABEL_39;
    }
    appended = sub_14095BFCC((__int64)Object, &v26);
    if ( appended < 0 )
      goto LABEL_39;
    v20 = v26;
    DestinationString.MaximumLength = v26->Length + v10 + 2;
    DestinationString.Buffer = (wchar_t *)sub_1406BE560(DestinationString.MaximumLength);
    if ( !DestinationString.Buffer )
    {
LABEL_24:
      appended = -1073741670;
      goto LABEL_39;
    }
    appended = RtlAppendUnicodeStringToString(&DestinationString, v20);
    if ( appended < 0 )
      goto LABEL_39;
  }
  if ( v10 <= 2u || (appended = RtlAppendUnicodeStringToString(&DestinationString, &v24), appended >= 0) )
  {
    *StringOut = DestinationString;
    RtlInitUnicodeString(&DestinationString, 0LL);
  }
LABEL_39:
  RtlFreeUnicodeString(&DestinationString);
  if ( v5 )
    ExFreePoolWithTag(v5, 0);
  if ( v4 )
    ObfDereferenceObject(v4);
  if ( FileHandle )
    ZwClose(FileHandle);
  return (unsigned int)appended;
}

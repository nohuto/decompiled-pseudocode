/*
 * XREFs of sub_140B0E670 @ 0x140B0E670
 * Callers:
 *     <none>
 * Callees:
 *     RtlInitAnsiString @ 0x1402A07B0 (RtlInitAnsiString.c)
 *     ObfReferenceObjectWithTag @ 0x1402A6D50 (ObfReferenceObjectWithTag.c)
 *     ObfDereferenceObjectWithTag @ 0x1402AC540 (ObfDereferenceObjectWithTag.c)
 *     sub_14036B86C @ 0x14036B86C (sub_14036B86C.c)
 *     sub_1403C5514 @ 0x1403C5514 (sub_1403C5514.c)
 *     sub_1403C5578 @ 0x1403C5578 (sub_1403C5578.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     ZwOpenFile @ 0x14041BDC0 (ZwOpenFile.c)
 *     RtlFreeUnicodeString @ 0x1407023F0 (RtlFreeUnicodeString.c)
 *     ObReferenceObjectByHandle @ 0x140732D00 (ObReferenceObjectByHandle.c)
 *     ObCloseHandle @ 0x14074F6A0 (ObCloseHandle.c)
 *     RtlAnsiStringToUnicodeString @ 0x14075A5D0 (RtlAnsiStringToUnicodeString.c)
 *     sub_14082EA28 @ 0x14082EA28 (sub_14082EA28.c)
 *     sub_140B0E88C @ 0x140B0E88C (sub_140B0E88C.c)
 *     sub_140B0EB5C @ 0x140B0EB5C (sub_140B0EB5C.c)
 */

__int64 __fastcall sub_140B0E670(__int64 a1, __int64 a2, UNICODE_STRING *a3)
{
  __int64 v3; // r9
  int v6; // ebx
  PVOID *v7; // rbx
  void *v8; // rax
  __int64 v9; // rcx
  void *v10; // rdi
  __int64 v11; // rcx
  int v13; // edx
  HANDLE FileHandle; // [rsp+30h] [rbp-D0h] BYREF
  _STRING DestinationString; // [rsp+38h] [rbp-C8h] BYREF
  UNICODE_STRING UnicodeString; // [rsp+48h] [rbp-B8h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+58h] [rbp-A8h] BYREF
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+88h] [rbp-78h] BYREF
  char v19[24]; // [rsp+98h] [rbp-68h] BYREF
  CHAR SourceString[256]; // [rsp+B0h] [rbp-50h] BYREF

  v3 = *(_QWORD *)(a1 + 184);
  *(&ObjectAttributes.Attributes + 1) = 0;
  FileHandle = 0LL;
  *(_QWORD *)&UnicodeString.Length = 0LL;
  UnicodeString.Buffer = 0LL;
  *(&ObjectAttributes.Length + 1) = 0;
  strcpy(v19, "\\ArcName\\%s");
  DestinationString = 0LL;
  IoStatusBlock = 0LL;
  v6 = sub_1403C5514(SourceString, 256LL, v19, v3);
  if ( v6 >= 0 )
  {
    RtlInitAnsiString(&DestinationString, SourceString);
    v6 = RtlAnsiStringToUnicodeString(a3, &DestinationString, 1u);
    if ( v6 >= 0 )
    {
      ObjectAttributes.RootDirectory = 0LL;
      ObjectAttributes.Length = 48;
      ObjectAttributes.Attributes = 576;
      *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
      ObjectAttributes.ObjectName = a3;
      v6 = ZwOpenFile(&FileHandle, 0x80u, &ObjectAttributes, &IoStatusBlock, 0, 0x40u);
      if ( v6 >= 0 )
      {
        *(_QWORD *)&DestinationString.Length = 0LL;
        v6 = ObReferenceObjectByHandle(
               FileHandle,
               0,
               (POBJECT_TYPE)IoFileObjectType,
               0,
               (PVOID *)&DestinationString,
               0LL);
        if ( v6 >= 0 )
        {
          v7 = *(PVOID **)&DestinationString.Length;
          v8 = sub_14036B86C(*(_QWORD *)(*(_QWORD *)&DestinationString.Length + 8LL), 0x746C6644u);
          v9 = (__int64)v7[1];
          v10 = v8;
          *(_DWORD *)(v9 + 48) |= 0x100u;
          *((_DWORD *)v8 + 12) |= 0x100u;
          if ( byte_140C4E508 )
          {
            v9 = (__int64)v7[1];
            v13 = *(_DWORD *)(v9 + 52);
            if ( (v13 & 1) != 0 )
              dword_140D010C0 |= 0x200u;
            if ( (v13 & 2) != 0 )
              dword_140D010C0 |= 0x100u;
          }
          sub_14082EA28(v9, FileHandle);
          ObfReferenceObjectWithTag(v7[1], 0x746C6644u);
          ObCloseHandle(FileHandle, 0);
          ObfDereferenceObjectWithTag(v7, 0x746C6644u);
          ObfDereferenceObjectWithTag(v10, 0x746C6644u);
          sub_140B0EB5C();
          v6 = sub_1403C5578(&UnicodeString, *(const CHAR **)(a1 + 208));
          if ( v6 >= 0 )
          {
            sub_140B0E88C(v11, &UnicodeString);
            RtlFreeUnicodeString(&UnicodeString);
          }
        }
      }
    }
  }
  return (unsigned int)v6;
}

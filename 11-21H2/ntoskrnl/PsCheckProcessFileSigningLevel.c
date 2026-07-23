/*
 * XREFs of PsCheckProcessFileSigningLevel @ 0x14065FD10
 * Callers:
 *     <none>
 * Callees:
 *     sub_1402AD030 @ 0x1402AD030 (sub_1402AD030.c)
 *     ObfDereferenceObject @ 0x1402AD3E0 (ObfDereferenceObject.c)
 *     sub_140347810 @ 0x140347810 (sub_140347810.c)
 *     ObfReferenceObject @ 0x140347CF0 (ObfReferenceObject.c)
 *     ZwOpenFile @ 0x14041BDC0 (ZwOpenFile.c)
 *     ZwCreateSectionEx @ 0x14041CFC0 (ZwCreateSectionEx.c)
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 *     PsReferenceProcessFilePointer @ 0x140673AD0 (PsReferenceProcessFilePointer.c)
 *     sub_1406BCB10 @ 0x1406BCB10 (sub_1406BCB10.c)
 *     ObReferenceObjectByHandle @ 0x140732D00 (ObReferenceObjectByHandle.c)
 *     ObCloseHandle @ 0x14074F6A0 (ObCloseHandle.c)
 */

__int64 __fastcall PsCheckProcessFileSigningLevel(struct _EX_RUNDOWN_REF *a1, unsigned __int8 a2)
{
  unsigned int v2; // r15d
  PVOID v4; // r14
  __int64 v5; // rdx
  __int64 v6; // rcx
  NTSTATUS v7; // ebx
  int v8; // eax
  _QWORD *Count; // rdi
  UNICODE_STRING *v10; // rax
  NTSTATUS v11; // eax
  __int64 v12; // rdx
  __int64 v13; // rcx
  PVOID Object; // [rsp+50h] [rbp-29h] BYREF
  HANDLE SectionHandle; // [rsp+58h] [rbp-21h] BYREF
  MEM_EXTENDED_PARAMETER ExtendedParameters; // [rsp+60h] [rbp-19h] BYREF
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+70h] [rbp-9h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+80h] [rbp+7h] BYREF
  char v20; // [rsp+F0h] [rbp+77h] BYREF
  HANDLE FileHandle; // [rsp+F8h] [rbp+7Fh] BYREF

  FileHandle = (HANDLE)-1LL;
  SectionHandle = 0LL;
  Object = 0LL;
  v2 = a2;
  IoStatusBlock = 0LL;
  v4 = 0LL;
  memset(&ObjectAttributes, 0, 44);
  v20 = 0;
  ExtendedParameters = 0LL;
  if ( (int)sub_1406BCB10(a1, &v20) < 0 )
    return (unsigned int)-1073741558;
  if ( !qword_140C1B8E0 || (LOBYTE(v6) = v20, LOBYTE(v5) = v2, !(unsigned int)sub_14042A5E0(v6, v5)) )
  {
    if ( a1[180].Count )
    {
      if ( !sub_140347810(a1 + 139) )
      {
        v7 = -1073741558;
        goto LABEL_26;
      }
      Count = (_QWORD *)a1[180].Count;
      ObfReferenceObject(Count);
      sub_1402AD030(a1 + 139);
    }
    else
    {
      v8 = PsReferenceProcessFilePointer(a1, &Object);
      Count = Object;
      if ( v8 < 0 )
        goto LABEL_8;
    }
    v10 = (UNICODE_STRING *)a1[184].Count;
    ObjectAttributes.RootDirectory = 0LL;
    ObjectAttributes.ObjectName = v10;
    ObjectAttributes.Length = 48;
    *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
    ObjectAttributes.Attributes = 576;
    v7 = ZwOpenFile(&FileHandle, 0x80100000, &ObjectAttributes, &IoStatusBlock, 5u, 0x60u);
    if ( v7 < 0 )
      goto LABEL_22;
    Object = 0LL;
    v11 = ObReferenceObjectByHandle(FileHandle, 0, (POBJECT_TYPE)IoFileObjectType, 0, &Object, 0LL);
    v4 = Object;
    v7 = v11;
    if ( v11 < 0 )
      goto LABEL_22;
    if ( Count[3] != *((_QWORD *)Object + 3) )
    {
      v7 = -1073741275;
      goto LABEL_22;
    }
    ObjectAttributes.RootDirectory = 0LL;
    ObjectAttributes.ObjectName = 0LL;
    ObjectAttributes.Length = 48;
    ObjectAttributes.Attributes = 576;
    *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
    ExtendedParameters.0 = (MEM_EXTENDED_PARAMETER::$373F0C482CA2C07D4A7B2B94C5EA8081)3LL;
    ExtendedParameters.ULong64 = v2;
    v7 = ZwCreateSectionEx(
           &SectionHandle,
           0xF001Fu,
           &ObjectAttributes,
           0LL,
           0x20u,
           0x1000000u,
           FileHandle,
           &ExtendedParameters,
           1u);
    if ( v7 < 0 )
      goto LABEL_22;
    if ( (int)sub_1406BCB10(a1, &v20) >= 0 )
    {
      if ( qword_140C1B8E0 && (LOBYTE(v13) = v20, LOBYTE(v12) = v2, (unsigned int)sub_14042A5E0(v13, v12)) )
        v7 = 0;
      else
        v7 = -1073740760;
      goto LABEL_22;
    }
LABEL_8:
    v7 = -1073741558;
LABEL_22:
    if ( Count )
      ObfDereferenceObject(Count);
    if ( v4 )
      ObfDereferenceObject(v4);
    goto LABEL_26;
  }
  v7 = 0;
LABEL_26:
  if ( (char *)FileHandle - 1 <= (char *)0xFFFFFFFFFFFFFFFDLL )
    ObCloseHandle(FileHandle, 0);
  if ( SectionHandle )
    ObCloseHandle(SectionHandle, 0);
  return (unsigned int)v7;
}

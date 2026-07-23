/*
 * XREFs of PsCheckProcessFileSigningLevel @ 0x1409B0A10
 * Callers:
 *     <none>
 * Callees:
 *     ObfDereferenceObject @ 0x140231660 (ObfDereferenceObject.c)
 *     ObfReferenceObject @ 0x140233D10 (ObfReferenceObject.c)
 *     ExAcquireRundownProtection_0 @ 0x14028B5F0 (ExAcquireRundownProtection_0.c)
 *     ExReleaseRundownProtection_0 @ 0x14028B620 (ExReleaseRundownProtection_0.c)
 *     ZwOpenFile @ 0x14041B750 (ZwOpenFile.c)
 *     ZwCreateSectionEx @ 0x14041C970 (ZwCreateSectionEx.c)
 *     _guard_dispatch_icall @ 0x140429FB0 (_guard_dispatch_icall.c)
 *     PsReferenceProcessFilePointer @ 0x14069A0A0 (PsReferenceProcessFilePointer.c)
 *     ObReferenceObjectByHandle @ 0x1406E62F0 (ObReferenceObjectByHandle.c)
 *     ObCloseHandle @ 0x14076BA80 (ObCloseHandle.c)
 *     PsQuerySectionSignatureInformation @ 0x1407C6690 (PsQuerySectionSignatureInformation.c)
 */

__int64 __fastcall PsCheckProcessFileSigningLevel(__int64 a1, unsigned __int8 a2)
{
  unsigned int v2; // r15d
  PVOID v4; // r14
  __int64 v5; // rdx
  __int64 v6; // rcx
  NTSTATUS v7; // ebx
  int v8; // eax
  _QWORD *v9; // rdi
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
  if ( (int)PsQuerySectionSignatureInformation((_KPROCESS *)a1, &v20) < 0 )
    goto LABEL_2;
  if ( qword_140C37980 )
  {
    LOBYTE(v6) = v20;
    LOBYTE(v5) = v2;
    if ( (unsigned int)qword_140C37980(v6, v5) )
    {
      v7 = 0;
      goto LABEL_25;
    }
  }
  if ( *(_QWORD *)(a1 + 1440) )
  {
    if ( !ExAcquireRundownProtection_0((PEX_RUNDOWN_REF)(a1 + 1112)) )
    {
LABEL_2:
      v7 = -1073741558;
      goto LABEL_25;
    }
    v9 = *(_QWORD **)(a1 + 1440);
    ObfReferenceObject(v9);
    ExReleaseRundownProtection_0((PEX_RUNDOWN_REF)(a1 + 1112));
  }
  else
  {
    v8 = PsReferenceProcessFilePointer((struct _EX_RUNDOWN_REF *)a1, (unsigned __int64 *)&Object);
    v9 = Object;
    if ( v8 < 0 )
      goto LABEL_8;
  }
  v10 = *(UNICODE_STRING **)(a1 + 1472);
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.ObjectName = v10;
  ObjectAttributes.Length = 48;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  ObjectAttributes.Attributes = 576;
  v7 = ZwOpenFile(&FileHandle, 0x80100000, &ObjectAttributes, &IoStatusBlock, 5u, 0x60u);
  if ( v7 < 0 )
    goto LABEL_21;
  Object = 0LL;
  v11 = ObReferenceObjectByHandle(FileHandle, 0, (POBJECT_TYPE)IoFileObjectType, 0, &Object, 0LL);
  v4 = Object;
  v7 = v11;
  if ( v11 < 0 )
    goto LABEL_21;
  if ( v9[3] != *((_QWORD *)Object + 3) )
  {
    v7 = -1073741275;
    goto LABEL_21;
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
    goto LABEL_21;
  if ( (int)PsQuerySectionSignatureInformation((_KPROCESS *)a1, &v20) >= 0 )
  {
    if ( qword_140C37980 && (LOBYTE(v13) = v20, LOBYTE(v12) = v2, (unsigned int)qword_140C37980(v13, v12)) )
      v7 = 0;
    else
      v7 = -1073740760;
    goto LABEL_21;
  }
LABEL_8:
  v7 = -1073741558;
LABEL_21:
  if ( v9 )
    ObfDereferenceObject(v9);
  if ( v4 )
    ObfDereferenceObject(v4);
LABEL_25:
  if ( (char *)FileHandle - 1 <= (char *)0xFFFFFFFFFFFFFFFDLL )
    ObCloseHandle(FileHandle, 0);
  if ( SectionHandle )
    ObCloseHandle(SectionHandle, 0);
  return (unsigned int)v7;
}

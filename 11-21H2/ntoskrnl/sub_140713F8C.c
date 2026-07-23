/*
 * XREFs of sub_140713F8C @ 0x140713F8C
 * Callers:
 *     sub_1406DD184 @ 0x1406DD184 (sub_1406DD184.c)
 *     sub_1407122B0 @ 0x1407122B0 (sub_1407122B0.c)
 *     sub_14071A870 @ 0x14071A870 (sub_14071A870.c)
 *     sub_14083200C @ 0x14083200C (sub_14083200C.c)
 *     sub_14083C870 @ 0x14083C870 (sub_14083C870.c)
 * Callees:
 *     sub_14020A890 @ 0x14020A890 (sub_14020A890.c)
 *     ObfDereferenceObjectWithTag @ 0x1402AC540 (ObfDereferenceObjectWithTag.c)
 *     ObfDereferenceObject @ 0x1402AD3E0 (ObfDereferenceObject.c)
 *     KeWaitForSingleObject @ 0x1402AF080 (KeWaitForSingleObject.c)
 *     RtlAppendUnicodeStringToString @ 0x1402DFA30 (RtlAppendUnicodeStringToString.c)
 *     RtlAppendUnicodeToString @ 0x1402DFAC0 (RtlAppendUnicodeToString.c)
 *     RtlInitUnicodeString @ 0x140347630 (RtlInitUnicodeString.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     ZwClose @ 0x14041B940 (ZwClose.c)
 *     ZwQueryInformationFile @ 0x14041B980 (ZwQueryInformationFile.c)
 *     ZwSetInformationFile @ 0x14041BC40 (ZwSetInformationFile.c)
 *     ZwFsControlFile @ 0x14041BE80 (ZwFsControlFile.c)
 *     ZwCreateFile @ 0x14041C200 (ZwCreateFile.c)
 *     KeBugCheckEx @ 0x14041F3D0 (KeBugCheckEx.c)
 *     sub_14068BEAC @ 0x14068BEAC (sub_14068BEAC.c)
 *     PsReferenceImpersonationToken @ 0x1406A77B0 (PsReferenceImpersonationToken.c)
 *     sub_1406D2D00 @ 0x1406D2D00 (sub_1406D2D00.c)
 *     sub_1406DEB64 @ 0x1406DEB64 (sub_1406DEB64.c)
 *     sub_14071489C @ 0x14071489C (sub_14071489C.c)
 *     sub_140742D8C @ 0x140742D8C (sub_140742D8C.c)
 *     PsImpersonateClient @ 0x1407AF1B0 (PsImpersonateClient.c)
 *     PsRevertToSelf @ 0x1407F6CB0 (PsRevertToSelf.c)
 *     sub_140919908 @ 0x140919908 (sub_140919908.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140A6E910 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall sub_140713F8C(
        PCUNICODE_STRING Source,
        unsigned int a2,
        _QWORD *a3,
        int *a4,
        unsigned int a5,
        void *a6,
        int *a7,
        void *a8,
        __int64 a9,
        __int64 a10)
{
  char v10; // si
  PCUNICODE_STRING v11; // r14
  PACCESS_TOKEN v12; // r12
  __int64 v13; // r13
  signed int v14; // eax
  NTSTATUS Status; // ebx
  const WCHAR *v16; // rdi
  ULONG CreateDisposition; // edi
  ACCESS_MASK v18; // r12d
  ULONG ShareAccess; // r14d
  ULONG CreateOptions; // r13d
  _DWORD *v21; // rbx
  int Information; // r14d
  int *v23; // rsi
  NTSTATUS v24; // eax
  HANDLE v25; // rax
  __int64 v27; // rbx
  unsigned __int16 v28; // bx
  unsigned int v29; // r9d
  PACCESS_TOKEN v30; // rax
  NTSTATUS v31; // eax
  unsigned int AllocationSize; // [rsp+20h] [rbp-E0h]
  SECURITY_IMPERSONATION_LEVEL AllocationSizea; // [rsp+20h] [rbp-E0h]
  char v34; // [rsp+60h] [rbp-A0h]
  BOOLEAN EffectiveOnly; // [rsp+61h] [rbp-9Fh] BYREF
  BOOLEAN CopyOnOpen[6]; // [rsp+62h] [rbp-9Eh] BYREF
  HANDLE FileHandle; // [rsp+68h] [rbp-98h] BYREF
  ULONG FileAttributes; // [rsp+70h] [rbp-90h]
  PCUNICODE_STRING v39; // [rsp+78h] [rbp-88h]
  _SECURITY_IMPERSONATION_LEVEL ImpersonationLevel; // [rsp+80h] [rbp-80h] BYREF
  UNICODE_STRING DestinationString; // [rsp+88h] [rbp-78h] BYREF
  PACCESS_TOKEN v42; // [rsp+98h] [rbp-68h]
  PVOID Object; // [rsp+A0h] [rbp-60h]
  HANDLE Event; // [rsp+A8h] [rbp-58h]
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+B0h] [rbp-50h] BYREF
  int InputBuffer; // [rsp+C0h] [rbp-40h] BYREF
  unsigned int v47; // [rsp+C4h] [rbp-3Ch]
  PETHREAD Thread; // [rsp+C8h] [rbp-38h]
  PACCESS_TOKEN Token; // [rsp+D0h] [rbp-30h]
  void *v50; // [rsp+D8h] [rbp-28h]
  int *v51; // [rsp+E0h] [rbp-20h]
  __int64 v52; // [rsp+E8h] [rbp-18h]
  _QWORD *v53; // [rsp+F0h] [rbp-10h]
  int *v54; // [rsp+F8h] [rbp-8h]
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+100h] [rbp+0h] BYREF
  __m128i si128; // [rsp+130h] [rbp+30h] BYREF
  __m128i v57; // [rsp+140h] [rbp+40h]
  __int64 v58; // [rsp+150h] [rbp+50h]
  __int128 FileInformation; // [rsp+158h] [rbp+58h] BYREF
  __int64 v60; // [rsp+168h] [rbp+68h]

  v10 = a5;
  Token = a6;
  v11 = Source;
  v12 = 0LL;
  v50 = a8;
  v13 = a2;
  v52 = a9;
  v58 = 0LL;
  v60 = 0LL;
  v39 = Source;
  v51 = a7;
  ImpersonationLevel = SecurityImpersonation;
  v54 = a4;
  v53 = a3;
  v47 = a2;
  si128 = 0LL;
  InputBuffer = 0;
  v57 = 0LL;
  CopyOnOpen[0] = 0;
  FileInformation = 0LL;
  Thread = 0LL;
  IoStatusBlock = 0LL;
  EffectiveOnly = 0;
  memset(&ObjectAttributes, 0, 44);
  Object = 0LL;
  Event = 0LL;
  DestinationString = 0LL;
  *a3 = 0LL;
  FileHandle = 0LL;
  v34 = 0;
  v42 = 0LL;
  RtlInitUnicodeString(&DestinationString, 0LL);
  v14 = sub_14071489C(NotificationEvent);
  Status = v14;
  if ( v14 < 0 )
  {
    sub_14020A890(a10, 0, 35, v14, 0x10u);
    goto LABEL_29;
  }
  v16 = (const WCHAR *)qword_140A39C00[v13];
  if ( v16 )
  {
    v27 = -1LL;
    do
      ++v27;
    while ( v16[v27] );
    v28 = v11->Length + 2 * (v27 + 1);
    DestinationString.Buffer = (wchar_t *)ExAllocatePoolWithTag(PagedPool, v28, 0x62774D43u);
    if ( !DestinationString.Buffer )
    {
      Status = -1073741670;
      sub_14020A890(a10, 0, 35, 0xC000009A, 0x20u);
      goto LABEL_29;
    }
    DestinationString.Length = 0;
    DestinationString.MaximumLength = v28;
    RtlAppendUnicodeStringToString(&DestinationString, v11);
    RtlAppendUnicodeToString(&DestinationString, v16);
  }
  else
  {
    DestinationString = *v11;
  }
  CreateDisposition = 3;
  if ( (a5 & 0x20) != 0 )
  {
    v18 = 1;
    ShareAccess = ((a5 >> 7) & 1) == 0;
  }
  else
  {
    ShareAccess = 0;
    v18 = ((a5 & 8) == 0 ? 3 : 0) | 0x20000;
    if ( (_DWORD)v13 )
      v18 = (a5 & 8) == 0 ? 3 : 0;
  }
  if ( (_DWORD)v13 )
  {
    FileAttributes = 6;
    if ( (a5 & 0x20) != 0 )
      CreateDisposition = 1;
    else
      CreateDisposition = (a5 & 0x10) == 0 ? 3 : 0;
    CreateOptions = 32772;
  }
  else
  {
    FileAttributes = 128;
    CreateOptions = 49188;
    if ( (a5 & 0x21) != 1 )
      CreateDisposition = 1;
  }
  v21 = Token;
  if ( Token )
  {
    Thread = KeGetCurrentThread();
    v30 = PsReferenceImpersonationToken(Thread, CopyOnOpen, &EffectiveOnly, &ImpersonationLevel);
    AllocationSizea = v21[49];
    v42 = v30;
    v31 = PsImpersonateClient(Thread, v21, 0, 0, AllocationSizea);
    Status = v31;
    if ( v31 < 0 )
    {
      sub_14020A890(a10, 0, 35, v31, 0x30u);
      v12 = v42;
      goto LABEL_28;
    }
    v10 = a5 | 0x40;
    v34 = 1;
  }
  ObjectAttributes.Attributes = 16 * (v10 & 0x40 | 0x24);
  ObjectAttributes.ObjectName = &DestinationString;
  ObjectAttributes.SecurityDescriptor = v50;
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.SecurityQualityOfService = 0LL;
  ObjectAttributes.Length = 48;
  Status = ZwCreateFile(
             &FileHandle,
             v18,
             &ObjectAttributes,
             &IoStatusBlock,
             0LL,
             FileAttributes,
             ShareAccess,
             CreateDisposition,
             CreateOptions,
             0LL,
             0);
  if ( Status == -1073741790 )
  {
    sub_14020A890(a10, 1, 35, 0xC0000022, 0x40u);
    Status = sub_140919908(&FileHandle, &ObjectAttributes, &IoStatusBlock, FileAttributes, CreateOptions, a10);
  }
  v12 = v42;
  if ( v34 )
  {
    if ( v42 )
    {
      if ( PsImpersonateClient(Thread, v42, CopyOnOpen[0], EffectiveOnly, ImpersonationLevel) < 0 )
        KeBugCheckEx(0x51u, 0x26uLL, (ULONG_PTR)v12, 0LL, 0LL);
    }
    else
    {
      PsRevertToSelf();
    }
  }
  if ( Status < 0 )
  {
    sub_1406D2D00(&DestinationString, Status, CreateOptions, ShareAccess);
    AllocationSize = 80;
LABEL_52:
    v29 = Status;
LABEL_53:
    sub_14020A890(a10, 0, 35, v29, AllocationSize);
    goto LABEL_28;
  }
  Information = IoStatusBlock.Information;
  if ( (v10 & 0x28) == 0 )
  {
    LODWORD(v58) = 0;
    si128 = _mm_load_si128((const __m128i *)&xmmword_14001C760);
    v57 = si128;
    ZwSetInformationFile(FileHandle, &IoStatusBlock, &si128, 0x28u, FileBasicInformation);
  }
  if ( (v10 & 0x22) == 2 )
  {
    Status = ZwFsControlFile(FileHandle, Event, 0LL, 0LL, &IoStatusBlock, 0x9004Fu, 0LL, 0, 0LL, 0);
    if ( Status == 259 )
    {
      KeWaitForSingleObject(Object, Executive, 0, 0, 0LL);
      Status = IoStatusBlock.Status;
    }
    if ( (int)(Status + 0x80000000) >= 0 && Status != -1073741808 )
    {
      AllocationSize = 96;
      goto LABEL_52;
    }
  }
  if ( ZwFsControlFile(FileHandle, Event, 0LL, 0LL, &IoStatusBlock, 0x9C040u, &InputBuffer, 4u, 0LL, 0) == 259 )
    KeWaitForSingleObject(Object, Executive, 0, 0, 0LL);
  if ( !v47 )
  {
    if ( Information != 2
      && ZwQueryInformationFile(FileHandle, &IoStatusBlock, &FileInformation, 0x18u, FileStandardInformation) >= 0
      && !*((_QWORD *)&FileInformation + 1) )
    {
      Information = 2;
    }
    v23 = v51;
    if ( v51 )
    {
      v24 = sub_14068BEAC(FileHandle, v51);
      Status = v24;
      if ( v24 < 0 )
      {
        AllocationSize = 112;
        goto LABEL_74;
      }
      v23[1] = sub_1406DEB64(FileHandle);
    }
    if ( !v52 )
      goto LABEL_27;
    v24 = sub_140742D8C(FileHandle);
    Status = v24;
    if ( v24 >= 0 )
      goto LABEL_27;
    AllocationSize = 128;
LABEL_74:
    v29 = v24;
    goto LABEL_53;
  }
LABEL_27:
  v25 = FileHandle;
  Status = 0;
  FileHandle = 0LL;
  *v53 = v25;
  *v54 = Information;
LABEL_28:
  v11 = v39;
LABEL_29:
  if ( DestinationString.Buffer && DestinationString.Buffer != v11->Buffer )
    ExFreePoolWithTag(DestinationString.Buffer, 0);
  if ( v12 )
    ObfDereferenceObjectWithTag(v12, 0x746C6644u);
  if ( Object )
    ObfDereferenceObject(Object);
  if ( Event )
    ZwClose(Event);
  if ( FileHandle )
    ZwClose(FileHandle);
  return (unsigned int)Status;
}

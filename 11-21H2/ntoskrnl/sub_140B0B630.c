/*
 * XREFs of sub_140B0B630 @ 0x140B0B630
 * Callers:
 *     sub_140AFBDF4 @ 0x140AFBDF4 (sub_140AFBDF4.c)
 *     sub_140B020A4 @ 0x140B020A4 (sub_140B020A4.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x140347630 (RtlInitUnicodeString.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     ZwReadFile @ 0x14041B820 (ZwReadFile.c)
 *     ZwClose @ 0x14041B940 (ZwClose.c)
 *     ZwQueryInformationFile @ 0x14041B980 (ZwQueryInformationFile.c)
 *     ZwEnumerateValueKey @ 0x14041B9C0 (ZwEnumerateValueKey.c)
 *     ZwQueryKey @ 0x14041BA20 (ZwQueryKey.c)
 *     ZwCreateKey @ 0x14041BB00 (ZwCreateKey.c)
 *     ZwCreateFile @ 0x14041C200 (ZwCreateFile.c)
 *     RtlAppendStringToString @ 0x1406E24E0 (RtlAppendStringToString.c)
 *     EmpProviderRegister @ 0x14082D070 (EmpProviderRegister.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 *     ExAllocatePool2 @ 0x140A6E430 (ExAllocatePool2.c)
 *     HalRegisterErrataCallbacks @ 0x140B0B970 (HalRegisterErrataCallbacks.c)
 *     sub_140B0B9A8 @ 0x140B0B9A8 (sub_140B0B9A8.c)
 *     sub_140B0D974 @ 0x140B0D974 (sub_140B0D974.c)
 */

__int64 __fastcall sub_140B0B630(int a1, __int64 a2)
{
  _DWORD *Pool2; // r14
  __int64 v3; // rdi
  int v4; // ebx
  NTSTATUS v5; // eax
  ULONG v6; // r15d
  NTSTATUS i; // eax
  __int64 v9; // rax
  __int64 v10; // rcx
  ULONG v11; // r13d
  void *v12; // rax
  void *v13; // rsi
  void *v14; // rcx
  ULONG ResultLength; // [rsp+60h] [rbp-A0h] BYREF
  HANDLE Handle; // [rsp+68h] [rbp-98h] BYREF
  HANDLE KeyHandle; // [rsp+70h] [rbp-90h] BYREF
  __int64 v18; // [rsp+78h] [rbp-88h] BYREF
  UNICODE_STRING DestinationString; // [rsp+80h] [rbp-80h] BYREF
  STRING Destination; // [rsp+90h] [rbp-70h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+A0h] [rbp-60h] BYREF
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+D0h] [rbp-30h] BYREF
  __int128 FileInformation; // [rsp+E0h] [rbp-20h] BYREF
  __int64 v24; // [rsp+F0h] [rbp-10h]
  char v25; // [rsp+100h] [rbp+0h] BYREF

  v24 = 0LL;
  Pool2 = 0LL;
  ResultLength = 0;
  KeyHandle = (HANDLE)-1LL;
  v3 = 0LL;
  Handle = (HANDLE)-1LL;
  FileInformation = 0LL;
  Destination = 0LL;
  IoStatusBlock = 0LL;
  memset(&ObjectAttributes, 0, 44);
  DestinationString = 0LL;
  if ( !a1 )
  {
    dword_140C48C88 |= 0x80000000;
    stru_140C48C40.WorkerRoutine = (PWORKER_THREAD_ROUTINE)sub_1403D49C0;
    qword_140C48C20 = 0LL;
    qword_140C48C70 = 0LL;
    qword_140C48C90 = 0LL;
    qword_140C48C68 = 0LL;
    qword_140C48C60 = 0LL;
    qword_140C48C38 = 0LL;
    qword_140C48C28 = 0LL;
    qword_140C48C18 = 0LL;
    qword_140C48C30 = 0LL;
    dword_140C48C10 = 0;
    stru_140C48C40.Parameter = 0LL;
    stru_140C48C40.List.Flink = 0LL;
    v9 = *(_QWORD *)(a2 + 240);
    qword_140C54D00 = 0LL;
    dword_140C54CFC = 0;
    dword_140C54CF8 = 0;
    v10 = *(_QWORD *)(v9 + 24);
    dword_140C54CEC = 0;
    dword_140C54CF0 = 0;
    dword_140C54CF4 = 0;
    if ( v10 )
    {
      if ( *(_DWORD *)(v9 + 32) )
      {
        v4 = ((__int64 (*)(void))sub_140B0B9A8)();
        if ( v4 < 0 )
          goto LABEL_11;
      }
    }
    sub_140B0D974();
    HalRegisterErrataCallbacks();
    EmpProviderRegister(0LL, 0LL, 0, (__int64)&off_140003610, 1u, &v18);
    v4 = EmpProviderRegister(0LL, 0LL, 0, (__int64)&off_140003580, 6u, &qword_140C48C00);
    if ( v4 < 0 )
      goto LABEL_11;
LABEL_10:
    v4 = 0;
    goto LABEL_11;
  }
  if ( a1 != 1 )
    goto LABEL_10;
  RtlInitUnicodeString(&DestinationString, L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\Errata\\Dynamic");
  ObjectAttributes.ObjectName = &DestinationString;
  ObjectAttributes.Length = 48;
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.Attributes = 576;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  v4 = ZwCreateKey(&KeyHandle, 0x20019u, &ObjectAttributes, 0, 0LL, 0, 0LL);
  if ( v4 < 0 )
    goto LABEL_11;
  v5 = ZwQueryKey(KeyHandle, KeyFullInformation, 0LL, 0, &ResultLength);
  v4 = v5;
  if ( v5 == -1073741789 || v5 == -2147483643 )
  {
    Pool2 = (_DWORD *)ExAllocatePool2(256LL, ResultLength, 0x74694D45u);
    if ( !Pool2 )
      goto LABEL_29;
    v4 = ZwQueryKey(KeyHandle, KeyFullInformation, Pool2, ResultLength, &ResultLength);
    if ( v4 < 0 )
      goto LABEL_11;
    v6 = Pool2[10] + 16;
    v3 = ExAllocatePool2(256LL, v6, 0x74694D45u);
    if ( !v3 )
    {
LABEL_29:
      v4 = -1073741670;
      goto LABEL_11;
    }
    LODWORD(v18) = 0;
    for ( i = ZwEnumerateValueKey(KeyHandle, 0, KeyValuePartialInformation, (PVOID)v3, v6, &ResultLength);
          ;
          i = ZwEnumerateValueKey(KeyHandle, v18, KeyValuePartialInformation, (PVOID)v3, v6, &ResultLength) )
    {
      v4 = i;
      if ( i == -2147483622 )
        break;
      if ( i < 0 )
        goto LABEL_11;
      *(_DWORD *)&Destination.Length = 0x1000000;
      Destination.Buffer = &v25;
      RtlInitUnicodeString(&DestinationString, L"\\SystemRoot\\inf\\");
      RtlAppendStringToString(&Destination, (const STRING *)&DestinationString);
      *(_BYTE *)(*(unsigned int *)(v3 + 8) + v3 + 12) = 0;
      RtlInitUnicodeString(&DestinationString, (PCWSTR)(v3 + 12));
      RtlAppendStringToString(&Destination, (const STRING *)&DestinationString);
      ObjectAttributes.Length = 48;
      ObjectAttributes.RootDirectory = 0LL;
      ObjectAttributes.Attributes = 576;
      ObjectAttributes.ObjectName = (PUNICODE_STRING)&Destination;
      *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
      v4 = ZwCreateFile(&Handle, 0x120089u, &ObjectAttributes, &IoStatusBlock, 0LL, 0x80u, 1u, 1u, 0x20u, 0LL, 0);
      if ( v4 < 0 )
        goto LABEL_11;
      v4 = ZwQueryInformationFile(Handle, &IoStatusBlock, &FileInformation, 0x18u, FileStandardInformation);
      if ( v4 < 0 )
      {
        ZwClose(Handle);
        goto LABEL_11;
      }
      if ( HIDWORD(FileInformation) )
      {
        ZwClose(Handle);
        goto LABEL_27;
      }
      v11 = DWORD2(FileInformation);
      v12 = (void *)ExAllocatePool2(256LL, DWORD2(FileInformation), 0x74694D45u);
      v13 = v12;
      if ( !v12 )
      {
        ZwClose(Handle);
        goto LABEL_29;
      }
      v4 = ZwReadFile(Handle, 0LL, 0LL, 0LL, &IoStatusBlock, v12, v11, 0LL, 0LL);
      ZwClose(Handle);
      v14 = v13;
      if ( v4 < 0 )
        goto LABEL_39;
      v4 = sub_140B0B9A8(v13, v11);
      if ( v4 < 0 )
      {
        v14 = v13;
LABEL_39:
        ExFreePoolWithTag(v14, 0x74694D45u);
        goto LABEL_11;
      }
      LODWORD(v18) = v18 + 1;
    }
    goto LABEL_10;
  }
  if ( !v5 )
LABEL_27:
    v4 = -1073741823;
LABEL_11:
  if ( KeyHandle != (HANDLE)-1LL )
    ZwClose(KeyHandle);
  if ( Pool2 )
    ExFreePoolWithTag(Pool2, 0x74694D45u);
  if ( v3 )
    ExFreePoolWithTag((PVOID)v3, 0x74694D45u);
  return (unsigned int)v4;
}

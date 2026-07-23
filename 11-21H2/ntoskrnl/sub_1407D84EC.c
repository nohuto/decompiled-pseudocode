/*
 * XREFs of sub_1407D84EC @ 0x1407D84EC
 * Callers:
 *     sub_1407DCF7C @ 0x1407DCF7C (sub_1407DCF7C.c)
 * Callees:
 *     KeLeaveCriticalRegion @ 0x1402AD060 (KeLeaveCriticalRegion.c)
 *     ExAcquirePushLockSharedEx @ 0x1402AD220 (ExAcquirePushLockSharedEx.c)
 *     sub_1402AFC00 @ 0x1402AFC00 (sub_1402AFC00.c)
 *     sub_1402E1280 @ 0x1402E1280 (sub_1402E1280.c)
 *     RtlInitUnicodeString @ 0x140347630 (RtlInitUnicodeString.c)
 *     ExfReleasePushLockShared @ 0x140359E40 (ExfReleasePushLockShared.c)
 *     sub_14035F614 @ 0x14035F614 (sub_14035F614.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     NtClose @ 0x140731D50 (NtClose.c)
 *     NtReadFile @ 0x14073A320 (NtReadFile.c)
 *     NtQueryInformationFile @ 0x1407AFEF0 (NtQueryInformationFile.c)
 *     NtOpenFile @ 0x1407D8800 (NtOpenFile.c)
 *     sub_1407D8870 @ 0x1407D8870 (sub_1407D8870.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 *     ExAllocatePool2 @ 0x140A6E430 (ExAllocatePool2.c)
 */

__int64 __fastcall sub_1407D84EC(__int64 a1, int a2, _QWORD *a3)
{
  __int64 v3; // rbx
  struct _KTHREAD *CurrentThread; // rax
  char *v8; // rsi
  unsigned int v9; // ebx
  wchar_t *Pool2; // r14
  int v11; // ebx
  ULONG Length; // edi
  char *v13; // rax
  _DWORD *v14; // rdi
  _DWORD *v16; // [rsp+50h] [rbp-89h] BYREF
  unsigned int v17; // [rsp+58h] [rbp-81h] BYREF
  HANDLE FileHandle; // [rsp+60h] [rbp-79h] BYREF
  __int64 v19; // [rsp+68h] [rbp-71h] BYREF
  int v20; // [rsp+70h] [rbp-69h] BYREF
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+78h] [rbp-61h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+88h] [rbp-51h] BYREF
  UNICODE_STRING DestinationString; // [rsp+B8h] [rbp-21h] BYREF
  __int64 v24; // [rsp+C8h] [rbp-11h]
  void (__fastcall *v25)(void *); // [rsp+D0h] [rbp-9h]
  __int128 FileInformation; // [rsp+D8h] [rbp-1h] BYREF
  __int64 v27; // [rsp+E8h] [rbp+Fh]

  DestinationString = 0LL;
  v3 = -1LL;
  memset(&ObjectAttributes, 0, 44);
  v27 = 0LL;
  v20 = 0;
  IoStatusBlock = 0LL;
  FileHandle = 0LL;
  v17 = 0;
  FileInformation = 0LL;
  CurrentThread = KeGetCurrentThread();
  v8 = 0LL;
  v16 = 0LL;
  --*((_WORD *)CurrentThread + 242);
  ExAcquirePushLockSharedEx((ULONG_PTR)qword_140C544F8, 0LL);
  do
    ++v3;
  while ( word_140C54390[v3] );
  v9 = 2 * v3 + 102;
  Pool2 = (wchar_t *)ExAllocatePool2(256LL, v9, 1179673411LL);
  if ( !Pool2 )
  {
    v11 = -1073741670;
    if ( _InterlockedCompareExchange64((volatile signed __int64 *)qword_140C544F8, 0LL, 17LL) != 17 )
      ExfReleasePushLockShared((signed __int64 *)qword_140C544F8);
    sub_1402AFC00((ULONG_PTR)qword_140C544F8);
    KeLeaveCriticalRegion();
    goto LABEL_25;
  }
  sub_1402E1280(Pool2, v9, L"%s\\%ws-%08X.%ws", word_140C54390, a1, *(_DWORD *)(a1 + 60), L"pf");
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)qword_140C544F8, 0LL, 17LL) != 17 )
    ExfReleasePushLockShared((signed __int64 *)qword_140C544F8);
  sub_1402AFC00((ULONG_PTR)qword_140C544F8);
  KeLeaveCriticalRegion();
  RtlInitUnicodeString(&DestinationString, Pool2);
  ObjectAttributes.ObjectName = &DestinationString;
  ObjectAttributes.Length = 48;
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.Attributes = 576;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  v11 = NtOpenFile(&FileHandle, 0x80100000, &ObjectAttributes, &IoStatusBlock, 0, 0x20u);
  if ( v11 < 0
    || (v11 = NtQueryInformationFile(FileHandle, &IoStatusBlock, &FileInformation, 0x18u, FileStandardInformation),
        v11 < 0) )
  {
LABEL_25:
    v14 = v16;
    goto LABEL_16;
  }
  Length = DWORD2(FileInformation);
  LODWORD(v19) = 0x10000000;
  if ( (unsigned int)(DWORD2(FileInformation) - 1) > 0xFFFFFFF || HIDWORD(FileInformation) )
  {
    v11 = -1073741823;
    goto LABEL_25;
  }
  v13 = (char *)ExAllocatePool2(256LL, DWORD2(FileInformation), 1884316483LL);
  v8 = v13;
  if ( !v13 )
  {
    v11 = -1073741670;
    goto LABEL_25;
  }
  v11 = NtReadFile(FileHandle, 0LL, 0LL, 0LL, &IoStatusBlock, v13, Length, 0LL, 0LL);
  if ( v11 < 0 )
    goto LABEL_25;
  v24 = (__int64)sub_1406E1D10;
  v25 = sub_1406D9550;
  v11 = sub_14035F614(v8, Length, &v16, &v17, &v19);
  if ( v11 < 0 )
    goto LABEL_25;
  v14 = v16;
  if ( (unsigned __int8)sub_1407D8870(v16, v17, &v20) )
  {
    if ( v14[20] == a2 )
    {
      *a3 = v14;
      v11 = 0;
      v14 = 0LL;
    }
    else
    {
      v11 = -1073741823;
    }
  }
  else
  {
    v11 = -1073741701;
  }
LABEL_16:
  if ( FileHandle )
    NtClose(FileHandle);
  if ( Pool2 )
    ExFreePoolWithTag(Pool2, 0);
  if ( v8 )
    ExFreePoolWithTag(v8, 0);
  if ( v14 )
    ExFreePoolWithTag(v14, 0);
  return (unsigned int)v11;
}

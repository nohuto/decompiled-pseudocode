/*
 * XREFs of RtlCreateSystemVolumeInformationFolder @ 0x180071520
 * Callers:
 *     <none>
 * Callees:
 *     RtlFreeHeap @ 0x180027690 (RtlFreeHeap.c)
 *     RtlAllocateHeap @ 0x180028B70 (RtlAllocateHeap.c)
 *     RtlInitUnicodeString @ 0x18004C040 (RtlInitUnicodeString.c)
 *     RtlpSysVolCreateSecurityDescriptor @ 0x180071758 (RtlpSysVolCreateSecurityDescriptor.c)
 *     RtlpSysVolCheckOwnerAndSecurity @ 0x1800718B4 (RtlpSysVolCheckOwnerAndSecurity.c)
 *     NtClose @ 0x1800A4250 (NtClose.c)
 *     ZwCreateFile @ 0x1800A4B10 (ZwCreateFile.c)
 *     memmove @ 0x1800AAB40 (memmove.c)
 *     RtlpSysVolTakeOwnership @ 0x180102E40 (RtlpSysVolTakeOwnership.c)
 */

__int64 __fastcall RtlCreateSystemVolumeInformationFolder(unsigned __int16 *a1)
{
  unsigned __int16 v2; // dx
  __int16 v3; // di
  PVOID Heap; // rax
  unsigned __int64 v5; // rax
  NTSTATUS v6; // ebx
  void *ProcessHeap; // rcx
  struct _PEB *v8; // rcx
  PVOID v9; // r8
  _WORD v11[4]; // [rsp+60h] [rbp-29h] BYREF
  PVOID BaseAddress; // [rsp+68h] [rbp-21h]
  _UNICODE_STRING DestinationString; // [rsp+70h] [rbp-19h] BYREF
  _IO_STATUS_BLOCK IoStatusBlock; // [rsp+80h] [rbp-9h] BYREF
  _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+90h] [rbp+7h] BYREF
  HANDLE FileHandle; // [rsp+F0h] [rbp+67h] BYREF
  PVOID v17; // [rsp+F8h] [rbp+6Fh] BYREF
  PVOID v18; // [rsp+100h] [rbp+77h] BYREF

  RtlInitUnicodeString(&DestinationString, L"System Volume Information");
  v2 = DestinationString.Length + *a1;
  v11[0] = v2;
  if ( v2 < *a1 || v2 < DestinationString.Length )
    return 3221225485LL;
  v3 = *(_WORD *)(*((_QWORD *)a1 + 1) + 2 * ((unsigned __int64)*a1 >> 1) - 2);
  if ( v3 != 92 )
  {
    v2 += 2;
    v11[0] = v2;
  }
  v11[1] = v2 + 2;
  Heap = RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 0, (unsigned __int16)(v2 + 2));
  BaseAddress = Heap;
  if ( !Heap )
    return 3221225626LL;
  memmove(Heap, *((const void **)a1 + 1), *a1);
  v5 = *a1;
  v11[0] = *a1;
  if ( v3 != 92 )
  {
    *((_WORD *)BaseAddress + (v5 >> 1)) = 92;
    LOWORD(v5) = v11[0] + 2;
    v11[0] += 2;
  }
  memmove((char *)BaseAddress + (unsigned __int16)v5, DestinationString.Buffer, DestinationString.Length);
  v11[0] += DestinationString.Length;
  *((_WORD *)BaseAddress + ((unsigned __int64)v11[0] >> 1)) = 0;
  v6 = RtlpSysVolCreateSecurityDescriptor(&v17, &v18);
  if ( v6 < 0 )
  {
    v8 = NtCurrentPeb();
    v9 = BaseAddress;
  }
  else
  {
    ObjectAttributes.ObjectName = (PUNICODE_STRING)v11;
    ObjectAttributes.Length = 48;
    ObjectAttributes.RootDirectory = 0LL;
    ObjectAttributes.Attributes = 576;
    ObjectAttributes.SecurityDescriptor = v17;
    ObjectAttributes.SecurityQualityOfService = 0LL;
    if ( ZwCreateFile(&FileHandle, 0x10000u, &ObjectAttributes, &IoStatusBlock, 0LL, 0, 7u, 1u, 0x201060u, 0LL, 0) >= 0 )
      NtClose(FileHandle);
    v6 = ZwCreateFile(&FileHandle, 0x1E0000u, &ObjectAttributes, &IoStatusBlock, 0LL, 6u, 7u, 3u, 0x21u, 0LL, 0);
    if ( v6 < 0 )
    {
      RtlpSysVolTakeOwnership(v11);
      v6 = ZwCreateFile(&FileHandle, 0x1E0000u, &ObjectAttributes, &IoStatusBlock, 0LL, 6u, 7u, 3u, 0x21u, 0LL, 0);
    }
    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, BaseAddress);
    ProcessHeap = NtCurrentPeb()->ProcessHeap;
    if ( v6 < 0 )
    {
      RtlFreeHeap(ProcessHeap, 0, v18);
      v8 = NtCurrentPeb();
      v9 = v17;
    }
    else
    {
      RtlFreeHeap(ProcessHeap, 0, v17);
      v6 = RtlpSysVolCheckOwnerAndSecurity(FileHandle, (PACL)v18);
      NtClose(FileHandle);
      v8 = NtCurrentPeb();
      v9 = v18;
    }
  }
  RtlFreeHeap(v8->ProcessHeap, 0, v9);
  return (unsigned int)v6;
}

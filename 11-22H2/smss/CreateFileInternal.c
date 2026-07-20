/*
 * XREFs of CreateFileInternal @ 0x1400132DC
 * Callers:
 *     CreateFileW @ 0x140013850 (CreateFileW.c)
 * Callees:
 *     __security_check_cookie @ 0x140010ED0 (__security_check_cookie.c)
 *     BaseSetLastNTError @ 0x1400149C0 (BaseSetLastNTError.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x140014DB0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall CreateFileInternal(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  ULONG EaLength; // r15d
  int v6; // r14d
  __int64 v7; // rcx
  unsigned int v9; // esi
  int v10; // r13d
  int v11; // edi
  NTSTATUS inited; // eax
  ULONG v13; // ecx
  void *Buffer; // r12
  HANDLE ContainingDirectory; // rax
  int v16; // edx
  int v17; // edi
  unsigned int v18; // ecx
  __int64 v19; // rcx
  void *EaBuffer; // rdi
  char *v21; // rcx
  ULONG v22; // r14d
  PVOID Heap; // rax
  NTSTATUS v24; // r12d
  ULONG v25; // edx
  void (__fastcall *v26)(ULONG *); // rax
  NTSTATUS v27; // ebx
  ULONG CreateOptions; // [rsp+68h] [rbp-A0h] BYREF
  int v29; // [rsp+6Ch] [rbp-9Ch]
  int DestinationString; // [rsp+70h] [rbp-98h]
  ULONG DestinationString_4; // [rsp+74h] [rbp-94h] BYREF
  struct _UNICODE_STRING DestinationString_8; // [rsp+78h] [rbp-90h] BYREF
  PVOID BaseAddress; // [rsp+88h] [rbp-80h]
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+90h] [rbp-78h] BYREF
  void *FileHandle; // [rsp+A0h] [rbp-68h] BYREF
  _RTL_RELATIVE_NAME_U RelativeName; // [rsp+A8h] [rbp-60h] BYREF
  struct _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+C8h] [rbp-40h] BYREF
  int v38; // [rsp+F8h] [rbp-10h] BYREF
  int v39; // [rsp+FCh] [rbp-Ch]
  __int16 v40; // [rsp+100h] [rbp-8h]

  EaLength = 0;
  v29 = 0;
  v6 = 0;
  if ( a5 )
  {
    if ( *(_DWORD *)a5 < 0x20u )
    {
      v7 = 3221225485LL;
LABEL_4:
      BaseSetLastNTError(v7);
      return -1LL;
    }
    v9 = *(_DWORD *)(a5 + 8);
    v10 = *(_DWORD *)(a5 + 4);
    v11 = *(_DWORD *)(a5 + 12);
  }
  else
  {
    v9 = 0;
    v10 = 0;
    v11 = 0;
  }
  inited = RtlInitUnicodeStringEx(&DestinationString_8, L"\\\\.\\MountPointManager");
  if ( inited < 0 )
  {
LABEL_9:
    v7 = (unsigned int)inited;
    goto LABEL_4;
  }
  if ( DestinationString_8.Length <= 1u
    || (DestinationString = 1, aMountpointmana[((unsigned __int64)DestinationString_8.Length >> 1) - 1] != 92) )
  {
    DestinationString = 0;
  }
  CreateOptions = 0;
  inited = RtlDosPathNameToRelativeNtPathName_U_WithStatus(
             L"\\\\.\\MountPointManager",
             &DestinationString_8,
             0LL,
             &RelativeName);
  if ( inited < 0 )
  {
    if ( inited == -1073741801 || inited == -1073741670 )
      goto LABEL_9;
    v13 = 3;
LABEL_63:
    RtlSetLastWin32Error(v13);
    return -1LL;
  }
  Buffer = DestinationString_8.Buffer;
  BaseAddress = DestinationString_8.Buffer;
  if ( RelativeName.RelativeName.Length )
  {
    ContainingDirectory = RelativeName.ContainingDirectory;
    DestinationString_8 = RelativeName.RelativeName;
  }
  else
  {
    ContainingDirectory = 0LL;
    RelativeName.ContainingDirectory = 0LL;
  }
  ObjectAttributes.RootDirectory = ContainingDirectory;
  v16 = (v9 >> 6) & 0x800;
  ObjectAttributes.Length = 48;
  ObjectAttributes.SecurityDescriptor = 0LL;
  ObjectAttributes.ObjectName = &DestinationString_8;
  ObjectAttributes.Attributes = v16 | ((v9 & 0x1000000) == 0 ? 0x40 : 0);
  if ( (v11 & 0x100000) != 0 )
  {
    v17 = v11 & 0xF0000;
    LOBYTE(v40) = (v17 & 0x40000) != 0;
    v18 = v17 & 0xFFFBFFFF;
    if ( (v17 & 0x40000) == 0 )
      v18 = v17;
    if ( (v18 & 0x80000) != 0 )
    {
      HIBYTE(v40) = 1;
      v18 &= ~0x80000u;
    }
    else
    {
      HIBYTE(v40) = 0;
    }
    v39 = HIWORD(v18);
  }
  else
  {
    v40 = 257;
    v39 = 2;
  }
  v38 = 12;
  ObjectAttributes.SecurityQualityOfService = &v38;
  if ( a5
    && (v19 = *(_QWORD *)(a5 + 16)) != 0
    && (ObjectAttributes.SecurityDescriptor = *(PVOID *)(v19 + 8), *(_DWORD *)(v19 + 16)) )
  {
    EaBuffer = 0LL;
    ObjectAttributes.Attributes = v16 | ((v9 & 0x1000000) != 0 ? 2 : 66);
  }
  else
  {
    EaBuffer = 0LL;
    if ( !a5 )
      goto LABEL_45;
  }
  v21 = *(char **)(a5 + 24);
  if ( (unsigned __int64)(v21 - 1) <= 0xFFFFFFFFFFFFFFFDuLL
    && NtQueryInformationFile(v21, &IoStatusBlock, &DestinationString_4, 4u, FileEaInformation) >= 0 )
  {
    v22 = DestinationString_4;
    if ( DestinationString_4 )
    {
      while ( 1 )
      {
        v22 *= 2;
        Heap = RtlAllocateHeap(*(PVOID *)(*(_QWORD *)&KeGetPcr()->MajorVersion + 48LL), KernelBaseGlobalData, v22);
        EaLength = 0;
        EaBuffer = Heap;
        if ( !Heap )
          break;
        v24 = NtQueryEaFile(*(HANDLE *)(a5 + 24), &IoStatusBlock, Heap, v22, 0, 0LL, 0, 0LL, 1u);
        if ( v24 >= 0 )
        {
          EaLength = IoStatusBlock.Information;
        }
        else
        {
          RtlFreeHeap(*(PVOID *)(*(_QWORD *)&KeGetPcr()->MajorVersion + 48LL), 0, EaBuffer);
          EaBuffer = 0LL;
          IoStatusBlock.Information = 0LL;
        }
        if ( v24 != -2147483643 && v24 != -1073741789 )
        {
          v6 = v29;
          Buffer = BaseAddress;
          goto LABEL_45;
        }
      }
      RtlReleaseRelativeName(&RelativeName);
      RtlFreeHeap(*(PVOID *)(*(_QWORD *)&KeGetPcr()->MajorVersion + 48LL), 0, BaseAddress);
      v7 = 3221225495LL;
      goto LABEL_4;
    }
    v6 = 0;
  }
LABEL_45:
  v25 = CreateOptions | ((v9 & 0x2000000) != 0 ? 0x4000 : 0) | ~(v9 >> 25) & 0x20 | ((int)v9 >> 31) & 2 | (v9 >> 26) & 8 | ((v9 & 0x40000 | ((v9 & 0x800000 | ((v9 & 0x10000000 | (v9 >> 8) & 0x80000) >> 12)) >> 3)) >> 2);
  CreateOptions = v25;
  if ( (HIWORD(KeGetPcr()->NtTib.Self[109].StackLimit) & 0x800) != 0 )
  {
    v25 |= 0x40000u;
    CreateOptions = v25;
  }
  if ( (v9 & 0x4000000) != 0 )
  {
    v25 |= 0x1000u;
    v6 = 0x10000;
    CreateOptions = v25;
  }
  if ( (v9 & 0x200000) != 0 )
  {
    v25 |= 0x200000u;
    CreateOptions = v25;
  }
  if ( (v9 & 0x100000) != 0 )
  {
    v25 |= 0x400000u;
    CreateOptions = v25;
  }
  if ( (v9 & 0x2000000) == 0 )
    CreateOptions = v25 | 0x40;
  v26 = (void (__fastcall *)(ULONG *))SbSelectProcedure(2880154539LL, 1LL, "kLsE");
  if ( v26 )
    v26(&CreateOptions);
  v27 = NtCreateFile(
          &FileHandle,
          v6 | 0x100080,
          &ObjectAttributes,
          &IoStatusBlock,
          0LL,
          v10 & 0x5AFFA7,
          3u,
          1u,
          CreateOptions,
          EaBuffer,
          EaLength);
  RtlReleaseRelativeName(&RelativeName);
  RtlFreeHeap(*(PVOID *)(*(_QWORD *)&KeGetPcr()->MajorVersion + 48LL), 0, Buffer);
  RtlFreeHeap(*(PVOID *)(*(_QWORD *)&KeGetPcr()->MajorVersion + 48LL), 0, EaBuffer);
  if ( v27 < 0 )
  {
    BaseSetLastNTError((unsigned int)v27);
    if ( v27 == -1073741771 )
    {
      v13 = 80;
    }
    else
    {
      if ( v27 != -1073741638 )
        return -1LL;
      v13 = 3;
      if ( !DestinationString )
        v13 = 5;
    }
    goto LABEL_63;
  }
  RtlSetLastWin32Error(0);
  return (__int64)FileHandle;
}

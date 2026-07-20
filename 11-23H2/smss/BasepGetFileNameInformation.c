/*
 * XREFs of BasepGetFileNameInformation @ 0x1400125E0
 * Callers:
 *     GetFinalPathNameByHandleW @ 0x140012C8C (GetFinalPathNameByHandleW.c)
 * Callees:
 *     BaseSetLastNTError @ 0x1400149C0 (BaseSetLastNTError.c)
 *     memmove_0 @ 0x140014B43 (memmove_0.c)
 */

__int64 __fastcall BasepGetFileNameInformation(
        HANDLE FileHandle,
        FILE_INFORMATION_CLASS FileInformationClass,
        _QWORD *a3)
{
  _DWORD *v4; // rdi
  ULONG v7; // ebx
  _DWORD *Heap; // rax
  NTSTATUS v9; // eax
  size_t v10; // rbx
  __int64 result; // rax
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+30h] [rbp-28h] BYREF

  v4 = 0LL;
  v7 = 528;
  do
  {
    if ( v4 )
      RtlFreeHeap(*(PVOID *)(*(_QWORD *)&KeGetPcr()->MajorVersion + 48LL), 0, v4);
    Heap = RtlAllocateHeap(*(PVOID *)(*(_QWORD *)&KeGetPcr()->MajorVersion + 48LL), KernelBaseGlobalData, v7);
    v4 = Heap;
    if ( !Heap )
    {
      v9 = -1073741670;
      goto LABEL_9;
    }
    v9 = NtQueryInformationFile(FileHandle, &IoStatusBlock, Heap, v7, FileInformationClass);
    v7 = *v4 + 8;
  }
  while ( v9 == -2147483643 );
  if ( v9 >= 0 )
  {
    v10 = *(unsigned __int16 *)v4;
    memmove_0(v4, v4 + 1, v10);
    result = 1LL;
    *a3 = v4;
    *((_WORD *)v4 + (v10 >> 1)) = 0;
    return result;
  }
LABEL_9:
  BaseSetLastNTError((unsigned int)v9);
  if ( v4 )
    RtlFreeHeap(*(PVOID *)(*(_QWORD *)&KeGetPcr()->MajorVersion + 48LL), 0, v4);
  return 0LL;
}

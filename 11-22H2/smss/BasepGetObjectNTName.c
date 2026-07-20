/*
 * XREFs of BasepGetObjectNTName @ 0x1400126FC
 * Callers:
 *     GetFinalPathNameByHandleW @ 0x140012C8C (GetFinalPathNameByHandleW.c)
 * Callees:
 *     BaseSetLastNTError @ 0x1400149C0 (BaseSetLastNTError.c)
 *     memmove_0 @ 0x140014B43 (memmove_0.c)
 */

__int64 __fastcall BasepGetObjectNTName(HANDLE Handle, const void ***a2)
{
  const void **Heap; // rbx
  ULONG v5; // edi
  NTSTATUS v6; // eax
  __int64 result; // rax
  unsigned __int64 v8; // rcx
  ULONG ReturnLength; // [rsp+60h] [rbp+18h] BYREF

  Heap = 0LL;
  v5 = 536;
  do
  {
    if ( Heap )
      RtlFreeHeap(*(PVOID *)(*(_QWORD *)&KeGetPcr()->MajorVersion + 48LL), 0, Heap);
    Heap = (const void **)RtlAllocateHeap(
                            *(PVOID *)(*(_QWORD *)&KeGetPcr()->MajorVersion + 48LL),
                            KernelBaseGlobalData,
                            v5);
    if ( !Heap )
    {
      v6 = -1073741670;
      goto LABEL_9;
    }
    v6 = NtQueryObject(Handle, ObjectNameInformation, Heap, v5, &ReturnLength);
    v5 = ReturnLength;
  }
  while ( v6 == -2147483643 );
  if ( v6 >= 0 )
  {
    ReturnLength = *(unsigned __int16 *)Heap;
    memmove_0(Heap, Heap[1], ReturnLength);
    result = 1LL;
    v8 = (unsigned __int64)ReturnLength >> 1;
    *a2 = Heap;
    *((_WORD *)Heap + v8) = 0;
    return result;
  }
LABEL_9:
  BaseSetLastNTError((unsigned int)v6);
  if ( Heap )
    RtlFreeHeap(*(PVOID *)(*(_QWORD *)&KeGetPcr()->MajorVersion + 48LL), 0, Heap);
  return 0LL;
}

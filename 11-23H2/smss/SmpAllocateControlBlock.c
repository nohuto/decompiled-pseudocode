/*
 * XREFs of SmpAllocateControlBlock @ 0x140004110
 * Callers:
 *     SmpStartCsr @ 0x140003C50 (SmpStartCsr.c)
 * Callees:
 *     SmpInitializeControlBlock @ 0x140005F04 (SmpInitializeControlBlock.c)
 */

PVOID SmpAllocateControlBlock()
{
  PVOID v0; // rdi
  PVOID Heap; // rbx
  NTSTATUS v2; // ecx
  __int64 v3; // rax
  void *v4; // rcx
  struct _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+40h] [rbp-30h] BYREF
  void *SectionHandle; // [rsp+80h] [rbp+10h] BYREF
  union _LARGE_INTEGER MaximumSize; // [rsp+88h] [rbp+18h] BYREF

  v0 = 0LL;
  SectionHandle = 0LL;
  Heap = RtlAllocateHeap(*(PVOID *)(*(_QWORD *)&KeGetPcr()->MajorVersion + 48LL), SmBaseTag + 0x80000, 0x80uLL);
  if ( !Heap )
    goto LABEL_6;
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.ObjectName = 0LL;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  ObjectAttributes.Length = 48;
  ObjectAttributes.Attributes = 2;
  MaximumSize.QuadPart = 24LL;
  v2 = NtCreateSection(&SectionHandle, 6u, &ObjectAttributes, &MaximumSize, 4u, 0x8400000u, 0LL);
  if ( v2 < 0 )
  {
    v3 = 2LL * (_InterlockedIncrement(SmpGlobalLog) % 64);
    *(_QWORD *)&SmpGlobalLog[2 * v3 + 4] = 0LL;
    SectionHandle = 0LL;
    SmpGlobalLog[2 * v3 + 2] = 211;
    SmpGlobalLog[2 * v3 + 3] = v2;
LABEL_10:
    RtlFreeHeap(*(PVOID *)(*(_QWORD *)&KeGetPcr()->MajorVersion + 48LL), 0, Heap);
    return v0;
  }
  if ( (unsigned int)SmpInitializeControlBlock(Heap, SectionHandle) )
  {
    v0 = Heap;
    Heap = 0LL;
    v4 = 0LL;
    SectionHandle = 0LL;
  }
  else
  {
LABEL_6:
    v4 = SectionHandle;
  }
  if ( v4 )
    NtClose(v4);
  if ( Heap )
    goto LABEL_10;
  return v0;
}

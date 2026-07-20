/*
 * XREFs of BasepInitializeFindFileHandle @ 0x1400142B4
 * Callers:
 *     InternalFindFirstFileExW @ 0x140014490 (InternalFindFirstFileExW.c)
 * Callees:
 *     <none>
 */

struct _RTL_CRITICAL_SECTION *__fastcall BasepInitializeFindFileHandle(struct _RTL_CRITICAL_SECTION_DEBUG *a1)
{
  struct _RTL_CRITICAL_SECTION *Heap; // rax
  struct _RTL_CRITICAL_SECTION *v3; // rbx

  Heap = (struct _RTL_CRITICAL_SECTION *)RtlAllocateHeap(
                                           *(PVOID *)(*(_QWORD *)&KeGetPcr()->MajorVersion + 48LL),
                                           KernelBaseGlobalData + 786432,
                                           0x50uLL);
  v3 = Heap;
  if ( Heap )
  {
    *(_QWORD *)&Heap->LockCount = 0LL;
    Heap->OwningThread = 0LL;
    LODWORD(Heap->LockSemaphore) = 0;
    HIDWORD(Heap->LockSemaphore) = 0;
    LODWORD(Heap->SpinCount) = 0;
    HIDWORD(Heap->SpinCount) = 0;
    Heap->DebugInfo = a1;
    if ( RtlInitializeCriticalSection(Heap + 1) < 0 )
    {
      RtlFreeHeap(*(PVOID *)(*(_QWORD *)&KeGetPcr()->MajorVersion + 48LL), 0, v3);
      return 0LL;
    }
  }
  return v3;
}

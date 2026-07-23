/*
 * XREFs of RtlIdnToUnicode @ 0x18000E5C0
 * Callers:
 *     RtlCanonicalizeDomainName @ 0x18000D5A0 (RtlCanonicalizeDomainName.c)
 * Callees:
 *     RtlpIdnToUnicodeWorker @ 0x18000E670 (RtlpIdnToUnicodeWorker.c)
 *     RtlFreeHeap @ 0x18003B190 (RtlFreeHeap.c)
 *     RtlAllocateHeap @ 0x18003CCE0 (RtlAllocateHeap.c)
 */

NTSTATUS __cdecl RtlIdnToUnicode(
        ULONG Flags,
        PCWSTR SourceString,
        LONG SourceStringLength,
        PWSTR DestinationString,
        PLONG DestinationStringLength)
{
  PVOID Heap; // rax
  void *v10; // rdi
  NTSTATUS v11; // ebx

  Heap = RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 8u, 0x3FEuLL);
  v10 = Heap;
  if ( !Heap )
    return -1073741801;
  v11 = RtlpIdnToUnicodeWorker(
          Flags,
          SourceString,
          (unsigned int)SourceStringLength,
          DestinationString,
          DestinationStringLength,
          Heap);
  RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v10);
  return v11;
}

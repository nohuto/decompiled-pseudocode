/*
 * XREFs of RtlInitializeExceptionLog @ 0x18010D638
 * Callers:
 *     LdrpInitializeProcess @ 0x1800D4658 (LdrpInitializeProcess.c)
 * Callees:
 *     RtlAllocateHeap @ 0x18003CCE0 (RtlAllocateHeap.c)
 *     memset$thunk$772440563353939046 @ 0x180130010 (memset$thunk$772440563353939046.c)
 */

PVOID RtlInitializeExceptionLog()
{
  PVOID result; // rax

  result = RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 0, 0x11620uLL);
  RtlpExceptionLog2 = (__int64)result;
  if ( result )
  {
    result = memset_thunk_772440563353939046(result, 0, 0x11620uLL);
    RtlpExceptionLogSize = 50;
  }
  return result;
}

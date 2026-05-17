/*
 * XREFs of RtlpAllocateAtomTableEntry @ 0x180062E64
 * Callers:
 *     RtlAddAtomToAtomTableEx @ 0x18006267C (RtlAddAtomToAtomTableEx.c)
 * Callees:
 *     RtlAllocateHeap @ 0x180028B70 (RtlAllocateHeap.c)
 */

__int64 __fastcall RtlpAllocateAtomTableEntry(unsigned int a1, _QWORD *a2)
{
  __int64 result; // rax

  result = RtlAllocateHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, a1 + 20LL);
  if ( !result )
    return 0LL;
  *(_QWORD *)result = 0LL;
  *(_WORD *)(result + 12) = 1;
  *(_WORD *)(result + 14) = 0;
  *a2 = result + 12;
  return result;
}

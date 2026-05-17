/*
 * XREFs of RtlpAllocateAtomTableEntry @ 0x180003D0C
 * Callers:
 *     RtlAddAtomToAtomTableEx @ 0x18000375C (RtlAddAtomToAtomTableEx.c)
 * Callees:
 *     RtlAllocateHeap @ 0x18003CB80 (RtlAllocateHeap.c)
 */

__int64 __fastcall RtlpAllocateAtomTableEntry(unsigned int a1, _QWORD *a2)
{
  __int64 result; // rax

  result = RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 0LL, a1 + 20LL);
  if ( !result )
    return 0LL;
  *(_QWORD *)result = 0LL;
  *(_WORD *)(result + 12) = 1;
  *(_WORD *)(result + 14) = 0;
  *a2 = result + 12;
  return result;
}

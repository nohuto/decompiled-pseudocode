/*
 * XREFs of RtlpHpTagReAllocateHeap @ 0x180045C54
 * Callers:
 *     RtlReAllocateHeap @ 0x1800421C0 (RtlReAllocateHeap.c)
 *     RtlpHpReAllocWithExceptionProtection @ 0x180043778 (RtlpHpReAllocWithExceptionProtection.c)
 * Callees:
 *     RtlpReAllocateHeapInternal @ 0x180042250 (RtlpReAllocateHeapInternal.c)
 *     RtlpHpTagContextUpdate @ 0x180045CBC (RtlpHpTagContextUpdate.c)
 */

_QWORD *__fastcall RtlpHpTagReAllocateHeap(unsigned __int16 *a1, _QWORD *a2, unsigned __int64 a3, int a4)
{
  __int64 v5; // rcx
  _QWORD *v6; // rdi
  unsigned __int16 v8; // [rsp+30h] [rbp-18h] BYREF
  unsigned __int64 v9; // [rsp+38h] [rbp-10h] BYREF

  v6 = RtlpReAllocateHeapInternal(a1, a4, a2, a3, &v9, &v8);
  if ( v6 && v8 && a3 != v9 )
    RtlpHpTagContextUpdate(v5, v8, v9, a3);
  return v6;
}

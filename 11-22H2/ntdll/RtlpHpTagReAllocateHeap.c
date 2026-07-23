/*
 * XREFs of RtlpHpTagReAllocateHeap @ 0x180045DB4
 * Callers:
 *     RtlReAllocateHeap @ 0x180042320 (RtlReAllocateHeap.c)
 *     RtlpHpReAllocWithExceptionProtection @ 0x1800438D8 (RtlpHpReAllocWithExceptionProtection.c)
 * Callees:
 *     RtlpReAllocateHeapInternal @ 0x1800423B0 (RtlpReAllocateHeapInternal.c)
 *     RtlpHpTagContextUpdate @ 0x180045E1C (RtlpHpTagContextUpdate.c)
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

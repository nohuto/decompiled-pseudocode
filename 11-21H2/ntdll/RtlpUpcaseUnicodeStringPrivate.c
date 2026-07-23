/*
 * XREFs of RtlpUpcaseUnicodeStringPrivate @ 0x180108344
 * Callers:
 *     RtlIsNameInExpression @ 0x180107C40 (RtlIsNameInExpression.c)
 *     RtlIsNameInUnUpcasedExpression @ 0x180107CF0 (RtlIsNameInUnUpcasedExpression.c)
 * Callees:
 *     RtlFreeHeap @ 0x180027690 (RtlFreeHeap.c)
 *     RtlAllocateHeap @ 0x180028B70 (RtlAllocateHeap.c)
 *     NLS_UPCASE @ 0x180041758 (NLS_UPCASE.c)
 */

__int64 __fastcall RtlpUpcaseUnicodeStringPrivate(__int64 a1, unsigned __int16 *a2)
{
  __int64 v4; // rsi
  unsigned int v5; // eax
  PVOID Heap; // rax
  unsigned int v7; // r10d
  unsigned int v9; // r11d
  unsigned __int16 v10; // ax
  __int64 v11; // r9
  int v12; // r10d

  v4 = qword_1801776F8;
  v5 = *a2;
  *(_WORD *)(a1 + 2) = v5;
  Heap = RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 0, v5);
  *(_QWORD *)(a1 + 8) = Heap;
  v7 = 0;
  if ( !Heap )
    return 3221225495LL;
  v9 = *a2 >> 1;
  while ( v7 < v9 )
  {
    v10 = NLS_UPCASE(v4, *(_WORD *)(*((_QWORD *)a2 + 1) + 2LL * v7));
    *(_WORD *)(*(_QWORD *)(a1 + 8) + 2 * v11) = v10;
    v7 = v12 + 1;
  }
  *(_WORD *)a1 = *a2;
  return 0LL;
}

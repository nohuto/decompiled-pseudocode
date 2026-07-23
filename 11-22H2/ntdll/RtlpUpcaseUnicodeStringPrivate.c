/*
 * XREFs of RtlpUpcaseUnicodeStringPrivate @ 0x1801080D0
 * Callers:
 *     RtlIsNameInExpression @ 0x1801079B0 (RtlIsNameInExpression.c)
 *     RtlIsNameInUnUpcasedExpression @ 0x180107A60 (RtlIsNameInUnUpcasedExpression.c)
 * Callees:
 *     NLS_UPCASE @ 0x1800156E8 (NLS_UPCASE.c)
 *     RtlFreeHeap @ 0x18003B190 (RtlFreeHeap.c)
 *     RtlAllocateHeap @ 0x18003CCE0 (RtlAllocateHeap.c)
 */

__int64 __fastcall RtlpUpcaseUnicodeStringPrivate(__int64 a1, unsigned __int16 *a2)
{
  __int64 v4; // r14
  unsigned int v5; // eax
  PVOID Heap; // rax
  unsigned int v7; // r11d
  unsigned int v9; // ebx
  __int16 v10; // ax
  __int64 v11; // r10
  int v12; // r11d

  v4 = qword_1801817B8;
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
    v10 = NLS_UPCASE(v4, *(unsigned __int16 *)(*((_QWORD *)a2 + 1) + 2LL * v7));
    *(_WORD *)(*(_QWORD *)(a1 + 8) + 2 * v11) = v10;
    v7 = v12 + 1;
  }
  *(_WORD *)a1 = *a2;
  return 0LL;
}

/*
 * XREFs of sub_1405C5DC8 @ 0x1405C5DC8
 * Callers:
 *     sub_1405C5EC8 @ 0x1405C5EC8 (sub_1405C5EC8.c)
 * Callees:
 *     ExQueueWorkItem @ 0x140345FC0 (ExQueueWorkItem.c)
 *     ExpInterlockedPopEntrySList @ 0x140429880 (ExpInterlockedPopEntrySList.c)
 */

void __fastcall sub_1405C5DC8(__int64 a1, char a2, __int16 a3, int a4, _SLIST_ENTRY *a5, int a6)
{
  PSLIST_ENTRY v10; // rax
  _QWORD *p_Next; // r10
  signed __int64 v12; // rcx
  signed __int64 i; // rax

  v10 = ExpInterlockedPopEntrySList(&stru_140D01990);
  if ( v10 )
  {
    p_Next = &v10[1].Next;
    HIDWORD(v10[2].Next) = a6;
    *((_QWORD *)&v10[1].Next + 1) = a1;
    LOBYTE(v10[2].Next) = a2;
    WORD1(v10[2].Next) = a3;
    *((_DWORD *)&v10[2].Next + 2) = a4;
    v10[3] = *a5;
    v10[4] = a5[1];
    v10[5] = a5[2];
    v10[6] = a5[3];
    v10[7] = a5[4];
    v10[8] = a5[5];
    v10[9] = a5[6];
    v10[10] = a5[7];
    v12 = qword_140C25320;
    v10[1].Next = (_SLIST_ENTRY *)qword_140C25320;
    for ( i = _InterlockedCompareExchange64(&qword_140C25320, (signed __int64)&v10[1], v12);
          i != v12;
          i = _InterlockedCompareExchange64(&qword_140C25320, (signed __int64)p_Next, i) )
    {
      v12 = i;
      *p_Next = i;
    }
    if ( !v12 )
      ExQueueWorkItem(&stru_140C25300, CriticalWorkQueue);
  }
}

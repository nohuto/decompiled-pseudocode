/*
 * XREFs of EtwpAllocateRegistration @ 0x1800164B0
 * Callers:
 *     EtwNotificationRegister @ 0x180016730 (EtwNotificationRegister.c)
 * Callees:
 *     RtlAllocateHeap @ 0x180028B70 (RtlAllocateHeap.c)
 *     RtlpInterlockedPopEntrySList @ 0x1800A7D40 (RtlpInterlockedPopEntrySList.c)
 */

PSLIST_ENTRY __fastcall EtwpAllocateRegistration(_SLIST_ENTRY *a1, _SLIST_ENTRY *a2, __int64 a3, __int16 a4)
{
  signed __int32 v4; // r11d
  unsigned __int32 v9; // eax
  PSLIST_ENTRY v10; // rdx
  _SLIST_ENTRY *Heap; // rax
  _SLIST_ENTRY v12; // xmm0
  __int16 v13; // cx
  signed __int16 v14; // ax

  v4 = EtwpRegistrationCount;
  if ( (unsigned int)EtwpRegistrationCount < 0x800 )
  {
    while ( 1 )
    {
      v9 = _InterlockedCompareExchange(&EtwpRegistrationCount, v4 + 1, v4);
      if ( v4 == v9 )
        break;
      v4 = v9;
      if ( v9 >= 0x800 )
        return 0LL;
    }
    v10 = RtlpInterlockedPopEntrySList(&EtwpFreeRegistrationList);
    if ( !v10 )
    {
      Heap = (_SLIST_ENTRY *)RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 8u, 0x100uLL);
      v10 = Heap;
      if ( !Heap )
      {
        _InterlockedDecrement(&EtwpRegistrationCount);
        return v10;
      }
      Heap[4].Next = 0LL;
      *((_QWORD *)&Heap[4].Next + 1) = 0LL;
    }
    v12 = *a1;
    v13 = WORD1(v10[6].Next) & 0x8000;
    v10[3].Next = a2;
    *((_QWORD *)&v10[3].Next + 1) = a3;
    WORD1(v10[6].Next) = a4 & 0x3FFF | v13;
    v10[2] = v12;
    do
    {
      v14 = _InterlockedExchangeAdd16(&EtwpRegistrationSequence, 1u);
      LOWORD(v10[6].Next) = v14 + 1;
    }
    while ( v14 == -1 );
    return v10;
  }
  return 0LL;
}

/*
 * XREFs of EtwpAllocateRegistration @ 0x1800327CC
 * Callers:
 *     EtwNotificationRegister @ 0x180032680 (EtwNotificationRegister.c)
 * Callees:
 *     RtlAllocateHeap @ 0x18003CB80 (RtlAllocateHeap.c)
 *     RtlpInterlockedPopEntrySList @ 0x1800A4C40 (RtlpInterlockedPopEntrySList.c)
 */

PSLIST_ENTRY __fastcall EtwpAllocateRegistration(_SLIST_ENTRY *a1, _SLIST_ENTRY *a2, __int64 a3, __int16 a4)
{
  signed __int32 v4; // r11d
  unsigned __int32 v9; // eax
  PSLIST_ENTRY v10; // rcx
  _SLIST_ENTRY *Heap; // rax
  _SLIST_ENTRY v12; // xmm0
  __int16 v13; // bx
  __int16 v14; // bx
  signed __int16 v15; // ax

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
    v13 = (HIWORD(v10[5].Next) ^ a4) & 0x3FFF;
    v10[3].Next = a2;
    v14 = (HIWORD(v10[5].Next) ^ v13) & 0xBFFF;
    *((_QWORD *)&v10[3].Next + 1) = a3;
    HIWORD(v10[5].Next) = v14;
    v10[2] = v12;
    do
    {
      v15 = _InterlockedExchangeAdd16(&EtwpRegistrationSequence, 1u);
      WORD2(v10[5].Next) = v15 + 1;
    }
    while ( v15 == -1 );
    return v10;
  }
  return 0LL;
}

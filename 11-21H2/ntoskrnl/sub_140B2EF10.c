/*
 * XREFs of sub_140B2EF10 @ 0x140B2EF10
 * Callers:
 *     sub_140B0046C @ 0x140B0046C (sub_140B0046C.c)
 * Callees:
 *     sub_140261ADC @ 0x140261ADC (sub_140261ADC.c)
 *     ExAllocatePool2 @ 0x140A6E430 (ExAllocatePool2.c)
 */

__int64 sub_140B2EF10()
{
  unsigned int v0; // ebx
  __int64 Pool2; // rax
  __int64 v2; // rcx

  v0 = 0;
  Pool2 = ExAllocatePool2(64LL, 0x88uLL, 0x4A706E50u);
  qword_140D3B048 = Pool2;
  if ( Pool2 )
  {
    sub_140261ADC(Pool2 + 8, 0, 1, 0);
    v2 = qword_140D3B048;
    *(_DWORD *)(qword_140D3B048 + 64) = 1;
    *(_QWORD *)(v2 + 72) = 0LL;
    *(_DWORD *)(v2 + 80) = 0;
    *(_QWORD *)(v2 + 104) = v2 + 96;
    *(_QWORD *)(v2 + 96) = v2 + 96;
    *(_WORD *)(v2 + 88) = 1;
    *(_BYTE *)(v2 + 90) = 6;
    *(_DWORD *)(v2 + 92) = 0;
    *(_QWORD *)(v2 + 128) = v2 + 120;
    *(_QWORD *)(v2 + 120) = v2 + 120;
    *(_DWORD *)v2 = 259;
    stru_140C44900.Event.Header.WaitListHead.Blink = &stru_140C44900.Event.Header.WaitListHead;
    stru_140C44900.Event.Header.WaitListHead.Flink = &stru_140C44900.Event.Header.WaitListHead;
    stru_140C448E0.Header.WaitListHead.Blink = &stru_140C448E0.Header.WaitListHead;
    stru_140C448E0.Header.WaitListHead.Flink = &stru_140C448E0.Header.WaitListHead;
    stru_140C44900.Count = 1;
    stru_140C44900.Owner = 0LL;
    stru_140C44900.Contention = 0;
    LOWORD(stru_140C44900.Event.Header.Lock) = 1;
    stru_140C44900.Event.Header.Size = 6;
    stru_140C44900.Event.Header.SignalState = 0;
    LOWORD(stru_140C448E0.Header.Lock) = 0;
    stru_140C448E0.Header.Size = 6;
    stru_140C448E0.Header.SignalState = 1;
  }
  else
  {
    return (unsigned int)-1073741670;
  }
  return v0;
}

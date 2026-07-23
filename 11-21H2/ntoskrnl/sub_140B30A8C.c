/*
 * XREFs of sub_140B30A8C @ 0x140B30A8C
 * Callers:
 *     sub_140B0046C @ 0x140B0046C (sub_140B0046C.c)
 * Callees:
 *     ExAllocatePool2 @ 0x140A6E430 (ExAllocatePool2.c)
 */

__int64 sub_140B30A8C()
{
  __int64 result; // rax

  dword_140C468D8 = 16;
  qword_140C468E0 = (PVOID)ExAllocatePool2(256LL, 0x100uLL, 0x75737050u);
  if ( qword_140C468E0 )
  {
    dword_140C468DC = 0;
    stru_140C468A0.Event.Header.WaitListHead.Blink = &stru_140C468A0.Event.Header.WaitListHead;
    stru_140C468A0.Event.Header.WaitListHead.Flink = &stru_140C468A0.Event.Header.WaitListHead;
    result = 0LL;
    stru_140C468A0.Count = 1;
    stru_140C468A0.Owner = 0LL;
    stru_140C468A0.Contention = 0;
    LOWORD(stru_140C468A0.Event.Header.Lock) = 1;
    stru_140C468A0.Event.Header.Size = 6;
    stru_140C468A0.Event.Header.SignalState = 0;
  }
  else
  {
    dword_140C468D8 = 0;
    return 3221225626LL;
  }
  return result;
}

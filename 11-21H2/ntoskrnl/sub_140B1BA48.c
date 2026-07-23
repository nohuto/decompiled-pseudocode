/*
 * XREFs of sub_140B1BA48 @ 0x140B1BA48
 * Callers:
 *     sub_140B0046C @ 0x140B0046C (sub_140B0046C.c)
 * Callees:
 *     ExSubscribeWnfStateChange @ 0x1406D1FA0 (ExSubscribeWnfStateChange.c)
 */

__int64 __fastcall sub_140B1BA48(int a1)
{
  unsigned int v1; // edx
  __int64 v2; // r8
  __int64 v3; // rcx
  _QWORD *v4; // rax

  v1 = 0;
  if ( !a1 )
  {
    stru_140C46400.Owner = 0LL;
    stru_140C46400.Count = 1;
    stru_140C46400.Event.Header.WaitListHead.Blink = &stru_140C46400.Event.Header.WaitListHead;
    v2 = 14LL;
    stru_140C46400.Event.Header.WaitListHead.Flink = &stru_140C46400.Event.Header.WaitListHead;
    stru_140C46400.Contention = 0;
    stru_140C46740.Event.Header.WaitListHead.Blink = &stru_140C46740.Event.Header.WaitListHead;
    v3 = 0LL;
    stru_140C46740.Event.Header.WaitListHead.Flink = &stru_140C46740.Event.Header.WaitListHead;
    stru_140C466E0.Event.Header.WaitListHead.Blink = &stru_140C466E0.Event.Header.WaitListHead;
    stru_140C466E0.Event.Header.WaitListHead.Flink = &stru_140C466E0.Event.Header.WaitListHead;
    LOWORD(stru_140C46400.Event.Header.Lock) = 1;
    stru_140C46400.Event.Header.Size = 6;
    stru_140C46400.Event.Header.SignalState = 0;
    stru_140C46740.Count = 1;
    stru_140C46740.Owner = 0LL;
    stru_140C46740.Contention = 0;
    LOWORD(stru_140C46740.Event.Header.Lock) = 1;
    stru_140C46740.Event.Header.Size = 6;
    stru_140C46740.Event.Header.SignalState = 0;
    stru_140C466E0.Count = 1;
    stru_140C466E0.Owner = 0LL;
    stru_140C466E0.Contention = 0;
    LOWORD(stru_140C466E0.Event.Header.Lock) = 1;
    stru_140C466E0.Event.Header.Size = 6;
    stru_140C466E0.Event.Header.SignalState = 0;
    do
    {
      *(_QWORD *)((char *)&unk_140C46328 + v3) = (char *)&unk_140C46320 + v3;
      *(_QWORD *)((char *)&unk_140C46320 + v3) = (char *)&unk_140C46320 + v3;
      *(_QWORD *)((char *)&unk_140C46528 + v3) = (char *)&unk_140C46520 + v3;
      *(_QWORD *)((char *)&unk_140C46520 + v3) = (char *)&unk_140C46520 + v3;
      *(_QWORD *)((char *)&unk_140C46448 + v3) = (char *)&unk_140C46440 + v3;
      *(_QWORD *)((char *)&unk_140C46440 + v3) = (char *)&unk_140C46440 + v3;
      v4 = (_QWORD *)((char *)&unk_140C46600 + v3);
      *(_QWORD *)((char *)&unk_140C46608 + v3) = (char *)&unk_140C46600 + v3;
      v3 += 16LL;
      *v4 = v4;
      --v2;
    }
    while ( v2 );
    qword_140C46728 = (__int64)&qword_140C46720;
    qword_140C46720 = &qword_140C46720;
    qword_140C46788 = (__int64)&qword_140C46780;
    qword_140C46780 = &qword_140C46780;
    return (unsigned int)ExSubscribeWnfStateChange(
                           (int)&unk_140D00AB8,
                           (int)&stru_140012858,
                           2,
                           0,
                           (__int64)sub_1407F4E40,
                           0LL);
  }
  return v1;
}

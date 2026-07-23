/*
 * XREFs of sub_1403D6AC8 @ 0x1403D6AC8
 * Callers:
 *     sub_140B026CC @ 0x140B026CC (sub_140B026CC.c)
 * Callees:
 *     sub_1408534E0 @ 0x1408534E0 (sub_1408534E0.c)
 */

__int64 sub_1403D6AC8()
{
  __int64 result; // rax

  sub_1408534E0((unsigned int)&unk_140C204E0, (unsigned int)sub_1405D6DA0, 0, (unsigned int)sub_140A6BCF0, 0LL);
  LOWORD(stru_140C205C0.Header.Lock) = 0;
  stru_140C205C0.Header.WaitListHead.Blink = &stru_140C205C0.Header.WaitListHead;
  stru_140C205C0.Header.WaitListHead.Flink = &stru_140C205C0.Header.WaitListHead;
  result = 0LL;
  stru_140C205C0.Header.Size = 6;
  stru_140C205C0.Header.SignalState = 1;
  return result;
}

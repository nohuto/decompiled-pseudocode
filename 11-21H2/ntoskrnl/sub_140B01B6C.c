/*
 * XREFs of sub_140B01B6C @ 0x140B01B6C
 * Callers:
 *     sub_140B03360 @ 0x140B03360 (sub_140B03360.c)
 * Callees:
 *     memset @ 0x140435E00 (memset.c)
 *     RtlRunOnceInitialize @ 0x1407F3B30 (RtlRunOnceInitialize.c)
 *     sub_140829294 @ 0x140829294 (sub_140829294.c)
 */

__int64 sub_140B01B6C()
{
  RtlRunOnceInitialize(&stru_140C1C3B8);
  memset(&unk_140C1C3C0, 0, 0x448uLL);
  LOWORD(stru_140C1C3E8.Header.Lock) = 0;
  qword_140C1C3D0 = (__int64)sub_14081BF30;
  stru_140C1C3E8.Header.WaitListHead.Blink = &stru_140C1C3E8.Header.WaitListHead;
  stru_140C1C3E8.Header.WaitListHead.Flink = &stru_140C1C3E8.Header.WaitListHead;
  stru_140C1C3E8.Header.Size = 6;
  stru_140C1C3E8.Header.SignalState = 1;
  return sub_140829294();
}

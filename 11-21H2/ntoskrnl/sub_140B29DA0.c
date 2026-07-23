/*
 * XREFs of sub_140B29DA0 @ 0x140B29DA0
 * Callers:
 *     sub_140AF47DC @ 0x140AF47DC (sub_140AF47DC.c)
 * Callees:
 *     sub_14026DFC0 @ 0x14026DFC0 (sub_14026DFC0.c)
 *     sub_140B29E10 @ 0x140B29E10 (sub_140B29E10.c)
 *     sub_140B29EB4 @ 0x140B29EB4 (sub_140B29EB4.c)
 */

char *sub_140B29DA0()
{
  char *result; // rax

  stru_140C51C10.Header.Size = 6;
  qword_140C51C28 = 0LL;
  LOWORD(stru_140C51C10.Header.Lock) = 0;
  stru_140C51C10.Header.SignalState = 0;
  stru_140C51C10.Header.WaitListHead.Blink = &stru_140C51C10.Header.WaitListHead;
  stru_140C51C10.Header.WaitListHead.Flink = &stru_140C51C10.Header.WaitListHead;
  sub_140B29EB4();
  qword_140C53F28 = sub_140B29E10();
  result = sub_14026DFC0(1);
  result[184] = result[184] & 0xF8 | 4;
  return result;
}

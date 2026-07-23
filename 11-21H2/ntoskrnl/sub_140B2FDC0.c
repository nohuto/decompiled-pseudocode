/*
 * XREFs of sub_140B2FDC0 @ 0x140B2FDC0
 * Callers:
 *     sub_140B026CC @ 0x140B026CC (sub_140B026CC.c)
 * Callees:
 *     sub_140A47CF8 @ 0x140A47CF8 (sub_140A47CF8.c)
 *     sub_140A48330 @ 0x140A48330 (sub_140A48330.c)
 */

__int64 sub_140B2FDC0()
{
  qword_140C1F5A8 = (__int64)&qword_140C1F5A0;
  qword_140C1F5A0 = (__int64)&qword_140C1F5A0;
  qword_140C1F590 = 0LL;
  sub_140A48330();
  *(_QWORD *)&stru_140C22920.Header.Lock = 8LL;
  stru_140C22920.Header.WaitListHead.Blink = &stru_140C22920.Header.WaitListHead;
  stru_140C22920.Header.WaitListHead.Flink = &stru_140C22920.Header.WaitListHead;
  qword_140C228F8 = (__int64)sub_1405D01F0;
  qword_140C22378 = 0LL;
  qword_140C228D8 = 0LL;
  stru_140C22920.DueTime.QuadPart = 0LL;
  stru_140C22920.Period = 0;
  LOWORD(stru_140C22920.Processor) = 0;
  dword_140C228E0 = 275;
  qword_140C22900 = 0LL;
  qword_140C22918 = 0LL;
  qword_140C228F0 = 0LL;
  byte_140C22960 = 1;
  return sub_140A47CF8();
}

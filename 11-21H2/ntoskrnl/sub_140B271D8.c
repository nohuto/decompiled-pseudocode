/*
 * XREFs of sub_140B271D8 @ 0x140B271D8
 * Callers:
 *     sub_140B0348C @ 0x140B0348C (sub_140B0348C.c)
 * Callees:
 *     sub_140829740 @ 0x140829740 (sub_140829740.c)
 *     sub_140858B18 @ 0x140858B18 (sub_140858B18.c)
 *     sub_140858B54 @ 0x140858B54 (sub_140858B54.c)
 *     sub_140B272B0 @ 0x140B272B0 (sub_140B272B0.c)
 */

void sub_140B271D8()
{
  qword_140C240C8 = 0LL;
  stru_140C24058.Header.SignalState = 0;
  dword_140C24108 = 0;
  qword_140C24260 = -1LL;
  unk_140C240D0 = 0;
  dword_140C240D4 = 0;
  stru_140C24058.Header.WaitListHead.Blink = &stru_140C24058.Header.WaitListHead;
  stru_140C24058.Header.WaitListHead.Flink = &stru_140C24058.Header.WaitListHead;
  LOWORD(stru_140C24058.Header.Lock) = 1;
  stru_140C24058.Header.Size = 6;
  dword_140C24078 = -1946157056;
  byte_140C240D8 = 0;
  sub_140829740((__int64)&unk_140C240E0, (__int64)sub_1405C9D00, (__int64)&stru_140C24040);
  sub_140858B18((__int64)&unk_140C24110, 2, dword_140C0C7DC);
  sub_140858B18((__int64)&unk_140C241B0, 3, dword_140C0C7E0);
  qword_140C24268 = 0LL;
  dword_140C24270 = 0;
  sub_140B272B0(0LL);
  sub_140858B54();
}

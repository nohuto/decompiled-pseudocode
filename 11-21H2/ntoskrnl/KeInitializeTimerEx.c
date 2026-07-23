/*
 * XREFs of KeInitializeTimerEx @ 0x1402F4820
 * Callers:
 *     sub_1406B4B90 @ 0x1406B4B90 (sub_1406B4B90.c)
 *     sub_1406EFD44 @ 0x1406EFD44 (sub_1406EFD44.c)
 *     sub_1407D7B88 @ 0x1407D7B88 (sub_1407D7B88.c)
 *     sub_1407DA91C @ 0x1407DA91C (sub_1407DA91C.c)
 *     PoUserShutdownInitiated @ 0x1407EC000 (PoUserShutdownInitiated.c)
 *     sub_14081D9C8 @ 0x14081D9C8 (sub_14081D9C8.c)
 *     sub_1408268AC @ 0x1408268AC (sub_1408268AC.c)
 *     sub_140832270 @ 0x140832270 (sub_140832270.c)
 *     sub_1408334E4 @ 0x1408334E4 (sub_1408334E4.c)
 *     sub_14083697C @ 0x14083697C (sub_14083697C.c)
 *     sub_140852250 @ 0x140852250 (sub_140852250.c)
 *     sub_1408633F0 @ 0x1408633F0 (sub_1408633F0.c)
 *     sub_14093FB40 @ 0x14093FB40 (sub_14093FB40.c)
 *     sub_1409A2F78 @ 0x1409A2F78 (sub_1409A2F78.c)
 *     sub_140A48020 @ 0x140A48020 (sub_140A48020.c)
 *     sub_140A48D9C @ 0x140A48D9C (sub_140A48D9C.c)
 *     sub_140A50C40 @ 0x140A50C40 (sub_140A50C40.c)
 *     sub_140A54598 @ 0x140A54598 (sub_140A54598.c)
 *     sub_140A5943C @ 0x140A5943C (sub_140A5943C.c)
 *     sub_140A5B0D0 @ 0x140A5B0D0 (sub_140A5B0D0.c)
 *     sub_140A70470 @ 0x140A70470 (sub_140A70470.c)
 *     sub_140A91368 @ 0x140A91368 (sub_140A91368.c)
 *     sub_140A95A04 @ 0x140A95A04 (sub_140A95A04.c)
 *     sub_140A9D00C @ 0x140A9D00C (sub_140A9D00C.c)
 *     sub_140AAB5FC @ 0x140AAB5FC (sub_140AAB5FC.c)
 *     sub_140AAC1BC @ 0x140AAC1BC (sub_140AAC1BC.c)
 *     sub_140AAD1C4 @ 0x140AAD1C4 (sub_140AAD1C4.c)
 *     sub_140AAED7C @ 0x140AAED7C (sub_140AAED7C.c)
 *     sub_140AFE7A0 @ 0x140AFE7A0 (sub_140AFE7A0.c)
 * Callees:
 *     <none>
 */

void __stdcall KeInitializeTimerEx(PKTIMER Timer, TIMER_TYPE Type)
{
  *(_QWORD *)&Timer->Header.Lock = 0LL;
  Timer->Header.Type = Type + 8;
  Timer->Header.WaitListHead.Blink = &Timer->Header.WaitListHead;
  Timer->Header.WaitListHead.Flink = &Timer->Header.WaitListHead;
  Timer->DueTime.QuadPart = 0LL;
  Timer->Period = 0;
  LOWORD(Timer->Processor) = 0;
}
